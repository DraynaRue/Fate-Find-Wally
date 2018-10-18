// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Character.h"

#include "WallyCharacter.generated.h"


UCLASS()
class FATEFINDWALLY_API AWallyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWallyCharacter();

	// Spawn locations
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		TArray<class AActor*> SpawnLocations;

	UFUNCTION()
		void OnMyHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
