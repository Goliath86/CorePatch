class CfgAddons {
	class PreloadAddons {
		class CorePatch_CCP_70342_71143 {
			list[] = {"CorePatch_CCP_70342_71143"};
		};
	};
};
class CfgPatches
{
	class CorePatch_CCP_70342_71143
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {"GSh302K"};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 250Rnd_30mm_GSh302: VehicleMagazine
	{
		ammo = "B_30mm_AP";
		count = 250;
		displayName = "$STR_DN_GSh302";
		initSpeed = 820;
		nameSound = "cannon";
		scope = 2;
		tracersEvery = 2;
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class CannonCore;
	class GSh302: CannonCore
	{
		magazines[] = {
			"250Rnd_30mm_GSh302",
			"750Rnd_30mm_GSh301"
		};
	};
	class GSh302K: CannonCore
	{
		cursor = "Air_E_MG";
		cursorAim = "Air_Dot";
		displayName = "$STR_DN_GSH302K";
		magazines[] = {
			"250Rnd_30mm_GSh302",
			"750Rnd_30mm_GSh301"
		};
		modes[] = {
			"LowROF",
			"MidROF",
			"HighROF",
			"close",
			"short",
			"medium",
			"far"
		};
		nameSound = "cannon";
		scope = 2;

		class LowROF: Mode_FullAuto // 300 SPM
		{
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			dispersion = 0.00060000003;
			displayName = "$STR_DN_GSH302K_MODE_LOW";
			ffCount = 6;
			initSpeed = 940;
			maxRange = 3;
			maxRangeProbab = 0.0040000002;
			midRange = 2;
			midRangeProbab = 0.059999999;
			minRangeProbab = 0.059999999;
			reloadTime = 0.2;
			sound[] = {
				"\Ca\sounds\Weapons\cannon\242_single",
				10,
				1,
				1400
			};
		};
		class MidROF: LowROF // 2000 SPM
		{
			burst = 8;
			displayName = "$STR_DN_GSH302K_MODE_MID";
			maxRangeProbab = 0.0099999998;
			midRangeProbab = 0.0099999998;
			minRangeProbab = 0.0099999998;
			reloadTime = 0.03;
			sound[] = {
				"\Ca\sounds\Weapons\cannon\A10vulcanIV",
				3.1622777,
				1,
				1200
			};
		};
		class HighROF: MidROF // 2600 SPM
		{
			burst = 11;
			displayName = "$STR_DN_GSH302K_MODE_HIGH";
			reloadTime = 0.023076;
		};
		class close: HighROF
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			burst = 15;
			maxRange = 500;
			maxRangeProbab = 0.039999999;
			midRange = 200;
			midRangeProbab = 0.57999998;
			minRange = 0;
			minRangeProbab = 0.050000001;
			showToPlayer = 0;
			soundBurst = 0;
		};
		class short: MidROF
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			burst = 10;
			maxRange = 800;
			maxRangeProbab = 0.039999999;
			midRange = 500;
			midRangeProbab = 0.57999998;
			minRange = 200;
			minRangeProbab = 0.050000001;
			showToPlayer = 0;
			soundBurst = 0;
		};
		class medium: short
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			burst = 7;
			maxRange = 1000;
			midRange = 800;
			minRange = 600;
		};
		class far: LowROF
		{
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			burst = 4;
			maxRange = 1250;
			maxRangeProbab = 0.0099999998;
			midRange = 1050;
			midRangeProbab = 0.40000001;
			minRange = 850;
			minRangeProbab = 0.050000001;
			showToPlayer = 0;
			soundBurst = 0;
		};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Mi24_Base: Helicopter
	{
	};
	class Mi24_Base_RU: Mi24_Base
	{
	};
	class Mi24_P: Mi24_Base_RU
	{
		magazines[] = {
			"250Rnd_30mm_GSh302",
			"40Rnd_80mm",
			"120Rnd_CMFlareMagazine"
		};
		weapons[] = {
			"GSh302K",
			"80mmLauncher",
			"CMFlareLauncher"
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {
					"4Rnd_AT9_Mi24P",
					"2Rnd_FAB_250"
				};
				weapons[] = {
					"AT9Launcher",
					"HeliBombLauncher"
				};
			};
		};
	};
	class Plane: Air
	{
	};
	class Su25_base: Plane
	{
		magazines[] = {
			"250Rnd_30mm_GSh302",
			"4Rnd_FAB_250",
			"2Rnd_R73",
			"80Rnd_S8T",
			"120Rnd_CMFlareMagazine"
		};
		weapons[] = {
			"GSh302",
			"AirBombLauncher",
			"R73Launcher_2",
			"S8Launcher",
			"CMFlareLauncher"
		};
	};
	class Su39: Su25_base
	{
		magazines[] = {
			"250Rnd_30mm_GSh302",
			"4Rnd_Ch29",
			"2Rnd_R73",
			"80Rnd_S8T",
			"120Rnd_CMFlareMagazine"
		};
		weapons[] = {
			"GSh302",
			"Ch29Launcher",
			"R73Launcher_2",
			"S8Launcher",
			"CMFlareLauncher"
		};
	};
};