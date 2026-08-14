// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyVehicleProjectWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UMyVehicleProjectWheelFront::UMyVehicleProjectWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}