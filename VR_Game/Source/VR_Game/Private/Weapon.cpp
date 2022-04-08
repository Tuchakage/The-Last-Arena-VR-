// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Engine.h"
#include "HealthComponent.h"
// Sets default values for this component's properties
UWeapon::UWeapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	// ...
}


// Called when the game starts
void UWeapon::BeginPlay()
{
	Super::BeginPlay();

	damageDealt = false;
	hasBeenGrabbed = false;
	//TESTING PURPOSES (Overrides On Component Begin Overlap)
	CollisionMesh->OnComponentBeginOverlap.AddDynamic(this, &UWeapon::onOverlapBegin);


	
}

//TESTING PURPOSES (Overrides On Component Begin Overlap)
void UWeapon::onOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	//FOutputDeviceNull ar;
	//We put the Function we want to call inside the TEXT bracket
	//const FString command = FString::Printf(TEXT("Test"));
	//If the player it has been collided with has been found

	//If the Weapon collides with the HitBox and the weapon hasnt dealt damage yet also make sure the weapon has been Grabbed
	if (OtherActor->FindComponentByClass< UBoxComponent>()->ComponentHasTag("Enemy") && !damageDealt && hasBeenGrabbed)
	{
		//Find the Health Component and then call the Take Damage function (Inputs the Damage variable)
		OtherActor->FindComponentByClass<UHealthComponent>()->TakeDamage(Damage);
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, FString::Printf(TEXT("ENEMY FOUND")));
		damageDealt = true;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("ENEMY NOT FOUND")));
	}

}

void UWeapon::Teleport()
{
	//Rotation of the player stays the same
	player->SetActorRotation(player->GetActorRotation());
	//The player teleports to wherever the Dagger is
	player->SetActorLocation(GetOwner()->GetActorLocation());
}


