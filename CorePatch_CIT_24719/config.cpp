class CfgPatches
{
	class CorePatch_CIT_24719
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMovesBasic
{
	class Actions
	{
		class PistolStandActions;
		class PistolProneActions : PistolStandActions
		{
			gear = "";
		};
	};
};
