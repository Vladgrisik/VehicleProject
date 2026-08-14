// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyVehicleProjectWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UMyVehicleProjectWheelRear::UMyVehicleProjectWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}