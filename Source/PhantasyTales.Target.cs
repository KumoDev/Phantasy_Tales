// null

using UnrealBuildTool;
using System.Collections.Generic;

public class PhantasyTalesTarget : TargetRules
{
	public PhantasyTalesTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "PhantasyTales" } );
	}
}
