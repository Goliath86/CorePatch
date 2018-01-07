class CfgPatches
{
	class CorePatch_Magazines
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class OG7 : CA_LauncherMagazine
	{
		picture = "\CorePatch\CorePatch_Magazines\M_OG7V_ca.paa";
	};
	class CA_Magazine;
	class 30Rnd_9x19_MP5SD : CA_Magazine
	{
		model = "\ca\CommunityConfigurationProject_E\Gameplay_ActualModelsOfWeaponMagazinesVisibleOnTheGround\p3d\30Rnd_9x19_MP5.p3d";
	};
	class 20Rnd_9x19_EVOSD : 30Rnd_9x19_MP5SD
	{
		model = "\ca\weapons\mag_univ.p3d";
	};
	class VehicleMagazine;
	class 180Rnd_30mm_GSh301 : VehicleMagazine
	{
		displayName = "$STR_DN_GSH301_CP";
	};
	class 750Rnd_30mm_GSh301 : 180Rnd_30mm_GSh301
	{
		delete displayName;
	};
	class 100Rnd_762x54_PK;
	class 60Rnd_762x54_DT : 100Rnd_762x54_PK
	{
		delete ammo;
	};
	class 30Rnd_9x19_MP5;
	class 20Rnd_9x19_EVO : 30Rnd_9x19_MP5
	{
		model = "\ca\weapons\mag_univ.p3d";
	};
	class 230Rnd_30mmHE_2A42;
	class 1904Rnd_30mmAA_2A38M : 230Rnd_30mmHE_2A42
	{
		tracersEvery = 3;
	};
	class 4Rnd_Ch29;
	class 8Rnd_Ch29 : 4Rnd_Ch29
	{
		count = 8;
	};
};
