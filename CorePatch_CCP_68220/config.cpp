class CfgPatches
{
	class CorePatch_CCP_68220
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class M4A1;
	class M4A1_RCO_GL: M4A1
	{
		class M4_ACOG_Muzzle: M4A1
		{
			modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x";

			class OpticsModes
			{
				class ACOG
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 1;
					opticsPPEffects[] = {
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
					opticsZoomInit = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomMin = 0.0623;
					useModelOptics = 1;
					visionMode[] = {};
				};
				class Ironsights: ACOG
				{
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 2;
					opticsPPEffects[] = {};
					opticsZoomInit = 0.5;
					opticsZoomMax = 1.1;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
				};
			};
		};
	};
	class Rifle;
	class G36C: Rifle
	{
		modes[] = {
			"Single",
			"FullAuto"
		};
	};
	class G36_C_SD_eotech: G36C
	{
		modes[] = {
			"Single",
			"FullAuto"
		};
	};
	class G36a: Rifle
	{
		class MuzzleFar: G36C
		{
			displayName = "$STR_DN_G36";
			modes[] = {
				"Single",
				"FullAuto"
			};

			class OpticsModes
			{
				class Scope
				{
					cameraDir = "";
					distanceZoomMax = 100;
					distanceZoomMin = 100;
					memoryPointCamera = "opticView";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 1;
					opticsPPEffects[] = {
						"OpticsCHAbera1",
						"OpticsBlur2"
					};
					opticsZoomInit = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomMin = 0.0623;
					useModelOptics = 1;
					visionMode[] = {};
				};
				class Kolimator: Scope
				{
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 2;
					opticsPPEffects[] = {};
					opticsZoomInit = 0.5;
					opticsZoomMax = 1.1;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
				};
			};
		};
	};
	class G36A_camo: G36a
	{
		class MuzzleFar: MuzzleFar
		{
			class OpticsModes
			{
				class Scope
				{
					visionMode[] = {};
				};
				class Kolimator: Scope
				{
					delete visionMode;

					opticsPPEffects[] = {};
				};
			};
		};
	};
	class G36K: G36a
	{
		class MuzzleFar: MuzzleFar
		{
			displayName = "$STR_DN_G36K";
			modes[] = {
				"Single",
				"FullAuto"
			};
		};
	};
	class G36K_camo: G36K
	{
		class MuzzleFar: MuzzleFar
		{
			class OpticsModes
			{
				class Scope
				{
					visionMode[] = {};
				};
				class Kolimator: Scope
				{
					delete visionMode;

					opticsPPEffects[] = {};
				};
			};
		};
	};
};
