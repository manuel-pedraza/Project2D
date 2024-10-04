// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Koopa.generated.h"


UENUM()
enum class KoopaState
{
	Walking	UMETA(DisplayName = "Walking"),
};

UENUM()
enum class KoopaType
{
	Red		UMETA(DisplayName = "Red"),
	Green	UMETA(DisplayName = "Green"),
};


UCLASS()
class PROJECT2D_API AKoopa : public APawn
{
	GENERATED_BODY()

		// Name of the Sprite component
		static FName SpriteComponentName;
	// Name of the Box component
		static FName BoxCollision;

	

public:
	// Sets default values for this pawn's properties
	AKoopa();

private:
	/** The main skeletal mesh associated with this Character (optional sub-object). */
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UPaperFlipbookComponent* Sprite;

	/** The main skeletal mesh associated with this Character (optional sub-object). */
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* Collision;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = State)
		TEnumAsByte<KoopaState> state;

public:
	virtual void PostInitializeComponents() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// The animation to play while idle (standing still)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* WalkingAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Direction)
		bool isGoingRight = true;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Returns Sprite subobject **/
	FORCEINLINE class UPaperFlipbookComponent* GetSprite() const { return Sprite; }

	/** Returns Collision subobject **/
	FORCEINLINE class UBoxComponent* GetBoxCollision() const { return Collision; }

};
