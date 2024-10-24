// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoinPickup.h"
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
	const float ForceMagnitude = 10000.0f;

	class UStaticMeshComponent* Mesh;
	ACoinPickup* TargetPickup = nullptr;

public:
	// Sets default values for this pawn's properties
	AInputPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void MoveHorizontally(float moveScale);
	void MoveVertically(float moveScale);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void GoToPickup(ACoinPickup* pickup);
	FVector GetForceVector(FVector PawnLocation, FVector PickupLocation);

};
