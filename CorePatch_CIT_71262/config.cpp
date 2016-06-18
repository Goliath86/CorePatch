class CfgPatches
{
	class CorePatch_CIT_71262
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_762x39_AK47 : CA_Magazine
	{
		initSpeed = 715;
	};
	class 30Rnd_762x39_SA58 : CA_Magazine
	{
		initSpeed = 705;
	};
	class 5Rnd_762x51_M24 : CA_Magazine
	{
		initSpeed = 830;
	};
	class 20Rnd_762x51_DMR : CA_Magazine
	{
		initSpeed = 850;
	};
	class 20Rnd_762x51_FNFAL : CA_Magazine
	{
		initSpeed = 823;
	};
	class 20Rnd_762x51_B_SCAR : CA_Magazine
	{
		initSpeed = 802;
	};
	class 100Rnd_762x51_M240 : CA_Magazine
	{
		initSpeed = 834;
	};
	class 10Rnd_762x54_SVD : CA_Magazine
	{
		initSpeed = 830;
	};
	class 100Rnd_762x54_PK : CA_Magazine
	{
		initSpeed = 825;
	};
	class 60Rnd_762x54_DT : 100Rnd_762x54_PK
	{
		initSpeed = 840;
	};
	class VehicleMagazine;
	class 1200Rnd_762x51_M240 : VehicleMagazine
	{
		initSpeed = 834;
	};
	class 4000Rnd_762x51_M134 : VehicleMagazine
	{
		initSpeed = 869;
	};
	class 1500Rnd_762x54_PKT : VehicleMagazine
	{
		initSpeed = 855;
	};
};
