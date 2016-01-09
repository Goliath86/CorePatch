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
	class M4A1;
	class M4A1_RCO_GL: M4A1
	{
		displayName = "$STR_DN_M4A1_RCO_GL_CP";
		irDistance = 100;
		model = "\CorePatch\CorePatch_CCP_63107\models\M4A1_RCO_GL";

		class M4_ACOG_Muzzle: M4A1
		{
			displayName = "$STR_DN_M4A1_RCO_GL_CP";
		};
	};
	class M4A1_HWS_GL: M4A1_RCO_GL
	{
		irDistance = 0;
		model = "\CorePatch\CorePatch_CCP_63107\models\M4A1_HWS_GL";

		class FlashLight
		{
			ambient[] = {0.1, 0.1, 0.1, 1};
			angle = 30;
			brightness = 0.1;
			color[] = {0.89999998, 0.89999998, 0.69999999, 0.89999998};
			direction = "flash dir";
			position = "flash";
			scale[] = {1, 1, 0.5};
		};
	};
	class M4A1_HWS_GL_Camo: M4A1_HWS_GL
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M4A1_HWS_GL_Camo";
	};
	class M4SPR: M4A1
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M4SPR";
	};
	class M4A1_AIM_SD_camo;
	class M4A1_HWS_GL_SD_Camo: M4A1_AIM_SD_camo
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M4A1_HWS_GL_SD_Camo";

		class FlashLight
		{
			ambient[] = {0.1, 0.1, 0.1, 1};
			angle = 30;
			brightness = 0.1;
			color[] = {0.89999998, 0.89999998, 0.69999999, 0.89999998};
			direction = "flash dir";
			position = "flash";
			scale[] = {1, 1, 0.5};
		};
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
		model = "\CorePatch\CorePatch_CCP_63107\models\M16A4_ACG_GL";
	};
	class m16a4_acg: m16a4
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\m16a4_acg";
	};
	class M240;
	class m240_scoped_EP1: M240
	{
		displayName = "$STR_DN_M240_SCOPED_EP1_CP";
	};
	class M249;
	class M249_m145_EP1: M249
	{
		displayName = "$STR_DN_M249_M145_EP1_CP";
	};
	class Sa58V_EP1;
	class Sa58V_CCO_EP1: Sa58V_EP1
	{
		displayName = "$STR_DN_SA58V_CCO_EP1_CP";
	};
	class Rifle;
	class M24: Rifle
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M24";
	};
	class M24_des_EP1: M24
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M24_des_EP1";
	};
	class M1014: Rifle
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\M1014";
	};
	class SVD: Rifle
	{
		model = "\CorePatch\CorePatch_CCP_63107\models\SVD";
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
				distanceZoomMax = 200;
				distanceZoomMin = 200;
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
				distanceZoomMax = 200;
				distanceZoomMin = 200;
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
};
