// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyboardInputGameMode.h"

AKeyboardInputGameMode::AKeyboardInputGameMode() {


	ConstructorHelpers::FObjectFinder<UClass> PawnClass(TEXT("Class'/Game/Project/Logic/CPP_Tuto/BP_InputPawn.BP_InputPawn_C'"));
	if (PawnClass.Object) {
		DefaultPawnClass = PawnClass.Object;
	}

	ConstructorHelpers::FObjectFinder<UClass> ControllerClass(TEXT("Class'/Game/Project/Logic/CPP_Tuto/BP_KeyboardInputPlayerController.BP_KeyboardInputPlayerController_C'"));
	if (ControllerClass.Object) {
		PlayerControllerClass = ControllerClass.Object;
	}
}