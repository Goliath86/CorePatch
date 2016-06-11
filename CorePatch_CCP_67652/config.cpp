class CfgPatches
{
	class CorePatch_CCP_67652
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Strategic;
	class Library_WeaponHolder : Strategic
	{
		transportMaxBackpacks = 1e9;
	};
};
