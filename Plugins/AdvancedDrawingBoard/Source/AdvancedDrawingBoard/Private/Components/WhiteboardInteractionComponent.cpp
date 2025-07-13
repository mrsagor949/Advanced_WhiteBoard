// Copyright Epic Games, Inc. All Rights Reserved.

#include "Components/WhiteboardInteractionComponent.h"
#include "Actor/WhiteboardActor.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

UWhiteboardInteractionComponent::UWhiteboardInteractionComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    bHasValidLastPosition = false;
    DrawingUpdateInterval = 0.016f; // ~60 FPS
    LastDrawingUpdateTime = 0.0f;
}

void UWhiteboardInteractionComponent::BeginPlay()
{
    Super::BeginPlay();
    OwnerPawn = Cast<APawn>(GetOwner());
    
    if (bAutoDetectWhiteboard)
    {
        FindNearestWhiteboard();
    }
}

void UWhiteboardInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    
    // Auto-detect whiteboard if needed
    if (bAutoDetectWhiteboard && !TargetWhiteboard)
    {
        FindNearestWhiteboard();
    }
    
    // Handle continuous drawing
    if (bIsDrawing && bContinuousDrawing && TargetWhiteboard)
    {
        float CurrentTime = GetWorld()->GetTimeSeconds();
        if (CurrentTime - LastDrawingUpdateTime >= DrawingUpdateInterval)
        {
            ContinueDrawing();
            LastDrawingUpdateTime = CurrentTime;
        }
    }
}

void UWhiteboardInteractionComponent::TryToInteract()
{
    UE_LOG(LogTemp, Warning, TEXT("TryToInteract called - Role: %d"), OwnerPawn->GetLocalRole());
    
    if (!TargetWhiteboard)
    {
        UE_LOG(LogTemp, Error, TEXT("No target whiteboard found!"));
        FindNearestWhiteboard();
        return;
    }
    
    if (!OwnerPawn)
    {
        UE_LOG(LogTemp, Error, TEXT("No owner pawn!"));
        return;
    }
    
    // Check if player is already interacting
    if (TargetWhiteboard->IsPlayerInteracting(OwnerPawn))
    {
        UE_LOG(LogTemp, Warning, TEXT("Player is already interacting with whiteboard"));
        return;
    }
    
    // Check if we can interact locally (distance and player limit)
    if (!TargetWhiteboard->CanInteractLocally(OwnerPawn))
    {
        UE_LOG(LogTemp, Warning, TEXT("Cannot interact locally - either too far, player limit reached, or other restriction"));
        return;
    }
    
    UE_LOG(LogTemp, Warning, TEXT("Attempting to start interaction with whiteboard (Current players: %d/%d)"), 
           TargetWhiteboard->GetInteractingPlayerCount(), TargetWhiteboard->MaxInteractingPlayers);
    TargetWhiteboard->StartInteraction(OwnerPawn);
}

