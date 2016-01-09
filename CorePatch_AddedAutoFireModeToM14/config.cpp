class CfgPatches
{
	class CorePatch_AddedAutoFireModeToM14
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle;
	class M14_EP1: Rifle
	{
		modes[] = {
			"Single",
			"FullAuto"
		};

		class FullAuto: Mode_FullAuto
		{
			begin1[] = {
				"ca\sounds\weapons\rifles\sniper_single_05",
				1.7782794,
				1,
				1000
			};
			dispersion = 0.00050000002;
			maxRange = 200;
			maxRangeProbab = 0.050000001;
			midRange = 80;
			midRangeProbab = 0.69999999;
			minRange = 0;
			minRangeProbab = 0.30000001;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			reloadTime = 0.085714286;
			soundBegin[] = {
				"begin1",
				1
			};
		};
		class Single: Mode_SemiAuto
		{
			delete displayName;

			reloadTime = 0.085714286;
		};
	};
};
