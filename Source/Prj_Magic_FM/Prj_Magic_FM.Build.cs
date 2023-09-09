// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Prj_Magic_FM : ModuleRules
{
	public Prj_Magic_FM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
