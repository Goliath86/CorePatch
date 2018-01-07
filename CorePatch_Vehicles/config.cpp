class CfgPatches
{
	class CorePatch_Vehicles
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_Vehicles
		{
			list[] = {"CorePatch_Vehicles"};
		};
	};
};
//class DefaultEventhandlers;
class WeaponCloudsMGun;
class CfgVehicles
{
	class All;
	class AllVehicles : All
	{
		class AnimationSources;
		class NewTurret
		{
			delete turrentInfoType;
		};
	};
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
	class AH1_Base : Helicopter
	{
	};
	class AH1Z : AH1_Base
	{
		soundGetIn[] = {
			"ca\sounds\air\noises\heli_door_01",
			0.31622776,
			1,
			50
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 5;
			};
		};
	};
	class AH6_Base_EP1 : Helicopter
	{
		cargoCompartments[] = {"Compartment1"};
		driverCompartments = "Compartment1";
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\AH6\close",
			0.31622776,
			1,
			40
		};
	};
	class AH64_base_EP1 : Helicopter
	{
	};
	class AH64D : AH64_base_EP1
	{
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\AH64\close",
			0.31622776,
			1,
			40
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 5;
			};
		};
	};
	class AH64D_EP1 : AH64_base_EP1
	{
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\AH64\close",
			0.31622776,
			1,
			40
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 5;
			};
		};
	};
	class BAF_Apache_AH1_D : AH64D_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
			};
		};
	};
	class AW159_Lynx_BAF : Helicopter
	{
		cargoCompartments[] = {"Compartment1"};
		driverCompartments = "Compartment1";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		soundGetIn[] = {
			"Ca\sounds_baf\air\getin",
			0.31622776,
			1,
			40
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
			};
		};
	};
	class BAF_Merlin_HC3_D : Helicopter
	{
		cargoCompartments[] = {"Compartment1"};
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
		driverCompartments = "Compartment1";
		soundGetIn[] = {
			"Ca\sounds_baf\air\getin",
			0.31622776,
			1,
			40
		};
	};
	class CH47_base_EP1 : Helicopter
	{
		memoryPointsGetInCargo[] = {"pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos cargo dir"};
		memoryPointsGetInCoDriver = "pos cargo";
		memoryPointsGetInCoDriverDir = "pos cargo dir";
		memoryPointsGetInDriver = "pos cargo";
		memoryPointsGetInDriverDir = "pos cargo dir";
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\CH47\close",
			0.31622776,
			1,
			40
		};
	};
	class CH_47F_EP1 : CH47_base_EP1
	{
		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "M240BC_veh";
			};
			class ReloadMagazine
			{
				weapon = "M240BC_veh";
			};
			class Revolving
			{
				weapon = "M240BC_veh";
			};
		};
		class Turrets : Turrets
		{
			/* class MainTurret : MainTurret
			{
				initElev = -10;
				initTurn = 80;
				maxElev = 20;
				maxTurn = 115;
				minElev = -15;
				minTurn = 45;
			}; */
			class BackDoorGun : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				/* initElev = 0;
				initTurn = 180;
				maxElev = 5;
				maxTurn = 210;
				minElev = -45;
				minTurn = 160; */
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M240BC_veh"};
			};
			/* class RightDoorGun : MainTurret
			{
				delete initElev;
				delete maxElev;
				delete minElev;

				initTurn = -80;
				maxTurn = -45;
				minTurn = -115;
			}; */
		};
	};
	class CH_47F_BAF : CH_47F_EP1
	{
		soundGetIn[] = {
			"Ca\sounds_baf\air\getin",
			0.31622776,
			1,
			40
		};
	};
	class Ka60_Base_PMC : Helicopter
	{
		soundGetIn[] = {
			"Ca\Sounds_PMC\Air_PMC\Ka_door",
			0.31622776,
			1,
			40
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {50, 100, 150, 200, 250, 300, 325, 350, 375};
				discreteDistanceInitIndex = 5;
				/* initElev = 5;
				initTurn = 80;
				maxElev = 5;
				maxTurn = 125;
				minElev = -50;
				minTurn = 60; */
				turretInfoType = "RscWeaponZeroing";
			};
		};
	};
	class Ka137_Base_PMC : Helicopter {
		NoDestructionExplosion_CP = 1;
	};
	class Ka137_PMC : Ka137_Base_PMC
	{
	};
	class Ka137_MG_PMC : Ka137_Base_PMC
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class Kamov_Base : Helicopter
	{
	};
	class Ka52 : Kamov_Base
	{
		driverCompartments = "Compartment1";
		soundGetIn[] = {
			"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",
			1,
			1,
			50
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponRangeZeroing_Ka52";
			};
		};
	};
	class Mi17_base : Helicopter
	{
		aggregateReflectors[] = {{"1", "1"}};
		cargoCompartments[] = {"Compartment1"};
		soundGetIn[] = {
			"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",
			1,
			1,
			50
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerCompartments = "Compartment1";
				initElev = 5;
				initTurn = 80;
				/* maxElev = 5;
				maxTurn = 110; */
				minElev = -24;
				// minTurn = 70;
			};
			class BackTurret : MainTurret
			{
				delete gunnerCompartments;
				delete initElev;
				// delete maxElev;

				initTurn = -115;
				// maxTurn = -100;
				minElev = -22;
				// minTurn = -130;
			};
		};
	};
	class Mi17_base_CZ_EP1 : Mi17_base
	{
	};
	class Mi171Sh_Base_EP1 : Mi17_base_CZ_EP1
	{
		class Turrets : Turrets
		{
			class BackTurret : BackTurret
			{
				/* delete initElev;
				delete maxElev;

				initTurn = 180;
				maxTurn = 195; */
				minElev = -34;
				// minTurn = 165;
			};
			class LeftTurret : MainTurret
			{
				/* delete initElev;
				delete initTurn;
				delete maxElev;
				delete maxTurn; */
				delete minElev;
				// delete minTurn;
			};
			class RightTurret : MainTurret
			{
				/* delete initElev;
				delete maxElev;

				initTurn = -80;
				maxTurn = -50; */
				minElev = -49;
				// minTurn = -110;
			};
		};
	};
	class Mi17_base_RU : Mi17_base
	{
	};
	class Mi17_rockets_RU : Mi17_base_RU
	{
		class Turrets : Turrets
		{
			class FrontTurret : MainTurret
			{
				/* initElev = 0;
				initTurn = 0;
				maxElev = 5;
				maxTurn = 20; */
				minElev = -45;
				// minTurn = -20;
			};
		};
	};
	class Mi24_Base : Helicopter
	{
		soundGetIn[] = {
			"ca\sounds\Air\Mi17\ext\ext-Mi17-getin-01",
			1,
			1,
			40
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponRangeZeroing_Mi24";
			};
		};
	};
	class Mi24_Base_RU : Mi24_Base
	{
	};
	class Mi24_P : Mi24_Base_RU
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				turretInfoType = "RscWeaponEmpty";
			};
		};
	};
	class UH1_Base : Helicopter
	{
		cargoCompartments[] = {"Compartment1"};
		// enableManualFire = 0;
		soundGetIn[] = {
			"\ca\Sounds\Air\Noises\heli_door_01",
			0.31622776,
			1,
			40
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerCompartments = "Compartment1";
			};
			class CoPilotObs : MainTurret
			{
				delete gunnerCompartments;

				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-1",
					0.0099999998,
					1,
					30
				};
			};
			class RightDoorGun : MainTurret
			{
				delete initTurn;

				maxTurn = 5;
				minTurn = -185;
			};
		};
	};
	class UH1Y : UH1_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerOpticsModel = "\ca\weapons\optika_empty";
			};
			class RightDoorGun : RightDoorGun
			{
				delete visionMode;

				gunnerOpticsModel = "\ca\weapons\optika_empty";
			};
		};
	};
	class UH1H_base : Helicopter
	{
		cargoCompartments[] = {"Compartment1"};
		driverCompartments = "Compartment1";
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\UH1H\open_close",
			0.31622776,
			1,
			40
		};

		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "M240BC_veh";
			};
			class ReloadAnim_2
			{
				weapon = "M240BC_veh_2";
			};
			class ReloadMagazine
			{
				weapon = "M240BC_veh";
			};
			class ReloadMagazine_2
			{
				weapon = "M240BC_veh_2";
			};
			class Revolving
			{
				weapon = "M240BC_veh";
			};
			class Revolving_2
			{
				weapon = "M240BC_veh_2";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				gunnerCompartments = "Compartment1";
				/* initElev = 5;
				initTurn = -80;
				maxElev = 5;
				maxTurn = -50;
				minElev = -35;
				minTurn = -100; */
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M240BC_veh"};
			};
			class LeftDoorGun : MainTurret
			{
				/* delete initElev;
				delete maxElev;
				delete minElev;

				initTurn = 80;
				maxTurn = 105;
				minTurn = 50; */
				weapons[] = {"M240BC_veh_2"};
			};
		};
	};
	class UH60_Base : Helicopter
	{
		// enableManualFire = 0;
	};
	class MH60S : UH60_Base
	{
		// delete enableManualFire;

		cargoCompartments[] = {"Compartment1"};
		soundGetIn[] = {
			"\ca\Sounds\Air\Noises\heli_door_01",
			0.31622776,
			1,
			30
		};

		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "M240BC_veh";
			};
			class ReloadAnim_2
			{
				weapon = "M240BC_veh_2";
			};
			class ReloadMagazine
			{
				weapon = "M240BC_veh";
			};
			class ReloadMagazine_2
			{
				weapon = "M240BC_veh_2";
			};
			class Revolving
			{
				weapon = "M240BC_veh";
			};
			class Revolving_2
			{
				weapon = "M240BC_veh_2";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				gunnerCompartments = "Compartment1";
				initElev = 5;
				initTurn = 80;
				/* maxElev = 5;
				maxTurn = 110;
				minElev = -15;
				minTurn = 70; */
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M240BC_veh"};
			};
			class RightDoorGun : MainTurret
			{
				delete gunnerCompartments;

				initTurn = -80;
				/* maxTurn = -70;
				minTurn = -110; */
				weapons[] = {"M240BC_veh_2"};
			};
		};
	};
	class UH60M_base_EP1 : UH60_Base
	{
		cargoCompartments[] = {"Compartment1"};
		driverCompartments = "Compartment1";
		soundGetIn[] = {
			"Ca\Sounds_E\Air_E\UH1H\open_close",
			0.31622776,
			1,
			40
		};
	};
	class UH60M_US_base_EP1 : UH60M_base_EP1
	{
	};
	class UH60M_EP1 : UH60M_US_base_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerCompartments = "Compartment1";
				/* initElev = -10;
				initTurn = 80;
				maxElev = 5;
				maxTurn = 115;
				minElev = -15;
				minTurn = 65; */
			};
			/* class RightDoorGun : MainTurret
			{
				delete initElev;
				delete maxElev;
				delete minElev;

				initTurn = -80;
				maxTurn = -65;
				minTurn = -115;
			}; */
		};
	};
	class Plane : Air
	{
	};
	class A10 : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			40
		};
	};
	class AV8B2 : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			30
		};
	};
	class An2_Base_EP1 : Plane
	{
		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3"
		};
		soundGetIn[] = {
			"ca\sounds_E\Air_E\AN2\close",
			0.31622776,
			1,
			40
		};
	};
	class C130J : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\C130\close",
			0.31622776,
			1,
			40
		};
	};
	class L39_base : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			40
		};
	};
	class F35_base : Plane
	{
	};
	class F35B : F35_base
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			40
		};
	};
	class MV22 : Plane
	{
		cargoCompartments[] = {"Compartment1"};
		soundGetIn[] = {
			"ca\sounds\Air\MV22\close",
			0.31622776,
			1,
			40
		};
	};
	class Su25_base : Plane
	{
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			40
		};
	};
	class Su34 : Plane
	{
		driverCompartments = "Compartment1";
		soundGetIn[] = {
			"ca\sounds\Air\AV8\ext\ext-jetair-cabine-close1",
			0.056234132,
			1,
			20
		};

		class MFD
		{
			class HUD
			{
				class Bones
				{
					class HorizonBankMGun
					{
						maxAngle = -360;
						minAngle = 360;
					};
				};
			};
		};
		class Turrets
		{
			class MainTurret : NewTurret
			{
				gunnerCompartments = "Compartment1";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				//primaryGunner = 0;
			};
		};
		gunAimDown = 0; //0.145;
	};
	class Land : AllVehicles
	{
	};
	class LandVehicle : Land
	{
		class ViewPilot;
	};
	class Car : LandVehicle
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewOptics;
			};
		};
	};
	class Octavia_ACR:Car {
		model = "\Corepatch\CorePatch_Vehicles\models\Octavia_ACR";
	};
	class ATV_Base_EP1 : Car
	{
		model = "\Corepatch\CorePatch_Vehicles\models\atv";
		turnCoef = 1.3;
		damperSize = 0.08;
		damperForce = 1;
		damperDamping = 1;
		hiddenSelections[] = {"camo1","camo2","camo_mlod"};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\atv\data\atv_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","ca\wheeled_e\atv\data\atv_mlod_co.paa"};
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\ATV\ATV_ext_gearshift",
			0.56234133,
			1,
			20
		};
	};
	class BAF_ATV_D:ATV_Base_EP1 {};
	class BAF_ATV_W:BAF_ATV_D {
		hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_wood_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_wood_mlod_co.paa"};
	};

	class ATV_TK_CP:ATV_Base_EP1 {
		side = 0;
		scope = 1;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1", "TK_Soldier_EP1"};
	};

	class ATV_RU_CP:ATV_TK_CP {
		faction = "RU";
		crew = "RU_Soldier";
		typicalCargo[] = {"RU_Soldier", "RU_Soldier"};
		hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_wood_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_wood_mlod_co.paa"};
	};

	class ATV_Gue_CP:ATV_Base_EP1 {
		side = 2;
		scope = 1;
		faction = "GUE";
		crew = "GUE_Soldier_3";
		typicalCargo[] = {"GUE_Soldier_3", "GUE_Soldier_3"};
		hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_black_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_black_mlod_co.paa"};
	};

	class ATV_CIV_CP:ATV_Base_EP1 {
		side = 3;
		scope = 2;
		faction = "BIS_TK_CIV";
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1", "TK_CIV_Takistani01_EP1"};
		hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_white_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_civ_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_white_mlod_co.paa"};
	};

	class ATV_CIV_Black_CP:ATV_CIV_CP	{scope = 1; hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_black_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_civ_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_black_mlod_co.paa"};};
	class ATV_CIV_Grey_CP:ATV_CIV_CP	{scope = 1; hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_grey_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_civ_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_grey_mlod_co.paa"};};
	class ATV_CIV_Red_CP:ATV_CIV_CP		{scope = 1; hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_red_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_civ_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_red_mlod_co.paa"};};
	class ATV_CIV_Green_CP:ATV_CIV_CP	{scope = 1; hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_green_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_civ_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_green_mlod_co.paa"};};
	class ATV_CIV_Blue_CP:ATV_CIV_CP	{scope = 1; hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_blue_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_civ_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_blue_mlod_co.paa"};};
	class ATV_CIV_Yellow_CP:ATV_CIV_CP	{scope = 1; hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_yellow_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_civ_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_yellow_mlod_co.paa"};};
	class ATV_CIV_Purple_CP:ATV_CIV_CP	{scope = 1; hiddenSelectionsTextures[] = {"\Corepatch\CorePatch_Vehicles\textures\atv_purple_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_civ_detail_co.paa","\Corepatch\CorePatch_Vehicles\textures\atv_purple_mlod_co.paa"};};

	class ArmoredSUV_Base_PMC : Car
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			20
		};
	};
	class ArmoredSUV_PMC : ArmoredSUV_Base_PMC
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-1",
					0.031622775,
					1,
					15
				};
			};
		};
	};
	class BAF_Jackal2_BASE_D : Car
	{
		soundGetIn[] = {
			"\Ca\sounds_baf\wheeled\jackal_door",
			1,
			1,
			30
		};

		class Turrets : Turrets
		{
			class M420_Turret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				/* maxElev = 10;
				maxTurn = 15;
				minElev = -10;
				minTurn = -15; */
				turretInfoType = "RscWeaponZeroing";
			};
		};
	};
	class BAF_Jackal2_GMG_D : BAF_Jackal2_BASE_D
	{
		class Turrets : Turrets
		{
			class GMG_Turret : MainTurret
			{
				delete displayName;

				soundServo[] = {
					"\Ca\sounds\Vehicles\Servos\turret-1",
					0.0099999998,
					1,
					10
				};

				class ViewOptics
				{
					delete visionMode;
				};
			};
		};
	};
	class BAF_Jackal2_L2A1_D : BAF_Jackal2_BASE_D
	{
		class Turrets : Turrets
		{
			class M2_Turret : MainTurret
			{
				soundServo[] = {
					"\Ca\sounds\Vehicles\Servos\turret-1",
					0.0099999998,
					1,
					10
				};

				class ViewOptics
				{
					delete maxElev;
					delete minElev;
					delete visionMode;
				};
			};
		};
	};
	class Dingo_Base_ACR : Car
	{
		memoryPointSupply = "zamerny";
		soundGetIn[] = {
			"ca\Sounds_ACR\wheeled\Dingo\door",
			0.56234133,
			1,
			40
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class Dingo_GL_Wdl_ACR : Dingo_Base_ACR
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistanceInitIndex = 2;

				class GunFire : WeaponCloudsMGun
				{
					interval = 0.0099999998;
				};
			};
		};
	};
	class HMMWV_Base : Car
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",
			0.56234133,
			1,
			20
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
	class HMMWV_Armored : HMMWV_Base
	{
		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "M240BC_veh";
			};
			class ReloadMagazine
			{
				weapon = "M240BC_veh";
			};
			class Revolving
			{
				weapon = "M240BC_veh";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete soundServo;

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				weapons[] = {"M240BC_veh"};
			};
		};
	};
	class HMMWV_Avenger : HMMWV_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerCompartments = "Compartment2";
				stabilizedInAxes = "StabilizedInAxesBoth";
				turretInfoType = "RscWeaponRangeZeroing";
				viewGunnerInExternal = 0;

				class ViewOptics
				{
					thermalMode[] = {2, 3};
					visionMode[] = {
						"Normal",
						"Ti"
					};
				};
			};
		};
	};
	class HMMWV_Avenger_base : HMMWV_Avenger
	{
	};
	class HMMWV_Avenger_DES_EP1 : HMMWV_Avenger_base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete discreteDistance;
				delete discreteDistanceInitIndex;
				delete turretInfoType;
			};
		};
	};
	class HMMWV_M2 : HMMWV_Base
	{
		class AnimationSources : AnimationSources
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
	};
	class HMMWV_M998_crows_M2_DES_EP1 : HMMWV_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class HMMWV_M998_crows_MK19_DES_EP1 : HMMWV_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				weapons[] = {
					"MK19BC",
					"SmokeLauncher"
				};
			};
		};
	};
	class HMMWV_M998A2_SOV_DES_EP1 : HMMWV_Base
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",
			0.56234133,
			1,
			20
		};

		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "M240BC_veh";
			};
			/* class ReloadAnim_2
			{
				source = "reload";
				weapon = "MK19BC";
			}; */
			class ReloadMagazine
			{
				weapon = "M240BC_veh";
			};
			/* class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "MK19BC";
			}; */
			class Revolving
			{
				weapon = "M240BC_veh";
			};
			/* class Revolving_2
			{
				source = "revolving";
				weapon = "MK19BC";
			};
			class belt_rotation
			{
				source = "reload";
				weapon = "MK19BC";
			}; */
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				weapons[] = {"MK19BC"};
			};
			class SideTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				/* maxElev = 10;
				maxTurn = 15;
				minElev = -10;
				minTurn = -15; */
				weapons[] = {"M240BC_veh"};
			};
		};
	};
	class HMMWV_M1151_M2_DES_Base_EP1 : HMMWV_Base
	{
		class AnimationSources : AnimationSources
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
				delete magazines;
				delete stabilizedInAxes;
				delete weapons;
			};
		};
	};
	class M1114_AGS_ACR : HMMWV_M1151_M2_DES_Base_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300};

				class ViewOptics : ViewOptics
				{
					initFov = 0.1; // 2.5x
					maxFov = 0.1;
					minFov = 0.1;
				};
			};
		};
	};
	class HMMWV_MK19 : HMMWV_Base
	{
		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "MK19BC";
			};
			class ReloadMagazine
			{
				weapon = "MK19BC";
			};
			class Revolving
			{
				weapon = "MK19BC";
			};
			class belt_rotation
			{
				weapon = "MK19BC";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				weapons[] = {"MK19BC"};
			};
		};
	};
	class HMMWV_TOW : HMMWV_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerOpticsEffect[] = {
					"TankGunnerOptics2",
					"OpticsBlur1",
					"OpticsCHAbera1"
				};
				gunnerOpticsModel = "\ca\weapons_e\TOW_TI";
				turretInfoType = "RscWeaponEmpty";

				class ViewOptics
				{
					thermalMode[] = {0, 1};
					visionMode[] = {
						"Normal",
						"Ti"
					};
				};
			};
		};
	};
	class HMMWV_TOW_DES_EP1 : HMMWV_TOW
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete ViewOptics;
				delete gunnerOpticsEffect;
				delete gunnerOpticsModel;
			};
		};
	};
	class Ikarus : Car
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\BUS\ext\ext-bus-getout-1",
			1,
			1,
			40
		};
	};
	class Lada_base : Car
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\lada\lada_door",
			1,
			1,
			30
		};
	};
	class LandRover_Base : Car
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_door",
			1,
			1,
			30
		};

		class SoundEvents
		{
			class AccelerationIn;
		};
		class Sounds
		{
			class EngineHighIn;
			class EngineLowIn;
			class IdleIn;
			class NoiseIn;
			class TiresAsphaltIn;
			class TiresGrassIn;
			class TiresGravelIn;
			class TiresMudIn;
			class TiresRockIn;
			class TiresSandIn;
		};
	};
	class LandRover_MG_Base_EP1 : LandRover_Base
	{
		soundEngineOffInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_stop",
			1,
			1
		};
		soundEngineOnInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_start",
			1,
			1
		};

		class AnimationSources : AnimationSources
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
		class SoundEvents : SoundEvents
		{
			class AccelerationIn : AccelerationIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_acceleration",
					0.56234133,
					1
				};
			};
		};
		class Sounds : Sounds
		{
			class EngineHighIn : EngineHighIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_high",
					1.4125376,
					0.60000002
				};
			};
			class EngineLowIn : EngineLowIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_low",
					1.4125376,
					0.60000002
				};
			};
			class IdleIn : IdleIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_idle",
					0.79432821,
					1
				};
			};
			class NoiseIn : NoiseIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise4",
					0.31622776,
					1
				};
			};
			class TiresAsphaltIn : TiresAsphaltIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
					0.1,
					1
				};
			};
			class TiresGrassIn : TiresGrassIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
					0.1,
					1
				};
			};
			class TiresGravelIn : TiresGravelIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
					0.1,
					1
				};
			};
			class TiresMudIn : TiresMudIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
					0.1,
					1
				};
			};
			class TiresRockIn : TiresRockIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
					0.1,
					1
				};
			};
			class TiresSandIn : TiresSandIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
					0.1,
					1
				};
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-1",
					0.031622775,
					1,
					15
				};
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M2BC"};
			};
		};
	};
	class LandRover_SPG9_Base_EP1 : LandRover_Base
	{
		soundEngineOffInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_stop",
			1,
			1
		};
		soundEngineOnInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_start",
			1,
			1
		};

		class SoundEvents : SoundEvents
		{
			class AccelerationIn : AccelerationIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_acceleration",
					0.56234133,
					1
				};
			};
		};
		class Sounds : Sounds
		{
			class EngineHighIn : EngineHighIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_high",
					1.4125376,
					0.60000002
				};
			};
			class EngineLowIn : EngineLowIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_low",
					1.4125376,
					0.60000002
				};
			};
			class IdleIn : IdleIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_idle",
					0.79432821,
					1
				};
			};
			class NoiseIn : NoiseIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise4",
					0.31622776,
					1
				};
			};
			class TiresAsphaltIn : TiresAsphaltIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
					0.1,
					1
				};
			};
			class TiresGrassIn : TiresGrassIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
					0.1,
					1
				};
			};
			class TiresGravelIn : TiresGravelIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
					0.1,
					1
				};
			};
			class TiresMudIn : TiresMudIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
					0.1,
					1
				};
			};
			class TiresRockIn : TiresRockIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
					0.1,
					1
				};
			};
			class TiresSandIn : TiresSandIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
					0.1,
					1
				};
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				soundServo[] = {};
			};
		};
	};
	class LandRover_Special_CZ_EP1 : LandRover_Base
	{
		soundEngineOffInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_stop",
			1,
			1
		};
		soundEngineOnInt[] = {
			"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_start",
			1,
			1
		};

		class AnimationSources : AnimationSources
		{
			class ReloadAnim_2
			{
				weapon = "PKTBC";
			};
			class ReloadMagazine_2
			{
				weapon = "PKTBC";
			};
			class Revolving_2
			{
				weapon = "PKTBC";
			};
		};
		class SoundEvents : SoundEvents
		{
			class AccelerationIn : AccelerationIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_acceleration",
					0.56234133,
					1
				};
			};
		};
		class Sounds : Sounds
		{
			class EngineHighIn : EngineHighIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_high",
					1.4125376,
					0.60000002
				};
			};
			class EngineLowIn : EngineLowIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_low",
					1.4125376,
					0.60000002
				};
			};
			class IdleIn : IdleIn
			{
				sound[] = {
					"\ca\Sounds_E\Wheeled_E\LandRover\LRover_ext_idle",
					0.79432821,
					1
				};
			};
			class NoiseIn : NoiseIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise4",
					0.31622776,
					1
				};
			};
			class TiresAsphaltIn : TiresAsphaltIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",
					0.1,
					1
				};
			};
			class TiresGrassIn : TiresGrassIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",
					0.1,
					1
				};
			};
			class TiresGravelIn : TiresGravelIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",
					0.1,
					1
				};
			};
			class TiresMudIn : TiresMudIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",
					0.1,
					1
				};
			};
			class TiresRockIn : TiresRockIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",
					0.1,
					1
				};
			};
			class TiresSandIn : TiresSandIn
			{
				sound[] = {
					"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",
					0.1,
					1
				};
			};
		};
		class Turrets : Turrets
		{
			class AGS30_Turret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";

				class ViewOptics : ViewOptics
				{
					initFov = 0.1; // 2.5x
					maxFov = 0.1;
					minFov = 0.1;
				};
			};
			class PK_Turret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				/* maxElev = 10;
				maxTurn = 15;
				minElev = -10;
				minTurn = -15; */
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"PKTBC"};
			};
		};
	};
	class Offroad_DSHKM_base : Car
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.25118864,
			1,
			30
		};

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
	class Offroad_SPG9_Gue : Offroad_DSHKM_base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete soundServo;

				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				turretInfoType = "RscWeaponEmpty";

				class ViewOptics : ViewOptics
				{
					initFov = 0.2;
					maxFov = 0.2;
					minFov = 0.057999998;
				};
			};
		};
	};
	class Pickup_PK_base : Car
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.25118864,
			1,
			30
		};

		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "PKTBC";
			};
			class ReloadMagazine
			{
				weapon = "PKTBC";
			};
			class Revolving
			{
				weapon = "PKTBC";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				/* maxElev = 10;
				minElev = -10; */
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"PKTBC"};
			};
		};
	};
	class Truck : Car
	{
	};
	class Kamaz_Base : Truck
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\Kamaz\int\int-Kamaz-getout-1",
			0.31622776,
			1,
			50
		};
	};
	class KamazRefuel : Kamaz_Base
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class KamazRepair : Kamaz_Base
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class MAZ_543_SCUD_Base_EP1 : Truck
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\stryker\stryker_door",
			1,
			1,
			30
		};
	};
	class MTVR : Truck
	{
		model = "\CorePatch\CorePatch_Vehicles\models\mtvr";
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getin",
			0.70794576,
			1,
			50
		};
	};
	class MtvrRefuel : MTVR
	{
		model = "\CorePatch\CorePatch_Vehicles\models\mtvr_Fuel";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class MtvrReammo : MTVR
	{
		model = "\CorePatch\CorePatch_Vehicles\models\mtvr_Ammunition";
	};
	class MtvrRepair : MTVR
	{
		model = "\CorePatch\CorePatch_Vehicles\models\mtvr_Repair";
	};
	class T810_Turrets_Base_ACR : Truck
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\MTVR\ext\ext-truck-getin",
			0.70794576,
			1,
			50
		};

		class Turrets : Turrets
		{
			class PKBTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-1",
					0.1,
					1,
					15
				};
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"PKTBC"};
			};
		};
	};
	class T810A_MG_ACR : T810_Turrets_Base_ACR
	{
		model = "\CorePatch\CorePatch_Vehicles\models\T810_vp2_ACR";
		class AnimationSources : AnimationSources
		{
			class ReloadMagazine
			{
				weapon = "PKTBC";
			};
			class Revolving
			{
				weapon = "PKTBC";
			};
			class belt_rotation
			{
				weapon = "PKTBC";
			};
			class bolt
			{
				weapon = "PKTBC";
			};
			class recoil
			{
				weapon = "PKTBC";
			};
		};
	};
	class Ural_Base_withTurret : Truck
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\URAL\ext\ext-ural-getout",
			1,
			1,
			30
		};
	};
	class GRAD_Base : Ural_Base_withTurret
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
			};
		};
	};
	/* class RM70_ACR : GRAD_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets
				{
					class UkTurret : NewTurret
					{
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
						discreteDistanceInitIndex = 2;
						turretInfoType = "RscWeaponZeroing";
					};
				};
			};
		};
	}; */
	class Ural_Base : Ural_Base_withTurret
	{
	};
	class UralRefuel_Base : Ural_Base
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class UralRepair_Base : Ural_Base
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class Ural_ZU23_Base : Ural_Base_withTurret
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponZeroing";

				class ViewOptics
				{
					initFov = 0.070821531; // 3.5x
					maxFov = 0.070821531;
					minFov = 0.070821531;
				};
			};
		};
	};
	class V3S_Base : Truck
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\V3S\ext\ext-V3S-getout-1",
			0.44668359,
			1,
			40
		};
	};
	class V3S_Base_EP1 : V3S_Base
	{
	};
	class V3S_Refuel_TK_GUE_EP1 : V3S_Base_EP1
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
	};
	class S1203_TK_CIV_EP1 : Car
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\lada\lada_door",
			1,
			1,
			60
		};
	};
	class SUV_Base_EP1 : Car
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			60
		};
	};
	class SUV_PMC : SUV_Base_EP1
	{
		delete transportMaxBackpacks;
		delete transportMaxMagazines;
		delete transportMaxWeapons;
	};
	class SkodaBase : Car
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\Car\ext\ext-Car-getout-1",
			0.31622776,
			1,
			60
		};
	};
	class car_hatchback : SkodaBase
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedna-getout-1",
			0.31622776,
			1,
			60
		};
	};
	class car_sedan : SkodaBase
	{
		soundGetIn[] = {
			"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedna-getout-1",
			0.31622776,
			1,
			60
		};
	};
	class datsun1_civil_1_open : SkodaBase
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.25118864,
			1,
			60
		};
	};
	class TowingTractor : Car
	{
		soundGetIn[] = {
			//"ca\sounds\vehicles\Wheeled\Tractor\ext\ext-Tractor-getout-1",
			"",
			0.1,
			1,
			60
		};
	};
	class Tractor: Car
	{
		soundGetIn[] = {
			"\Ca\sounds\Vehicles\Wheeled\URAL\ext\ext-ural-getout",
			0.1,
			1,
			60
		};
	};
	class UAZ_Base : Car
	{
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			60
		};

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
	class UAZ_AGS30_Base : UAZ_Base
	{
		soundEngineOffInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",
			0.17782794,
			1
		};
		soundEngineOnInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",
			0.17782794,
			1
		};
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			60
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300};

				class ViewOptics : ViewOptics
				{
					initFov = 0.1; // 2.5x
					maxFov = 0.1;
					minFov = 0.1;
				};
			};
		};
	};
	class UAZ_MG_Base : UAZ_Base
	{
		soundEngineOffInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",
			0.17782794,
			1
		};
		soundEngineOnInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",
			0.17782794,
			1
		};
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			60
		};
	};
	class UAZ_SPG9_Base : UAZ_Base
	{
		soundEngineOffInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_stop1",
			0.17782794,
			1
		};
		soundEngineOnInt[] = {
			"ca\Sounds_E\Wheeled_E\UAZ\uaz_ext_start1",
			0.17782794,
			1
		};
		soundGetIn[] = {
			"ca\Sounds_E\Wheeled_E\SUV\SUV_ext_door",
			0.56234133,
			1,
			60
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				soundServo[] = {};
				turretInfoType = "RscWeaponEmpty";
			};
		};
	};
	class VWGolf : Car
	{
		soundGetIn[] = {
			"ca\sounds\Vehicles\wheeled\GOLF\ext\ext-golf-getout",
			0.56234133,
			1,
			60
		};
	};
	class Volha_TK_CIV_Base_EP1 : Car
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\lada\lada_door",
			1,
			1,
			60
		};
	};
	class hilux1_civil_1_open : Car
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.56234133,
			1,
			60
		};
	};
	class hilux1_civil_3_open_EP1 : Car
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",
			0.56234133,
			1,
			60
		};
	};
	class Wheeled_APC : Car
	{
		extCameraPosition[] = {0, 2, -9};
	};
	class BRDM2_Base : Wheeled_APC
	{
		model = "\CorePatch\CorePatch_Vehicles\models\BRDM2";
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			60
		};
		unitInfoType = "RscUnitInfoTank";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete startEngine;

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				gunnerOpticsEffect[] = {
					"TankGunnerOptics1",
					"OpticsBlur2",
					"OpticsCHAbera2"
				};
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {
					"KPVT",
					"PKTBC"
				};

				class ViewOptics
				{
					delete gunnerOpticsEffect;
				};
			};
		};

		class Damage
		{
			tex[] = {};
			mat[] = {
				"Ca\wheeled_E\BRDM2\Data\Detailmapy\BRDM2_01.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\brdm2_01_damage.rvmat", //"Ca\wheeled_E\BRDM2\Data\Detailmapy\BRDM2_01.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\brdm2_01_destruct.rvmat", //"Ca\wheeled_E\BRDM2\Data\Detailmapy\brdm2_01_destruct.rvmat",

				"Ca\wheeled_E\BRDM2\Data\Detailmapy\brdm2_02.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\brdm2_02_damage.rvmat", //"Ca\wheeled_E\BRDM2\Data\Detailmapy\brdm2_02.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\brdm2_02_destruct.rvmat", //"Ca\wheeled_E\BRDM2\Data\Detailmapy\brdm2_02_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat"
			};
		};
	};
	class BRDM2_ATGM_Base : BRDM2_Base
	{
		model = "\CorePatch\CorePatch_Vehicles\models\BRDM2_ATGM";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerForceOptics = 0;
				startEngine = 1;
				turretInfoType = "RscWeaponEmpty";
			};
		};
	};
	class BRDM2_HQ_Base : BRDM2_Base
	{
		model = "\CorePatch\CorePatch_Vehicles\models\BRDM2_HQ";
		transportSoldier = 2;

		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "PKTBC";
			};
			class ReloadMagazine
			{
				weapon = "PKTBC";
			};
			class Revolving
			{
				weapon = "PKTBC";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				castGunnerShadow = 1;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerName = "$STR_POSITION_COMMANDER";
				/* maxElev = 10;
				maxTurn = 15;
				minElev = -10;
				minTurn = -15; */
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"PKTBC"};
			};
		};
	};
	class BTR60_TK_EP1 : BRDM2_Base
	{
		model = "\CorePatch\CorePatch_Vehicles\models\BTR60";
		soundGetOut[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getout",
			1,
			1,
			60
		};
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			60
		};

		class Reflectors
		{
			class Left
			{
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
			};
			class commander_light : Left
			{
				brightness = 0;
				size = 0;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete magazines;
				delete weapons;

				commanding = 2;
			};
			class CommanderTurret : MainTurret
			{
				delete soundServo;

				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerOpticsModel = "\CorePatch\CorePatch_Vehicles\models\optika_T72_commander";
				turretInfoType = "RscWeaponEmpty";
			};
		};

		class Damage
		{
			tex[] = {};
			mat[] = {
				"Ca\wheeled_E\BTR60\Data\btr60_body.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\btr60_body_damage.rvmat", //"Ca\wheeled_E\BTR60\Data\btr60_body_damage.rvmat",
				"Ca\wheeled_E\BTR60\Data\btr60_body_destruct.rvmat",

				"Ca\wheeled_E\BTR60\Data\btr60_details.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\btr60_details_damage.rvmat", //"Ca\wheeled_E\BTR60\Data\btr60_details_damage.rvmat",
				"Ca\wheeled_E\BTR60\Data\btr60_details_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat"
			};
		};
	};
	class BTR60_Gue_CP : BTR60_TK_EP1 {
		scope = 1;
		side = 2;
		faction = "GUE";
		accuracy = 0.3;
		crew = "GUE_Soldier_1";
		typicalCargo[] = {"GUE_Soldier_1","GUE_Soldier_1","GUE_Soldier_1"};
		hiddenSelectionsTextures[] = {"\CorePatch\CorePatch_Vehicles\textures\btr60_body_gue_co.paa","\CorePatch\CorePatch_Vehicles\textures\btr60_details_gue_co.paa"};	
	};
	class BTR40_MG_base_EP1 : Wheeled_APC
	{
		delete driverOpticsModel;

		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\BTR60\btr_door",
			1,
			1,
			60
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";
			};
		};
		class ViewPilot : ViewPilot
		{
			initFov = 0.69999999;
			maxFov = 0.85000002;
			minFov = 0.41999999;
		};

		class Damage
		{
			tex[] = {};
			mat[] = {
				"ca\wheeled_e\btr40\data\btr40ext.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\btr40ext_damage.rvmat", //"ca\wheeled_e\btr40\data\btr40ext_damage.rvmat",
				"ca\wheeled_e\btr40\data\btr40ext_destruct.rvmat",

				"ca\wheeled_e\btr40\data\btr40int.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\btr40int_damage.rvmat", //"ca\wheeled_e\btr40\data\btr40int_damage.rvmat",
				"ca\wheeled_e\btr40\data\btr40int_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat"
			};
		};
	};
	class BTR90_Base : Wheeled_APC
	{
		model = "\CorePatch\CorePatch_Vehicles\models\BTR90";
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			60
		};
		unitInfoType = "RscUnitInfoTank";

		class Reflectors
		{
			class Left;
			class commander_light : Left
			{
				brightness = 0;
				size = 0;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponRangeZeroing";
				weapons[] = {
					"2A42",
					"PKTBC",
					"AT5LauncherSingle",
					"AGS17"
				};

				class Turrets
				{
					class CommanderOptics : NewTurret
					{
						delete outGunnerMayFire;

						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\CorePatch\CorePatch_Vehicles\models\optika_T72_commander";
						soundServo[] = {
							"\Ca\sounds\Vehicles\Servos\turret-3",
							0.0099999998,
							1,
							20
						};
						stabilizedInAxes = "StabilizedInAxisY";
					};
				};
				class ViewOptics
				{
					thermalMode[] = {0, 1};
				};
			};
		};
		class ViewPilot
		{
			initAngleX = 10;
			initAngleY = 0;
			initFov = 0.69999999;
			maxAngleX = 85;
			maxAngleY = 150;
			maxFov = 0.85000002;
			minAngleX = -65;
			minAngleY = -150;
			minFov = 0.41999999;
		};
	};
	class BTR90_HQ : BTR90_Base
	{
		model = "\CorePatch\CorePatch_Vehicles\models\BTR90_HQ";
		transportSoldier = 7;
		typicalCargo[] = {
			"RU_Soldier_Crew",
			"RU_Soldier_Crew",
			"RU_Soldier",
			"RU_Soldier",
			"RU_Soldier_MG",
			"RU_Soldier_AT"
		};

		/* class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "PKT";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "PKT";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "PKT";
			};
		}; */
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				primaryGunner = 0;
				primaryObserver = 1;
				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-1",
					0.1,
					1,
					15
				};
				stabilizedInAxes = "StabilizedInAxesNone";
			};
		};
	};
	class GAZ_Vodnik_HMG : Wheeled_APC
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			60
		};
		unitInfoType = "RscUnitInfoTank";

		class Turrets
		{
			class MainTurret : NewTurret
			{
				delete commanding;
				delete primaryObserver;
				delete stabilizedInAxes;

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800};
				discreteDistanceInitIndex = 5;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				turretInfoType = "RscWeaponRangeZeroing";
				weapons[] = {
					"2A42",
					"PKTBC",
					"SmokeLauncher"
				};

				class ViewOptics
				{
					initFov = 0.2;
					maxFov = 0.2;
					minFov = 0.057999998;
				};
			};
		};
	};
	class GAZ_Vodnik : GAZ_Vodnik_HMG
	{
		unitInfoType = "UnitInfoCar";

		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "PKTBC";
			};
			class ReloadAnim_2
			{
				weapon = "PKTBC_2";
			};
			class ReloadMagazine
			{
				weapon = "PKTBC";
			};
			class ReloadMagazine_2
			{
				weapon = "PKTBC_2";
			};
			class Revolving
			{
				weapon = "PKTBC";
			};
			class Revolving_2
			{
				weapon = "PKTBC_2";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete commanding;

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				initElev = 0;
				/* maxElev = 10;
				maxTurn = 15;
				minElev = -10;
				minTurn = -15; */
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"PKTBC"};
			};
			class BackTurret : MainTurret
			{
				commanding = 2;
				/* maxTurn = 195;
				minTurn = 165; */
				weapons[] = {"PKTBC_2"};
			};
		};
	};
	class LAV25_Base : Wheeled_APC
	{
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1,
			60
		};
		unitInfoType = "RscUnitInfoTank";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				primaryGunner = 1;
				turretInfoType = "RscWeaponRangeFinder";

				class Turrets
				{
					class CommanderOptics : NewTurret
					{
						delete outGunnerMayFire;

						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
					};
				};
			};
		};
		class ViewPilot
		{
			maxFov = 0.85000002;
			minFov = 0.41999999;
		};
	};
	class LAV25_HQ : LAV25_Base
	{
		class AnimationSources : AnimationSources
		{
			class ReloadAnim
			{
				weapon = "M240BC_veh";
			};
			class ReloadMagazine
			{
				weapon = "M240BC_veh";
			};
			class Revolving
			{
				weapon = "M240BC_veh";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				castGunnerShadow = 1;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "$STR_POSITION_COMMANDER";
				/* maxElev = 10;
				maxTurn = 15;
				minElev = -10;
				minTurn = -15; */
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M240BC_veh"};
			};
		};
	};
	class StrykerBase_EP1 : Wheeled_APC
	{
		soundGetIn[] = {
			"\ca\Sounds_E\Wheeled_E\stryker\stryker_door",
			1,
			1,
			60
		};
		unitInfoType = "RscUnitInfoTank";
	};
	class M1135_ATGMV_EP1 : StrykerBase_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				startEngine = 1;

				class ViewOptics
				{
					thermalMode[] = {0, 1};
				};
			};
		};
	};
	class M1126_ICV_BASE_EP1 : StrykerBase_EP1
	{
		class Turrets : Turrets
		{
			class ObsTurret : NewTurret
			{
				delete commanding;
				delete primaryObserver;

				soundServo[] = {
					"\Ca\sounds\Vehicles\Servos\turret-1",
					0.0099999998,
					1,
					10
				};
				startEngine = 0;
			};
		};
	};
	class M1126_ICV_M2_EP1 : M1126_ICV_BASE_EP1
	{
		class Turrets : Turrets
		{
			class ObsTurret : ObsTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class M1130_CV_EP1 : M1126_ICV_M2_EP1
	{
		class Turrets : Turrets
		{
			class ObsTurret : ObsTurret
			{
				gunnerName = "$STR_POSITION_COMMANDER";
				primaryGunner = 0;
				primaryObserver = 1;
			};
		};
	};
	class M1126_ICV_mk19_EP1 : M1126_ICV_BASE_EP1
	{
		class Turrets : Turrets
		{
			class ObsTurret : ObsTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
			};
		};
	};
	class M1129_MC_EP1 : M1126_ICV_mk19_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete turretInfoType;
				delete visionMode;

				commanding = 2;
				startEngine = 1;
			};
			class ObsTurret : ObsTurret
			{
				commanding = 1;
				primaryGunner = 0;
				primaryObserver = 1;
			};
		};
	};
	class M1128_MGS_EP1 : StrykerBase_EP1
	{
		class AnimationSources : AnimationSources
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
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;
				maxElev = 20;
				turretInfoType = "RscWeaponRangeZeroing";
				weapons[] = {
					"M68",
					"M2BC",
					"SmokeLauncher"
				};
			};
		};
	};
	class Motorcycle : LandVehicle
	{
		transportMaxWeapons = 1;
	};
	class Bicycle : Motorcycle
	{
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
	};
	class Tank : LandVehicle
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class Turrets
				{
					class CommanderOptics : NewTurret
					{
						class ViewOptics;
					};
				};
			};
		};
		class ViewPilot : ViewPilot
		{
			maxAngleX = 85;
			maxAngleY = 150;
			minAngleX = -65;
			minAngleY = -150;
		};
		class EventHandlers;
	};
	class 2S6M_Tunguska : Tank
	{
		model = "\CorePatch\CorePatch_Vehicles\models\2S6M_Tunguska";
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			60
		};

		class Reflectors
		{
			class LeftLight
			{
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				position = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
			};
			/* class commander_light : LeftLight
			{
				ambient[] = {0.1, 0.1, 0.1, 0.1};
				brightness = 0;
				direction = "konec commander light";
				hitpoint = "commander light";
				position = "commander light";
				selection = "commander light";
				size = 0;
			}; */
			class RightLight : LeftLight
			{
				color[] = {0.89999998, 0.80000001, 0.80000001, 0.1};
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				position = "P svetlo";
				selection = "P svetlo";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800};

				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						outGunnerMayFire = 0;
						stabilizedInAxes = "StabilizedInAxisY";
					};
				};
			};
		};
	};
	class BAF_FV510_D : Tank
	{
		soundGetIn[] = {
			"Ca\sounds_baf\tracked\ext_door",
			0.56234133,
			1,
			60
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400};

				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						outGunnerMayFire = 0;
					};
				};
			};
		};
	};
	class M1A1 : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-m1-door-1",
			0.56234133,
			1,
			60
		};

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
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;

				class Turrets : Turrets
				{
					delete discreteDistance;
					delete discreteDistanceInitIndex;

					class CommanderOptics : CommanderOptics
					{
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
						discreteDistanceInitIndex = 2;
						turretInfoType = "RscWeaponZeroing";
						weapons[] = {
							"M2BC",
							"SmokeLauncher"
						};

						class ViewOptics : ViewOptics
						{
							initFov = 0.69999999;
							maxFov = 1.1;
							minFov = 0.25;
						};
					};
				};
			};
		};
	};
	class M1A2_TUSK_MG : M1A1
	{
		class AnimationSources : AnimationSources
		{
			delete ReloadAnim;
			delete ReloadMagazine;
			delete Revolving;

			class ReloadAnim_2
			{
				weapon = "M240BC_veh_2";
			};
			class ReloadMagazine_2
			{
				weapon = "M240BC_veh_2";
			};
			class Revolving_2
			{
				weapon = "M240BC_veh_2";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						delete discreteDistance;
						delete discreteDistanceInitIndex;
						delete weapons;
					};
					class LoaderTurret : NewTurret
					{
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
						discreteDistanceInitIndex = 2;
						gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
						soundServo[] = {
							"\Ca\sounds\Vehicles\Servos\turret-1",
							0.0099999998,
							1,
							10
						};
						turretInfoType = "RscWeaponZeroing";
						weapons[] = {"M240BC_veh_2"};

						class ViewOptics
						{
							delete thermalMode;

							initFov = 0.69999999;
							maxFov = 1.1;
							minFov = 0.25;
							visionMode[] = {
								"Normal",
								"NVG"
							};
						};
					};
				};
			};
		};
	};
	class M2A2_Base : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			60
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800};
				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-2",
					0.031622775,
					1,
					30
				};

				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						delete turretInfoType;

						outGunnerMayFire = 0;
						stabilizedInAxes = "StabilizedInAxisY";
					};
				};
			};
		};
	};
	class M2A2_EP1 : M2A2_Base
	{
	};
	class M2A3_EP1 : M2A2_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						turretInfoType = "RscWeaponRangeFinder";
					};
				};
			};
		};
	};
	class M113_Base : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};

		class AnimationSources : AnimationSources
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
				stabilizedInAxes = "StabilizedInAxesNone";
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M2BC"};
			};
		};
	};
	class MLRS : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			60
		};
		transportMaxBackpacks = 8;
		transportMaxMagazines = 50;
	};
	class T34 : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};

				class Turrets : Turrets
				{
					class CommanderOptics : NewTurret
					{
						delete gunnerOutOpticsModel;
						delete outGunnerMayFire;

						gunnerOpticsModel = "\CorePatch\CorePatch_Vehicles\models\optika_T72_commander";
					};
				};
			};
			class FrontGunner : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				soundServo[] = {};
			};
		};
	};
	class T55_Base : Tank
	{
		model = "\CorePatch\CorePatch_Vehicles\models\T55";
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};

		class Reflectors
		{
			class LeftLight
			{
				// ambient[] = {0.1, 0.1, 0.1, 1};
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
			};
			class CommanderLight : LeftLight
			{
				brightness = 0;
				size = 0;
			};
			class RightLight : LeftLight
			{
				brightness = 0;
				size = 0;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete stabilizedInAxes;

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};

				class Turrets : Turrets
				{
					class CommanderOptics : NewTurret
					{
						delete gunnerOutOpticsModel;
						delete outGunnerMayFire;

						gunnerOpticsModel = "\CorePatch\CorePatch_Vehicles\models\optika_T72_commander";
						stabilizedInAxes = "StabilizedInAxisY";
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"Ca\Tracked_E\T55\data\t55_body.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\t55_body_damage.rvmat", //"Ca\Tracked_E\T55\data\t55_body_damage.rvmat",
				"Ca\Tracked_E\T55\data\t55_body_destruct.rvmat",

				"Ca\Tracked_E\T55\data\t55_tower.rvmat",
				"CorePatch\CorePatch_Vehicles\textures\t55_tower_damage.rvmat", //"Ca\Tracked_E\T55\data\t55_tower_damage.rvmat",
				"Ca\Tracked_E\T55\data\t55_tower_destruct.rvmat",

				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default.rvmat",
				"Ca\Ca_E\data\default_destruct.rvmat"
			};
		};
	};
	class T72_Base : Tank
	{
		aggregateReflectors[] = {{"1", "1"}};
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};

		class Reflectors
		{
			class LeftLight
			{
				brightness = 0.4;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;
				// gunnerOpticsModel = "\ca\tracked_e\gunnerOptics_T72";

				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
						discreteDistanceInitIndex = 2;
						gunnerOpticsModel = "\ca\weapons\2Dscope_Metis";
						turretInfoType = "RscWeaponZeroing";

						class ViewOptics : ViewOptics
						{
							initFov = 0.69999999;
							maxFov = 1.1;
							minFov = 0.25;
						};
					};
				};
			};
		};
	};
	class T72_ACR : T72_Base
	{
		soundGetIn[] = {
			"ca\Sounds_ACR\tracked\T72_inside_door1",
			0.56234133,
			1,
			60
		};

		class AnimationSources : AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "D81CZ";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = {
					"D81CZ",
					"PKTBC"
				};

				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
						discreteDistanceInitIndex = 5;
						gunnerOutOpticsModel = "";
						outGunnerMayFire = 0;
						turretInfoType = "RscWeaponRangeZeroing";

						class ViewOptics : ViewOptics
						{
							initFov = 0.30000001;
							maxFov = 0.30000001;
							minFov = 0.015;
						};
					};
				};
			};
		};
	};
	class T90 : Tank
	{
		aggregateReflectors[] = {{"1", "1"}};
		model = "\CorePatch\CorePatch_Vehicles\models\T90";
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-m1-door-1",
			0.56234133,
			1,
			60
		};

		class Reflectors
		{
			class LeftLight
			{
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				position = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
			};
			class GunnerLight : LeftLight
			{
				ambient[] = {0.1, 0.1, 0.1, 0.1};
				direction = "konec gunner light";
				hitpoint = "gunner light";
				position = "gunner light";
				selection = "gunner light";
			};
			class RightLight : LeftLight
			{
				color[] = {0.89999998, 0.80000001, 0.80000001, 0.1};
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				position = "P svetlo";
				selection = "P svetlo";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;

				class Turrets : Turrets
				{
					class CommanderOptics : NewTurret
					{
						delete gunnerOutOpticsModel;
						delete outGunnerMayFire;

						discreteDistance[] = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
						discreteDistanceInitIndex = 5;
						turretInfoType = "RscWeaponRangeZeroing";
					};
				};
			};
		};
	};
	class ZSU_Base : Tank
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			50
		};

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800};
				maxElev = 80;//57;

				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						stabilizedInAxes = "StabilizedInAxisY";

						class ViewOptics : ViewOptics
						{
							initFov = 0.30000001;
							maxFov = 0.30000001;
							minFov = 0.015;
						};
					};
				};
			};
		};

		model = "\CorePatch\CorePatch_Vehicles\models\zsu";
	};
	class ZSU_Gue_CP : ZSU_Base
	{
		scope = 1;
		side = 2;
		faction = "GUE";
		accuracy = 0.3;
		crew = "GUE_Soldier_1";
		typicalCargo[] = {"GUE_Soldier_1","GUE_Soldier_1","GUE_Soldier_1"};
		hiddenSelectionsTextures[] = {"\CorePatch\CorePatch_Vehicles\textures\zsu_01_gue_co.paa","\CorePatch\CorePatch_Vehicles\textures\zsu_02_gue_co.paa","\CorePatch\CorePatch_Vehicles\textures\zsu_03_gue_co.paa"};
	};
	class Tracked_APC : Tank
	{
	};
	class AAV : Tracked_APC
	{
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			60
		};

		class Turrets : Turrets
		{
			class CommanderOptics : NewTurret
			{
				delete magazines;
				delete outGunnerMayFire;
				delete weapons;
			};
			class MainTurret : MainTurret
			{
				delete outGunnerMayFire;

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				magazines[] = {
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"48Rnd_40mm_MK19",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"100Rnd_127x99_M2",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-1",
					0.031622775,
					1,
					15
				};
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {
					"MK19BC",
					"M2BC",
					"SmokeLauncher"
				};
			};
		};
	};
	class BMP2_Base : Tracked_APC
	{
		aggregateReflectors[] = {{"1", "1"}};
		model = "\CorePatch\CorePatch_Vehicles\models\BMP2";
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\T72\int\int-tank-diesel-door-1",
			0.56234133,
			1,
			60
		};

		class Reflectors
		{
			class LeftLight
			{
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				size = 0.5;
			};
			/* class CommanderLight : LeftLight
			{
				direction = "konec commander light";
				hitpoint = "commander light";
				position = "commander light";
				selection = "commander light";
			}; */
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponRangeZeroing";
				weapons[] = {
					"2A42",
					"PKTBC",
					"AT5LauncherSingle"
				};

				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						delete outGunnerMayFire;

						gunnerOpticsModel = "\CorePatch\CorePatch_Vehicles\models\optika_T72_commander";
						stabilizedInAxes = "StabilizedInAxisY";

						class ViewOptics : ViewOptics
						{
							initFov = 0.30000001;
							maxFov = 0.46599999;
							minFov = 0.093000002;
						};
					};
				};
			};
		};
	};
	class BMP2_Ambul_Base : BMP2_Base
	{
		delete unitInfoType;

		magazines[] = {
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag"
		};
		weapons[] = {"SmokeLauncher"};

		class Reflectors
		{
			class LeftLight
			{
				ambient[] = {0.07, 0.07, 0.07, 1};
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				position = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
			};
			class RightLight : LeftLight
			{
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				position = "P svetlo";
				selection = "P svetlo";
			};
		};
	};
	class BMP2_HQ_Base : BMP2_Base
	{
		delete unitInfoType;

		model = "\CorePatch\CorePatch_Vehicles\models\BMP2_HQ";
		transportSoldier = 6;

		class Reflectors
		{
			class LeftLight
			{
				ambient[] = {0.07, 0.07, 0.07, 1};
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				position = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
			};
			class RightLight : LeftLight
			{
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				position = "P svetlo";
				selection = "P svetlo";
			};
			class GunnerLight : LeftLight
			{
				direction = "konec gunner svetlo";
				hitpoint = "gunner svetlo";
				position = "gunner svetlo";
				selection = "gunner svetlo";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				delete canHideGunner;
				delete gunnerOutOpticsModel;
				delete memoryPointGunnerOutOptics;

				castGunnerShadow = 1;
				forceHideGunner = 1;
				gunnerAction = "HMMWV_Gunner01";
				gunnerForceOptics = 0;
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				gunnerInAction = "HMMWV_Gunner01";
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				memoryPointGunnerOptics = "gunnerView";
				primaryGunner = 0;
				primaryObserver = 1;
				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-1",
					0.1,
					1,
					15
				};
				viewGunnerInExternal = 1;
			};
		};
	};
	class BVP1_BASE : BMP2_Base
	{
		model = "\CorePatch\CorePatch_Vehicles\models\BMP1";
		hiddenSelections[] ={
			"camo1",
			"camo2",
			"brvno"
		};
		hiddenSelectionsTextures[] ={
			"\ca\Tracked_ACR\BVP1\data\trup_ext0_co",
			"\ca\Tracked_ACR\BVP1\data\veza0_co",
			"\ca\Tracked_ACR\BVP1\data\trup_ext0_co"
		};
		class Turrets
		{
			class MainTurret : NewTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\ca\weapons\2Dscope_T90gun12";
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {
					"2A28",
					"AT3Launcher",
					"PKTBC"
				};
				magazines[] = {
					"40rnd_PG15V",
					"4Rnd_AT3",
					"2000Rnd_762x54_PKT"
				};
				class GunFire: WeaponCloudsMGun {};
			};
			class CommanderOptics : NewTurret
			{
				gunnerOpticsModel = "\CorePatch\CorePatch_Vehicles\models\optika_T72_commander";
				selectionFireAnim = "zasleh_1";
			};
		};
		class EventHandlers:EventHandlers {
			Fired = "_this call BIS_Effects_EH_Fired; _this call BIS_CPP_Muzzle_ForceReload; if(isServer) then {_this call Corepatch_BMP1_Fired;};";
		};
		class AnimationSources {
			/*class ATGM_reload {
				source = "reloadmagazine";
				weapon = "AT3Launcher";
			};*/
			class ATGM_hide {
				source = "instant"; // Can be anything but user
				animPeriod = 1e-5;
			};
		};
	};
	class BVP1_TK_GUE_ACR:BVP1_BASE {
		
	};
	class BVP1_TK_ACR:BVP1_BASE {
		hiddenSelectionsTextures[] ={
			"\ca\Tracked_ACR\BVP1\data\trup_ext0_TAK_CO",
			"\ca\Tracked_ACR\BVP1\data\veza0_TAK_CO"
		};
	};
	class BMP1_INS_CP:BVP1_BASE {
		side = 1;
		scope = 1;
		expansion = 3;
		faction = "INS";
		displayName = $STR_DN_BMP1_CP;
		/*hiddenSelectionsTextures[] ={
			"\ca\Tracked_ACR\BVP1\data\trup_ext0_co",
			"\ca\Tracked_ACR\BVP1\data\veza0_co",
			"\ca\Tracked_ACR\BVP1\data\trup_ext0_co"
		};*/
		crew = "Ins_Soldier_Crew";
		typicalCargo[] = {
			"Ins_Soldier_Crew",
			"Ins_Soldier_Crew",
			"Ins_Soldier_Crew",
			"Ins_Soldier_AT",
			"Ins_Soldier_MG",
			"Ins_Soldier_1"
		};
	};

	class BMP3 : Tracked_APC
	{
		aggregateReflectors[] = {{"1", "1"}}; // {{"CommanderLight"}, {"GunnerLight"}, {"1", "1"}};
		model = "\CorePatch\CorePatch_Vehicles\models\BMP3";
		soundGetIn[] = {
			"ca\SOUNDS\Vehicles\Tracked\Other\int\int-tracked-getin-01",
			0.56234133,
			1,
			60
		};

		class Reflectors
		{
			class LeftLight
			{
				brightness = 0.4;
				color[] = {0.89999998, 0.80000001, 0.80000001, 1};
				size = 0.5;
			};
			class CommanderLight : LeftLight
			{
				brightness = 0;
				size = 0;
			};
			class GunnerLight : LeftLight
			{
				brightness = 0;
				size = 0;
			};
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\ca\weapons\2Dscope_T90gun12";
				turretInfoType = "RscWeaponRangeZeroing";
				weapons[] = {
					"2A72",
					"2A70",
					"PKTBC",
					"2A70Rocket"
				};

				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						gunnerOpticsModel = "\CorePatch\CorePatch_Vehicles\models\optika_T72_commander";
						outGunnerMayFire = 0;
						stabilizedInAxes = "StabilizedInAxisY";
					};
				};
			};
			class LeftTurret : NewTurret
			{
				commanding = -1;
				maxElev = 5;
				primaryGunner = 0;
				stabilizedInAxes = "StabilizedInAxesNone";
				weapons[] = {"PKTBC"};
			};
			class RightTurret : LeftTurret
			{
				commanding = -2;
			};
		};
	};
	class Ship : AllVehicles
	{
		class Turrets;
	};
	class Boat : Ship
	{
	};
	class RHIB : Boat
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
			class MainTurret : NewTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M2BC"};
			};
		};
	};
	class RHIB2Turret : RHIB
	{
		/* class AnimationSources : AnimationSources
		{
			class ReloadAnim_2
			{
				source = "reload";
				weapon = "MK19BC";
			};
			class ReloadMagazine_2
			{
				source = "reloadmagazine";
				weapon = "MK19BC";
			};
			class Revolving_2
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
			class BackTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				weapons[] = {"MK19BC"};
			};
		};
	};
};
