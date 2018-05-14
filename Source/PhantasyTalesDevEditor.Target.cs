// null

using UnrealBuildTool;
using System.Collections.Generic;

public class PhantasyTalesDevEditorTarget : TargetRules
{
	public PhantasyTalesDevEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "PhantasyTalesDev" } );
	}
}
