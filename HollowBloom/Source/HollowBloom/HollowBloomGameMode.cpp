// Copyright Epic Games, Inc. All Rights Reserved.

#include "HollowBloomGameMode.h"
#include "HollowBloomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHollowBloomGameMode::AHollowBloomGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
