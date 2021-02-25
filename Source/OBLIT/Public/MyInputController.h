// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyInputController.generated.h"

/**
 * 
 */
UCLASS()
class OBLIT_API AMyInputController : public APlayerController
{
	GENERATED_BODY()
	
private:
	APlayerController* PlayerControllerRef;

public:
		// Called every frame
		virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
