// Developer : Masud Raihan Sagor
// What'sApp Number : +8801964998545
// Email : www.mrsagor2021@gmail.com
// Copyright Sparkelon @2025, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AdvancedDrawingBoard : ModuleRules
{
	public AdvancedDrawingBoard(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"UMG",
				"Slate",
				"HeadMountedDisplay",
				"SlateCore",
				"RenderCore",
				"RHI",
				"NetCore",
				"Networking"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"UMG",
				"ImageWrapper",
				"RenderCore",
				"Projects"
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
