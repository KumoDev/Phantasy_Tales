// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuatRotation.generated.h"
/**
*
*/
UCLASS()
class PHANTASYTALESDEV_API UQuatRotation : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "QuaternionRotation")
		static FRotator GetRotationOnNormal(FRotator currentRotation, FVector Normal);
};