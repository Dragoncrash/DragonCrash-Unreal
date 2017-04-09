// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ConfigOps.generated.h"

/**
 * 
 */
UCLASS(Config = Custom)
class DRAGONCRASH_API AConfigOps : public APlayerController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Config")
	FString ReadCustomConfig(FString filename, FString section, FString var);
	
	UFUNCTION(BlueprintCallable, Category = "Config")
	void WriteCustomConfig(FString section, FString var, FString value);
	
};
