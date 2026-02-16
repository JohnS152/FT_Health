// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmouredHealth.h"

/**
* Here is the CPP file where we will put our logic
* A slight hint to help you is 
* UHealth::Damage will call the base class (UHealths) damage funtion not the Armoured Health Damage
* 
*/
UArmouredHealth::UArmouredHealth()
{
	AP = MaxArmour;
}

void UArmouredHealth::TakeDamage(int Damage)
{
	//UE_LOG(LogTemp, Warning, TEXT("Armoured Health took no damage! you might want to change that"));

	if (AP > 0)
	{
		AP -= 1;
		UE_LOG(LogTemp, Warning, TEXT("Armour is hit!"));
		if (AP <= 0) 
		{
			UE_LOG(LogTemp, Warning, TEXT("Armour is broken!"));
		}
	}
	else
	{
		Super::TakeDamage(Damage);
	}
}