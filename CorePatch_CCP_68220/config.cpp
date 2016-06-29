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
	class Rifle;
	class G36C: Rifle
	{
	};
	class G36a: Rifle
	{
		class MuzzleFar: G36C
		{
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
	class M4A1;
	class M4A1_RCO_GL: M4A1
	{
		class M4_ACOG_Muzzle: M4A1
		{
			distanceZoomMax = 300;
			distanceZoomMin = 300;

			class OpticsModes
			{
				class ACOG
				{
					cameraDir = "";
					distanceZoomMax = 300;
					distanceZoomMin = 300;
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
					distanceZoomMax = 50;
					distanceZoomMin = 50;
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
};
