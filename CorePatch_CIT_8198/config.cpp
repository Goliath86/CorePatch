class CfgPatches
{
	class CorePatch_CIT_8198
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles {
	class Air;
	class Helicopter:Air {
		class Turrets;
		class HitPoints {
			class HitEngine;
			class HitGlass2;
			class HitGlass4;
		};
	};
	class Mi24_Base:Helicopter {
		armor = 50;
		model = "\CorePatch\CorePatch_CIT_8198\models\Mi24_V.p3d";
		class Turrets:Turrets {
			class MainTurret;
		};
		class HitPoints:HitPoints {
			class HitEngine:HitEngine {
				armor = 0.9;
			};
		};
	};
	class Mi24_Base_RU:Mi24_Base {};
	class Mi24_P:Mi24_Base_RU {
		model = "\CorePatch\CorePatch_CIT_8198\models\Mi24_P.p3d";
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
		model = "\CorePatch\CorePatch_CIT_8198\models\Mi24_V2.p3d";
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
		model = "\CorePatch\CorePatch_CIT_8198\models\Mi35.p3d";
	};	
	class Mi24_Base_TK_EP1:Mi24_Base {};
	class Mi24_D_Base_TK_EP1:Mi24_Base_TK_EP1 {
		model = "\CorePatch\CorePatch_CIT_8198\models\Mi35.p3d";
	};
	class Mi24_Base_CZ_ACR:Mi24_Base {};
	class Mi24_D_Base_CZ_ACR:Mi24_Base_CZ_ACR {
		model = "\CorePatch\CorePatch_CIT_8198\models\mi35_ACR.p3d";
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
