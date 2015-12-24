class CfgPatches
{
	class CorePatch_CIT_24902
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Air : AllVehicles
	{
	};
	class Helicopter : Air
	{
	};
	class AW159_Lynx_BAF : Helicopter
	{
		driverCanSee = "31 + 32";
	};
	class CH47_base_EP1 : Helicopter
	{
		gunnerCanSee = "2 + 8 + 32";
	};
	class Ka60_Base_PMC : Helicopter
	{
		gunnerCanSee = "2 + 8 + 32";
	};
	class Mi17_base : Helicopter
	{
		gunnerCanSee = "2 + 8 + 32";
	};
	class UH1_Base : Helicopter
	{
		driverCanSee = "31 + 32";
		// gunnerCanSee = "2 + 4 + 8 + 32";
	};
	class UH1H_base : Helicopter
	{
		gunnerCanSee = "2 + 8 + 32";
	};
	class UH60_Base : Helicopter
	{
		gunnerCanSee = "2 + 8 + 32";
	};
	class Land : AllVehicles
	{
	};
	class LandVehicle : Land
	{
	};
	class Car : LandVehicle
	{
	};
	class BAF_Jackal2_BASE_D : Car
	{
		commanderCanSee = "2 + 8 + 32";
	};
	class HMMWV_Base : Car
	{
	};
	class HMMWV_Avenger : HMMWV_Base
	{
		gunnerCanSee = "2 + 4 + 8 + 16";
	};
	class HMMWV_Avenger_base : HMMWV_Avenger
	{
	};
	class HMMWV_Avenger_DES_EP1 : HMMWV_Avenger_base
	{
		gunnerCanSee = "2 + 4 + 8 + 16";
	};
	class HMMWV_M998_crows_M2_DES_EP1 : HMMWV_Base
	{
		gunnerCanSee = "2 + 4 + 8 + 16";
		radarType = 0;
	};
	class HMMWV_M998_crows_MK19_DES_EP1 : HMMWV_Base
	{
		gunnerCanSee = "2 + 4 + 8 + 16";
		radarType = 0;
	};
	class HMMWV_M998A2_SOV_DES_EP1 : HMMWV_Base
	{
		commanderCanSee = "2 + 8 + 32";
	};
	class HMMWV_TOW : HMMWV_Base
	{
		gunnerCanSee = "2 + 8 + 32";
		radarType = 0;
	};
	class LandRover_Base : Car
	{
	};
	class LandRover_Special_CZ_EP1 : LandRover_Base
	{
		commanderCanSee = "2 + 8 + 32";
	};
	class Wheeled_APC : Car
	{
	};
	class BRDM2_Base : Wheeled_APC
	{
	};
	class BRDM2_HQ_Base : BRDM2_Base
	{
		commanderCanSee = "2 + 8 + 32";
	};
	class BTR60_TK_EP1 : BRDM2_Base
	{
		gunnerCanSee = 31;
	};
	class BTR90_Base : Wheeled_APC
	{
		driverCanSee = 31;
		gunnerCanSee = 31;
	};
	class BTR90_HQ : BTR90_Base
	{
		gunnerCanSee = "2 + 8 + 32";
	};
	class GAZ_Vodnik_HMG : Wheeled_APC
	{
		gunnerCanSee = 31;
	};
	class GAZ_Vodnik : GAZ_Vodnik_HMG
	{
		commanderCanSee = "2 + 8 + 32";
		gunnerCanSee = "2 + 8 + 32";
		radarType = 0;
	};
	class LAV25_Base : Wheeled_APC
	{
		driverCanSee = 31;
		gunnerCanSee = 31;
	};
	class LAV25_HQ : LAV25_Base
	{
		commanderCanSee = "2 + 8 + 32";
	};
	class Tank : LandVehicle
	{
	};
	class M113_Base : Tank
	{
		gunnerCanSee = "2 + 8 + 32";
	};
	class Tracked_APC : Tank
	{
	};
	class BMP2_Base : Tracked_APC
	{
	};
	class BMP2_HQ_Base : BMP2_Base
	{
		gunnerCanSee = "2 + 8 + 32";
	};
};
