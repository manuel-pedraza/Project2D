// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyboardInputPlayerController.h"
#include "InputPawn.h"

void AKeyboardInputPlayerController::SetupInputComponent() {
	Super::SetupInputComponent();

	check(InputComponent != nullptr);
	InputComponent->BindAxis("Horizontal", this, &AKeyboardInputPlayerController::MoveHorizontally);
	InputComponent->BindAxis("Vertical", this, &AKeyboardInputPlayerController::MoveVertically);
	InputComponent->BindAction("DestroyCharacter", EInputEvent::IE_Pressed, this, &AKeyboardInputPlayerController::DestroyCharacter);

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
}

void AKeyboardInputPlayerController::CollectPickup()
{
}

void AKeyboardInputPlayerController::DestroyPickup(ACoinPickup* Pickup)
{
}
