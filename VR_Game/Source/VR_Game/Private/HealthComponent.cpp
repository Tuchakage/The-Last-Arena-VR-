// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "Engine.h"
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
	
}

void UHealthComponent::TakeDamage(float Damage)
{
	if (Damage < 0) 
	{
		return;
	}

	//Makes it so that the max value for Current Health is whatever is in maxHealth and makes sure the minimum value is 0  and it reduces the currentHealth variable
	currentHealth = FMath::Clamp(currentHealth - Damage, 0.0f, maxHealth);
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Health is %f"), currentHealth));

}

//Testing Calling this function from other scripts
//void UHealthComponent::Test()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("Test")));
//}



