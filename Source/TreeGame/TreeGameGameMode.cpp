// Copyright Epic Games, Inc. All Rights Reserved.

#include "TreeGameGameMode.h"
#include "TreeGamePlayerController.h"
#include "TreeGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATreeGameGameMode::ATreeGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATreeGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}