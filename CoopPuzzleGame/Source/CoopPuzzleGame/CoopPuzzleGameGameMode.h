// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CoopPuzzleGameGameMode.generated.h"

UCLASS(minimalapi)
class ACoopPuzzleGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACoopPuzzleGameGameMode();

protected:

	virtual void BeginPlay() override;

private:

	// List of interactives in the current level
	TArray<class ABasicInteractive*> InteractiveInLevelList;

private:
	// Gets interactives in level
	void GetInteractivesInLevel();
};



