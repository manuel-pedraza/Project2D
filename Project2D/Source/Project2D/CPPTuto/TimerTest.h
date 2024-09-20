// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UTimer.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimerTest.generated.h"

UCLASS()
class PROJECT2D_API ATimerTest : public AActor
{
	GENERATED_BODY()
	

private:
	UUTimer* Timer;
	FDateTime StartTime;

public:	
	// Sets default values for this actor's properties
	ATimerTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
