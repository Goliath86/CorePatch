class CfgPatches
{
	class CorePatch_CCP_68220
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto: Mode_SemiAuto
{
};
class CfgWeapons
{
	class Rifle;
	class G36C: Rifle
	{
		modes[] = {
			"Single",
			"FullAuto"
		};
	};
	class G36_C_SD_eotech: G36C
	{
		delete modes;
	};
	class G36a: Rifle
	{
		delete muzzles;

		modelOptics = "\ca\weapons\G36\G36_optics";
		modes[] = {
			"Single",
			"FullAuto"
		};
		optics = 1;

		class FullAuto: Mode_FullAuto
		{
			begin1[] = {
				"ca\sounds\weapons\rifles\g36_single1",
				2.2387211,
				1,
				1000
			};
			begin2[] = {
				"ca\sounds\weapons\rifles\g36_single2",
				2.2387211,
				1,
				1000
			};
			dispersion = 0.00069999998;
			maxRange = 120;
			maxRangeProbab = 0.050000001;
			midRange = 30;
			midRangeProbab = 0.69999999;
			minRange = 0;
			minRangeProbab = 0.1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			reloadTime = 0.1;
			soundBegin[] = {
				"begin1",
				0.5,
				"begin2",
				0.5
			};
			soundContinuous = 0;
		};
		class OpticsModes
		{
			class Scope
			{
				cameraDir = "";
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
			class Kolimator: Scope
			{
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 2;
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
		class Single: Mode_SemiAuto
		{
			begin1[] = {
				"ca\sounds\weapons\rifles\g36_single1",
				2.2387211,
				1,
				1000
			};
			begin2[] = {
				"ca\sounds\weapons\rifles\g36_single2",
				2.2387211,
				1,
				1000
			};
			dispersion = 0.00069999998;
			maxRange = 600;
			maxRangeProbab = 0.050000001;
			midRange = 300;
			midRangeProbab = 0.69999999;
			minRange = 2;
			minRangeProbab = 0.30000001;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			reloadTime = 0.1;
			soundBegin[] = {
				"begin1",
				0.5,
				"begin2",
				0.5
			};
		};
	};
	class G36A_camo: G36a
	{
		class OpticsModes
		{
			class Scope
			{
				cameraDir = "";
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
			class Kolimator: Scope
			{
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 2;
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
	};
	class G36K: G36a
	{
		delete muzzles;
	};
	class G36K_camo: G36K
	{
		class OpticsModes
		{
			class Scope
			{
				cameraDir = "";
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
			class Kolimator: Scope
			{
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 2;
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
	class M4A1_RCO_GL: M4A1
	{
		delete M4_ACOG_Muzzle;
		delete M4_CQB_Muzzle;

		modelOptics = "\ca\weapons\2Dscope_Acog_4x32";
		muzzles[] = {
			"this",
			"M203Muzzle"
		};

		class OpticsModes
		{
			class ACOG
			{
				cameraDir = "";
				distanceZoomMax = 100;
				distanceZoomMin = 100;
				memoryPointCamera = "opticView";
				opticsDisablePeripherialVision = 1;
				opticsFlare = 1;
				opticsID = 1;
				opticsPPEffects[] = {
					"OpticsCHAbera2",
					"OpticsBlur2"
				};
				opticsZoomInit = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomMin = 0.0623;
				useModelOptics = 1;
				visionMode[] = {"Normal"};
			};
			class Ironsights: ACOG
			{
				distanceZoomMax = 300;
				distanceZoomMin = 300;
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
	class M4A1_HWS_GL: M4A1_RCO_GL
	{
		delete muzzles;

		modelOptics = "-";

		class OpticsModes
		{
			class HWS
			{
				cameraDir = "";
				distanceZoomMax = 300;
				distanceZoomMin = 300;
				memoryPointCamera = "eye";
				opticsDisablePeripherialVision = 0;
				opticsFlare = 0;
				opticsID = 1;
				opticsPPEffects[] = {
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomInit = 0.5;
				opticsZoomMax = 1.1;
				opticsZoomMin = 0.25;
				useModelOptics = 0;
				visionMode[] = {};
			};
		};
	};
};