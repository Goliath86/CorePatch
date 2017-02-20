class CfgPatches
{
	class CorePatch_Weapons
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {
			"BAF_GMG_Tripod_W_NoDisassembly",
			"BAF_GPMG_Minitripod_W_NoDisassembly",
			"BAF_L2A1_Minitripod_W_NoDisassembly",
			"BAF_L2A1_Tripod_W_NoDisassembly"
		};
		weapons[] = {
			"M4A3_EP1",
			"M4A3_RCO_EP1"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_Weapons
		{
			list[] = {"CorePatch_Weapons"};
		};
	};
};
class Mode_FullAuto;
class Mode_Burst;
class Mode_SemiAuto;
class CfgWeapons
{
	class Default;
	class Binocular : Default
	{
		opticsZoomInit = 0.046999998; // 5.3x
	};
	class Binocular_Vector : Binocular // Vector 21
	{
		opticsZoomInit = 0.024900001; // 10x
		opticsZoomMax = 0.024900001;
		opticsZoomMin = 0.024900001;
	};
	class Laserdesignator : Binocular // AN/PEQ-1A SOFLAM
	{
		opticsZoomInit = 0.024900001; // 10x
		opticsZoomMax = 0.024900001;
		opticsZoomMin = 0.024900001;
	};
	class NVGoggles : Binocular
	{
		opticsZoomInit = 1;
	};
	class CannonCore;
	class 2A14 : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 4;
			reloadTime = 0.03; // 2000 SPM
		};
	};
	class 2A28 : CannonCore
	{
		reloadSound[] = {
			"\ca\Sounds\weapons\cannon\gun125reload",
			1,
			1
		};
		sound[] = {
			"\ca\Sounds\weapons\cannon\gun125",
			31.622778,
			1
		};
	};
	class 2A38M : CannonCore
	{
		multiplier = 1;
		reloadTime = 0.015384615; // 3900 SPM

		class manual : CannonCore
		{
			delete multiplier;

			burst = 4;
			reloadTime = 0.015384615; // 3900 SPM
		};
	};
	class 2A42 : CannonCore
	{
		class LowROF : Mode_FullAuto
		{
			displayName = "$STR_DN_2A42_MODE_LOW_CP";
			reloadTime = 0.3; // 200 SPM
		};
		class HighROF : LowROF
		{
			displayName = "$STR_DN_2A42_MODE_HIGH_CP";
			reloadTime = 0.109090909; // 550 SPM
		};
	};
	class 2A72 : CannonCore
	{
		class manual : CannonCore
		{
			reloadTime = 0.171428571; // 350 SPM
		};
	};
	class AZP85 : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 4;
			reloadTime = 0.017647058; // 3400 SPM
		};
	};
	class GAU8 : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 13; // 0.2 s
			reloadTime = 0.015384615; // 3900 SPM
		};
	};
	class GAU12 : CannonCore
	{
		class manual : CannonCore
		{
			burst = 6; // 0.1 s
			reloadTime = 0.016666666; // 3600 SPM
			sound[] = {
				"\Ca\Sounds_E\Weapons_E\Gatling\gatling_250ms",
				3.1622777,
				1,
				1100
			};
		};
		class close : manual
		{
			soundBurst = 1;
		};
		class medium : close
		{
			aiRateOfFireDistance = 900;
		};
	};
	class GSh23L : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 11; // 0.2 s
			reloadTime = 0.01875; // 3200 SPM
			sound[] = {
				"\Ca\sounds\Weapons\cannon\A10vulcanIV",
				3.1622777,
				1,
				1200
			};
		};
	};
	class GSh301 : CannonCore // 1500 SPM
	{
		displayName = "$STR_DN_GSH301_CP";
		magazines[] = {
			"180Rnd_30mm_GSh301",
			"750Rnd_30mm_GSh301"
		};

		class manual : CannonCore
		{
			burst = 5; // 0.2 s
			displayName = "$STR_DN_GSH301_CP";
			initSpeed = 860;
		};
	};
	class GSh302 : CannonCore
	{
		displayName = "$STR_DN_GSH302_CP";
		magazines[] = {
			"750Rnd_30mm_GSh301",
			"180Rnd_30mm_GSh301"
		};

		class manual : CannonCore
		{
			burst = 10; // 0.2 s
			displayName = "$STR_DN_GSH302_CP";
			initSpeed = 870;
			reloadTime = 0.02; // 3000 SPM
			sound[] = {
				"\Ca\sounds\Weapons\cannon\A10vulcanIV",
				3.1622777,
				1,
				1200
			};
		};
	};
	class M168 : CannonCore
	{
		class manual : CannonCore
		{
			delete multiplier;

			burst = 20; // 0.2 s
			reloadTime = 0.01; // 6000 SPM
			sound[] = {
				"\Ca\Sounds_E\Weapons_E\Gatling\gatling_burst_1",
				3.1622777,
				1,
				1100
			};
		};
	};
	class M197 : CannonCore
	{
		class manual : CannonCore
		{
			burst = 5;
			reloadTime = 0.04; // 1500 SPM
			sound[] = {
				"\Ca\sounds\Weapons\cannon\M197_5shots_rotation_end",
				10,
				1,
				1200
			};
		};
	};
	class MGun;
	class M32_heli : MGun
	{
		sound[] = {
			"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_1",
			1,
			1,
			200
		};
	};
	class M134 : MGun
	{
		class LowROF; // 2000 SPM
		class HighROF : LowROF
		{
			reloadTime = 0.045; // 4000 SPM
		};
		class close;
		class short;
		class medium;
		class far;
	};
	class TwinM134 : M134
	{
		class LowROF : LowROF // 4000 SPM
		{
			delete reloadTime;
		};
		class HighROF : HighROF // 8000 SPM
		{
			delete reloadTime;
		};
		class close : close
		{
			delete reloadTime;
		};
		class short : short
		{
			delete reloadTime;
		};
		class medium : medium
		{
			delete reloadTime;
		};
		class far : far
		{
			delete reloadTime;
		};
	};
	class YakB : MGun
	{
		class manual : MGun
		{
			sound[] = {
				"\Ca\sounds\Weapons\cannon\gsh301",
				3.1622777,
				1,
				1200
			};
		};
	};
	class MissileLauncher;
	class AT3Launcher : MissileLauncher
	{
		sound[] = {
			"\ca\Sounds\weapons\cannon\Javelin1",
			31.622778,
			1
		};
		soundFly[] = {
			"\ca\Sounds\weapons\cannon\rocket_fly1",
			25.118866,
			0.80000001
		};
	};
	class Igla_twice : MissileLauncher
	{
		magazineReloadTime = 5;
	};
	class Rifle;
	class AA12_PMC : Rifle
	{
		descriptionShort = "$STR_DSS_AA12_CP";
	};
	class BAF_AS50_scoped : Rifle // Schmidt & Bender PM II/LP 3-12x50mm
	{
		discreteFov[] = {};
		opticsZoomInit = 0.082999997;
		opticsZoomMax = 0.082999997;
		opticsZoomMin = 0.0208;

		class Single : Mode_SemiAuto
		{
			displayName = "";
		};
	};
	class BAF_AS50_TWS : BAF_AS50_scoped
	{
		discreteFov[] = {0.075499997, 0.024900001};
		opticsPPEffects[] = {};
		opticsZoomInit = 0.075499997;
		opticsZoomMax = 0.075499997; // 3.3x
		opticsZoomMin = 0.024900001; // 10x
	};
	class BAF_L86A2_ACOG : Rifle
	{
		visionMode[] = {};

		class OpticsModes
		{
			class ACOG
			{
				visionMode[] = {};
			};
			class Kolimator : ACOG
			{
				delete visionMode;

				opticsPPEffects[] = {};
			};
		};
	};
	class BAF_LRR_scoped : Rifle // Schmidt & Bender PM II/LP 3-12x50mm
	{
		discreteFov[] = {};
		opticsZoomInit = 0.082999997;
		opticsZoomMax = 0.082999997;
		opticsZoomMin = 0.0208;

		class Single : Mode_SemiAuto
		{
			displayName = "";
		};
	};
	class DMR : Rifle // Leupold Mark 4 LR/T 3.5-10x40mm M3
	{
		optics = 1;
		opticsPPEffects[] = {
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		visionMode[] = {"Normal"};

		class Single : Mode_SemiAuto
		{
			displayName = "";
		};
	};
	class G36C : Rifle
	{
		displayName = "$STR_DN_G36C_CP";
		modes[] = {
			"Single",
			"FullAuto"
		};
	};
	class G36_C_SD_eotech : G36C
	{
		displayName = "$STR_DN_G36C_SD_CP";
		modes[] = {
			"Single",
			"FullAuto"
		};
	};
	class G36a : Rifle
	{
		displayName = "$STR_DN_G36A_CP";

		class MuzzleFar : G36C
		{
			modes[] = {
				"Single",
				"FullAuto"
			};
		};
	};
	class G36A_camo : G36a
	{
		class MuzzleFar : MuzzleFar
		{
			class OpticsModes
			{
				class Scope
				{
					visionMode[] = {};
				};
				class Kolimator : Scope
				{
					delete visionMode;

					opticsPPEffects[] = {};
				};
			};
		};
	};
	class G36K : G36a
	{
		displayName = "$STR_DN_G36K_CP";

		class MuzzleFar : MuzzleFar
		{
			modes[] = {
				"Single",
				"FullAuto"
			};
		};
	};
	class G36K_camo : G36K
	{
		class MuzzleFar : MuzzleFar
		{
			class OpticsModes
			{
				class Scope
				{
					visionMode[] = {};
				};
				class Kolimator : Scope
				{
					delete visionMode;

					opticsPPEffects[] = {};
				};
			};
		};
	};
	class BAF_L110A1_Aim : Rifle
	{
		class manual : Mode_FullAuto
		{
			displayName = "";
		};
	};
	class M14_EP1 : Rifle
	{
		modes[] = {
			"Single",
			"FullAuto"
		};

		class Single : Mode_SemiAuto
		{
			delete displayName;
		};
		class FullAuto : Single
		{
			autoFire = 1;
			dispersion = 0.00050000002;
			displayName = "$STR_DN_MODE_FULLAUTO";
			maxRange = 200;
			midRange = 80;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
		};
	};
	class M24 : Rifle
	{
		opticsZoomInit = 0.071099997;
		opticsZoomMax = 0.071099997;

		class OpticsModes
		{
			class StepScope // Leupold Mark 4 LR/T 3.5-10x40mm M3
			{
				memoryPointCamera = "eye";
				opticsZoomInit = 0.071099997;
				opticsZoomMax = 0.071099997;
			};
		};
	};
	class M40A3 : M24
	{
		descriptionShort = "$STR_DSS_M40A3_CP";
	};
	class huntingrifle : M24
	{
		class OpticsModes : OpticsModes
		{
			class StepScope : StepScope // Meopta
			{
				opticsPPEffects[] = {
					"OpticsCHAbera2",
					"OpticsBlur2"
				};
				opticsZoomInit = 0.082999997;
				opticsZoomMax = 0.082999997; // 3x
				opticsZoomMin = 0.0208; // 12x
			};
		};
	};
	class M60A4_EP1 : Rifle
	{
		descriptionShort = "$STR_DSS_M60A4_CP";
	};
	class M110_TWS_EP1 : Rifle
	{
		class OpticsModes
		{
			class HTWS;
		};
	};
	class M110_NVG_EP1 : M110_TWS_EP1
	{
		class OpticsModes : OpticsModes
		{
			class StepScope : HTWS // AN/PVS-10 8.5x
			{
				discreteFov[] = {};
			};
		};
	};
	class M1014 : Rifle
	{
		model = "\CorePatch\CorePatch_Weapons\models\M1014";

		class Single : Mode_SemiAuto
		{
			displayName = "";
		};
	};
	class Saiga12K : Rifle
	{
		class Single : Mode_SemiAuto
		{
			displayName = "";
		};
	};
	class m8_base : Rifle
	{
		delete visionMode;

		opticsFlare = 1;
		opticsZoomInit = 0.070821531; // 3.5x
		opticsZoomMax = 0.070821531;
		opticsZoomMin = 0.070821531;
	};
	class m8_carbineGL : m8_base
	{
		displayName = "$STR_DN_XM8_GL_CP";
	};
	class m8_sharpshooter : m8_base
	{
		class OpticsModes
		{
			class Scope
			{
				visionMode[] = {};
			};
		};
	};
	class m8_SAW : m8_sharpshooter
	{
		class Manual : Mode_FullAuto
		{
			displayName = "";
		};
	};
	class m107 : Rifle
	{
		class OpticsModes
		{
			class StepScope // Leupold Mark 4 LR/T 4.5-14x40mm Target
			{
				memoryPointCamera = "eye";
			};
		};
	};
	class AK_74;
	class RPK_74 : AK_74
	{
		class manual : Mode_FullAuto
		{
			delete displayName;
		};
	};
	class AK_107_BASE;
	class AK_107_kobra : AK_107_BASE
	{
		displayName = "$STR_DN_AK107_KOBRA_CP";
	};
	class AK_107_GL_kobra : AK_107_BASE
	{
		displayName = "$STR_DN_AK107_GL_KOBRA_CP";
	};
	class AK_107_GL_pso : AK_107_GL_kobra
	{
		displayName = "$STR_DN_AK107_GL_PSO_CP";
	};
	class AK_107_pso : AK_107_BASE
	{
		displayName = "$STR_DN_AK107_PSO_CP";
	};
	class L85A2_base_BAF;
	class BAF_L85A2_RIS_ACOG : L85A2_base_BAF
	{
		visionMode[] = {};

		class OpticsModes
		{
			class ACOG
			{
				visionMode[] = {};
			};
			class Kolimator : ACOG
			{
				delete visionMode;

				opticsPPEffects[] = {};
			};
		};
	};
	class BAF_L85A2_RIS_CWS : L85A2_base_BAF // Qioptiq KITE Mk4
	{
		discreteFov[] = {};
		discreteInitIndex = 0;
		opticsDisablePeripherialVision = 1;
		opticsFlare = 1;
		opticsZoomInit = 0.0623; // 4x
		opticsZoomMax = 0.0623;
		opticsZoomMin = 0.0623;
		thermalMode[] = {};
		visionMode[] = {"NVG"};
	};
	class BAF_L85A2_RIS_SUSAT : L85A2_base_BAF
	{
		opticsZoomInit = 0.0623;
		opticsZoomMax = 0.0623;
		opticsZoomMin = 0.0623;
		visionMode[] = {};

		class OpticsModes
		{
			class SUSAT
			{
				opticsZoomInit = 0.0623; // 4x
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				visionMode[] = {};
			};
			class ironsights : SUSAT
			{
				delete visionMode;

				opticsPPEffects[] = {};
			};
		};
	};
	class M16_base;
	class M4A1 : M16_base
	{
		class Single;
	};
	class M4A1_RCO_GL : M4A1
	{
		displayName = "$STR_DN_M4A1_RCO_GL_CP";

		class M4_ACOG_Muzzle : M4A1
		{
			modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x";
		};
	};
	class M4A1_HWS_GL : M4A1_RCO_GL
	{
		model = "\CorePatch\CorePatch_Weapons\models\M4A1_HWS_GL";

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
	class M4A1_HWS_GL_camo : M4A1_HWS_GL
	{
		model = "\CorePatch\CorePatch_Weapons\models\M4A1_HWS_GL_camo";
	};
	class M4SPR : M4A1 // Leupold Mark 4 LR/T 3.5-10x40mm LR/T M3 Illum. ret.
	{
		opticsFlare = 1;
		opticsZoomInit = 0.071099997;
		opticsZoomMax = 0.071099997;
		opticsZoomMin = 0.024900001;
		visionMode[] = {"Normal"};

		class Single : Single
		{
			displayName = "";
		};
	};
	class M4A3_CCO_EP1 : M16_base
	{
		descriptionShort = "$STR_DSS_M4A3_CCO_CP";
		opticsDisablePeripherialVision = 0.67000002;
	};
	class M4A3_EP1 : M4A3_CCO_EP1
	{
		descriptionShort = "$STR_DSS_M4A3_CP";
		displayName = "$STR_EP1_DN_M4A3_EP1";
		handAnim[] = {};
		model = "\ca\weapons_E\m4a3\m4a3";
		picture = "\ca\weapons_E\Data\icons\m4a3_CA.paa";

		class Library
		{
			libTextDesc = "$STR_LIB_M4A3_CP";
		};
	};
	class M4A3_RCO_GL_EP1 : M4A3_CCO_EP1
	{
		descriptionShort = "$STR_DSS_M4A3_RCO_GL_CP";
		opticsZoomInit = 0.0623; // 4x

		class OpticsModes
		{
			class ACOG
			{
				opticsPPEffects[] = {
					"OpticsCHAbera2",
					"OpticsBlur2"
				};
				visionMode[] = {};
			};
			class Kolimator : ACOG
			{
				delete visionMode;

				opticsPPEffects[] = {};
			};
		};
	};
	class M4A3_RCO_EP1 : M4A3_RCO_GL_EP1
	{
		descriptionShort = "$STR_DSS_M4A3_RCO_CP";
		displayName = "$STR_DN_M4A3_RCO_CP";
		handAnim[] = {
			"OFP2_ManSkeleton",
			"\Ca\weapons_E\SCAR\Data\Anim\SCAR.rtm"
		};
		model = "\ca\weapons_E\m4a3\m4a3acog";
		muzzles[] = {"this"};
		picture = "\ca\weapons_E\Data\icons\m4a3acog_CA.paa";

		class Library
		{
			libTextDesc = "$STR_LIB_M4A3_RCO_CP";
		};
	};
	class SCAR_H_Base;
	class SCAR_H_LNG_Sniper : SCAR_H_Base
	{
		opticsZoomInit = 0.1;
		opticsZoomMax = 0.1;
		opticsZoomMin = 0.03125;

		class OpticsModes
		{
			class StepScope // Leupold Mark 4 MR/T 2.5-8x36mm M2
			{
				opticsZoomInit = 0.1;
				opticsZoomMax = 0.1;
				opticsZoomMin = 0.03125;
			};
		};
	};
	class SCAR_H_LNG_Sniper_SD : SCAR_H_Base
	{
		opticsZoomInit = 0.227272727;
		opticsZoomMax = 0.227272727;
		opticsZoomMin = 0.0623;

		class OpticsModes
		{
			class StepScope // Zeiss Victory HT 1.1-4x24mm
			{
				opticsZoomInit = 0.227272727;
				opticsZoomMax = 0.227272727;
				opticsZoomMin = 0.0623;
			};
		};
	};
	class SCAR_L_Base;
	class SCAR_L_STD_Mk4CQT : SCAR_L_Base
	{
		class OpticsModes
		{
			class Mk4 // Leupold Mark 4 CQ/T 1-3x14mm
			{
				visionMode[] = {};
			};
			class Kolimator : Mk4
			{
				delete visionMode;

				opticsPPEffects[] = {};
			};
		};
	};
	class SCAR_L_STD_EGLM_RCO : SCAR_L_STD_Mk4CQT
	{
		class OpticsModes
		{
			class ACOG
			{
				visionMode[] = {};
			};
			class Kolimator : ACOG
			{
				delete visionMode;

				opticsPPEffects[] = {};
			};
		};
	};
	class SCAR_L_STD_EGLM_TWS : SCAR_L_STD_EGLM_RCO
	{
		descriptionShort = "$STR_DSS_SCAR_L_STD_EGLM_TWS_CP";
	};
	class FN_FAL;
	class FN_FAL_ANPVS4 : FN_FAL
	{
		opticsFlare = 1;
	};
	class M4A1_AIM_SD_camo;
	class M4A1_HWS_GL_SD_Camo : M4A1_AIM_SD_camo
	{
		model = "\CorePatch\CorePatch_Weapons\models\M4A1_HWS_GL_SD_Camo";

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
	class m16a4;
	class m16a4_acg : m16a4
	{
		modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x";
	};
	class M16A4_GL;
	class M16A4_ACG_GL : M16A4_GL
	{
		modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x";
	};
	class M240;
	class m240_scoped_EP1 : M240
	{
		displayName = "$STR_DN_M240_SCOPED_CP";
		optics = 1;
		visionMode[] = {};

		class OpticsModes
		{
			class M145
			{
				visionMode[] = {};
			};
		};
	};
	class M249;
	class M249_TWS_EP1 : M249
	{
		optics = 1;
	};
	class M249_m145_EP1 : M249
	{
		displayName = "$STR_DN_M249_M145_CP";
		optics = 1;
		visionMode[] = {};

		class OpticsModes
		{
			class M145
			{
				visionMode[] = {};
			};
		};
	};
	class SCAR_H_CQC_CCO;
	class SCAR_H_STD_EGLM_Spect : SCAR_H_CQC_CCO
	{
		descriptionShort = "$STR_DSS_SCAR_H_STD_EGLM_SPECT_CP";

		class OpticsModes
		{
			class Specter // Elcan SpecterDR 1-4x
			{
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				visionMode[] = {};
			};
			class Ironsights : Specter
			{
				delete visionMode;
			};
		};
	};
	class Sa58V_EP1;
	class Sa58V_CCO_EP1 : Sa58V_EP1
	{
		displayName = "$STR_DN_SA58V_CCO_CP";
	};
	class Sa58V_RCO_EP1 : Sa58V_EP1
	{
		modelOptics = "\Ca\weapons_E\SCAR\ACOG_TA31_optic_4x";

		class OpticsModes
		{
			class ACOG
			{
				visionMode[] = {};
			};
			class Ironsigts : ACOG
			{
				delete visionMode;

				opticsPPEffects[] = {};
			};
		};
	};
	// ------------------- ACR -------------------
	class CZ805_A1_ACR:Rifle {
		model = "CorePatch\CorePatch_Weapons\models\CZ_805_A1";
	};
	class CZ805_A1_GL_ACR:CZ805_A1_ACR {
		model = "CorePatch\CorePatch_Weapons\models\CZ_805_GL";
	};
	class CZ805_A2_ACR:CZ805_A1_ACR {};
	class CZ805_A2_SD_ACR:CZ805_A2_ACR {
		model = "CorePatch\CorePatch_Weapons\models\CZ_805_SF";
		class Single:Mode_SemiAuto {
			//begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_silent_single1",db8,1,500};
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1.0,1,400};
		};
		class Burst:Mode_Burst {
			//begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_silent_single1",db8,1,500};
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1.0,1,400};
		};
		class FullAuto:Mode_FullAuto {
			//begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_silent_single1",db8,1,500};
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1.0,1,400};
		};
	};
	class MP5SD:Rifle {};
	class MP5A5:MP5SD {};
	class Evo_ACR:MP5A5 {
		type = 1;
		scope = 2;
		modes[] = {"Single","Burst","FullAuto"};
		class Single:Mode_SemiAuto {
			begin1[] = {"CA\Sounds_ACR\weapons\evo_1", db8, 1, 1500};
			begin2[] = {"CA\Sounds_ACR\weapons\evo_2", db8, 1, 1500};
			begin3[] = {"CA\Sounds_ACR\weapons\evo_3", db8, 1, 1500};
			soundBegin[] = {begin1, 0.30, begin2,0.30, begin3, 0.40};
			reloadTime = 0.07;
			recoil = "recoil_single_primary_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.003;
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		class Burst:Mode_Burst {
			begin1[] = {"CA\Sounds_ACR\weapons\evo_1", db8, 1, 1500};
			begin2[] = {"CA\Sounds_ACR\weapons\evo_2", db8, 1, 1500};
			begin3[] = {"CA\Sounds_ACR\weapons\evo_3", db8, 1, 1500};
			soundBegin[] = {begin1, 0.30, begin2,0.30, begin3, 0.40};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "recoil_auto_primary_1outof10";
			recoilProne = "recoil_auto_primary_prone_1outof10";
			dispersion = 0.003;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 60;
			maxRangeProbab = 0.05;
		};
		class FullAuto:Mode_FullAuto {
			begin1[] = {"CA\Sounds_ACR\weapons\evo_1", db8, 1, 1500};
			begin2[] = {"CA\Sounds_ACR\weapons\evo_2", db8, 1, 1500};
			begin3[] = {"CA\Sounds_ACR\weapons\evo_3", db8, 1, 1500};
			soundBegin[] = {begin1, 0.30, begin2,0.30, begin3, 0.40};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "recoil_auto_primary_1outof10";
			recoilProne = "recoil_auto_primary_prone_1outof10";
			aiRateOfFire = 0.001;
			dispersion = 0.003;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
		};
	};
	class evo_sd_ACR:MP5SD {
		type = 1;
		scope = 2;
		modes[] = {"Single","Burst","FullAuto"};
		class Single:Mode_SemiAuto {
			begin1[] = {"CA\Sounds_ACR\weapons\evo_1sd", db3, 1.8, 400};
			begin2[] = {"CA\Sounds_ACR\weapons\evo_2sd", db3, 1.8, 400};
			begin3[] = {"CA\Sounds_ACR\weapons\evo_3sd", db3, 1.8, 400};
			soundBegin[] = {begin1, 0.30, begin2,0.30, begin3, 0.40};
			reloadTime = 0.07;
			recoil = "recoil_single_primary_1outof10";
			recoilProne = "recoil_single_primary_prone_1outof10";
			dispersion = 0.003;
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.05;
		};
		class Burst:Mode_Burst {
			begin1[] = {"CA\Sounds_ACR\weapons\evo_1sd", db3, 1.8, 400};
			begin2[] = {"CA\Sounds_ACR\weapons\evo_2sd", db3, 1.8, 400};
			begin3[] = {"CA\Sounds_ACR\weapons\evo_3sd", db3, 1.8, 400};
			soundBegin[] = {begin1, 0.30, begin2,0.30, begin3, 0.40};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "recoil_auto_primary_1outof10";
			recoilProne = "recoil_auto_primary_prone_1outof10";
			dispersion = 0.003;
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.05;
		};
		class FullAuto:Mode_FullAuto {
			begin1[] = {"CA\Sounds_ACR\weapons\evo_1sd", db3, 1.8, 400};
			begin2[] = {"CA\Sounds_ACR\weapons\evo_2sd", db3, 1.8, 400};
			begin3[] = {"CA\Sounds_ACR\weapons\evo_3sd", db3, 1.8, 400};
			soundBegin[] = {begin1, 0.30, begin2,0.30, begin3, 0.40};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "recoil_auto_primary_1outof10";
			recoilProne = "recoil_auto_primary_prone_1outof10";
			aiRateOfFire = 0.001;
			dispersion = 0.003;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 7;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.05;
		};
	};
	class CZ_750_S1_ACR:M40A3 {
		scope = 2;
		model = "\CorePatch\CorePatch_Weapons\models\CZ_750_S1_ACR";
		begin1[] = {"\CA\Sounds_ACR\weapons\cz-805_single1", db8, 0.8, 1500};
		soundBegin[] = {"begin1",1};
	};
	class M9;
	class M9SD;
	class CZ_75_P_07_DUTY:M9 {
		begin1[] = {"CA\Sounds_ACR\weapons\pistol3", 1.0, 1 ,500};
	};
	class CZ_75_D_COMPACT:M9 {
		begin1[] = {"CA\Sounds_ACR\weapons\pistol4", 1.0, 1, 500};
	};
	class CZ_75_SP_01_PHANTOM:M9 {
		begin1[] = {"CA\Sounds_ACR\weapons\pistol3", 1.0, 1, 500};
	};
	class CZ_75_SP_01_PHANTOM_SD:M9SD {
		begin1[] = {"CA\Sounds_ACR\weapons\pistol5sd", db8, 2, 300};
	};
	class UK59_ACR:Rifle {};
	class UK59_ACR_Small:UK59_ACR {type = 1;};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon : LandVehicle
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticCanon : StaticWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class ZU23_base : StaticCanon
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponZeroing";

				class ViewOptics
				{
					initFov = 0.070821531; // 3.5x
					maxFov = 0.070821531;
					minFov = 0.070821531;
				};
			};
		};
	};
	class StaticGrenadeLauncher : StaticWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class AGS_base : StaticGrenadeLauncher
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";

				class ViewOptics : ViewOptics
				{
					initFov = 0.1; // 2.5x
					maxFov = 0.1;
					minFov = 0.1;
				};
			};
		};
	};
	class GMG_TriPod : StaticGrenadeLauncher
	{
	};
	class BAF_GMG_Tripod_D : GMG_TriPod
	{
		visionMode[] = {};

		class assembleInfo;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete OpticsIn;

				discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600};
				discreteDistanceInitIndex = 0;
				gunnerOpticsEffect[] = {
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				gunnerOpticsModel = "\ca\Weapons_baf\nlaw_optic";
				turretInfoType = "RscWeaponZeroing";

				class ViewOptics : ViewOptics
				{
					initFov = 0.0623; // 4x
					maxFov = 0.0623;
					minFov = 0.0623;
				};
			};
		};
	};
	class BAF_GMG_Tripod_W : BAF_GMG_Tripod_D
	{
	};
	class BAF_GMG_Tripod_W_NoDisassembly : BAF_GMG_Tripod_W
	{
		scope = 1;

		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {};
		};
	};
	class MK19_TriPod : StaticGrenadeLauncher
	{
		/* class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "MK19BC";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "MK19BC";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "MK19BC";
			};
			class belt_rotation
			{
				source = "reload";
				weapon = "MK19BC";
			};
		}; */
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"MK19BC"};
			};
		};
	};
	class StaticMGWeapon : StaticWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class BAF_L2A1_ACOG_base : StaticMGWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerOpticsEffect[] = {
					"OpticsCHAbera1",
					"OpticsBlur1"
				};

				class ViewOptics
				{
					initFov = 0.0623; // 4x
					maxFov = 0.0623;
					minFov = 0.0623;
				};
			};
		};
	};
	class BAF_GPMG_Minitripod_D : BAF_L2A1_ACOG_base
	{
		class assembleInfo;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics : ViewOptics
				{
					initFov = 0.073200002; // 3.4x
					maxFov = 0.073200002;
					minFov = 0.073200002;
				};
			};
		};
	};
	class BAF_GPMG_Minitripod_W : BAF_GPMG_Minitripod_D
	{
	};
	class BAF_GPMG_Minitripod_W_NoDisassembly : BAF_GPMG_Minitripod_W
	{
		scope = 1;

		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {};
		};
	};
	class BAF_L2A1_Minitripod_D : BAF_L2A1_ACOG_base
	{
		class assembleInfo;
	};
	class BAF_L2A1_Minitripod_W : BAF_L2A1_Minitripod_D
	{
	};
	class BAF_L2A1_Minitripod_W_NoDisassembly : BAF_L2A1_Minitripod_W
	{
		scope = 1;

		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {};
		};
	};
	class BAF_L2A1_Tripod_D : BAF_L2A1_ACOG_base
	{
		class assembleInfo;
	};
	class BAF_L2A1_Tripod_W : BAF_L2A1_Tripod_D
	{
	};
	class BAF_L2A1_Tripod_W_NoDisassembly : BAF_L2A1_Tripod_W
	{
		scope = 1;

		class assembleInfo : assembleInfo
		{
			dissasembleTo[] = {};
		};
	};
	class DSHKM_base : StaticMGWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";
			};
		};
	};
	class KORD_Base : StaticMGWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponZeroing";
			};
		};
	};
	class M2StaticMG_base : StaticMGWeapon
	{
		class AnimationSources
		{
			class ReloadAnim
			{
				weapon = "M2BC";
			};
			class ReloadMagazine
			{
				weapon = "M2BC";
			};
			class Revolving
			{
				weapon = "M2BC";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M2BC"};
			};
		};
	};
	class WarfareBMGNest_M240_base : StaticMGWeapon
	{
		class AnimationSources
		{
			class ReloadAnim
			{
				weapon = "M240BC_MG_Nest";
			};
			class ReloadMagazine
			{
				weapon = "M240BC_MG_Nest";
			};
			class Revolving
			{
				weapon = "M240BC_MG_Nest";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M240BC_MG_Nest"};
			};
		};
	};
	class WarfareBMGNest_PK_Base : StaticMGWeapon
	{
		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "PKTBC_MG_Nest";
			};
			class ReloadMagazine
			{
				weapon = "PKTBC_MG_Nest";
			};
			class Revolving
			{
				weapon = "PKTBC_MG_Nest";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"PKTBC_MG_Nest"};
			};
		};
	};
};
