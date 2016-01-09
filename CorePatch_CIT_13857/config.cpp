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
	class AK_BASE;
	class AK_47_M: AK_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AK_47_M";
	};
	class AK_47_S: AK_47_M
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AK_47_S";
	};
	class AKS_GOLD: AK_47_S
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AKS_GOLD";
	};
	class AK_74: AK_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AK_74";
	};
	class AK_74_GL: AK_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AK_74_GL";
	};
	class AKS_BASE;
	class AKS_74: AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AKS_74";
	};
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
	class AKS_74_NSPU: AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AKS_74_NSPU";
	};
	class AKS_74_U: AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AKS_74_U";
	};
	class AKS_74_pso: AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\AKS_74_pso";

		class OpticsModes
		{
			class Scope
			{
				memoryPointCamera = "eye";
				opticsPPEffects[] = {
					"OpticsCHAbera3",
					"OpticsBlur3"
				};
			};
			class Ironsights: Scope
			{
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
		model = "\CorePatch\CorePatch_CIT_13857\models\AK_107_pso";

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
		model = "\CorePatch\CorePatch_CIT_13857\models\AK_107_GL_pso";

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
	class Rifle;
	class PK: Rifle
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\PK";
	};
	class Pecheneg: PK
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\Pecheneg";
		optics = 1;

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
	class bizon: Rifle
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\bizon";
	};
	class bizon_silenced: bizon
	{
		model = "\CorePatch\CorePatch_CIT_13857\models\bizon_silenced";
	};
};
