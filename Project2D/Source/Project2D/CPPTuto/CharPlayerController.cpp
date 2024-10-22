// Fill out your copyright notice in the Description page of Project Settings.


#include "CharPlayerController.h"
#include "Charact.h"

ACharPlayerController::ACharPlayerController() {
	PrimaryActorTick.bCanEverTick = true;
	SetInputMode(FInputModeGameAndUI());
}


void ACharPlayerController::PlayerTick(float DeltaTime)
{

	Super::PlayerTick(DeltaTime);

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

	ACharact* CharacterPawn = (ACharact*)GetPawn();
	if (CharacterPawn) {
		CharacterPawn->SetLocation(ActorWorldLocation);
		
		//UE_LOG(LogTemp, Warning, TEXT("V: %s"), *ActorWorldLocation.ToString());
	}

}

void ACharPlayerController::DestroyCharPawn() {

	ACharact* CharacterPawn = (ACharact*)GetPawn();
	if (CharacterPawn != nullptr)
		CharacterPawn->Destroy();

}

void ACharPlayerController::SetupInputComponent() {

	Super::SetupInputComponent();

	check(InputComponent != nullptr);
	InputComponent->BindAction("DestroyCharacter", EInputEvent::IE_Pressed, this, &ACharPlayerController::DestroyCharPawn);

}


