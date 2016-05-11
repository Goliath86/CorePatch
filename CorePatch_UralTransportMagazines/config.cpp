class CfgPatches {
	class CorePatch_UralTransportMagazines {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch", "CorePatch_Turrets"};
	};
};

class CfgVehicles {
	class Ural_Base_withTurret;
	class Ural_Base:Ural_Base_withTurret {};
	class UralOpen_Base:Ural_Base {};
	class UralReammo_Base:Ural_Base {
		transportMaxWeapons = 100;
		transportMaxMagazines = 1000;
	};
	class Ural_ZU23_Base:Ural_Base_withTurret	{class TransportMagazines {};};
	class Ural_ZU23_CDF:Ural_ZU23_Base		{class TransportMagazines {};};
	class Ural_ZU23_INS:Ural_ZU23_Base		{class TransportMagazines {};};
	class Ural_ZU23_Gue:Ural_ZU23_Base		{class TransportMagazines {};};
	class Ural_ZU23_TK_EP1:Ural_ZU23_Base		{class TransportMagazines {};};
	class Ural_ZU23_TK_GUE_EP1:Ural_ZU23_Base	{class TransportMagazines {};};
	class GRAD_Base:Ural_Base_withTurret		{class TransportMagazines {};};
	class GRAD_CDF:GRAD_Base			{class TransportMagazines {};};
	class GRAD_RU:GRAD_Base				{class TransportMagazines {};};
	class GRAD_INS:GRAD_Base			{class TransportMagazines {};};
	class GRAD_TK_EP1:GRAD_Base			{class TransportMagazines {};};
	class RM70_ACR:GRAD_Base			{class TransportMagazines {};};
	class UralRepair_Base:Ural_Base			{class TransportMagazines {};};
	class UralRefuel_Base:Ural_Base			{class TransportMagazines {};};
	class UralCivil:Ural_Base			{class TransportMagazines {};};
	class Ural_TK_CIV_EP1:Ural_Base			{class TransportMagazines {};};
	class UralCivil2:UralOpen_Base			{class TransportMagazines {};};
};