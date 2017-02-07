class CfgPatches
{
	class CorePatch_CIT_22551
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};

class CfgAddons {
	class PreloadAddons {
		class CorePatch_CIT_22551 {
			list[] = {"CorePatch_CIT_22551"};
		};
	};
};

class CfgVehicles {
	class Plane;
	class UAV: Plane {
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
	};
	class Pchela1T: UAV {
		autocenter = 1;
		ejectDamageLimit = 1;
		ejectSpeed[] = {0, 0, 0};
		elevatorSensitivity = 0.1;
		envelope[] = {0, 0.1, 0.65, 2.2, 3.7, 5.3, 6, 5.5, 5.6, 4.8, 3.6, 1.8, 1};
		extCameraPosition[] = {0, 2, -10};
		forceHideDriver = 1;
		fuelCapacity = 500;
		gearAnimations[] = {};
		gearRetracting = 1;
		hasGunner = 1;
		landingSpeed = 125;
		laserScanner = 1;
		model = "\CorePatch\CorePatch_CIT_22551\Pchela1T";
		noseDownCoef = 0.025;
		unitInfoType = "RscUnitInfoUAV";
		wheelSteeringSensitivity = 0.5;
		driverForceOptics = 1;
		driverOpticsModel = "\ca\weapons\optika_empty";
		memoryPointDriverOptics = "pilotview";
		armor = 6;

		class Turrets {
			class MainTurret: NewTurret {
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "laser_end";
				gunEnd = "laser_start";
				castGunnerShadow = 0;
				commanding = -1;
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\ca\weapons\2Dscope_UAV";
				gunnerUsesPilotView = 0;
				initElev = 0;
				initTurn = 0;
				minElev = -130;
				maxElev = 5;
				minTurn = -160;
				maxTurn = 160;
				maxVerticalRotSpeed = 100;
				maxHorizontalRotSpeed = 100;
				memoryPointGunnerOptics = "gunnerView";
				outGunnerMayFire = 1;
				selectionFireAnim = "";
				soundServo[] = {"", 0.010000, 1.000000};
				startEngine = 0;
				turretinfotype = "RscUnitInfoUAV_gunner";
				viewGunnerShadow = 0;
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				stabilizedInAxes = "StabilizedInAxesBoth";

				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.19;
					maxAngleX = 360;
					maxAngleY = 360;
					maxFov = 0.19;
					minAngleX = -360;
					minAngleY = -360;
					minFov = 0.0188;
					thermalMode[] = {0, 1};
					visionMode[] = {
						"Normal",
						"NVG"
					};
				};
			};
		};
		class ViewOptics: ViewOptics {
			initFov = 0.85;
			maxFov = 0.35;
			minFov = 0.95;
			visionMode[] = {
				"Normal",
				"NVG"
			};
		};
		class ViewPilot: ViewPilot {
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;

			initFov = 0.8;
			minFov = 0.3;
			maxFov = 1;
		};
	};

	class Pchela1T_CDF:Pchela1T {
		side = 1;
		//displayName = $STR_DN_PCHELA1TBLU;
		crew = "CDF_Soldier_Pilot";
		//vehicleClass = "Air_CDF";
		faction = "CDF";
		hiddenSelectionsTextures[] = {"\ca\air2\pchela1t\data\pchela1tblu_co.paa"};
	};

	class Pchela1T_Old:Pchela1T {
		scope = 1;
		//model = "\ca\air2\Pchela1T\Pchela1T.p3d";
		envelope[] = {0,0,0.3,1,2.5,3.3,3.5,3.2,2.5,2,1.5,1};
		elevatorSensitivity = 1;
		wheelSteeringSensitivity = 1;
		hasGunner = 0;
		driverForceOptics = 0;
		driverOpticsModel = "";
		unitInfoType = "RscUnitInfo";
		class Turrets {};
	};
};
