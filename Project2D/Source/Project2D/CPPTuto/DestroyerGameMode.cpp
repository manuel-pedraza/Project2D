//https://www.youtube.com/watch?v=GAv6Y7a5j7I// Fill out your copyright notice in the Description page of Project Settings.

#include "DestroyerGameMode.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void ADestroyerGameMode::BeginPlay()
{
	Super::BeginPlay();

	StartDestroyTimer();
}

void ADestroyerGameMode::DestroyDestructible() {
	TArray<AActor*> TaggedActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), "Destructible", TaggedActors);

	if (TaggedActors.Num() > 0) {
		TaggedActors[0]->Destroy();
	}

	StartDestroyTimer();

}


void ADestroyerGameMode::StartDestroyTimer() {

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ADestroyerGameMode::DestroyDestructible, 3);

}