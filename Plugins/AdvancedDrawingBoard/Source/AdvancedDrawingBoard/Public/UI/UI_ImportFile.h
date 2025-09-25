// Developer : Masud Raihan Sagor
// What'sApp Number : +8801964998545
// Email : www.mrsagor2021@gmail.com
// Copyright Sparkelon @2025, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UI_ImportFile.generated.h"

UCLASS()
class ADVANCEDDRAWINGBOARD_API UUI_ImportFile : public UUserWidget
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable, Category = "FilePicker")
	void OpenFileDialog(const FString& DialogTitle, const FString& DefaultPath, const FString& FileTypes, TArray<FString>& OutFileNames);
 
	/*Prints the data of the given file*/
	UFUNCTION(BlueprintCallable, Category = "FilePicker")
	void PrintData(const FString& File);
};
