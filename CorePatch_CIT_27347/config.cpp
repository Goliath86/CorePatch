class CfgPatches
{
	class CorePatch_CIT_27347
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class MGun;
	class AGS30 : MGun
	{
		reloadTime = 0.15;
	};
	class MK19 : MGun
	{
		reloadTime = 0.15;
	};
};
