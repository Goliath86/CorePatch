class CfgPatches
{
	class CorePatch_CCP_68114
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class M16_base;
	class M16A2: M16_base
	{
		class Single;
	};
	class FN_FAL: M16A2
	{
		modes[] = {
			"Single",
			"FullAuto"
		};

		class FullAuto: Single
		{
			autoFire = 1;
			displayName = "$STR_DN_MODE_FULLAUTO";
			maxRange = 200;
			midRange = 80;
			minRange = 0;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
		};
	};
};
