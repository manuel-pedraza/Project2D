// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Project2DGameMode.h"
#include "Project2DCharacter.h"

AProject2DGameMode::AProject2DGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AProject2DCharacter::StaticClass();	
}
