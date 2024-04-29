// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Galaga_USFX_LAB06 : ModuleRules
{
	public Galaga_USFX_LAB06(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
