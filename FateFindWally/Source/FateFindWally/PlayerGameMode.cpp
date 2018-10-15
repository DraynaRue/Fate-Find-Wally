// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerGameMode.h"
#include "FateFindWallyHUD.h"
#include "FateFindWallyCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlayerGameMode::APlayerGameMode()
	: Super()
{
	// set default pawn class
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/PlayerCharacterBP"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// set fefault HUD
	HUDClass = AFateFindWallyHUD::StaticClass();
}