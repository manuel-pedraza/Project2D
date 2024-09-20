// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Project2DCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"

DEFINE_LOG_CATEGORY_STATIC(SideScrollerCharacter, Log, All);

//////////////////////////////////////////////////////////////////////////
// AProject2DCharacter

AProject2DCharacter::AProject2DCharacter()
{
	// Use only Yaw from the controller and ignore the rest of the rotation.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;


	// Set the size of our collision capsule.
	GetCapsuleComponent()->SetCapsuleHalfHeight(96.0f);
	GetCapsuleComponent()->SetCapsuleRadius(40.0f);

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->bInheritPitch = false;
	CameraBoom->bInheritRoll = false;
	CameraBoom->bInheritYaw = false;

	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	// Configure character movement
	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxFlySpeed = 600.0f;

	// Lock character motion onto the XZ plane, so the character can't move in or out of the screen
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));

	// Behave like a traditional 2D platformer character, with a flat bottom instead of a curved capsule bottom
	// Note: This can cause a little floating when going up inclines; you can choose the tradeoff between better
	// behavior on the edge of a ledge versus inclines by setting this to true or false
	GetCharacterMovement()->bUseFlatBaseForFloorChecks = true;

	// 	TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("IncarGear"));
	// 	TextComponent->SetRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));
	// 	TextComponent->SetRelativeLocation(FVector(35.0f, 5.0f, 20.0f));
	// 	TextComponent->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	// 	TextComponent->SetupAttachment(RootComponent);

	// Enable replication on the Sprite component so animations show up when networked
	GetSprite()->SetIsReplicated(true);
	bReplicates = true;


}

//////////////////////////////////////////////////////////////////////////
// Animation

void AProject2DCharacter::UpdateAnimation()
{
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();



	UPaperFlipbook* DesiredAnimation = nullptr;

	if (state == CharacterState::Jumping || state == CharacterState::Falling)
	{
		//(JumpKeyHoldTime >= GetJumpMaxHoldTime() || JumpKeyHoldTime == 0.0f)

		state = ( PlayerVelocity.Z < 0 && GetCharacterMovement()->MovementMode == EMovementMode::MOVE_Falling) ?
			CharacterState::Falling : CharacterState::Jumping;

	}
	else
	{
		state = (PlayerSpeedSqr > 0.0f) ? CharacterState::Walking : CharacterState::Idle;
	}


	switch (state)
	{
		case CharacterState::Idle:
			DesiredAnimation = IdleAnimation;
			break;
		case CharacterState::Walking:
			DesiredAnimation = WalkingAnimation;
			break;
		case CharacterState::Running:
			DesiredAnimation = RunningAnimation;
			break;
		case CharacterState::Jumping:
			DesiredAnimation = JumpingAnimation;
			break;
		case CharacterState::Falling:
			DesiredAnimation = FallingAnimation;
			break;
		case CharacterState::LookingUp:
			DesiredAnimation = LookingUpAnimation;
			break;
		case CharacterState::Crouch:
			DesiredAnimation = CrouchAnimation;
			break;
		case CharacterState::Dead:
			DesiredAnimation = DeadAnimation;
			break;

	default:
		break;
	}


	// Are we moving or standing still?
	if( GetSprite()->GetFlipbook() != DesiredAnimation 	)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}



void AProject2DCharacter::Jump()
{
	// Jump on any touch
	ACharacter::Jump();
	//UE_LOG(LogTemp, Warning, TEXT("I'm jumping"));
	state = CharacterState::Jumping;
}

void AProject2DCharacter::StopJumping()
{
	// Cease jumping once touch stopped
	ACharacter::StopJumping();
}

void AProject2DCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	//UE_LOG(LogTemp, Warning, TEXT("Tick"));


	UpdateCharacter();
}


//////////////////////////////////////////////////////////////////////////
// Input

void AProject2DCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Note: the 'Jump' action and the 'MoveRight' axis are bound to actual keys/buttons/sticks in DefaultInput.ini (editable from Project Settings..Input)
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AProject2DCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AProject2DCharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &AProject2DCharacter::MoveRight);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &AProject2DCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AProject2DCharacter::TouchStopped);
}

void AProject2DCharacter::MoveRight(float Value)
{
	/*UpdateChar();*/

	// Apply the input to the character motion
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
}

void AProject2DCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	
}

void AProject2DCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	
}

void AProject2DCharacter::UpdateCharacter()
{

	// Update animation to match the motion
	UpdateAnimation();

	// Now setup the rotation of the controller based on the direction we are travelling
	const FVector PlayerVelocity = GetVelocity();
	float TravelDirection = PlayerVelocity.X;
	// Set the rotation so that the character faces his direction of travel.
	if (Controller != nullptr)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}
