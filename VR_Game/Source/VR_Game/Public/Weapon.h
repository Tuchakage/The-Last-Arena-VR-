// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/BoxComponent.h"
#include "Weapon.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VR_GAME_API UWeapon : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeapon();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	UBoxComponent* CollisionMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	AActor* player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool damageDealt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float attackCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool hasBeenGrabbed;

	//TESTING PURPOSES (Overrides On Component Begin Overlap)
	UFUNCTION()
	void onOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UFUNCTION(BlueprintCallable, Category = "Teleport")
	void Teleport();




};
