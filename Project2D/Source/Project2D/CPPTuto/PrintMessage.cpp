// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintMessage.h"

// Sets default values
APrintMessage::APrintMessage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void APrintMessage::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Hello, n00b!"));
	SetLifeSpan(10);
	
}

// Called every frame
void APrintMessage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

