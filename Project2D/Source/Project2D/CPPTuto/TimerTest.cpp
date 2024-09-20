// Fill out your copyright notice in the Description page of Project Settings.


#include "TimerTest.h"

// Sets default values
ATimerTest::ATimerTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATimerTest::BeginPlay()
{
	Super::BeginPlay();

	Timer = NewObject<UUTimer>(this);
	check(Timer != nullptr);
	Timer->RegisterComponent();

	// Start 3 second timer and save start time
	Timer->SetDuration(3.0f);
	Timer->Start();
	StartTime = FDateTime::Now();
	
}

// Called every frame
void ATimerTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Timer->IsFinished())
	{
		UE_LOG(LogTemp, Warning, TEXT("Timer finished"));
		float ElapsedTime = (float)(FDateTime::Now() - StartTime).GetTotalSeconds();
		UE_LOG(LogTemp, Warning, TEXT("Timer finished"), ElapsedTime);
		StartTime = FDateTime::Now();
		Timer->Start();
	}

}

