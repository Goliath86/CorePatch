class CfgPatches
{
	class CorePatch_CIT_24659
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Tank;
	class M113_Base : Tank
	{
		delete hasCommander;
	};
};
