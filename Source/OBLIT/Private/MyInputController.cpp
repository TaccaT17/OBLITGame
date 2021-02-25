// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInputController.h"


void AMyInputController::BeginPlay()
{
	Super::BeginPlay();

	//PlayerControllerRef = Cast<APlayerController>(GetController());

}

void AMyInputController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	FHitResult MouseTraceHitResult;
	//											Channel to raycast on, whether or not complex collision, where to store hit data
	PlayerControllerRef->GetHitResultUnderCursor(ECC_Visibility, false, MouseTraceHitResult); //raycast
	FVector MouseHitLocation = MouseTraceHitResult.ImpactPoint; //in-world location of where raycast collided
	*/
}