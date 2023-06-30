// Copyright Epic Games, Inc. All Rights Reserved.

#include "AISlashGameMode.h"
#include "AISlashCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAISlashGameMode::AAISlashGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
