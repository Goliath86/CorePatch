class CfgPatches
{
	class CorePatch_CCP_71144
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class BMP2_HQ_Base;
	class BMP2_HQ_TK_EP1: BMP2_HQ_Base
	{
		magazines[] = {
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag"
		};
	};
};
