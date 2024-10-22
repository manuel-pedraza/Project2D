// Fill out your copyright notice in the Description page of Project Settings.


#include "Charact.h"
#include "ScreenConstants.h"

// Sets default values
ACharact::ACharact()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACharact::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharact::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACharact::DestroyChar() {
	Destroy();
}

// Called to bind functionality to input
/*
void ACharact::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("DestroyCharacter", IE_Pressed, this, &ACharact::DestroyChar);

}
*/
void ACharact::SetLocation(FVector Location)
{
	Location.X = FMath::Clamp(Location.X,
		ScreenConstants::Left  + HalfWidth,
		ScreenConstants::Right - HalfWidth
	);

	Location.Z -= HalfHeight;
	Location.Z = FMath::Clamp(Location.Z,				// You can add an offset if the pos is not clamping at the edges of the screen
		ScreenConstants::Bottom ,						// + VerticalOffset
		ScreenConstants::Top - (HalfHeight * 2)			// - VerticalOffset
	);

	SetActorLocation(Location);
	//SetActorRotation(FRotator(0,0,0), ETeleportType::None);
}

