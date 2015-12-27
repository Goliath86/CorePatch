class CfgPatches
{
	class CorePatch_AddedGAU22
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {"GAU22"};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_AddedGAU22
		{
			list[] = {"CorePatch_AddedGAU22"};
		};
	};
};
class CfgMagazines
{
	class 300Rnd_25mm_GAU12;
	class 220Rnd_25mm_GAU22 : 300Rnd_25mm_GAU12
	{
		count = 220;
		displayName = "$STR_DN_GAU22_CP";
	};
};
class CfgWeapons
{
	class CannonCore;
	class GAU12 : CannonCore
	{
		magazines[] = {
			"300Rnd_25mm_GAU12",
			"220Rnd_25mm_GAU22"
		};

		class manual;
	};
	class GAU22 : GAU12
	{
		displayName = "$STR_DN_GAU22_CP";
		magazines[] = {
			"220Rnd_25mm_GAU22",
			"300Rnd_25mm_GAU12"
		};

		class manual : manual
		{
			burst = 5; // 0.1 s
			displayName = "$STR_DN_GAU22_CP";
			reloadTime = 0.018182; // 3300 SPM
		};
	};
};
class CfgVehicles
{
	class F35_base;
	class F35B : F35_base
	{
		magazines[] = {
			"220Rnd_25mm_GAU22",
			"2Rnd_GBU12",
			"2Rnd_Sidewinder_F35"
		};
		weapons[] = {
			"GAU22",
			"BombLauncherF35",
			"SidewinderLaucher_F35"
		};
	};
};