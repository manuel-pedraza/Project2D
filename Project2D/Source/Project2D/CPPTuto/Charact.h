// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Charact.generated.h"

UCLASS()
class PROJECT2D_API ACharact : public APawn
{
	GENERATED_BODY()

private:
	const int HalfWidth{ 26 };
	const int HalfHeight{ 30 };
	const int VerticalOffset{ 1 };

public:
	// Sets default values for this pawn's properties
	ACharact();
	void DestroyChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetLocation(FVector Location);

};
