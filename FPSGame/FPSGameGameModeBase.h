// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "FPSGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AFPSGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;
	
	
};
