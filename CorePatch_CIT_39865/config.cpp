class CfgPatches
{
	class CorePatch_CIT_39865
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class 30Rnd_9x19_MP5;
	class 20Rnd_9x19_EVO : 30Rnd_9x19_MP5
	{
		count = 30;
		descriptionShort = "$STR_DSS_30RND_9X19_EVO_CP";
		displayName = "$STR_DN_30RND_9X19_EVO_CP";
	};
	class 30Rnd_9x19_MP5SD;
	class 20Rnd_9x19_EVOSD : 30Rnd_9x19_MP5SD
	{
		count = 30;
		descriptionShort = "$STR_DSS_30RND_9X19_EVOSD_CP";
		displayName = "$STR_DN_30RND_9X19_EVOSD_CP";
	};
};
