// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConfigFns.generated.h"

/**
 * 
 */
UCLASS(Config=Engine)
class DRAGONCRASH_API UConfigFns : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Config")
	static FString ReadCustomConfig(FString section, FString var);

	UFUNCTION(BlueprintCallable, Category = "Config")
	static void WriteCustomConfig(FString section, FString var, FString value);
	
	
};
