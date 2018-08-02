class CfgPatches
{
	class CorePatch_CCP_63107
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
	class M24: Rifle
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M24";
	};
	class M24_des_EP1: M24
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M24_des_EP1";
	};
	class SVD: Rifle
	{
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		model = "\CorePatch\CorePatch_CCP_63107\models\SVD";
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
					"OpticsCHAbera3",
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
	class SVD_CAMO: SVD
	{
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
					"OpticsCHAbera3",
					"OpticsBlur3"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
		};
	};
	class SVD_des_EP1: SVD
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\SVD_des_EP1";

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
					"OpticsCHAbera3",
					"OpticsBlur3"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
		};
	};
	class ksvk: Rifle
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\ksvk";
		optics = 1;
	};
	class m107: Rifle
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\m107";
		optics = 1;
	};
	class M16_base;
	class M16A2: M16_base
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M16A2";
	};
	class M16A2GL: M16A2
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M16A2GL";
	};
	class m16a4: M16A2
	{
		irDistance = 100;
		model = "\CorePatch\CorePatch_CCP_63107\models\m16a4";
	};
	class M16A4_GL: m16a4
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M16A4_GL";
	};
	class M16A4_ACG_GL: M16A4_GL
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\m16a4_acg_gl";
		class OpticsModes
		{
			class ACOG // 4x zoom
			{
				opticsID = 1;
				useModelOptics = true;
				opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomInit= 0.0623;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir = "";
			};
			class Kolimator:ACOG
			{
				opticsID = 2;
				useModelOptics = false;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
		};
	};
	class m16a4_acg: m16a4
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\m16a4_acg";
		class OpticsModes
		{
			class ACOG // 4x zoom
			{
				opticsID = 1;
				useModelOptics = true;
				opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomInit= 0.0623;
				memoryPointCamera = "opticView";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				distanceZoomMin=300;
				distanceZoomMax=300;
				cameraDir = "";
			};
			class Kolimator:ACOG
			{
				opticsID = 2;
				useModelOptics = false;
				opticsFlare = false;
				opticsDisablePeripherialVision = false;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
			};
		};
	};
	class M4A1;
	class M4A1_RCO_GL: M4A1
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M4A1_RCO_GL";

		class M4_ACOG_Muzzle: M4A1
		{
			irDistance = 100;
		};
	};
	class M4SPR: M4A1
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M4SPR";
	};
};
