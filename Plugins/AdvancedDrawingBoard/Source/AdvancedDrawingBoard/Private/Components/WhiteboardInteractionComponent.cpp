// Copyright Epic Games, Inc. All Rights Reserved.

#include "Components/WhiteboardInteractionComponent.h"
#include "Actor/WhiteboardActor.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

// Set Default Value
UWhiteboardInteractionComponent::UWhiteboardInteractionComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    bHasValidLastPosition = false;
}

// Begin Play
void UWhiteboardInteractionComponent::BeginPlay()
{
    Super::BeginPlay();
    OwnerPawn = Cast<APawn>(GetOwner());
    
    if (bAutoDetectWhiteboard)
    {
        FindNearestWhiteboard();
    }
}

// Tick Component
void UWhiteboardInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    
    // Auto-detect whiteboard if needed
    if (bAutoDetectWhiteboard && !TargetWhiteboard)
    {
        FindNearestWhiteboard();
    }
}


// Try to Interact If player Is Interaction the Call the End Interaction
void UWhiteboardInteractionComponent::TryToInteract()
{
    if (!TargetWhiteboard)
    {
        FindNearestWhiteboard();
        return;
    }

    
    if (!OwnerPawn)
    {
        return;
    }
    
    if(TargetWhiteboard->IsPlayerInteracting(OwnerPawn))
    {
            // Stop any ongoing drawing
            if (bIsDrawing)
            {
                StopDrawingInput();
            }

       
            // Use PlayerController RPC
            if (AWhiteboardController* PC = GetWhiteboardPlayerController())
            {
               PC->Server_EndWhiteboardInteraction(TargetWhiteboard, OwnerPawn);
            }
          
    }
    else
    {
        
        
    // Check if we can interact locally (client-side prediction)
    if (!TargetWhiteboard->CanPlayerInteract(OwnerPawn))
    {
        return;
    }

    
    // Use PlayerController RPC for proper ownership validation
    if (AWhiteboardController* PC = GetWhiteboardPlayerController())
    {
        PC->Server_RequestWhiteboardInteraction(TargetWhiteboard, OwnerPawn);
    }
    }
}


// Start Drawing Input
void UWhiteboardInteractionComponent::StartDrawingInput()
{
    UE_LOG(LogTemp, Warning, TEXT("Starting drawing"));
    
    if (!TargetWhiteboard || !IsInRangeOfWhiteboard())
    {
        return;
    }
    
    
    FVector2D CanvasPosition;
    if (GetCurrentDrawingPosition(CanvasPosition))
    {
        UE_LOG(LogTemp, Warning, TEXT("Starting drawing at canvas position: %s"), *CanvasPosition.ToString());
        
        bIsDrawing = true;
        bHasValidLastPosition = true;
        LastDrawingPosition = CanvasPosition;
        // Use the client-specific drawing function
        
        TargetWhiteboard->StartDrawing(OwnerPawn, CanvasPosition);
    }
    
}

// Continue Drawing
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
            TargetWhiteboard->ContinueDrawing(CanvasPosition);
            LastDrawingPosition = CanvasPosition;
            bHasValidLastPosition = true;
        }
    }
}

// Stop Drawing Input
void UWhiteboardInteractionComponent::StopDrawingInput()
{
    UE_LOG(LogTemp, Warning, TEXT("StopDrawingInput called"));
    
    if (bIsDrawing && TargetWhiteboard)
    {
        bIsDrawing = false;
        bHasValidLastPosition = false;
        
        // Use the client-specific drawing function
        TargetWhiteboard->EndDrawing();
    }
}


void UWhiteboardInteractionComponent::EndInteraction()
{
    if (TargetWhiteboard && OwnerPawn && TargetWhiteboard->IsPlayerInteracting(OwnerPawn))
    {
        // Stop any ongoing drawing
        if (bIsDrawing)
        {
            StopDrawingInput();
        }
        
        // Use the new request system
        TargetWhiteboard->RequestEndInteraction(OwnerPawn);
    }
}

bool UWhiteboardInteractionComponent::IsInRangeOfWhiteboard()
{
    if (!TargetWhiteboard || !OwnerPawn)
    {
        return false;
    }

    const float Distance = FVector::Distance(OwnerPawn->GetActorLocation(), TargetWhiteboard->GetActorLocation());
    const bool bInRange = Distance <= InteractionDistance;
    
    return bInRange;
}

/*
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
*/
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
    return GetMouseWorldPositionDPIAware(WorldPosition, OutCanvasPosition);
}

