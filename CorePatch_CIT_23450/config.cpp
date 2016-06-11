class CfgPatches
{
	class CorePatch_CIT_23450
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Helicopter;
	class AH1_Base : Helicopter
	{
	};
	class AH1Z : AH1_Base
	{
		accuracy = 1.5;
	};
	class AH6_Base_EP1 : Helicopter
	{
	};
	class AH6J_EP1 : AH6_Base_EP1
	{
		accuracy = 2;
	};
	class MH6J_EP1 : AH6_Base_EP1
	{
		accuracy = 2;
	};
	class AH64_base_EP1 : Helicopter
	{
	};
	class AH64D : AH64_base_EP1
	{
		accuracy = 1.5;
	};
	class AH64D_Sidewinders : AH64D
	{
		accuracy = 1000;
	};
	class AH64D_EP1 : AH64_base_EP1
	{
		accuracy = 1.5;
	};
	class BAF_Apache_AH1_D : AH64D_EP1
	{
		accuracy = 1000;
	};
	class CH47_base_EP1 : Helicopter
	{
	};
	class CH_47F_EP1 : CH47_base_EP1
	{
		accuracy = 1.5;
	};
	class CH_47F_BAF : CH_47F_EP1
	{
		accuracy = 1000;
	};
	class CruiseMissile1 : Helicopter
	{
		accuracy = 2;
	};
	class Ka60_Base_PMC : Helicopter
	{
		accuracy = 0.5;
	};
	class Ka60_GL_BASE_PMC : Ka60_Base_PMC
	{
		accuracy = 1.5;
	};
	class Ka60_PMC : Ka60_Base_PMC
	{
		accuracy = 1.5;
	};
	class Mi17_base : Helicopter
	{
	};
	class Mi17_base_TK_EP1 : Mi17_base
	{
	};
	class Mi17_TK_EP1 : Mi17_base_TK_EP1
	{
		accuracy = 1000;
	};
	class Mi17_base_UN_EP1 : Mi17_base
	{
	};
	class Mi17_UN_CDF_EP1 : Mi17_base_UN_EP1
	{
		accuracy = 1000;
	};
	class Mi17_medevac_base : Mi17_base
	{
	};
	class Mi17_medevac_base_CDF : Mi17_medevac_base
	{
		delete accuracy;
	};
	class Mi17_medevac_base_Ins : Mi17_medevac_base
	{
		delete accuracy;
	};
	class Mi17_medevac_base_Ru : Mi17_medevac_base
	{
		delete accuracy;
	};
	class UH1_Base : Helicopter
	{
		accuracy = 0.5;
	};
	class UH1Y : UH1_Base
	{
		accuracy = 1.5;
	};
	class UH1H_base : Helicopter
	{
		accuracy = 0.5;
	};
	class UH1H_TK_EP1 : UH1H_base
	{
		accuracy = 1.5;
	};
	class UH1H_TK_GUE_EP1 : UH1H_base
	{
		accuracy = 1.5;
	};
	class UH60_Base : Helicopter
	{
	};
	class UH60M_base_EP1 : UH60_Base
	{
	};
	class UH60M_US_base_EP1 : UH60M_base_EP1
	{
		accuracy = 1.5;
	};
	class UH60M_EP1 : UH60M_US_base_EP1
	{
		accuracy = 1000;
	};
	class UH60M_MEV_EP1 : UH60M_US_base_EP1
	{
		accuracy = 1000;
	};
};
