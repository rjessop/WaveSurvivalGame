// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "WSG_PC.generated.h"

/**
 * 
 */
UCLASS()
class WAVESURVIVALGAME_API AWSG_PC : public APlayerController
{
	GENERATED_BODY()

public:

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="PlayerStates")
			int32 PC_Max_Heathe;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStates")
			bool PC_Jumping;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStates")
			bool PC_Crouching;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStates")
			bool PC_Sprinting;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerStates")
			bool PC_Pron;



};
