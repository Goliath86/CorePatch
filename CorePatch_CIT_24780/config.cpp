class CfgPatches
{
	class CorePatch_CIT_24780
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
	class BAF_L110A1_Aim : Rifle
	{
		aiDispersionCoefX = 14;
		aiDispersionCoefY = 14;
	};
};
