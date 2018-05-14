// null

using UnrealBuildTool;
using System.Collections.Generic;

public class PhantasyTalesDevTarget : TargetRules
{
	public PhantasyTalesDevTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "PhantasyTalesDev" } );
	}
}
