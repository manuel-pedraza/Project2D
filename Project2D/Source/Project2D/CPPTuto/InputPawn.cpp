// Fill out your copyright notice in the Description page of Project Settings.


#include "InputPawn.h"
#include "ScreenConstants.h"

// Sets default values
AInputPawn::AInputPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInputPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInputPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector PendingMovementInput = ConsumeMovementInputVector();
	if (PendingMovementInput.X != 0 || PendingMovementInput.Z != 0) {
		FVector NewLocation = GetActorLocation();
		NewLocation.X += PendingMovementInput.X * MoveAmountPerFrame;
		NewLocation.X = FMath::Clamp(
			NewLocation.X, 
			ScreenConstants::Left + HalfCollisionWidth,
			ScreenConstants::Right - HalfCollisionWidth
		);

		NewLocation.Z += PendingMovementInput.Z * MoveAmountPerFrame;
		NewLocation.Z = FMath::Clamp(
			NewLocation.Z,
			ScreenConstants::Bottom - 3,
			ScreenConstants::Top - (HalfCollisionHeight * 2)
		);

		SetActorLocation(NewLocation);
	}
}

void AInputPawn::MoveHorizontally(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorForwardVector(), moveScale * MoveAmountPerFrame);
}

void AInputPawn::MoveVertically(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorUpVector(), moveScale * MoveAmountPerFrame);
}

// Called to bind functionality to input
void AInputPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

