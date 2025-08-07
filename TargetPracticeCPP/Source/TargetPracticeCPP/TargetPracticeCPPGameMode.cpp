// Copyright Epic Games, Inc. All Rights Reserved.

#include "TargetPracticeCPPGameMode.h"
#include "TargetPracticeCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATargetPracticeCPPGameMode::ATargetPracticeCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
