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
	
	//UFUNCTION(/*custom parameters*/)
	//	void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);


	UFUNCTION()
	void OnHit(class UPrimitiveComponent* HitComp,
		class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult & SweepResult);
	//(const FOverlapInfo& OtherOverlap,bool bDoNotifies, bool bSkipNotifySelf);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