// Find The Nearest Whiteboard
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
        if (AWhiteboardActor* Whiteboard = Cast<AWhiteboardActor>(Actor))
        {
            const float Distance = FVector::Distance(OwnerPawn->GetActorLocation(), Whiteboard->GetActorLocation());
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


FVector UWhiteboardInteractionComponent::GetDrawingPosition() const
{
    if (!OwnerPawn)
    {
        return FVector::ZeroVector;
    }

    const APlayerController* PlayerController = Cast<APlayerController>(OwnerPawn->GetController());
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
        return false;
    }
    
    APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController());
    if (!PC) 
    {
        return false;
    }

    // Get mouse position
    float MouseX, MouseY;
    if (!PC->GetMousePosition(MouseX, MouseY))
    {
        return false;
    }

    // Convert mouse position to world ray
    FVector WorldLocation, WorldDirection;
    if (!PC->DeprojectScreenPositionToWorld(MouseX, MouseY, WorldLocation, WorldDirection))
    {
        return false;
    }

    // Calculate the plane of the whiteboard
    FVector WhiteboardLocation = TargetWhiteboard->GetActorLocation();
    FVector WhiteboardNormal = TargetWhiteboard->GetActorForwardVector() * -1.0f; // Face normal
    
    // Calculate intersection with whiteboard plane
    FVector IntersectionPoint;
    if (!FMath::SegmentPlaneIntersection(WorldLocation, WorldLocation + WorldDirection * 10000.0f, 
                                        FPlane(WhiteboardLocation, WhiteboardNormal), IntersectionPoint))
    {
        return false;
    }

    OutWorldPosition = IntersectionPoint;
    OutCanvasPosition =TargetWhiteboard->WorldToCanvasPosition(IntersectionPoint);
    
    return true;
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

bool UWhiteboardInteractionComponent::GetMouseWorldPositionDPIAware(FVector& OutWorldPosition, FVector2D& OutCanvasPosition)
{
    if (!TargetWhiteboard || !OwnerPawn) 
    {
        return false;
    }
    
    APlayerController* PC = Cast<APlayerController>(OwnerPawn->GetController());
    if (!PC) 
    {
        return false;
    }

    // Get mouse position
    float MouseX, MouseY;
    if (!PC->GetMousePosition(MouseX, MouseY))
    {
        return false;
    }
    
    // Get viewport size and DPI scale
    FVector2D ViewportSize = FVector2D(1, 1);
    if (GEngine && GEngine->GameViewport)
    {
        GEngine->GameViewport->GetViewportSize(ViewportSize);
    }
    
    // Normalize mouse coordinates to viewport
    FVector2D NormalizedMousePosition(
        MouseX / ViewportSize.X,
        MouseY / ViewportSize.Y
    );
    
    // Convert to world space
    FVector WorldLocation, WorldDirection;
    if (!PC->DeprojectScreenPositionToWorld(
        MouseX, 
        MouseY, 
        WorldLocation, 
        WorldDirection
    ))
    {
        return false;
    }

    // Calculate whiteboard plane intersection
    FVector WhiteboardLocation = TargetWhiteboard->GetActorLocation();
    FVector WhiteboardNormal = TargetWhiteboard->GetActorForwardVector();
    
    // Create plane with normal pointing in the direction the whiteboard is facing
    FPlane WhiteboardPlane(WhiteboardLocation, WhiteboardNormal);
    
    // Find intersection point
    FVector IntersectionPoint = FMath::LinePlaneIntersection(
        WorldLocation, 
        WorldLocation + WorldDirection * 10000.0f, 
        WhiteboardPlane
    );

    // Convert to local space of the whiteboard
    FVector LocalIntersection = TargetWhiteboard->GetActorTransform().InverseTransformPosition(IntersectionPoint);
    
    // Check if we have a mesh to get bounds from
    if (TargetWhiteboard->GetWhiteboardMesh())
    {
        FBoxSphereBounds MeshBounds = TargetWhiteboard->GetWhiteboardMesh()->GetStaticMesh()->GetBounds();
        FVector MeshExtent = MeshBounds.BoxExtent;
        
        // Check if intersection point is within whiteboard mesh bounds
        bool bIsWithinBounds = 
            FMath::Abs(LocalIntersection.Y) <= MeshExtent.Y &&
            FMath::Abs(LocalIntersection.Z) <= MeshExtent.Z;
        
        if (!bIsWithinBounds)
        {
            return false; // Outside bounds, don't draw
        }
    }

    OutWorldPosition = IntersectionPoint;
    OutCanvasPosition = TargetWhiteboard->WorldToCanvasPosition(IntersectionPoint);
    
    return true;
}


// Get The Current Whiteboard
AWhiteboardActor* UWhiteboardInteractionComponent::GetCurrentWhiteboard()
{
    // First check if we have a target whiteboard
    if (TargetWhiteboard && OwnerPawn && TargetWhiteboard->IsPlayerInteracting(OwnerPawn))
    {
        return TargetWhiteboard;
    }
    
    // If not, try to find the nearest one
    FindNearestWhiteboard();
    
    if (TargetWhiteboard && OwnerPawn && TargetWhiteboard->IsPlayerInteracting(OwnerPawn))
    {
        return TargetWhiteboard;
    }
    
    return nullptr;
}

// Get The Whiteboard Controller From Player Pawn
AWhiteboardController* UWhiteboardInteractionComponent::GetWhiteboardPlayerController() const
{
    if (!OwnerPawn)
    {
        return nullptr;
    }
    
    return Cast<AWhiteboardController>(OwnerPawn->GetController());
}
