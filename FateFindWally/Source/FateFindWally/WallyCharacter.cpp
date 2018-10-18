// Fill out your copyright notice in the Description page of Project Settings.

#include "WallyCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/PrimitiveComponent.h"

#include "Camera/CameraComponent.h"
#include "Engine.h"


// Sets default values
AWallyCharacter::AWallyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWallyCharacter::BeginPlay()
{
	Super::BeginPlay();
	SetActorLocation(SpawnLocations[FMath::RandRange(0, 4)]->GetActorLocation());

	//GetCapsuleComponent()->BeginComponentOverlap()
	this->GetCapsuleComponent()->BeginComponentOverlap.AddDynamic(this, &AWallyCharacter::OnHit);

	//this->GetCapsuleComponent()
	//FOverlapInfo a;
	//this->GetCapsuleComponent()->BeginComponentOverlap(a, true).AddDynamic(this, &AWallyCharacter::OnHit);
}


//DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FComponentBeginOverlapSignature, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult &, SweepResult);

//FComponentBeginOverlapSignature 
//UPrimitiveComponent* OverlappedComponent, 
//AActor*, OtherActor, 
//UPrimitiveComponent*, OtherComp, 
//int32, OtherBodyIndex, 
//bool, bFromSweep, 
//const FHitResult &, SweepResult

void AWallyCharacter::OnHit(class UPrimitiveComponent* HitComp, 
	                        class AActor* OtherActor, 
							class UPrimitiveComponent* OtherComp,
							int32 OtherBodyIndex, 
						    bool bFromSweep, 
						    const FHitResult & SweepResult )
//(const FOverlapInfo& OtherOverlap, bool bDoNotifies, bool bSkipNotifySelf)
{

}

// Called every frame
void AWallyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWallyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

