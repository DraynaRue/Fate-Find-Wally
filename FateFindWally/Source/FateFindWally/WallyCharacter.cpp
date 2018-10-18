// Fill out your copyright notice in the Description page of Project Settings.

#include "WallyCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine.h"
#include "Kismet/GameplayStatics.h"

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
	this->GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &AWallyCharacter::OnMyHit);
	SetActorLocation(SpawnLocations[FMath::RandRange(0, 4)]->GetActorLocation());
}

void AWallyCharacter::OnMyHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	UWorld* TheWorld = GetWorld();
	UGameplayStatics::OpenLevel(GetWorld(), "WinScreen");

	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hit"));
	}*/
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

