class CfgPatches
{
	class CorePatch_CIT_71282
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
	class CZ805_A1_ACR : Rifle
	{
		modelOptics = "-";

		class OpticsModes
		{
			class Kolimator
			{
				cameraDir = "";
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};

			delete Mk4;
		};
	};
};
