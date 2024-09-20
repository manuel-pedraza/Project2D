// Fill out your copyright notice in the Description page of Project Settings.


#include "UTimer.h"

// Sets default values for this component's properties
UUTimer::UUTimer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UUTimer::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

bool UUTimer::IsFinished()
{
	return bStarted && !bRunning;
}

bool UUTimer::IsRunning()
{
	return bRunning;
}

void UUTimer::SetDuration(float Duration)
{
	if (!bRunning && Duration > 0) {
		TotalSeconds = Duration;
	}

}

void UUTimer::Start()
{
	if (TotalSeconds > 0) {
		bStarted = true;
		bRunning = true;
		ElapsedSeconds = 0;
	}
}


// Called every frame
void UUTimer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bRunning)
	{
		ElapsedSeconds += DeltaTime;

		if (ElapsedSeconds >= TotalSeconds) {

			bRunning = false;
		}

	}

}

