class CfgPatches
{
	class CorePatch_CIT_24764
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class SCAR_L_STD_Mk4CQT;
	class SCAR_L_STD_EGLM_RCO : SCAR_L_STD_Mk4CQT
	{
		displayName = "$STR_DN_SCAR_L_STD_EGLM_RCO_CP";
	};
};