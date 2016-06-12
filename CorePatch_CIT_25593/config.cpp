class CfgPatches
{
	class CorePatch_CIT_25593
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 1470Rnd_127x108_YakB : VehicleMagazine
	{
		tracersEvery = 4;
	};
};
class CfgWeapons
{
	class MGun;
	class YakB : MGun
	{
		class manual : MGun
		{
			delete multiplier;

			burst = 7; // 0.1 s
			reloadTime = 0.014118; // 4250 SPM
		};
	};
};
