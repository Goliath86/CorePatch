class CfgPatches
{
	class CorePatch_Turrets
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {
			"M240BC_MG_Nest",
			"M240BC_veh_2",
			"PKTBC_2",
			"PKTBC_MG_Nest"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_Turrets
		{
			list[] = {"CorePatch_Turrets"};
		};
	};
};
class CfgWeapons
{
	class CannonCore;
	class 2A14 : CannonCore
	{
		ballisticsComputer = 2;
	};
	class 2A42 : CannonCore
	{
		ballisticsComputer = 2;
	};
	class 2A72 : CannonCore
	{
		ballisticsComputer = 1;
	};
	class D10 : CannonCore
	{
		ballisticsComputer = 2;
	};
	class M256 : CannonCore
	{
	};
	class M68 : M256
	{
		ballisticsComputer = 2;
	};
	class ZiS_S_53 : CannonCore
	{
		ballisticsComputer = 2;
	};
	class MGun;
	class AGS30 : MGun
	{
		ballisticsComputer = 2;
	};
	class DSHKM : MGun
	{
		ballisticsComputer = 2;
	};
	class KORD : MGun
	{
		ballisticsComputer = 2;
	};
	class KPVT : MGun
	{
		ballisticsComputer = 2;
	};
	class M240_veh : MGun
	{
	};
	class BAF_M240_veh : M240_veh
	{
		ballisticsComputer = 2;
	};
	class M240_veh_MG_Nest : M240_veh
	{
	};
	class M240BC_MG_Nest : M240_veh_MG_Nest
	{
		ballisticsComputer = 2;
	};
	class M240BC_veh : M240_veh
	{
	};
	class M240BC_veh_2 : M240BC_veh
	{
	};
	class M32_heli : MGun
	{
		ballisticsComputer = 2;
	};
	class PKT : MGun
	{
	};
	class DT_veh : PKT
	{
		ballisticsComputer = 2;
	};
	class PKT_MG_Nest : PKT
	{
	};
	class PKT_veh : PKT_MG_Nest
	{
	};
	class SGMT : PKT_veh
	{
		ballisticsComputer = 2;
	};
	class PKTBC_MG_Nest : PKT_MG_Nest
	{
		ballisticsComputer = 2;
	};
	class PKTBC : PKT
	{
	};
	class PKTBC_2 : PKTBC
	{
	};
	class YakB : MGun
	{
		ballisticsComputer = 2;
	};
};
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
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 5;
			};
		};
	};
	class AH64_base_EP1 : Helicopter
	{
	};
	class AH64D : AH64_base_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 5;
				maxElev = 11;
			};
		};
	};
	class AH64D_EP1 : AH64_base_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 5;
				maxElev = 11;
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
				delete maxElev;
			};
		};
	};
	class CH47_base_EP1 : Helicopter
	{
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
				/*initElev = 0;
				initTurn = 180;
				maxElev = 5;
				maxTurn = 210;
				minElev = -45;
				minTurn = 160;*/
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
	class Ka60_Base_PMC : Helicopter
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {50, 100, 150, 200, 250, 300, 325, 350, 375};
				discreteDistanceInitIndex = 5;
				/*initElev = 5;
				initTurn = 80;
				maxElev = 5;
				maxTurn = 125;
				minElev = -50;
				minTurn = 60;*/
				turretInfoType = "RscWeaponZeroing";
			};
		};
	};
	class Ka137_Base_PMC : Helicopter
	{
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
	/* class Mi17_base : Helicopter
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				initElev = 5;
				initTurn = 80;
				maxElev = 5;
				maxTurn = 110;
				minElev = -20;
				minTurn = 70;
			};
			class BackTurret : MainTurret
			{
				delete initElev;
				delete maxElev;
				delete minElev;

				initTurn = -115;
				maxTurn = -100;
				minTurn = -130;
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
				delete initElev;
				delete maxElev;

				initTurn = 180;
				maxTurn = 195;
				minElev = -25;
				minTurn = 165;
			};
			class LeftTurret : MainTurret
			{
				delete initElev;
				delete initTurn;
				delete maxElev;
				delete maxTurn;
				delete minElev;
				delete minTurn;
			};
			class RightTurret : MainTurret
			{
				delete initElev;
				delete maxElev;

				initTurn = -80;
				maxTurn = -50;
				minElev = -25;
				minTurn = -110;
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
				initElev = 0;
				initTurn = 0;
				maxElev = 5;
				maxTurn = 20;
				minElev = -45;
				minTurn = -20;
			};
		};
	}; */
	class Mi24_Base : Helicopter
	{
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
		//enableManualFire = 0;

		class Turrets : Turrets
		{
			/* class MainTurret : MainTurret
			{
				initElev = -10;
				initTurn = 80;
				maxElev = 5;
				maxTurn = 130;
				minElev = -35;
				minTurn = 60;
			}; */
			class CoPilotObs : MainTurret
			{
				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-1",
					0.0099999998,
					1,
					30
				};
			};
			class RightDoorGun; /* : MainTurret
			{
				initTurn = -80;
				maxTurn = -60;
				minTurn = -130;
			}; */
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
				/*initElev = 5;
				initTurn = -80;
				maxElev = 5;
				maxTurn = -50;
				minElev = -35;
				minTurn = -100;*/
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M240BC_veh"};
			};
			class LeftDoorGun : MainTurret
			{
				/*delete initElev;
				delete maxElev;
				delete minElev;

				initTurn = 80;
				maxTurn = 105;
				minTurn = 50;*/
				weapons[] = {"M240BC_veh_2"};
			};
		};
	};
	class UH60_Base : Helicopter
	{
		//enableManualFire = 0;
	};
	class MH60S : UH60_Base
	{
		//delete enableManualFire;

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
				/*initElev = 5;
				initTurn = 80;
				maxElev = 5;
				maxTurn = 110;
				minElev = -15;
				minTurn = 70;*/
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M240BC_veh"};
			};
			class RightDoorGun : MainTurret
			{
				/*initTurn = -80;
				maxTurn = -70;
				minTurn = -110;*/
				weapons[] = {"M240BC_veh_2"};
			};
		};
	};
	/* class UH60M_base_EP1 : UH60_Base
	{
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
				initElev = -10;
				initTurn = 80;
				maxElev = 5;
				maxTurn = 115;
				minElev = -15;
				minTurn = 65;
			};
			class RightDoorGun : MainTurret
			{
				delete initElev;
				delete maxElev;
				delete minElev;

				initTurn = -80;
				maxTurn = -65;
				minTurn = -115;
			};
		};
	}; */
	class Land : AllVehicles
	{
	};
	class LandVehicle : Land
	{
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
	class ArmoredSUV_Base_PMC : Car
	{
	};
	class ArmoredSUV_PMC : ArmoredSUV_Base_PMC
	{
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

				discreteDistance[] = {300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600};
				discreteDistanceInitIndex = 0;
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
				delete discreteDistance;
				delete discreteDistanceInitIndex;
				delete turretInfoType;

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
	class HMMWV_Base : Car
	{
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
				stabilizedInAxes = "StabilizedInAxesBoth";
				turretInfoType = "RscWeaponRangeZeroing";

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
					thermalMode[] = {2, 3};
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
	class LandRover_Base : Car
	{
	};
	class LandRover_MG_Base_EP1 : LandRover_Base
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
		class Turrets : Turrets
		{
			class AGS30_Turret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";
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
	class Ural_Base_withTurret : Truck
	{
	};
	class Ural_ZU23_Base : Ural_Base_withTurret
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponZeroing";
			};
		};
	};
	class UAZ_Base : Car
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
	class UAZ_AGS30_Base : UAZ_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300};
			};
		};
	};
	class UAZ_SPG9_Base : UAZ_Base
	{
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
	class Wheeled_APC : Car
	{
	};
	class BRDM2_Base : Wheeled_APC
	{
		unitInfoType = "RscUnitInfoTank";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete startEngine;

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {
					"KPVT",
					"PKTBC"
				};
			};
		};
	};
	class BRDM2_ATGM_Base : BRDM2_Base
	{
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
	class BTR60_TK_EP1 : BRDM2_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete magazines;
				delete weapons;
			};
			class CommanderTurret : MainTurret
			{
				delete soundServo;

				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				//gunnerOpticsModel = "\ca\Tracked\optika_T72_commander";
				maxTurn = 45;
				minTurn = -45;
				turretInfoType = "RscWeaponEmpty";
			};
		};
	};
	class BTR40_MG_base_EP1 : Wheeled_APC
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
	class BTR90_Base : Wheeled_APC
	{
		unitInfoType = "RscUnitInfoTank";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
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

						//gunnerOpticsModel = "\ca\Tracked\optika_T72_commander";
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
	};
	class BTR90_HQ : BTR90_Base
	{
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
		unitInfoType = "RscUnitInfoTank";

		class Turrets
		{
			class MainTurret : NewTurret
			{
				delete stabilizedInAxes;

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 5;
				turretInfoType = "RscWeaponRangeZeroing";
				weapons[] = {
					"2A42",
					"PKTBC"
				};

				class ViewOptics
				{
					initFov = 0.2;
					maxFov = 0.2;
					minFov = 0.057999998;
					visionMode[] = {
						"Normal",
						"NVG"
					};
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
				/* maxTurn = 195;
				minTurn = 165; */
				weapons[] = {"PKTBC_2"};
			};
		};
	};
	class LAV25_Base : Wheeled_APC
	{
		unitInfoType = "RscUnitInfoTank";

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				turretInfoType = "RscWeaponRangeFinder";

				class Turrets
				{
					class CommanderOptics : NewTurret
					{
						delete outGunnerMayFire;
					};
				};
			};
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
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 2;
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
		unitInfoType = "RscUnitInfoTank";
	};
	class M1135_ATGMV_EP1 : StrykerBase_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				startEngine = 1;
			};
		};
	};
	class M1126_ICV_BASE_EP1 : StrykerBase_EP1
	{
		class Turrets : Turrets
		{
			class ObsTurret : NewTurret
			{
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

				startEngine = 1;
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
	class StaticWeapon : LandVehicle
	{
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
	};
	class BAF_GMG_Tripod_D : GMG_TriPod
	{
		visionMode[] = {};

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
				turretInfoType = "RscWeaponZeroing";

				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.117;
					maxAngleX = 30;
					maxAngleY = 100;
					maxFov = 0.117;
					minAngleX = -30;
					minAngleY = -100;
					minFov = 0.117;
				};
			};
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
	};
	class 2S6M_Tunguska : Tank
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};	

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
						gunnerOpticsModel = "\ca\weapons\2Dscope_com2";
						gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
						inGunnerMayFire = 0;
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
							initFov = 0.69999999;
							maxFov = 1.1;
							minFov = 0.25;
						};
					};
				};
			};
		};
	};
	class M113_Base : Tank
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
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = "StabilizedInAxesNone";
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"M2BC"};
			};
		};
	};
	class M2A2_Base : Tank
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};	
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
	class T34 : Tank
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				//gunnerOpticsModel = "\ca\Tracked\optika_T72_gunner";

				class Turrets : Turrets
				{
					class CommanderOptics : NewTurret
					{
						delete gunnerOutOpticsModel;
						delete outGunnerMayFire;

						//gunnerOpticsModel = "\ca\Tracked\optika_T72_commander";
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
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete stabilizedInAxes;

				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				//gunnerOpticsModel = "\ca\Tracked\optika_T72_gunner";

				class Turrets : Turrets
				{
					class CommanderOptics : NewTurret
					{
						delete gunnerOutOpticsModel;
						delete outGunnerMayFire;

						//gunnerOpticsModel = "\ca\Tracked\optika_T72_commander";
						stabilizedInAxes = "StabilizedInAxisY";
					};
				};
			};
		};
	};
	class T72_Base : Tank
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000};
				discreteDistanceInitIndex = 5;
				//gunnerOpticsModel = "\ca\Tracked\optika_T72_gunner";

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
	class T90 : Tank
	{
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
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
				maxElev = 57;

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
	};
	class Tracked_APC : Tank
	{
	};
	class AAV : Tracked_APC
	{
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
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000};
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

						//gunnerOpticsModel = "\ca\Tracked\optika_T72_commander";
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
	};
	class BMP2_HQ_Base : BMP2_Base
	{
		delete unitInfoType;

		class Turrets : Turrets
		{
			class MainTurret : NewTurret
			{
				gunnerAction = "HMMWV_Gunner01";
				gunnerInAction = "HMMWV_Gunner01";
				soundServo[] = {
					"\ca\sounds\vehicles\servos\turret-1",
					0.1,
					1,
					15
				};
			};
		};
	};
	class BMP3 : Tracked_APC
	{
		class Turrets : Turrets
		{
			class LeftTurret : NewTurret
			{
				maxElev = 5;
				stabilizedInAxes = "StabilizedInAxesNone";
				weapons[] = {"PKTBC"};
			};
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
						delete outGunnerMayFire;

						//gunnerOpticsModel = "\ca\Tracked\optika_T72_commander";
						stabilizedInAxes = "StabilizedInAxisY";
					};
				};
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
