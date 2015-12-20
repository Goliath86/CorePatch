class CfgPatches
{
	class CorePatch_CIT_24693_24694
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Wheeled_APC;
	class BRDM2_Base : Wheeled_APC
	{
		delete canLock;
		delete viewCargoInExternal;
	};
};