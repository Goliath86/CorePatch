class CfgAddons {
	class PreloadAddons {
		class CorePatch_CCP_71142_CIT_13602_25047 {
			list[] = {"CorePatch_CCP_71142_CIT_13602_25047"};
		};
	};
};
class CfgPatches
{
	class CorePatch_CCP_71142_CIT_13602_25047
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {"BAF_M621"};
	};
};
class CfgMagazines
{
	//delete 200Rnd_762x54_GPMG;
	//delete 1200Rnd_20mm_M621;

	class VehicleMagazine;
	class 400Rnd_20mm_M621 : VehicleMagazine
	{
		ammo = "B_20mm_AP";
		count = 400;
		displayName = "$STR_BAF_M621_MANUAL0";
		initSpeed = 1036;
		maxLeadSpeed = 200;
		nameSound = "cannon";
		scope = 2;
		tracersEvery = 2;
	};
	class 4000Rnd_762x51_M134 : VehicleMagazine
	{
	};
	class 2000Rnd_762x51_M134 : 4000Rnd_762x51_M134
	{
	};
	class 2000Rnd_762x51_L94A1 : 2000Rnd_762x51_M134
	{
		ammo = "B_762x51_Ball";
		tracersEvery = 4;
	};
};
class CfgWeapons
{
	class CannonCore;
	class BAF_M621 : CannonCore
	{
		aiDispersionCoefX = 21;
		aiDispersionCoefY = 21;
		canLock = 0;
		cursor = "Air_W_MG";
		cursorAim = "Air_Dot";
		magazines[] = {"400Rnd_20mm_M621"};
		modes[] = {
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		nameSound = "cannon";
		scope = 1;

		class manual : CannonCore
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			autoFire = 1;
			dispersion = 0.0012000001;
			displayName = "$STR_BAF_M621_MANUAL0";
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			minRange = 1;
			minRangeProbab = 0.0099999998;
			reloadTime = 0.075000003;
			sound[] = {
				"\Ca\sounds\Weapons\cannon\242_single",
				10,
				1,
				1200
			};
		};
		class close : manual
		{
			burst = 10;
			maxRange = 200;
			maxRangeProbab = 0.039999999;
			midRange = 100;
			midRangeProbab = 0.57999998;
			minRange = 0;
			minRangeProbab = 0.050000001;
			showToPlayer = 0;
			soundBurst = 0;
		};
		class far : close
		{
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			burst = 5;
			maxRange = 800;
			maxRangeProbab = 0.0099999998;
			midRange = 600;
			midRangeProbab = 0.40000001;
			minRange = 500;
		};
		class medium : close
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			burst = 4;
			maxRange = 600;
			midRange = 400;
			minRange = 300;
		};
		class short : close
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			burst = 8;
			maxRange = 400;
			midRange = 200;
			minRange = 50;
		};
	};
	class MGun;
	class BAF_L7A2 : MGun
	{
		delete aiRateOfFire;
		delete aiRateOfFireDistance;
		delete ballisticsComputer;
		delete begin1;
		delete dispersion;
		delete maxRange;
		delete maxRangeProbab;
		delete midRange;
		delete midRangeProbab;
		delete minRange;
		delete minRangeProbab;
		delete reloadTime;
		delete soundBegin;

		aiDispersionCoefX = 7;
		aiDispersionCoefY = 7;
		bullet1[] = {
			"ca\sounds\weapons\shells\big_shell_metal_01",
			0.070794582,
			1,
			15
		};
		bullet2[] = {
			"ca\sounds\weapons\shells\big_shell_metal_03",
			0.070794582,
			1,
			15
		};
		bullet3[] = {
			"ca\sounds\weapons\shells\big_shell_metal_02",
			0.070794582,
			1,
			15
		};
		bullet4[] = {
			"ca\sounds\weapons\shells\big_shell_metal_01",
			0.070794582,
			1,
			15
		};
		bullet5[] = {
			"ca\sounds\weapons\shells\big_shell_dirt_01",
			0.070794582,
			1,
			15
		};
		bullet6[] = {
			"ca\sounds\weapons\shells\big_shell_dirt_02",
			0.070794582,
			1,
			15
		};
		bullet7[] = {
			"ca\sounds\weapons\shells\big_shell_dirt_03",
			0.070794582,
			1,
			15
		};
		bullet8[] = {
			"ca\sounds\weapons\shells\big_shell_dirt_04",
			0.070794582,
			1,
			15
		};
		bullet9[] = {
			"ca\sounds\weapons\shells\big_shell_soft_01",
			0.070794582,
			1,
			15
		};
		bullet10[] = {
			"ca\sounds\weapons\shells\big_shell_soft_02",
			0.070794582,
			1,
			15
		};
		bullet11[] = {
			"ca\sounds\weapons\shells\big_shell_soft_03",
			0.070794582,
			1,
			15
		};
		bullet12[] = {
			"ca\sounds\weapons\shells\big_shell_soft_04",
			0.070794582,
			1,
			15
		};
		canLock = 0;
		magazines[] = {
			"200Rnd_762x51_M240",
			"100Rnd_762x51_M240"
		};
		modes[] = {
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		soundBullet[] = {
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};

		class manual : MGun
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 5;
			autoFire = 1;
			/* begin1[] = {
				"ca\sounds_baf\weapons\L7A2",
				1.7782794,
				1,
				1000
			}; */
			burst = 1;
			dispersion = 0.0035000001;
			displayName = "$STR_BAF_BAF_L7A20";
			reloadTime = 0.079999998;
			showToPlayer = 1;
			/* soundBegin[] = {
				"begin1",
				1
			}; */
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			minRange = 1;
			minRangeProbab = 0.0099999998;
		};
		class close : manual
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			burst = 10;
			maxRange = 200;
			maxRangeProbab = 0.039999999;
			midRange = 100;
			midRangeProbab = 0.57999998;
			minRange = 0;
			minRangeProbab = 0.050000001;
			showToPlayer = 0;
			soundBurst = 0;
		};
		class far : close
		{
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			burst = 5;
			maxRange = 800;
			maxRangeProbab = 0.0099999998;
			midRange = 600;
			midRangeProbab = 0.40000001;
			minRange = 500;
		};
		class medium : close
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			burst = 4;
			maxRange = 600;
			midRange = 400;
			minRange = 300;
		};
		class short : close
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			burst = 8;
			maxRange = 400;
			midRange = 200;
			minRange = 50;
		};
	};
	class BAF_L94A1 : MGun
	{
		delete aiRateOfFire;
		delete aiRateOfFireDistance;
		delete begin1;
		delete dispersion;
		delete maxRange;
		delete maxRangeProbab;
		delete midRange;
		delete midRangeProbab;
		delete minRange;
		delete minRangeProbab;
		delete reloadTime;
		delete soundBegin;
		delete soundContinuous;

		aiDispersionCoefX = 21;
		aiDispersionCoefY = 21;
		bullet1[] = {
			"ca\sounds\weapons\shells\big_shell_metal_01",
			0.070794582,
			1,
			15
		};
		bullet2[] = {
			"ca\sounds\weapons\shells\big_shell_metal_03",
			0.070794582,
			1,
			15
		};
		bullet3[] = {
			"ca\sounds\weapons\shells\big_shell_metal_02",
			0.070794582,
			1,
			15
		};
		bullet4[] = {
			"ca\sounds\weapons\shells\big_shell_metal_01",
			0.070794582,
			1,
			15
		};
		bullet5[] = {
			"ca\sounds\weapons\shells\big_shell_dirt_01",
			0.070794582,
			1,
			15
		};
		bullet6[] = {
			"ca\sounds\weapons\shells\big_shell_dirt_02",
			0.070794582,
			1,
			15
		};
		bullet7[] = {
			"ca\sounds\weapons\shells\big_shell_dirt_03",
			0.070794582,
			1,
			15
		};
		bullet8[] = {
			"ca\sounds\weapons\shells\big_shell_dirt_04",
			0.070794582,
			1,
			15
		};
		bullet9[] = {
			"ca\sounds\weapons\shells\big_shell_soft_01",
			0.070794582,
			1,
			15
		};
		bullet10[] = {
			"ca\sounds\weapons\shells\big_shell_soft_02",
			0.070794582,
			1,
			15
		};
		bullet11[] = {
			"ca\sounds\weapons\shells\big_shell_soft_03",
			0.070794582,
			1,
			15
		};
		bullet12[] = {
			"ca\sounds\weapons\shells\big_shell_soft_04",
			0.070794582,
			1,
			15
		};
		canLock = 0;
		initSpeed = 862;
		modes[] = {
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		soundBullet[] = {
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};

		class manual : MGun
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 5;
			autoFire = 1;
			begin1[] = {
				"ca\sounds_baf\weapons\L7A2",
				1.7782794,
				1,
				1000
			};
			/* begin1[] = {
				"ca\sounds_baf\weapons\L94A1",
				1.7782794,
				1,
				1300
			}; */
			burst = 1;
			dispersion = 0.0020000001;
			displayName = "$STR_BAF_BAF_L94A10";
			reloadTime = 0.12;
			showToPlayer = 1;
			soundBegin[] = {
				"begin1",
				0.5
			};
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			minRange = 1;
			minRangeProbab = 0.0099999998;
		};
		class close : manual
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			burst = 10;
			maxRange = 200;
			maxRangeProbab = 0.039999999;
			midRange = 100;
			midRangeProbab = 0.57999998;
			minRange = 0;
			minRangeProbab = 0.050000001;
			showToPlayer = 0;
			soundBurst = 0;
		};
		class far : close
		{
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			burst = 5;
			maxRange = 800;
			maxRangeProbab = 0.0099999998;
			midRange = 600;
			midRangeProbab = 0.40000001;
			minRange = 500;
		};
		class medium : close
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			burst = 4;
			maxRange = 600;
			midRange = 400;
			minRange = 300;
		};
		class short : close
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			burst = 8;
			maxRange = 400;
			midRange = 200;
			minRange = 50;
		};
	};
	class BAF_static_GMG : MGun
	{
		delete begin1;
		delete soundBegin;

		sound[] = {
			"ca\sounds_baf\weapons\GMG",
			1.7782794,
			1,
			1300
		};
	};
	class M2 : MGun
	{
	};
	class BAF_L2A1 : M2
	{
		delete begin1;
		delete sound;
		delete soundBegin;
		delete soundContinuous;

		class manual : MGun
		{
			begin1[] = {
				"\ca\sounds_baf\weapons\L2A1",
				1.7782794,
				1,
				1200
			};
			soundBegin[] = {
				"begin1",
				1
			};
		};
	};
	class M621 : MGun
	{
		magazines[] = {"400Rnd_20mm_M621"};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Air : AllVehicles
	{
	};
	class Helicopter : Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class AW159_Lynx_BAF : Helicopter
	{
		delete enableManualFire;

		magazines[] = {
			"400Rnd_20mm_M621",
			"120Rnd_CMFlareMagazine"
		};
		weapons[] = {
			"BAF_M621",
			"CMFlareLauncher"
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {
					"Laserbatteries",
					"12Rnd_CRV7"
				};
				weapons[] = {
					"Laserdesignator_mounted",
					"CRV7_PG"
				};
			};
		};
	};
	class Land : AllVehicles
	{
	};
	class LandVehicle : Land
	{
	};
	class StaticWeapon : LandVehicle
	{
		class Turrets;
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
		delete begin1;

		sound[] = {
			"ca\sounds_baf\weapons\L2A1",
			3.1622777,
			1,
			1200
		};
		soundBegin[] = {
			"sound",
			1
		};
	};
	class BAF_GPMG_Minitripod_D : BAF_L2A1_ACOG_base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				magazines[] = {
					"200Rnd_762x51_M240",
					"200Rnd_762x51_M240",
					"200Rnd_762x51_M240",
					"200Rnd_762x51_M240"
				};
			};
		};
	};
};