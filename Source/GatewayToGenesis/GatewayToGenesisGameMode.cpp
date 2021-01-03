// Copyright Epic Games, Inc. All Rights Reserved.

#include "GatewayToGenesisGameMode.h"
#include "GatewayToGenesisCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGatewayToGenesisGameMode::AGatewayToGenesisGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
