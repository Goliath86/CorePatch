class CfgPatches
{
	class CorePatch_CIT_5321
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class OG7 : CA_LauncherMagazine
	{
		modelSpecial = "\CorePatch\CorePatch_CIT_5321\models\RPG7V_OG7";
	};
	class PG7V : CA_LauncherMagazine
	{
		modelSpecial = "\CorePatch\CorePatch_CIT_5321\models\RPG7V_PG7V";
	};
	class PG7VL : PG7V
	{
		modelSpecial = "\CorePatch\CorePatch_CIT_5321\models\RPG7V_PG7VL";
	};
	class PG7VR : PG7V
	{
		modelSpecial = "\CorePatch\CorePatch_CIT_5321\models\RPG7V_PG7VR";
	};
};
class CfgWeapons
{
	class Launcher;
	class RPG7V : Launcher
	{
		model = "\CorePatch\CorePatch_CIT_5321\models\RPG7V";
		modelOptics = "\CorePatch\CorePatch_CIT_5321\models\2Dscope_PGO7";

		class OpticsModes // PGO-7
		{
			class Scope
			{
				cameraDir = "";
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "optic";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsId = 1;
				opticsPPEffects[] = {
					"OpticsCHAbera3",
					"OpticsBlur3"
				};
				opticsZoomInit = 0.125; // 2x
				opticsZoomMax = 0.125;
				opticsZoomMin = 0.125;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
			class Ironsights : Scope
			{
				distanceZoomMax = 200;
				distanceZoomMin = 200;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsId = 2;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
	};
};
