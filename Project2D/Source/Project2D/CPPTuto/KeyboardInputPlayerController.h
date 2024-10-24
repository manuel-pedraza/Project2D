// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoinPickup.h"
#include "GameFramework/PlayerController.h"
#include "KeyboardInputPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PROJECT2D_API AKeyboardInputPlayerController : public APlayerController
{
	GENERATED_BODY()

public: 
	UPROPERTY(EditAnywhere, meta = (MetaClass = "CoinPickup"), Category = PickupBlueprints)
		TSubclassOf<ACoinPickup> UCoinPickup;

	virtual void SetupInputComponent() override;
	void MoveHorizontally(float input);
	void MoveVertically(float input);
	void DestroyCharacter();
	void PlacePickup();
	void CollectPickup();
	void DestroyPickup(ACoinPickup* Pickup);

private:
	UPROPERTY()
		TArray<ACoinPickup*> Pickups;
	bool collecting = false;
	void GoToNextPickup();
};
