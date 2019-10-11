// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class KimiTarget : TargetRules
{
	public KimiTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Kimi");
        ExtraModuleNames.Add("KimiTests");
    }
}
