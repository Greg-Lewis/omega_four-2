

using UnrealBuildTool;
using System.Collections.Generic;

public class Omega_FourTarget : TargetRules
{
	public Omega_FourTarget(TargetInfo Target)
	{
		Type = TargetType.Game;
	}

	//
	// TargetRules interface.
	//

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "Omega_Four" } );
	}
}
