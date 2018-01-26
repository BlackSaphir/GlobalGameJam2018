// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Working_TitleGameMode.h"
#include "Working_TitleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWorking_TitleGameMode::AWorking_TitleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
