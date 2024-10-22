// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CharPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT2D_API ACharPlayerController : public APlayerController
{
	GENERATED_BODY()
	virtual void PlayerTick(float DeltaTime) override;

public: 
	ACharPlayerController();

	virtual void SetupInputComponent() override;

	void DestroyCharPawn();

};
