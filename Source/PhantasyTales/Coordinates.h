// null

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "Coordinates.generated.h"

/**
 * 
 */
UCLASS()
class PHANTASYTALES_API UCoordinates : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "Coordinates")
		float DistanceOfActorToThisMeshSurface(AActor* Surface, AActor* TestActor, FVector& ClosestSurfacePoint);
};
