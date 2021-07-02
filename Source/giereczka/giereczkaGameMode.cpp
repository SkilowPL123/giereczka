// Copyright Epic Games, Inc. All Rights Reserved.

#include "giereczkaGameMode.h"
#include "giereczkaHUD.h"
#include "giereczkaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AgiereczkaGameMode::AgiereczkaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AgiereczkaHUD::StaticClass();
}
