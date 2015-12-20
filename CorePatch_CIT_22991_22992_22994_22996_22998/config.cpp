class CfgPatches
{
	class CorePatch_CIT_22991_22992_22994_22996_22998
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
	class 5Rnd_762x51_M24 : CA_Magazine
	{
		delete reloadMagazineSound;
		delete sound;
	};
	class 5x_22_LR_17_HMR : CA_Magazine
	{
		delete reloadMagazineSound;
		delete sound;
	};
	class 10Rnd_762x54_SVD : CA_Magazine
	{
		delete sound;
	};
	class 15Rnd_9x19_M9 : CA_Magazine
	{
		delete sound;
	};
	class 15Rnd_9x19_M9SD : 15Rnd_9x19_M9
	{
		delete sound;
	};
	class 20Rnd_762x51_DMR : CA_Magazine
	{
		delete reloadMagazineSound;
	};
	class 100Rnd_762x54_PK : CA_Magazine
	{
		delete sound;
	};
	class 200Rnd_556x45_M249 : CA_Magazine
	{
		delete reloadMagazineSound;
		delete sound;
	};
	class HandGrenade : CA_Magazine
	{
		delete sound;
	};
	class IR_Strobe_Target : CA_Magazine
	{
		delete sound;
	};
	class TimeBomb : CA_Magazine
	{
		delete sound;
	};
	class BAF_ied_v1 : TimeBomb
	{
		delete sound;
	};
	class PMC_ied_v1 : TimeBomb
	{
		delete sound;
	};
	class PipeBomb : TimeBomb
	{
		delete sound;
	};
	class VehicleMagazine : CA_Magazine
	{
	};
	class 2Rnd_Maverick_A10 : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class 2Rnd_FAB_250 : VehicleMagazine
	{
		delete sound;
		delete soundFly;
	};
	class 4Rnd_AT6_Mi24V : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
		delete soundHit;
	};
	class 4Rnd_AT9_Mi24P : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
		delete soundHit;
	};
	class 4Rnd_Ch29 : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class 4Rnd_R73 : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class 4Rnd_Sidewinder_AV8B : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class 6Rnd_GBU12_AV8B : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class 8Rnd_9M311 : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
		delete soundHit;
	};
	class 8Rnd_AT5_BMP2 : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class 8Rnd_Hellfire : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class 8Rnd_Stinger : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
		delete soundHit;
	};
	class 12Rnd_Vikhr_KA50 : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
		delete soundFly;
		delete soundHit;
	};
	class 14Rnd_FFAR : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class 40Rnd_80mm : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class 64Rnd_57mm : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
	class Warfare30Rnd82mmMortar : VehicleMagazine
	{
		delete reloadSound;
		delete sound;
	};
};