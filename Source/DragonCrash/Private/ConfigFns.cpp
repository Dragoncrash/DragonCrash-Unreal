// Fill out your copyright notice in the Description page of Project Settings.

#include "DragonCrash.h"
#include "ConfigFns.h"


FString UConfigFns::ReadCustomConfig(FString section, FString var) {

	//Config handler is GConfig I think...
	if (!GConfig) return FString("NULL");

	FString value;
	GConfig->GetString(*section, *var, value, GEngineIni);

	return value;

}

void UConfigFns::WriteCustomConfig(FString section, FString var, FString value) {
	
	if (!GConfig) return;
	GConfig->SetString(*section, *var, *value, GEngineIni);

	//Force Flush buffers
	GConfig->Flush(false, GEngineIni);
}

