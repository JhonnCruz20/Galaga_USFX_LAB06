// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFX_LAB06GameMode.h"
#include "Galaga_USFX_LAB06Pawn.h"

AGalaga_USFX_LAB06GameMode::AGalaga_USFX_LAB06GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFX_LAB06Pawn::StaticClass();
}

