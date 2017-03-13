class CfgPatches
{
	class CorePatch_Mi24
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {"Mi24_V2"};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_Mi24
		{
			list[] = {"CorePatch_Mi24"};
		};
	};
};
class CfgVehicles {
	class Air;
	class Helicopter:Air {
		class Turrets;
		class HitPoints {
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Mi24_Base:Helicopter {
		armor = 50;
		model = "\CorePatch\CorePatch_Mi24\models\Mi24_V.p3d";
		class Turrets:Turrets {
			class MainTurret;
		};
		class HitPoints:HitPoints {
			class HitEngine:HitEngine {
				armor = 0.9;
			};
			class HitGlass1:HitGlass1 { // Gunner thick front armored glass
				armor = 10;
			};
			class HitGlass2:HitGlass2 { // Gunner thin side glass
				armor = 0.4;
			};
			class HitGlass3:HitGlass3 { // Pilot thick front armored glass
				armor = 10;
			};
			class HitGlass4:HitGlass4 { // Pilot thin side glass
				armor = 0.4;
			};
			class HitGlass5:HitGlass5 { // Left cargo glass
				armor = 0.2;
			};
			class HitGlass6:HitGlass6 { // Right cargo glass
				armor = 0.2;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"Ca\Air_E\Mi35\Data\mi35_sklo.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_sklo_damage.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_sklo_damage.rvmat",

				"Ca\Air_E\Mi35\Data\mi35_sklo_interier.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_sklo_interier_damage.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_sklo_interier_damage.rvmat",

				"CorePatch\CorePatch_Mi24\textures\mi35_armored_glass.rvmat",
				"CorePatch\CorePatch_Mi24\textures\mi35_armored_glass_damage.rvmat",
				"CorePatch\CorePatch_Mi24\textures\mi35_armored_glass_damage.rvmat",

				"CorePatch\CorePatch_Mi24\textures\mi35_armored_glass_interier.rvmat",
				"CorePatch\CorePatch_Mi24\textures\mi35_armored_glass_interier_damage.rvmat",
				"CorePatch\CorePatch_Mi24\textures\mi35_armored_glass_interier_damage.rvmat",

				"Ca\Air_E\Mi35\Data\mi35_001.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_001_damage.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_001_destruct.rvmat",

				"Ca\Air_E\Mi35\Data\mi35_002.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_002_damage.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_002_destruct.rvmat",

				"Ca\Air_E\Mi35\Data\mi35_003.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_003_damage.rvmat",
				"Ca\Air_E\Mi35\Data\mi35_003_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat"
			};
		};
	};
	class Mi24_Base_RU:Mi24_Base {};
	class Mi24_P:Mi24_Base_RU {
		model = "\CorePatch\CorePatch_Mi24\models\Mi24_P.p3d";
		class Turrets:Turrets {
			class MainTurret:MainTurret {
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "muzzle_2";
				gunEnd = "chamber_2";
				memoryPointGun = "muzzle_2";
			};
		};
	};
	class Mi24_V:Mi24_Base_RU {};
	class Mi24_V2:Mi24_V {
		scope = 1;
		model = "\CorePatch\CorePatch_Mi24\models\Mi24_V2.p3d";
		magazines[] = {"40Rnd_80mm","120Rnd_CMFlareMagazine"};
		class Turrets:Turrets {
			class MainTurret:MainTurret {
				weapons[] = {"YakB", "AT9Launcher"};
				magazines[] = {"1470Rnd_127x108_YakB", "8Rnd_AT9_Mi24V"};
			};
		};
	};
	class Mi24_Base_CDF:Mi24_Base {};
	class Mi24_D:Mi24_Base_CDF {
		model = "\CorePatch\CorePatch_Mi24\models\Mi35.p3d";
	};	
	class Mi24_Base_TK_EP1:Mi24_Base {};
	class Mi24_D_Base_TK_EP1:Mi24_Base_TK_EP1 {
		model = "\CorePatch\CorePatch_Mi24\models\Mi35.p3d";
	};
	class Mi24_Base_CZ_ACR:Mi24_Base {};
	class Mi24_D_Base_CZ_ACR:Mi24_Base_CZ_ACR {
		model = "\CorePatch\CorePatch_Mi24\models\mi35_ACR.p3d";
	};
};
class CfgMagazines {
	class 4Rnd_AT9_Mi24P;
	class 8Rnd_AT9_Mi24V:4Rnd_AT9_Mi24P {
		count = 8;
	};
};
class CfgWeapons {
	class MissileLauncher;
	class AT9Launcher:MissileLauncher {
		magazines[] = {"4Rnd_AT9_Mi24P", "8Rnd_AT9_Mi24V"};
	};
};
