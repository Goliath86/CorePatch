class CfgPatches
{
	class CorePatch_CIT_17245
	{
		requiredAddons[] = {"CorePatch_Weapons"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class SCAR_H_CQC_CCO;
	class SCAR_H_STD_EGLM_Spect : SCAR_H_CQC_CCO
	{
		class OpticsModes
		{
			class Specter // Elcan SpecterDR 1-4x
			{
				discreteFov[] = {
					0.5,
					0.0623
				};
				discreteInitIndex = 0;
				opticsZoomInit = 0.5;
				opticsZoomMax = 0.5;
			};
			class Ironsights : Specter
			{
				delete opticsZoomInit;
				
				discreteFov[] = {};
			};
		};
	};
};
