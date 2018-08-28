// null

#include "Coordinates.h"

float UCoordinates::DistanceOfActorToThisMeshSurface(AActor* Surface, AActor* TestActor, FVector& ClosestSurfacePoint)
{

	//~~~~~~~~~~~

	//Dist of Actor to Surface, retrieve closest Surface Point to Actor
	return Surface->GetDistanceToCollision(
		TestActor->GetActorLocation(), ClosestSurfacePoint
	);
}
