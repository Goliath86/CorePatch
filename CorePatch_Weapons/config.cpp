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
		weapons[] = {};
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
class Mode_SemiAuto;
class CfgWeapons
{
	class Default;
	class Binocular : Default
	{
		opticsZoomInit = 0.046999998;
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
		class manual : CannonCore
		{
			burst = 5; // 0.2 s
		};
	};
	class GSh302 : CannonCore
	{
		class manual : CannonCore
		{
			burst = 10; // 0.2 s
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
	class Igla_twice : MissileLauncher
	{
		magazineReloadTime = 5;
	};
	class Rifle;
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
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon : LandVehicle
	{
		class AnimationSources;
		class Turrets;
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
					initFov = 0.2;
					maxFov = 0.2;
					minFov = 0.057999998;
				};
			};
		};
	};
	class StaticGrenadeLauncher : StaticWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret;
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
			};
		};
	};
	class GMG_TriPod : StaticGrenadeLauncher
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics;
			};
		};
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
					initFov = 0.117;
					maxFov = 0.117;
					minFov = 0.117;
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
			};
		};
	};
	class BAF_GPMG_Minitripod_D : BAF_L2A1_ACOG_base
	{
		class assembleInfo;
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