void UWhiteboardInteractionComponent::StartDrawingInput()
{
    UE_LOG(LogTemp, Warning, TEXT("StartDrawingInput called"));
    
    if (!TargetWhiteboard)
    {
        UE_LOG(LogTemp, Error, TEXT("No target whiteboard!"));
        return;
    }
    
    if (!OwnerPawn)
    {
        UE_LOG(LogTemp, Error, TEXT("No owner pawn!"));
        return;
    }
    
    // Debug network state
    TargetWhiteboard->DebugNetworkState();
    
    // Check if we can draw using the multi-player method
    if (!TargetWhiteboard->CanClientDraw())
    {
        UE_LOG(LogTemp, Warning, TEXT("Cannot draw - player not in interacting list"));
        UE_LOG(LogTemp, Warning, TEXT("Debug - InteractingPlayers: %d, IsPlayerInteracting: %s"),
           TargetWhiteboard->GetInteractingPlayerCount(),
           TargetWhiteboard->IsPlayerInteracting(OwnerPawn) ? TEXT("True") : TEXT("False"));
        return;
    }
    
    FVector2D CanvasPosition;
    if (GetCurrentDrawingPosition(CanvasPosition))
    {
        UE_LOG(LogTemp, Warning, TEXT("Starting drawing at canvas position: %s"), *CanvasPosition.ToString());
        
        bIsDrawing = true;
        bHasValidLastPosition = true;
        LastDrawingPosition = CanvasPosition;
        LastDrawingUpdateTime = GetWorld()->GetTimeSeconds();
        
        // Use the client-specific drawing function
        TargetWhiteboard->ClientStartDrawing(CanvasPosition);
        
        // Enable continuous drawing if needed
        if (bContinuousDrawing)
        {
            // Continuous drawing will be handled in Tick
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Could not get drawing position"));
    }
}

void UWhiteboardInteractionComponent::ContinueDrawing()
{
    if (!bIsDrawing || !TargetWhiteboard)
    {
        return;
    }

    FVector2D CanvasPosition;
    if (GetCurrentDrawingPosition(CanvasPosition))
    {
        // Only continue drawing if the position has changed significantly
        if (!bHasValidLastPosition || FVector2D::Distance(LastDrawingPosition, CanvasPosition) > 2.0f)
        {
            TargetWhiteboard->ClientContinueDrawing(CanvasPosition);
            LastDrawingPosition = CanvasPosition;
            bHasValidLastPosition = true;
        }
    }
}

void UWhiteboardInteractionComponent::StopDrawingInput()
{
    UE_LOG(LogTemp, Warning, TEXT("StopDrawingInput called"));
    
    if (bIsDrawing && TargetWhiteboard)
    {
        bIsDrawing = false;
        bHasValidLastPosition = false;
        
        // Use the client-specific drawing function
        TargetWhiteboard->ClientEndDrawing();
    }
}

void UWhiteboardInteractionComponent::EndInteraction()
{
    if (TargetWhiteboard && TargetWhiteboard->IsPlayerInteracting(OwnerPawn))
    {
        // Stop any ongoing drawing
        if (bIsDrawing)
        {
            StopDrawingInput();
        }
        
        TargetWhiteboard->EndInteractionForPlayer(OwnerPawn);
    }
}

bool UWhiteboardInteractionComponent::IsInRangeOfWhiteboard()
{
    if (!TargetWhiteboard || !OwnerPawn)
    {
        return false;
    }

    float Distance = FVector::Distance(OwnerPawn->GetActorLocation(), TargetWhiteboard->GetActorLocation());
    bool bInRange = Distance <= InteractionDistance;
    
    UE_LOG(LogTemp, Log, TEXT("IsInRangeOfWhiteboard - Distance: %f, InRange: %s"), 
           Distance, bInRange ? TEXT("True") : TEXT("False"));
    
    return bInRange;
}

void UWhiteboardInteractionComponent::StartDrawing()
{
    if (!TargetWhiteboard || !IsInRangeOfWhiteboard())
    {
        return;
    }

    FVector2D CanvasPosition;
    if (GetCurrentDrawingPosition(CanvasPosition))
    {
        bIsDrawing = true;
        bHasValidLastPosition = true;
        LastDrawingPosition = CanvasPosition;
        
        TargetWhiteboard->StartDrawing(CanvasPosition);
    }
}

void UWhiteboardInteractionComponent::StopDrawing()
{
    if (!TargetWhiteboard || !bIsDrawing)
    {
        return;
    }

    bIsDrawing = false;
    bHasValidLastPosition = false;
    TargetWhiteboard->EndDrawing();
}

void UWhiteboardInteractionComponent::SetDrawingTool(EDrawingTool Tool)
{
    if (TargetWhiteboard)
    {
        TargetWhiteboard->SetCurrentTool(Tool);
    }
}

void UWhiteboardInteractionComponent::SetDrawingColor(FLinearColor Color)
{
    if (TargetWhiteboard)
    {
        TargetWhiteboard->SetCurrentColor(Color);
    }
}

void UWhiteboardInteractionComponent::SetBrushSize(float Size)
{
    if (TargetWhiteboard)
    {
        TargetWhiteboard->SetBrushSize(Size);
    }
}

void UWhiteboardInteractionComponent::AddText(const FString& Text)
{
    if (!TargetWhiteboard || !IsInRangeOfWhiteboard())
    {
        return;
    }

    FVector WorldPosition;
    FVector2D CanvasPosition;
    if (GetMouseWorldPosition(WorldPosition, CanvasPosition))
    {
        TargetWhiteboard->AddText(WorldPosition, Text);
    }
}

void UWhiteboardInteractionComponent::SetFillShapes(bool bFill)
{
}

void UWhiteboardInteractionComponent::SetShapeFillColor(FLinearColor FillColor)
{
}

void UWhiteboardInteractionComponent::SetTextSize(float Size)
{
}

void UWhiteboardInteractionComponent::AddTextAtPosition(const FVector2D& CanvasPosition, const FString& Text)
{
}

void UWhiteboardInteractionComponent::ClearWhiteboard()
{
    if (TargetWhiteboard && IsInRangeOfWhiteboard())
    {
        TargetWhiteboard->ClearWhiteboard();
    }
}

void UWhiteboardInteractionComponent::Undo()
{
    if (TargetWhiteboard && IsInRangeOfWhiteboard())
    {
        TargetWhiteboard->Undo();
    }
}

void UWhiteboardInteractionComponent::Redo()
{
    if (TargetWhiteboard && IsInRangeOfWhiteboard())
    {
        TargetWhiteboard->Redo();
    }
}

void UWhiteboardInteractionComponent::ExportToPNG(const FString& FilePath)
{
    if (TargetWhiteboard && IsInRangeOfWhiteboard())
    {
        TargetWhiteboard->ExportToPNG(FilePath);
    }
}

void UWhiteboardInteractionComponent::ExportToSVG(const FString& FilePath)
{
    if (TargetWhiteboard && IsInRangeOfWhiteboard())
    {
        TargetWhiteboard->ExportToSVG(FilePath);
    }
}

bool UWhiteboardInteractionComponent::GetCurrentDrawingPosition(FVector2D& OutCanvasPosition)
{
    FVector WorldPosition;
    return GetMouseWorldPosition(WorldPosition, OutCanvasPosition);
}

void UWhiteboardInteractionComponent::FindNearestWhiteboard()
{
    TArray<AActor*> FoundWhiteboards;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWhiteboardActor::StaticClass(), FoundWhiteboards);

    if (FoundWhiteboards.Num() == 0)
    {
        return;
    }
    
    if (!OwnerPawn)
    {
        return;
    }

    float ClosestDistance = MAX_FLT;
    AWhiteboardActor* ClosestWhiteboard = nullptr;

    for (AActor* Actor : FoundWhiteboards)
    {
        AWhiteboardActor* Whiteboard = Cast<AWhiteboardActor>(Actor);
        if (Whiteboard)
        {
            float Distance = FVector::Distance(OwnerPawn->GetActorLocation(), Whiteboard->GetActorLocation());
            if (Distance < ClosestDistance && Distance <= InteractionDistance)
            {
                ClosestDistance = Distance;
                ClosestWhiteboard = Whiteboard;
            }
        }
    }

    if (ClosestWhiteboard)
    {
        TargetWhiteboard = ClosestWhiteboard;
    }
}

