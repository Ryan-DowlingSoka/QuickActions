﻿// Copyright Out-of-the-Box Plugins 2018-2021. All Rights Reserved.

#pragma once

#include "QuickMenuExtension.h"

#include "ToolbarMenuEditConfigurationExtension.generated.h"

/**
 * Add entries from the main frame toolbar -> Edit menu -> Configuration section
 */
UCLASS()
class UToolbarMenuEditConfigurationExtension : public UQuickMenuExtension
{
	GENERATED_BODY()

	virtual TArray<FQuickCommandEntry> GetCommands() override;
};