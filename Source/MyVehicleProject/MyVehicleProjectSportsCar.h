// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MyVehicleProjectPawn.h"
#include "MyVehicleProjectSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class MYVEHICLEPROJECT_API AMyVehicleProjectSportsCar : public AMyVehicleProjectPawn
{
	GENERATED_BODY()
	
public:

	AMyVehicleProjectSportsCar();
};
