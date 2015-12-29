class CfgPatches
{
	class CorePatch_CIT_13857_CCP_63107
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
	class AK_BASE: Rifle
	{
	};
	class AK_47_M: AK_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\akm";
	};
	class AK_47_S: AK_47_M
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\ak47s";
	};
	class AKS_GOLD: AK_47_S
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\ak47s_gold";
	};
	class AK_74: AK_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\ak_74";
	};
	class AK_74_GL: AK_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\ak_74_GL";
	};
	class AK_107_BASE: AK_BASE
	{
	};
	class AK_107_GL_kobra: AK_107_BASE
	{
	};
	class AK_107_GL_pso: AK_107_GL_kobra
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\AK107_GL_pso";

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
	class AK_107_pso: AK_107_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\AK107_pso";

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
	class AKS_BASE: AK_BASE
	{
	};
	class AKS_74: AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\aks74";
	};
	class AKS_74_GOSHAWK: AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\aks74_goshawk";

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
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\aks74_nspu";
	};
	class AKS_74_pso: AKS_BASE
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\aks74pso";

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
	class M16_base: Rifle
	{
	};
	class M4A1: M16_base
	{
	};
	class M4A1_Aim: M4A1
	{
	};
	class M4A1_AIM_SD_camo: M4A1_Aim
	{
	};
	class M4A1_HWS_GL_SD_Camo: M4A1_AIM_SD_camo
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\M4A1_Holo_GL_SD_camo";

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
	class M4A1_RCO_GL: M4A1
	{
		displayName = "$STR_DN_M4A1_RCO_GL_CP";
		irDistance = 100;
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m4a1_rco_gl";

		class M4_ACOG_Muzzle: M4A1
		{
			displayName = "$STR_DN_M4A1_RCO_GL_CP";
		};
	};
	class M4A1_HWS_GL: M4A1_RCO_GL
	{
		irDistance = 0;
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\M4A1_Holo_GL";

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
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\M4A1_Holo_GL_camo";
	};
	class M4SPR: M4A1
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m4_spr";
	};
	class M16A2: M16_base
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m16a2";
	};
	class M16A2GL: M16A2
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m16a2_gl";
	};
	class m16a4: M16A2
	{
		irDistance = 100;
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m16a4";
	};
	class M16A4_GL: m16a4
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m16a4_gl";
	};
	class M16A4_ACG_GL: M16A4_GL
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m16a4_acg_gl";
	};
	class m16a4_acg: m16a4
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m16a4_acg";
	};
	class M24: Rifle
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m24";
	};
	class M24_des_EP1: M24
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m24_desert";
	};
	class M240: Rifle
	{
	};
	class m240_scoped_EP1: M240
	{
		displayName = "$STR_DN_M240_SCOPED_EP1_CP";
	};
	class M249: Rifle
	{
	};
	class M249_m145_EP1: M249
	{
		displayName = "$STR_DN_M249_M145_EP1_CP";
	};
	class PK: Rifle
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\PK_MG_proxy";
	};
	class Pecheneg: PK
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\Pecheneg_MG_proxy";
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
	class SVD: Rifle
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\svd";
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
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\svd_desert";

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
	class Sa58P_EP1: Rifle
	{
	};
	class Sa58V_EP1: Sa58P_EP1
	{
	};
	class Sa58V_CCO_EP1: Sa58V_EP1
	{
		displayName = "$STR_DN_SA58V_CCO_EP1_CP";
	};
	class VSS_vintorez: Rifle
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\VSS_vintorez";
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
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\bizon";
	};
	class bizon_silenced: bizon 
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\bizon_silenced";
	};
	class ksvk: Rifle
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\ksvk";
		optics = 1;
	};
	class m107: Rifle
	{
		model = "\CorePatch\CorePatch_CIT_13857_CCP_63107\models\m107";
		optics = 1;
	};
};
