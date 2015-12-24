class CfgPatches
{
	class CorePatch_CCP_69186
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class Rifle;
	class M60A4_EP1: Rifle
	{
		htMin = 1;
	};
};
