// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputPawn.generated.h"

UCLASS()
class PROJECT2D_API AInputPawn : public APawn
{
	GENERATED_BODY()

private:
	const float MoveAmountPerFrame{ 3 };
	const float HalfCollisionWidth { 26 };
	const float HalfCollisionHeight{ 30 };

public:
	// Sets default values for this pawn's properties
	AInputPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void MoveHorizontally(float moveScale);
	void MoveVertically(float moveScale);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
