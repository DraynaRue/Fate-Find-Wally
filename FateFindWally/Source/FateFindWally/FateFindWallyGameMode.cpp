// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FateFindWallyGameMode.h"
#include "FateFindWallyHUD.h"
#include "FateFindWallyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFateFindWallyGameMode::AFateFindWallyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFateFindWallyHUD::StaticClass();
}
