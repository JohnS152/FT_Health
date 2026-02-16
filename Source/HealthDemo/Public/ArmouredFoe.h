// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicFoe.h"
#include "Health.h"
#include "Materials/Material.h"
#include "ArmouredFoe.generated.h" 
#include "ArmouredHealth.h"
/**
 * 
 */
UCLASS()
class HEALTHDEMO_API AArmouredFoe : public ABasicFoe
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Sets default values for this pawn's properties
	AArmouredFoe();
	UArmouredHealth* armour;
	//void TakeDamage(int Damage) override;
	// function to change material when armour is broken
	UFUNCTION()
	void ArmourBroken();
	// for this task look at how we called the died and see if you can recreate it, to change the material
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Material", meta = (AllowPrivateAccess = "true"))
	UMaterial* UnArmouredMaterial;

};
