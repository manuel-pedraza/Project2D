// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PrintMessage.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CubeSpawner.generated.h"

UCLASS()
class PROJECT2D_API ACubeSpawner : public AActor
{
	GENERATED_BODY()

private:
	const float MinSpawnDelaySeconds{ 1 };
	const float MaxSpawnDelaySeconds{ 2 };

	const float MinSpawnX{ 300 };
	const float MaxSpawnX{ 510 };
	const float MinSpawnZ{ 230 };
	const float MaxSpawnZ{ 290 };

	void StartSpawnTimer();
public:	
	// Sets default values for this actor's properties
	ACubeSpawner();

	UPROPERTY(EditAnywhere, meta = (Metaclass = "Cubic"), Category = CubicBlueprint)
		TSubclassOf<APrintMessage> UCubic;

	void SpawnCubic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
