// Copyright Epic Games, Inc. All Rights Reserved.

#include "GnomeCunningGameMode.h"
#include "GnomeCunningCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGnomeCunningGameMode::AGnomeCunningGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
