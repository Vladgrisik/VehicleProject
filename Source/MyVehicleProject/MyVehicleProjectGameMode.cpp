// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyVehicleProjectGameMode.h"
#include "MyVehicleProjectPlayerController.h"

AMyVehicleProjectGameMode::AMyVehicleProjectGameMode()
{
	PlayerControllerClass = AMyVehicleProjectPlayerController::StaticClass();
}
