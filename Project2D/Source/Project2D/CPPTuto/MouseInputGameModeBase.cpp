// Fill out your copyright notice in the Description page of Project Settings.


#include "MouseInputGameModeBase.h"



AMouseInputGameModeBase::AMouseInputGameModeBase() {
	

		ConstructorHelpers::FObjectFinder<UClass> PawnClass(TEXT("Class'/Game/Project/Logic/CPP_Tuto/BP_Charact.BP_Charact_C'"));
		if (PawnClass.Object) {
			DefaultPawnClass = PawnClass.Object;
		}
		ConstructorHelpers::FObjectFinder<UClass> ControllerClass(TEXT("Class'/Game/Project/Logic/CPP_Tuto/BP_CharPlayerController.BP_CharPlayerController_C'"));
		if (ControllerClass.Object) {
			PlayerControllerClass = ControllerClass.Object;
		}
}