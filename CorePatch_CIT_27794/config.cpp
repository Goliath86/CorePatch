class CfgPatches
{
	class CorePatch_CIT_27794
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Tank;
	class BAF_FV510_D : Tank
	{
		accuracy = 0.30000001;
	};
	class M2A2_Base : Tank
	{
		accuracy = 0.2;
	};
	class M2A2_EP1 : M2A2_Base
	{
		accuracy = 0.30000001;
	};
	class M6_EP1 : M2A2_Base
	{
		accuracy = 0.30000001;
	};
	class M113_Base : Tank
	{
		accuracy = 0.2;
	};
	class M113_TK_EP1 : M113_Base
	{
		accuracy = 0.30000001;
	};
	class M113_UN_EP1 : M113_Base
	{
		accuracy = 0.30000001;
	};
	class M113Ambul_Base : M113_Base
	{
		accuracy = 0.23;
	};
	class M113Ambul_TK_EP1 : M113Ambul_Base
	{
		accuracy = 0.30000001;
	};
	class M113Ambul_UN_EP1 : M113Ambul_Base
	{
		accuracy = 0.30000001;
	};
	class MLRS : Tank
	{
		accuracy = 0.30000001;
	};
	class MLRS_base : MLRS
	{
		accuracy = 0.2;
	};
	class MLRS_DES_EP1 : MLRS_base
	{
		accuracy = 0.30000001;
	};
	class T34 : Tank
	{
		accuracy = 0.25;
	};
	class T34_base : T34
	{
		accuracy = 0.2;
	};
	class T34_TK_EP1 : T34_base
	{
		accuracy = 0.25;
	};
	class T34_TK_GUE_EP1 : T34_base
	{
		accuracy = 0.25;
	};
	class T55_Base : Tank
	{
		accuracy = 0.2;
	};
	class T55_TK_EP1 : T55_Base
	{
		accuracy = 0.25;
	};
	class T55_TK_GUE_EP1 : T55_Base
	{
		accuracy = 0.25;
	};
	class T90 : Tank
	{
		accuracy = 0.25;
	};
	class APC : Tank
	{
		delete accuracy;
	};
	class M1A1;
	class M1A1_base : M1A1
	{
		accuracy = 0.2;
	};
	class M1A1_US_DES_EP1 : M1A1_base
	{
		accuracy = 0.25;
	};
	class M1A2_TUSK_MG;
	class M1A2_TUSK_MG_base : M1A2_TUSK_MG
	{
		accuracy = 0.2;
	};
	class M1A2_US_TUSK_MG_EP1 : M1A2_TUSK_MG_base
	{
		accuracy = 0.25;
	};
	class T72_Base;
	class T72_TK_EP1 : T72_Base
	{
		accuracy = 0.25;
	};
	class ZSU_Base;
	class ZSU_TK_EP1 : ZSU_Base
	{
		accuracy = 0.30000001;
	};
	class Tracked_APC;
	class AAV : Tracked_APC
	{
		accuracy = 0.30000001;
	};
};
