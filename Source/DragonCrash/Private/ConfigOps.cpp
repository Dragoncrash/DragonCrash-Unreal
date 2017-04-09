// Fill out your copyright notice in the Description page of Project Settings.

#include "DragonCrash.h"
#include "ConfigOps.h"


FString AConfigOps::ReadCustomConfig(FString filename, FString section, FString var) {
	
	//Config handler is GConfig I think...
	if (!GConfig) return FString("NULL");

	FString value;
	GConfig->GetString(*section,*var, value, filename);

	return GGameIni;

}

void AConfigOps::WriteCustomConfig(FString section, FString var, FString value) {

}