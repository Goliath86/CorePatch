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
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_CCP_70342_71143
		{
			list[] = {"CorePatch_CCP_70342_71143"};
		};
	};
};
class CfgMagazines
{
	class 180Rnd_30mm_GSh301;
	class 750Rnd_30mm_GSh301: 180Rnd_30mm_GSh301
	{
		count = 250;
		displayName = "$STR_DN_GSH302_CP";
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class CannonCore;
	class GSh302K: CannonCore
	{
		cursor = "Air_E_MG";
		cursorAim = "Air_Dot";
		displayName = "$STR_DN_GSH302K";
		magazines[] = {
			"750Rnd_30mm_GSh301",
			"180Rnd_30mm_GSh301"
		};
		modes[] = {
			"LowROF",
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
			aiDispersionCoefX = 1;
			aiDispersionCoefY = 1;
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
				"\Ca\sounds\Weapons\cannon\a10vulcanVII",
				10,
				1,
				1400
			};
		};
		class HighROF: LowROF // 2000 SPM
		{
			burst = 7; // 0.2 s
			displayName = "$STR_DN_GSH302K_MODE_HIGH";
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
		class short: close
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			burst = 10;
			maxRange = 800;
			midRange = 500;
			minRange = 200;
		};
		class medium: LowROF
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			burst = 7;
			maxRange = 1000;
			maxRangeProbab = 0.039999999;
			midRange = 800;
			midRangeProbab = 0.57999998;
			minRange = 600;
			minRangeProbab = 0.050000001;
			showToPlayer = 0;
			soundBurst = 0;
		};
		class far: medium
		{
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			burst = 4;
			maxRange = 1250;
			maxRangeProbab = 0.0099999998;
			midRange = 1050;
			midRangeProbab = 0.40000001;
			minRange = 850;
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
			"750Rnd_30mm_GSh301",
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
					"2Rnd_FAB_250",
					"4Rnd_AT9_Mi24P"
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
			"750Rnd_30mm_GSh301",
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
			"750Rnd_30mm_GSh301",
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
