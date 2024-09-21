// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DestroyerGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT2D_API ADestroyerGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	void StartDestroyTimer();

public:
	void DestroyDestructible();

protected:
	virtual void BeginPlay() override;

};
