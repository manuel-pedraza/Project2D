// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeSpawner.h"

void ACubeSpawner::StartSpawnTimer()
{
	float TimerDuration = FMath::RandRange(MinSpawnDelaySeconds, MaxSpawnDelaySeconds);
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ACubeSpawner::SpawnCubic, TimerDuration);

}

// Sets default values
ACubeSpawner::ACubeSpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACubeSpawner::SpawnCubic()
{
	/*
	TSubclassOf<APrintMessage> SpawnCubic;
	int iNumber = FMath::RandRange(0, 2);

	if (iNumber == 0)
		SpawnCubic = USomeMesh;
	else if (iNumber == 1)
		SpawnCubic = USomeMesh2;
	else
		SpawnCubic = USomeMesh3;
	*/

	// Generate Random Spawn Location
	FVector SpawnLocation{ 0 };
	// SpawnLocation.SetComponentForAxis(EAxis::X, FMath::RandRange(MinSpawnX, MaxSpawnX));
	// SpawnLocation.SetComponentForAxis(EAxis::Z, FMath::RandRange(MinSpawnZ, MaxSpawnZ));
	SpawnLocation.X = FMath::RandRange(MinSpawnX, MaxSpawnX);
	SpawnLocation.Z = FMath::RandRange(MinSpawnZ, MaxSpawnZ);
	SpawnLocation.Y = 0;


	// Spawn the cubic
	GetWorld()->SpawnActor<APrintMessage>(UCubic, SpawnLocation, FRotator::ZeroRotator);

	StartSpawnTimer();

}

// Called when the game starts or when spawned
void ACubeSpawner::BeginPlay()
{
	Super::BeginPlay();

	StartSpawnTimer();

}

// Called every frame
void ACubeSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
