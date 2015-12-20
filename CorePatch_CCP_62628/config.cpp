class CfgPatches
{
	class CorePatch_CCP_62628
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
	class AK_BASE : Rifle
	{
	};
	class AK_74 : AK_BASE
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class AK_74_GL : AK_BASE
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class AK_74_GL_kobra : AK_74_GL
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class AK_107_BASE : AK_BASE
	{
	};
	class AK_107_GL_kobra : AK_107_BASE
	{
	};
	class AK_107_GL_pso : AK_107_GL_kobra
	{
		weaponInfoType = "RscWeaponZeroing";

		class OpticsModes
		{
			class Scope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class AK_107_pso : AK_107_BASE
	{
		weaponInfoType = "RscWeaponZeroing";

		class OpticsModes
		{
			class Scope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class AKS_BASE : AK_BASE
	{
	};
	class AKS_74 : AKS_BASE
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class AKS_74_GOSHAWK : AKS_BASE
	{
		weaponInfoType = "RscWeaponZeroing";

		class OpticsModes
		{
			class Goshawk
			{
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
			};
			class Ironsights : Goshawk
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class AKS_74_NSPU : AKS_BASE
	{
		weaponInfoType = "RscWeaponZeroing";

		class OpticsModes
		{
			class NSPU
			{
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
			};
			class Ironsights : NSPU
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class AKS_74_pso : AKS_BASE
	{
		weaponInfoType = "RscWeaponZeroing";

		class OpticsModes
		{
			class Scope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class BAF_AS50_scoped : Rifle
	{
	};
	class BAF_AS50_TWS : BAF_AS50_scoped
	{
		/*discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";*/
	};
	/*class DMR : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		discreteFov[] = {
			0.071099997,
			0.024900001
		};
		discreteInitIndex = 0;
		optics = 1;
		opticsPPEffects[] = {
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		visionMode[] = {"Normal"};
		weaponInfoType = "RscWeaponZeroing";
	};*/
	class G36C : Rifle
	{
		discreteDistance[] = {100, 200, 300};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class G36_C_SD_eotech : G36C
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class MG36 : G36C
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class L85A2_base_BAF : Rifle
	{
	};
	class BAF_L85A2_RIS_CWS : L85A2_base_BAF
	{
		/*delete discreteDistance;
		delete discreteDistanceInitIndex;
		delete discreteInitIndex;
		delete discretefov;
		delete thermalMode;
		delete weaponInfoType;*/

		opticsZoomInit = 0.0623;
		opticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		visionMode[] = {"NVG"};
	};
	class BAF_L85A2_RIS_SUSAT : L85A2_base_BAF
	{
		class OpticsModes
		{
			class SUSAT
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600};
			};
		};
	};
	class LeeEnfield : Rifle
	{
		discreteDistance[] = {183, 274, 366, 457, 549, 640, 732, 823, 914, 1006, 1097, 1189};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
	};
	class M16_base : Rifle
	{
	};
	class M4A1 : M16_base
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class M4A1_Aim : M4A1
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class M4A1_RCO_GL : M4A1
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class M4SPR : M4A1
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteFov[] = {
			0.082999997,
			0.0277
		};
		discreteInitIndex = 0;
		visionMode[] = {"Normal"};
	};
	class M16A2 : M16_base
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class FN_FAL : M16A2
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class m16a4 : M16A2
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class M16A4_GL : m16a4
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class M16A4_ACG_GL : M16A4_GL
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		visionMode[] = {"Normal"};
		weaponInfoType = "RscWeaponEmpty";
	};
	class m16a4_acg : m16a4
	{
		visionMode[] = {"Normal"};
	};
	class SCAR_Base : M16_base
	{
	};
	class SCAR_H_Base : SCAR_Base
	{
	};
	class SCAR_H_LNG_Sniper : SCAR_H_Base
	{
		distanceZoomMax = 120;
		distanceZoomMin = 400;
		opticsZoomInit = 0.071944997;
		opticsZoomMax = 0.071944997;

		class OpticsModes
		{
			class StepScope
			{
				/* discreteDistance[] = {200, 400, 600, 800, 1000, 1200, 1400};
				discreteDistanceInitIndex = 0; */
				discreteFov[] = {
					0.071944997,
					0.035971999
				};
				discreteInitIndex = 0;
				distanceZoomMax = 120;
				distanceZoomMin = 400;
				opticsZoomInit = 0.071944997;
				opticsZoomMax = 0.071944997;
				opticsZoomMin = 0.035971999;
			};
		};
	};
	class SCAR_H_LNG_Sniper_SD : SCAR_H_Base
	{
		distanceZoomMax = 120;
		distanceZoomMin = 400;
		opticsZoomInit = 0.087665997;
		opticsZoomMin = 0.035971999;
		opticsZoomMax = 0.087665997;

		class OpticsModes
		{
			class StepScope
			{
				/* discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100};
				discreteDistanceInitIndex = 2; */
				discreteFov[] = {
					0.087665997,
					0.035971999
				};
				discreteInitIndex = 0;
				distanceZoomMax = 120;
				distanceZoomMin = 400;
				opticsZoomMax = 0.087665997;
				opticsZoomMin = 0.035971999;
			};
		};
	};
	/*class SCAR_H_STD_TWS_SD : SCAR_H_LNG_Sniper_SD
	{
		//weaponInfoType = "RscWeaponEmpty";

		class OpticsModes : OpticsModes
		{
			delete StepScope;

			class LTWS : StepScope
			{
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.16060001;
				opticsZoomMax = 0.16060001;
				opticsZoomMin = 0.16060001;
				thermalMode[] = {0, 1};
				visionMode[] = {"Ti"};
			};

			class StepScope : StepScope
			{
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
	};*/
	class SCAR_L_Base : SCAR_Base
	{
	};
	class SCAR_L_CQC : SCAR_L_Base
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class SCAR_L_CQC_CCO_SD : SCAR_L_CQC
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class SCAR_L_CQC_EGLM_Holo : SCAR_L_CQC
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class SCAR_L_CQC_Holo : SCAR_L_CQC
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class M24 : Rifle
	{
		class OpticsModes
		{
			class StepScope
			{
				discreteFov[] = {
					0.071099997,
					0.024900001
				};
				discreteInitIndex = 0;
				distanceZoomMax = 120;
				distanceZoomMin = 400;
				opticsZoomInit = 0.071099997;
				opticsZoomMax = 0.071099997;
			};
		};
	};
	class M60A4_EP1 : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100};
	};
	class M110_TWS_EP1 : Rifle
	{
		/*delete weaponInfoType;

		class OpticsModes
		{
			class HTWS
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
			};
		};*/
	};
	class M110_NVG_EP1 : M110_TWS_EP1
	{
		weaponInfoType = "RscWeaponZeroing";
	};
	class M240 : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class BAF_L7A2_GPMG : M240
	{
		/*delete discreteDistance;
		delete discreteDistanceInitIndex;
		delete weaponInfoType;*/
	};
	class Mk_48 : M240
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	};
	class m240_scoped_EP1 : M240
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		optics = 1;
		weaponInfoType = "RscWeaponEmpty";
	};
	class M249 : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class M249_TWS_EP1 : M249
	{
		//discreteDistance[] = {};
		//discreteDistanceInitIndex = 0;
		//optics = 1;
		//weaponInfoType = "RscWeaponEmpty";

		/*class OpticsModes
		{
			class MTWS
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
			};
		};*/
	};
	class M249_m145_EP1 : M249
	{/*
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		optics = 1;
		weaponInfoType = "RscWeaponEmpty";*/
	};
	class PK : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
	};
	class Pecheneg : PK
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		optics = 1;
		visionMode[] = {"Normal"};
		weaponInfoType = "RscWeaponEmpty";

		/* class OpticsModes
		{
			class Scope
			{
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
			};
			class Ironsights : Scope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
			};
		}; */
	};
	class SVD : Rifle
	{
		weaponInfoType = "RscWeaponZeroing";

		class OpticsModes
		{
			class Scope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
			};
			class Ironsights : Scope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class SVD_CAMO : SVD
	{
		class OpticsModes
		{
			class Scope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class SVD_NSPU_EP1 : SVD
	{
		class OpticsModes
		{
			class NSPU
			{
				discreteDistance[] = {300};
				discreteDistanceInitIndex = 0;
			};
			class Ironsights : NSPU
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class SVD_des_EP1 : SVD
	{
		class OpticsModes
		{
			class Scope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class VSS_vintorez : Rifle
	{
		weaponInfoType = "RscWeaponZeroing";

		class OpticsModes
		{
			class Scope
			{
				discreteDistance[] = {100, 150, 200, 250, 300, 350, 400};
				discreteDistanceInitIndex = 2;
			};
			class Ironsights : Scope
			{
				discreteDistance[] = {100, 150, 200, 220, 250, 270, 300, 320, 350, 370, 400, 420};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class bizon : Rifle
	{
		discreteDistance[] = {50, 100, 150};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
	};
	class ksvk : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class m8_base : Rifle
	{
	};
	class m8_tws : m8_base
	{
		/*discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";

		class OpticsModes
		{
			class LTWS
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
			};
		};*/
	};
	class m8_tws_sd : m8_base
	{
		/*discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";

		class OpticsModes
		{
			class LTWS
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
			};
		};*/
	};
	class m107 : Rifle
	{
		class OpticsModes
		{
			class StepScope
			{
				discreteDistanceInitIndex = 2;
				discreteFov[] = {
					0.055300001,
					0.0178
				};
				discreteInitIndex = 0;
			};
		};
	};
	class m107_TWS_EP1 : m107
	{
		/*weaponInfoType = "RscWeaponEmpty";

		class OpticsModes : OpticsModes
		{
			class HWTS : StepScope
			{
				delete discreteInitIndex;

				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};*/
	};
};