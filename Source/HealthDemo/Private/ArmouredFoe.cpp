// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmouredFoe.h"
#include "ArmouredHealth.h"

/// <summary>
/// notice how the constructors super works differently
/// </summary>
AArmouredFoe::AArmouredFoe() : Super()
{
	
}

void AArmouredFoe::BeginPlay()
{
	Super::BeginPlay();


}


void AArmouredFoe::ArmourBroken()
{
	if (UnArmouredMaterial)
	{
		Body->SetMaterial(0, UnArmouredMaterial);
	}
}