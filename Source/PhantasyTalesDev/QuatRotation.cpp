// Fill out your copyright notice in the Description page of Project Settings.

#include "QuatRotation.h"
FRotator UQuatRotation::GetRotationOnNormal(FRotator currentRotation, FVector Normal)
{
	FQuat RootQuat = currentRotation.Quaternion();
	FVector UpVector = RootQuat.GetUpVector();
	FVector RotationAxis = FVector::CrossProduct(UpVector, Normal);
	RotationAxis.Normalize();
	float DotProduct = FVector::DotProduct(UpVector, Normal);
	float RotationAngle = acosf(DotProduct);
	FQuat Quat = FQuat(RotationAxis, RotationAngle);
	FQuat NewQuat = Quat * RootQuat;
	return NewQuat.Rotator();
}