// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	//Set The Max Health to 100
	maxHealth = 100;

	//Current Health will start off with MaxHealth
	currentHealth = maxHealth;
	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	//Get Reference to the owning pawn
	AActor* Owner = GetOwner();

	if (Owner) 
	{
		//When the Take any damage function is called we want to bind the function to the one we created "TakeDamage()"
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	}
	
}

void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage < 0) 
	{
		return;
	}

	//Makes it so that the max value for Current Health is whatever is in maxHealth and makes sure the minimum value is 0  and it reduces the currentHealth variable
	currentHealth = FMath::Clamp(currentHealth - Damage, 0.0f, maxHealth);
}



