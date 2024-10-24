// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyboardInputPlayerController.h"
#include "InputPawn.h"

void AKeyboardInputPlayerController::SetupInputComponent() {
	Super::SetupInputComponent();

	check(InputComponent != nullptr);
	InputComponent->BindAxis("Horizontal", this, &AKeyboardInputPlayerController::MoveHorizontally);
	InputComponent->BindAxis("Vertical", this, &AKeyboardInputPlayerController::MoveVertically);
	InputComponent->BindAction("DestroyCharacter", EInputEvent::IE_Pressed, this, &AKeyboardInputPlayerController::DestroyCharacter);
	InputComponent->BindAction("PlacePickup", EInputEvent::IE_Released, this, &AKeyboardInputPlayerController::PlacePickup);
	InputComponent->BindAction("CollectPickup", EInputEvent::IE_Released, this, &AKeyboardInputPlayerController::CollectPickup);

}

void AKeyboardInputPlayerController::MoveHorizontally(float input)
{
	if (input != 0) {
		AInputPawn* pawn = (AInputPawn*)GetPawn();
		if (pawn)
			pawn->MoveHorizontally(input);
	}
}

void AKeyboardInputPlayerController::MoveVertically(float input)
{
	if (input != 0) {
		AInputPawn* pawn = (AInputPawn*)GetPawn();
		if (pawn)
			pawn->MoveVertically(input);
	}
}

void AKeyboardInputPlayerController::DestroyCharacter()
{
	AInputPawn* pawn = (AInputPawn*)GetPawn();
	if (pawn)
		pawn->Destroy();
}

void AKeyboardInputPlayerController::PlacePickup()
{
	FVector WorldLocation;
	FVector WorldDirection;
	FVector PlaneOrigin(0.0f, 0.0f, 0.f);
	DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

	FVector ActorWorldLocation = FMath::LinePlaneIntersection(
		WorldLocation,
		WorldLocation + WorldDirection,
		PlaneOrigin,
		FVector::RightVector
	);

	ActorWorldLocation.Y = 0;
	ACoinPickup* newCoin = GetWorld()->SpawnActor<ACoinPickup>(UCoinPickup, ActorWorldLocation, FRotator::ZeroRotator);
	Pickups.Add(newCoin);
}

void AKeyboardInputPlayerController::CollectPickup()
{
	if (!collecting)
		GoToNextPickup();
}

void AKeyboardInputPlayerController::DestroyPickup(ACoinPickup* Pickup)
{
	Pickups.Remove(Pickup);
	Pickup->Destroy();
	GoToNextPickup();
}

void AKeyboardInputPlayerController::GoToNextPickup() {

	if (Pickups.Num() > 0) {
		ACoinPickup* TargetCoinPickup = Pickups[0];
		Pickups.RemoveAt(0);

		AInputPawn* pawn = (AInputPawn*)GetPawn();
		if (pawn) {
			pawn->GoToPickup(TargetCoinPickup);
		}
	}

}