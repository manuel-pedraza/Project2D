// Fill out your copyright notice in the Description page of Project Settings.


#include "Koopa.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"

FName AKoopa::SpriteComponentName(TEXT("BaseSprite"));
FName AKoopa::BoxCollision(TEXT("Box Collider"));

// Sets default values
AKoopa::AKoopa()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Collision = CreateOptionalDefaultSubobject<UBoxComponent>(AKoopa::BoxCollision);
	Collision->SetupAttachment(RootComponent);

	Sprite = CreateOptionalDefaultSubobject<UPaperFlipbookComponent>(AKoopa::SpriteComponentName);
	if (Sprite)
	{
		Sprite->AlwaysLoadOnClient = true;
		Sprite->AlwaysLoadOnServer = true;
		Sprite->bOwnerNoSee = false;
		//Sprite->bAffectDynamicIndirectLighting = true;
		Sprite->PrimaryComponentTick.TickGroup = TG_PrePhysics;
		Sprite->SetGenerateOverlapEvents(false);

		Sprite->SetupAttachment(Collision);
	}

	

}

// Called when the game starts or when spawned
void AKoopa::BeginPlay()
{
	Super::BeginPlay();
	
	if (!isGoingRight) {
		FRotator NewRotation = FRotator(0.f, 180.f, 0.f);
		FQuat QuatRotation = FQuat(NewRotation);
		Sprite->SetRelativeRotation(NewRotation, false, 0, ETeleportType::None);
	}
}


// Called every frame
void AKoopa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector location = GetActorLocation();
	location.X += 2 * (isGoingRight ? 1 : -1);
	SetActorLocation(location);

}

// Called to bind functionality to input
void AKoopa::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	

}

void AKoopa::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (!IsPendingKill())
	{
		if (Sprite)
		{
			// force animation tick after movement component updates
			if (Sprite->PrimaryComponentTick.bCanEverTick )
			{
				//&& GetCharacterMovement()
				//Sprite->PrimaryComponentTick.AddPrerequisite(GetCharacterMovement(), GetCharacterMovement()->PrimaryComponentTick);
			}
		}
	}
}