FVector UWhiteboardInteractionComponent::GetDrawingPosition()
{
    if (!OwnerPawn)
    {
        return FVector::ZeroVector;
    }

    APlayerController* PlayerController = Cast<APlayerController>(OwnerPawn->GetController());
    if (!PlayerController)
    {
        return FVector::ZeroVector;
    }

    // Perform line trace to find drawing position
    FVector CameraLocation;
    FRotator CameraRotation;
    PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);

    FVector TraceStart = CameraLocation;
    FVector TraceEnd = CameraLocation + (CameraRotation.Vector() * 1000.0f);

    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(GetOwner());

    if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility, QueryParams))
    {
        if (HitResult.GetActor() == TargetWhiteboard)
        {
            return HitResult.ImpactPoint;
        }
    }

    return FVector::ZeroVector;
}

bool UWhiteboardInteractionComponent::GetMouseWorldPosition(FVector& OutWorldPosition, FVector2D& OutCanvasPosition)
{ 
    if (!TargetWhiteboard || !OwnerPawn) 
    {
        UE_LOG(LogTemp, Error, TEXT("GetMouseWorldPosition - Missing whiteboard or pawn"));
        return false;
    }
    
    APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController());
    if (!PC) 
    {
        UE_LOG(LogTemp, Error, TEXT("GetMouseWorldPosition - No player controller"));
        return false;
    }

    // Get mouse position
    float MouseX, MouseY;
    PC->GetMousePosition(MouseX, MouseY);

    // Convert mouse position to world ray
    FVector WorldLocation, WorldDirection;
    if (!PC->DeprojectScreenPositionToWorld(MouseX, MouseY, WorldLocation, WorldDirection))
    {
        UE_LOG(LogTemp, Error, TEXT("GetMouseWorldPosition - Failed to deproject screen position"));
        return false;
    }

    // Perform line trace to hit the whiteboard
    FHitResult HitResult;
    FVector TraceStart = WorldLocation;
    FVector TraceEnd = WorldLocation + (WorldDirection * 10000.0f);

    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(OwnerPawn);
    QueryParams.bTraceComplex = true;

    // Draw debug line to see the trace
   // DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Green, false, 0.1f, 0, 1.0f);

    if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility, QueryParams))
    {
        // Draw debug sphere at hit location
       // DrawDebugSphere(GetWorld(), HitResult.Location, 5.0f, 12, FColor::Red, false, 0.1f, 0, 1.0f);
        
        // Check if we hit our whiteboard
        if (HitResult.GetActor() == TargetWhiteboard)
        {
            OutWorldPosition = HitResult.Location;
            OutCanvasPosition = WorldToCanvasPosition(OutWorldPosition);
            
            UE_LOG(LogTemp, Log, TEXT("Hit whiteboard at world pos: %s, canvas pos: %s"), 
                   *OutWorldPosition.ToString(), *OutCanvasPosition.ToString());
            return true;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Hit actor: %s (not whiteboard)"), 
                   HitResult.GetActor() ? *HitResult.GetActor()->GetName() : TEXT("None"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No hit result from line trace"));
    }

    return false;
}

FVector2D UWhiteboardInteractionComponent::WorldToCanvasPosition(const FVector& WorldPosition)
{
    if (!TargetWhiteboard) 
    {
        return FVector2D::ZeroVector;
    }
    
    // Convert world position to local position relative to whiteboard
    FVector LocalPosition = GetWhiteboardLocalPosition(WorldPosition);
    
    // Convert local position to UV coordinates (0-1 range)
    float U = (LocalPosition.Y + TargetWhiteboard->WhiteboardWidth * 0.5f) / TargetWhiteboard->WhiteboardWidth;
    float V = (-LocalPosition.Z + TargetWhiteboard->WhiteboardHeight * 0.5f) / TargetWhiteboard->WhiteboardHeight;
    
    // Clamp UV coordinates
    U = FMath::Clamp(U, 0.0f, 1.0f);
    V = FMath::Clamp(V, 0.0f, 1.0f);
    
    // Convert UV to canvas pixel coordinates
    FVector2D CanvasPosition;
    CanvasPosition.X = U * TargetWhiteboard->CanvasWidth;
    CanvasPosition.Y = V * TargetWhiteboard->CanvasHeight;
    
    return CanvasPosition;
}

FVector UWhiteboardInteractionComponent::GetWhiteboardLocalPosition(const FVector& WorldPosition)
{
    if (!TargetWhiteboard)
    {
        return FVector::ZeroVector;
    }
    
    // Transform world position to local whiteboard space
    FTransform WhiteboardTransform = TargetWhiteboard->WhiteboardMesh->GetComponentTransform();
    FVector LocalPosition = WhiteboardTransform.InverseTransformPosition(WorldPosition);
    
    return LocalPosition;
}
