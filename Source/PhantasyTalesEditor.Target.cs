// null

using UnrealBuildTool;
using System.Collections.Generic;

public class PhantasyTalesEditorTarget : TargetRules
{
	public PhantasyTalesEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "PhantasyTales" } );
	}
}
