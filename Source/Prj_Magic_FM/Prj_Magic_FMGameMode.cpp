// Copyright Epic Games, Inc. All Rights Reserved.

#include "Prj_Magic_FMGameMode.h"
#include "Prj_Magic_FMCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrj_Magic_FMGameMode::APrj_Magic_FMGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
