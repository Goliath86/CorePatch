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
	class RifleCore;
	class Rifle : RifleCore
	{
		distanceZoomMax = 100;
		distanceZoomMin = 100;
	};
	class BAF_L86A2_ACOG : Rifle
	{
		class OpticsModes
		{
			class ACOG;
			class Kolimator : ACOG
			{
				distanceZoomMax = 50;
				distanceZoomMin = 50;
			};
		};
	};
	class DMR : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
		weaponInfoType = "RscWeaponZeroing";
	};
	class G36C : Rifle
	{
		discreteDistance[] = {100, 200, 300};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class G36_C_SD_eotech : G36C
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class MG36 : G36C
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class G36a : Rifle
	{
		class MuzzleFar;
	};
	class G36A_camo : G36a
	{
		class MuzzleFar : MuzzleFar
		{
			class OpticsModes
			{
				class Scope;
				class Kolimator : Scope
				{
					delete distanceZoomMax;
					delete distanceZoomMin;
				};
			};
		};
	};
	class G36K : G36a
	{
	};
	class G36K_camo : G36K
	{
		class MuzzleFar : MuzzleFar
		{
			class OpticsModes
			{
				class Scope;
				class Kolimator : Scope
				{
					delete distanceZoomMax;
					delete distanceZoomMin;
				};
			};
		};
	};
	class LeeEnfield : Rifle
	{
		distanceZoomMax = 100;
		distanceZoomMin = 100;
	};
	class M24 : Rifle
	{
		distanceZoomMax = 120;
		distanceZoomMin = 400;

		class OpticsModes
		{
			class StepScope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				distanceZoomMax = 120;
				distanceZoomMin = 400;
			};
		};
	};
	class huntingrifle : M24
	{
		class OpticsModes : OpticsModes
		{
			class StepScope : StepScope
			{
				distanceZoomMax = 100;
				distanceZoomMin = 300;
			};
		};
	};
	class M60A4_EP1 : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100};
		discreteDistanceInitIndex = 0;
	};
	class M110_TWS_EP1 : Rifle
	{
		// weaponInfoType = "RscWeaponEmpty";

		class OpticsModes
		{
			class HTWS
			{
				/* delete discreteDistance;
				delete discreteDistanceInitIndex; */

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			};
		};
	};
	class M110_NVG_EP1 : M110_TWS_EP1
	{
		// weaponInfoType = "RscWeaponZeroing";

		class OpticsModes : OpticsModes
		{
			class StepScope : HTWS
			{
				delete discreteDistanceInitIndex;
			};
		};
	};
	class M240 : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class BAF_L7A2_GPMG : M240
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 0;
	};
	class Mk_48 : M240
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class m240_scoped_EP1 : M240
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class M249 : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class M249_TWS_EP1 : M249
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";

		class OpticsModes
		{
			class MTWS
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
			};
		};
	};
	class M249_m145_EP1 : M249
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class MP5SD : Rifle
	{
		discreteDistance[] = {50, 100, 150, 200};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class PK : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
		discreteDistanceInitIndex = 0;
	};
	class Pecheneg : PK
	{
		discreteDistance[] = {};

		class OpticsModes
		{
			class Scope // 1P77
			{
				discreteDistance[] = {400, 500, 600, 700, 800, 900, 1000};
				discreteDistanceInitIndex = 0;
			};
			class Ironsights : Scope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
			};
		};
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
				distanceZoomMax = 100;
				distanceZoomMin = 100;
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
	class Sa58P_EP1 : Rifle
	{
		discreteDistanceInitIndex = 0;
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
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class ksvk : Rifle
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
		discreteDistanceInitIndex = 2;
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		weaponInfoType = "RscWeaponZeroing";
	};
	class m8_base : Rifle
	{
		delete discreteDistance;
		delete discreteDistanceInitIndex;
	};
	class m8_carbine : m8_base
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 2;
	};
	class m8_carbineGL : m8_base
	{
		class OpticsModes
		{
			class CCO
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;

				distanceZoomMax = 100;
				distanceZoomMin = 100;
			};
		};
	};
	class m8_carbine_pmc : m8_base
	{
		class OpticsModes
		{
			class CCO
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;

				distanceZoomMax = 100;
				distanceZoomMin = 100;
			};
		};
	};
	class m8_compact : m8_base
	{
		class OpticsModes
		{
			class CCO
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
			};
		};
	};
	class m8_holo_sd : m8_base
	{
		class OpticsModes
		{
			class CCO
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
			};
		};
	};
	class m8_tws : m8_base
	{
		delete weaponInfoType;

		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;

		class OpticsModes
		{
			class LTWS
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
			};
		};
	};
	class m8_tws_sd : m8_base
	{
		delete weaponInfoType;

		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;

		class OpticsModes
		{
			class LTWS
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;

				distanceZoomMax = 300;
				distanceZoomMin = 300;
			};
		};
	};
	class m107 : Rifle
	{
		class OpticsModes
		{
			class StepScope
			{
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class m107_TWS_EP1 : m107
	{
		// weaponInfoType = "RscWeaponEmpty";

		class OpticsModes : OpticsModes
		{
			class HWTS : StepScope
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;

				/* discreteDistance[] = {};
				discreteDistanceInitIndex = 0; */
				distanceZoomMax = 120;
				distanceZoomMin = 400;
			};
		};
	};
	class AK_BASE;
	class AK_47_M : AK_BASE
	{
		discreteDistanceInitIndex = 0;
	};
	class AK_74 : AK_BASE
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class AK_74_GL : AK_BASE
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class AK_74_GL_kobra : AK_74_GL
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class AKS_BASE;
	class AKS_74 : AKS_BASE
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 0;
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
				distanceZoomMax = 100;
				distanceZoomMin = 100;
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
			class Ironsights : Scope
			{
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class AK_107_BASE;
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
			class Ironsights : Scope
			{
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class AK_107_GL_kobra;
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
			class Ironsights : Scope
			{
				discreteDistanceInitIndex = 0;
			};
		};
	};
	/* class BAF_AS50_scoped;
	class BAF_AS50_TWS : BAF_AS50_scoped
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponEmpty";
	}; */
	class L85A2_base_BAF;
	class BAF_L85A2_RIS_ACOG : L85A2_base_BAF
	{
		class OpticsModes
		{
			class ACOG;
			class Kolimator : ACOG
			{
				distanceZoomMax = 50;
				distanceZoomMin = 50;
			};
		};
	};
	class BAF_L85A2_RIS_CWS : L85A2_base_BAF
	{
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		weaponInfoType = "RscWeaponEmpty";
	};
	class BAF_L85A2_RIS_SUSAT : L85A2_base_BAF
	{
		class OpticsModes
		{
			class SUSAT
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600};
			};
			class ironsights : SUSAT
			{
				discreteDistance[] = {50};
				distanceZoomMax = 50;
				distanceZoomMin = 50;
			};
		};
	};
	class M16_base;
	class M4A1 : M16_base
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class M4A1_Aim : M4A1
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class M4A1_RCO_GL : M4A1
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class M4SPR : M4A1
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		discreteDistanceInitIndex = 2;
	};
	class M4A3_CCO_EP1 : M16_base
	{
		distanceZoomMax = 100;
		distanceZoomMin = 100;
	};
	class M4A3_RCO_GL_EP1 : M4A3_CCO_EP1
	{
		class OpticsModes
		{
			class ACOG;
			class Kolimator : ACOG
			{
				distanceZoomMax = 50;
				distanceZoomMin = 50;
			};
		};
	};
	class M16A2 : M16_base
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class FN_FAL : M16A2
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class FN_FAL_ANPVS4 : FN_FAL
	{
		distanceZoomMax = 300;
		distanceZoomMin = 300;
	};
	class m16a4 : M16A2
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class M16A4_GL : m16a4
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
		weaponInfoType = "RscWeaponZeroing";
	};
	class M16A4_ACG_GL : M16A4_GL
	{
		discreteDistance[] = {};
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		weaponInfoType = "RscWeaponEmpty";
	};
	class m16a4_acg : m16a4
	{
		distanceZoomMax = 300;
		distanceZoomMin = 300;
	};
	class SCAR_H_Base;
	class SCAR_H_LNG_Sniper : SCAR_H_Base
	{
		distanceZoomMax = 120;
		distanceZoomMin = 400;

		class OpticsModes
		{
			class StepScope
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
				distanceZoomMax = 120;
				distanceZoomMin = 400;
			};
		};
	};
	class SCAR_H_LNG_Sniper_SD : SCAR_H_Base
	{
		class OpticsModes
		{
			class StepScope;
		};
	};
	class SCAR_H_STD_TWS_SD : SCAR_H_LNG_Sniper_SD
	{
		distanceZoomMax = 300;
		distanceZoomMin = 300;
		weaponInfoType = "RscWeaponEmpty";

		class OpticsModes : OpticsModes
		{
			delete StepScope;

			class LTWS : StepScope
			{
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				opticsPPEffects[] = {};
				opticsZoomInit = 0.16060001; // 1.55x
				opticsZoomMax = 0.16060001;
				opticsZoomMin = 0.16060001;
				thermalMode[] = {0, 1};
				visionMode[] = {"Ti"};
			};
		};
	};
	class SCAR_H_CQC_CCO;
	class SCAR_H_STD_EGLM_Spect : SCAR_H_CQC_CCO
	{
		class OpticsModes
		{
			class Specter
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
			};
			class Ironsights : Specter
			{
				distanceZoomMax = 50;
				distanceZoomMin = 50;
			};
		};
	};
	class SCAR_L_Base;
	class SCAR_L_CQC : SCAR_L_Base
	{
		discreteDistance[] = {100, 200, 300, 400, 500, 600};
		discreteDistanceInitIndex = 0;
		weaponInfoType = "RscWeaponZeroing";
	};
	class SCAR_L_CQC_CCO_SD : SCAR_L_CQC
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class SCAR_L_CQC_EGLM_Holo : SCAR_L_CQC
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class SCAR_L_CQC_Holo : SCAR_L_CQC
	{
		discreteDistance[] = {};
		weaponInfoType = "RscWeaponEmpty";
	};
	class SCAR_L_STD_Mk4CQT : SCAR_L_Base
	{
		class OpticsModes
		{
			class Mk4;
			class Kolimator : Mk4
			{
				distanceZoomMax = 100;
				distanceZoomMin = 100;
			};
		};
	};
	class SCAR_L_STD_EGLM_RCO : SCAR_L_STD_Mk4CQT
	{
		class OpticsModes
		{
			class ACOG;
			class Kolimator : ACOG
			{
				distanceZoomMax = 50;
				distanceZoomMin = 50;
			};
		};
	};
	class Sa58V_EP1;
	class Sa58V_CCO_EP1 : Sa58V_EP1
	{
		discreteDistance[] = {};
	};
	class Sa58V_RCO_EP1 : Sa58V_EP1
	{
		discreteDistance[] = {};
		distanceZoomMax = 300;
		distanceZoomMin = 300;

		class OpticsModes
		{
			class ACOG
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;

				distanceZoomMax = 300;
				distanceZoomMin = 300;
			};
			class Ironsigts : ACOG
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;

				distanceZoomMax = 50;
				distanceZoomMin = 50;
			};
		};
	};
};
