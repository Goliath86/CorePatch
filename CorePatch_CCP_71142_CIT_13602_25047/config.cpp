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
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_CCP_71142_CIT_13602_25047
		{
			list[] = {"CorePatch_CCP_71142_CIT_13602_25047"};
		};
	};
};
class CfgMagazines
{
	class 200Rnd_762x54_PKT;
	class 200Rnd_762x54_GPMG : 200Rnd_762x54_PKT
	{
		ammo = "B_762x51_Ball";
		descriptionShort = "$STR_DSS_200RND_762X51_GPMG_CP";
	};
	class 1200Rnd_762x51_M240;
	class 1200Rnd_20mm_M621 : 1200Rnd_762x51_M240
	{
		displayName = "$STR_BAF_M621_MANUAL0";
		nameSound = "cannon";
		tracersEvery = 2;
	};
	class 2000Rnd_762x51_M134;
	class 2000Rnd_762x51_L94A1 : 2000Rnd_762x51_M134
	{
		ammo = "B_762x51_Ball";
		tracersEvery = 4;
	};
	class VehicleMagazine;
	class 400Rnd_20mm_M621 : VehicleMagazine
	{
		ammo = "B_20mm_AP";
		count = 400;
		displayName = "$STR_BAF_M621_MANUAL0";
		displayNameShort = "HE";
		initSpeed = 1036;
		maxLeadSpeed = 200;
		nameSound = "cannon";
		scope = 2;
		tracersEvery = 2;
	};
};
class CfgWeapons
{
	class CannonCore;
	class BAF_M621 : CannonCore
	{
		autoFire = 1;
		canLock = 0;
		cursor = "Air_W_MG";
		cursorAim = "Air_Dot";
		displayName = "$STR_BAF_M621_MANUAL0";
		ffCount = 6;
		ffFrequency = 11;
		ffMagnitude = 0.5;
		flash = "gunfire";
		flashSize = 0.1;
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
			ffCount = 6;
			ffFrequency = 11;
			ffMagnitude = 0.5;
			autoFire = 1;
			dispersion = 0.0012000001;
			displayName = "$STR_BAF_M621_MANUAL0";
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			minRangeProbab = 0.0099999998;
			reloadTime = 0.075000003;
			sound[] = {
				"\Ca\sounds\Weapons\cannon\a10vulcanVII",
				10,
				1,
				1100
			};
		};
		class close : manual
		{
			burst = 10;
			maxRange = 500;
			maxRangeProbab = 0.039999999;
			midRange = 200;
			midRangeProbab = 0.57999998;
			minRange = 0;
			minRangeProbab = 0.050000001;
			showToPlayer = 0;
			soundBurst = 0;
		};
		class short : close
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			burst = 8;
			maxRange = 800;
			midRange = 600;
			minRange = 300;
		};
		class medium : close
		{
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			burst = 4;
			maxRange = 1000;
			midRange = 800;
			minRange = 600;
		};
		class far : close
		{
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			burst = 5;
			maxRange = 1200;
			maxRangeProbab = 0.0099999998;
			midRange = 1000;
			midRangeProbab = 0.40000001;
			minRange = 900;
		};
	};
	class MGun;
	class BAF_L7A2 : MGun
	{
		aiDispersionCoefX = 7;
		aiDispersionCoefY = 7;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 400;
		ballisticsComputer = 0;
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
			"100Rnd_762x51_M240",
			"200Rnd_762x54_GPMG"
		};
		maxRange = 500;
		maxRangeProbab = 0.039999999;
		midRange = 150;
		midRangeProbab = 0.57999998;
		minRange = 1;
		minRangeProbab = 0.30000001;
		modes[] = {
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		reloadTime = 0.075000003;
		soundBegin[] = {
			"sound",
			1
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
			aiRateOfFireDistance = 50;
			begin1[] = {
				"ca\sounds\Weapons\machineguns\M240_single1",
				1.7782794,
				1,
				1000
			};
			begin2[] = {
				"ca\sounds\Weapons\machineguns\M240_single2",
				1.7782794,
				1,
				1000
			};
			dispersion = 0.0035000001;
			displayName = "$STR_BAF_BAF_L7A20";
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			minRangeProbab = 0.0099999998;
			reloadTime = 0.075000003;
			soundBegin[] = {
				"begin1",
				0.5,
				"begin2",
				0.5
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
		class short : close
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			burst = 8;
			maxRange = 400;
			midRange = 200;
			minRange = 50;
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
	};
	class BAF_L94A1 : MGun
	{
		aiDispersionCoefX = 21;
		aiDispersionCoefY = 21;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 400;
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
		magazines[] = {
			"2000Rnd_762x51_L94A1",
			"1200Rnd_762x51_M240"
		};
		maxRange = 500;
		maxRangeProbab = 0.039999999;
		midRange = 150;
		midRangeProbab = 0.57999998;
		minRange = 1;
		minRangeProbab = 0.30000001;
		modes[] = {
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		reloadTime = 0.12;
		soundBegin[] = {
			"sound",
			1
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
			aiRateOfFireDistance = 50;
			begin1[] = {
				"ca\sounds_baf\weapons\L7A2",
				1.7782794,
				1,
				1000
			};
			dispersion = 0.0020000001;
			displayName = "$STR_BAF_BAF_L94A10";
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			minRangeProbab = 0.0099999998;
			reloadTime = 0.12;
			soundBegin[] = {
				"begin1",
				0.5
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
		class short : close
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			burst = 8;
			maxRange = 400;
			midRange = 200;
			minRange = 50;
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
	};
	class M2 : MGun
	{
	};
	class BAF_L2A1 : M2
	{
		class manual : MGun
		{
			aiRateOfFireDistance = 50;
			begin1[] = {
				"ca\sounds\weapons\machineguns\m2_single_1",
				1.4125376,
				1,
				1200
			};
			begin2[] = {
				"ca\sounds\weapons\machineguns\m2_single_2",
				1.4125376,
				1,
				1200
			};
			dispersion = 0.001;
			displayName = "$STR_BAF_BAF_L2A10";
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			minRangeProbab = 0.0099999998;
			reloadTime = 0.11;
			soundBegin[] = {
				"begin1",
				0.30000001,
				"begin2",
				0.69999999
			};
		};
	};
	class M621 : MGun
	{
		magazines[] = {
			"400Rnd_20mm_M621",
			"1200Rnd_20mm_M621"
		};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter : Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class AW159_Lynx_BAF : Helicopter
	{
		enableManualFire = 1;
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
	class StaticMGWeapon;
	class BAF_L2A1_ACOG_base : StaticMGWeapon
	{
		begin1[] = {
			"ca\sounds\Weapons\machineguns\M2_single_1",
			1.7782794,
			1,
			1400
		};
		begin2[] = {
			"ca\sounds\Weapons\machineguns\M2_single_2",
			1.7782794,
			1,
			1400
		};
		soundBegin[] = {
			"begin1",
			0.5,
			"begin2",
			0.5
		};
	};
};