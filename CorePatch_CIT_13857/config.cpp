class CfgPatches
{
	class CorePatch_CIT_13857
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
	class VSS_vintorez: Rifle
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\VSS_vintorez";
		optics = 1;

		class OpticsModes
		{
			class Scope
			{
				cameraDir = "";
				distanceZoomMax = 200;
				distanceZoomMin = 200;
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
			class Ironsights: Scope
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 2;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
	};
	class AKS_BASE;
	class AKS_74_GOSHAWK: AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AKS_74_GOSHAWK";

		class OpticsModes
		{
			class Goshawk
			{
				cameraDir = "";
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.06944444;
				opticsZoomMax = 0.06944444;
				opticsZoomMin = 0.06944444;
				thermalMode[] = {0};
				useModelOptics = 1;
				visionMode[] = {"Ti"};
			};
			class Ironsights: Goshawk
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 2;
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				thermalMode[] = {};
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
	};
	class AKS_74_pso: AKS_BASE
	{
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		model = "\CorePatch\CorePatch_CIT_13857\models\AKS_74_pso";

		class OpticsModes
		{
			class Scope
			{
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "eye";
				opticsPPEffects[] = {
					"OpticsCHAbera3",
					"OpticsBlur3"
				};
			};
			class Ironsights: Scope
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				// memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 2;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
	};
	class AK_107_BASE;
	class AK_107_pso: AK_107_BASE
	{
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		model = "\CorePatch\CorePatch_CIT_13857\models\AK_107_pso";

		class OpticsModes
		{
			class Scope
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
					"OpticsBlur3"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
			class Ironsights: Scope
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 2;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
	};
	class AK_107_GL_kobra;
	class AK_107_GL_pso: AK_107_GL_kobra
	{
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		model = "\CorePatch\CorePatch_CIT_13857\models\AK_107_GL_pso";

		class OpticsModes
		{
			class Scope
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
					"OpticsBlur3"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
			class Ironsights: Scope
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 2;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
	};
	class PK;
	class Pecheneg: PK
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\Pecheneg";
		optics = 1;

		class OpticsModes
		{
			class Scope // 1P77
			{
				cameraDir = "";
				distanceZoomMax = 400;
				distanceZoomMin = 400;
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
			class Ironsights: Scope
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 2;
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
