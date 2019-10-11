// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "KimiGameMode.h"
#include "KimiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKimiGameMode::AKimiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
