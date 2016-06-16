class CfgPatches
{
	class CorePatch_CCP_67330_OA
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgFactionClasses
{
	class BIS_CZ
	{
		displayName = "$STR_DN_FN_BIS_CZ_CP";
	};
};
class CfgVehicles
{
	class CZ_Soldier_base_EP1;
	class CZ_Special_Forces_GL_DES_EP1 : CZ_Soldier_base_EP1
	{
		displayName = "$STR_DN_SOLDIER_GL_CP";
	};
	class Car;
	class hilux1_civil_3_open_EP1 : Car
	{
		displayName = "$STR_DN_HILUX1_CIVIL_3_OPEN_EP1_CP";
	};
	class MtvrRefuel_base;
	class MtvrRefuel_DES_EP1 : MtvrRefuel_base
	{
		displayName = "$STR_DN_MTVRREFUEL_DES_EP1_CP";
	};
	class US_Soldier_Base_EP1;
	class US_Soldier_GL_EP1 : US_Soldier_Base_EP1
	{
		displayName = "$STR_DN_SOLDIER_GL_CP";
	};
	class V3S_Base_EP1;
	class V3S_Refuel_TK_GUE_EP1 : V3S_Base_EP1
	{
		displayName = "$STR_DN_V3S_REFUEL_TK_GUE_EP1_CP";
	};
};
class CfgWeapons
{
	class AK_107_GL_kobra;
	class AK_107_GL_pso : AK_107_GL_kobra
	{
		displayName = "$STR_DN_AK_107_GL_PSO_CP";
	};
	class M4A1;
	class M4A1_RCO_GL : M4A1
	{
		displayName = "$STR_DN_M4A1_RCO_GL_CP";

		class M4_ACOG_Muzzle : M4A1
		{
			displayName = "$STR_DN_M4A1_RCO_GL_CP";
		};
	};
	class M24;
	class M40A3 : M24
	{
		descriptionShort = "$STR_DSS_M40A3_CP";
	};
	class M240;
	class m240_scoped_EP1 : M240
	{
		displayName = "$STR_DN_M240_SCOPED_EP1_CP";
	};
	class M249;
	class M249_m145_EP1 : M249
	{
		displayName = "$STR_DN_M249_M145_EP1_CP";
	};
	class Rifle;
	class AA12_PMC : Rifle
	{
		descriptionShort = "$STR_DSS_AA12_CP";
	};
	class G36C : Rifle
	{
		displayName = "$STR_DN_G36C_CP";
	};
	class G36_C_SD_eotech : G36C
	{
		displayName = "$STR_DN_G36C_SD_CP";
	};
	class G36a : Rifle
	{
		displayName = "$STR_DN_G36A_CP";

		class MuzzleFar : G36C
		{
			displayName = "$STR_DN_G36A_CP";
		};
	};
	class G36K : G36a
	{
		displayName = "$STR_DN_G36K_CP";

		class MuzzleFar : MuzzleFar
		{
			displayName = "$STR_DN_G36K_CP";
		};
	};
	class M60A4_EP1 : Rifle
	{
		descriptionShort = "$STR_DSS_M60A4_EP1_CP";
	};
	class SCAR_H_CQC_CCO;
	class SCAR_H_STD_EGLM_Spect : SCAR_H_CQC_CCO
	{
		descriptionShort = "$STR_DSS_SCAR_H_STD_EGLM_SPECT_CP";
	};
	class SCAR_L_STD_EGLM_RCO;
	class SCAR_L_STD_EGLM_TWS : SCAR_L_STD_EGLM_RCO
	{
		descriptionShort = "$STR_DSS_SCAR_L_STD_EGLM_TWS_CP";
	};
	class Sa58V_EP1;
	class Sa58V_CCO_EP1 : Sa58V_EP1
	{
		displayName = "$STR_DN_SA58V_CCO_EP1_CP";
	};
};
