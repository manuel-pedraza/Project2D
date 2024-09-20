// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UTimer.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT2D_API UUTimer : public UActorComponent
{
	GENERATED_BODY()

private:
	bool bRunning{ false };
	bool bStarted{ false };
	float ElapsedSeconds{ 0 };
	float TotalSeconds{ 0 };

public:	
	// Sets default values for this component's properties
	UUTimer();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	bool IsFinished();

	bool IsRunning();

	void SetDuration(float Duration);

	void Start();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
