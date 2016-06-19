class CfgPatches
{
	class CorePatch_CIT_27793
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Wheeled_APC;
	class BRDM2_Base : Wheeled_APC
	{
		delete accuracy;
	};
	class BRDM2_Gue : BRDM2_Base
	{
		accuracy = 0.30000001;
	};
	class BRDM2_ATGM_Base : BRDM2_Base
	{
		accuracy = 0.22;
	};
	class BRDM2_HQ_Base : BRDM2_Base
	{
		accuracy = 0.22;
	};
	class BRDM2_HQ_Gue : BRDM2_HQ_Base
	{
		accuracy = 0.30000001;
	};
	class BTR60_TK_EP1 : BRDM2_Base
	{
		accuracy = 0.30000001;
	};
	class GAZ_Vodnik_HMG : Wheeled_APC
	{
		accuracy = 0.30000001;
	};
	class BTR40_MG_base_EP1;
	class BTR40_MG_TK_GUE_EP1 : BTR40_MG_base_EP1
	{
		accuracy = 0.30000001;
	};
	class BTR40_MG_TK_INS_EP1 : BTR40_MG_base_EP1
	{
		accuracy = 0.30000001;
	};
	class BTR40_base_EP1 : BTR40_MG_base_EP1
	{
		accuracy = 0.22;
	};
	class BTR40_TK_GUE_EP1 : BTR40_base_EP1
	{
		accuracy = 0.30000001;
	};
	class BTR40_TK_INS_EP1 : BTR40_base_EP1
	{
		accuracy = 0.30000001;
	};
	class BTR90_Base;
	class BTR90 : BTR90_Base
	{
		accuracy = 0.30000001;
	};
	class BTR90_HQ : BTR90_Base
	{
		accuracy = 0.30000001;
	};
	class LAV25_Base;
	class LAV25 : LAV25_Base
	{
		accuracy = 0.30000001;
	};
	class LAV25_HQ : LAV25_Base
	{
		accuracy = 0.30000001;
	};
	class StrykerBase_EP1;
	class M1126_ICV_BASE_EP1 : StrykerBase_EP1
	{
		accuracy = 0.22;
	};
	class M1126_ICV_M2_EP1 : M1126_ICV_BASE_EP1
	{
		accuracy = 0.30000001;
	};
	class M1126_ICV_mk19_EP1 : M1126_ICV_BASE_EP1
	{
		accuracy = 0.30000001;
	};
	class M1128_MGS_EP1 : StrykerBase_EP1
	{
		accuracy = 0.30000001;
	};
	class M1133_MEV_EP1 : StrykerBase_EP1
	{
		accuracy = 0.30000001;
	};
	class M1135_ATGMV_EP1 : StrykerBase_EP1
	{
		accuracy = 0.30000001;
	};
};
