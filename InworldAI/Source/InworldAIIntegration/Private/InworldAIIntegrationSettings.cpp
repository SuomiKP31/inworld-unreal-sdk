/**
 * Copyright 2022-2024 Theai, Inc. dba Inworld AI
 *
 * Use of this source code is governed by the Inworld.ai Software Development Kit License Agreement
 * that can be found in the LICENSE.md file or at https://www.inworld.ai/sdk-license
 */


#include "InworldAIIntegrationSettings.h"

UInworldAIIntegrationSettings::UInworldAIIntegrationSettings(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	StudioApiUrl = { "api.inworld.ai" };
}
