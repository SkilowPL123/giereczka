// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "giereczkaHUD.generated.h"

UCLASS()
class AgiereczkaHUD : public AHUD
{
	GENERATED_BODY()

public:
	AgiereczkaHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

