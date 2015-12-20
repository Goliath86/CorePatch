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
class CfgVehicles
{
	class Plane;
	class UAV: Plane
	{
		class NewTurret;
		class ViewOptics;
		class ViewPilot;
	};
	class Pchela1T: UAV
	{
		driverForceOptics = 1;
		ejectDamageLimit = 1;
		ejectSpeed[] = {0, 0, 0};
		elevatorSensitivity = 0.1;
		envelope[] = {0, 0.1, 0.65, 2.2, 3.7, 5.3, 6, 5.5, 5.6, 4.8, 3.6, 1.8, 0};
		extCameraPosition[] = {0, 2, -30};
		fuelCapacity = 1500;
		gearAnimations[] = {};
		gearRetracting = 1;
		hasGunner = 1;
		landingSpeed = 125;
		laserScanner = 1;
		memoryPointDriverOptics = "pilotView";
		model = "\CorePatch\CorePatch_CIT_22551\Pchela1T.p3d";
		noseDownCoef = 0.025;
		unitInfoType = "RscUnitInfoUAV";
		wheelSteeringSensitivity = 0.5;

		class Turrets
		{
			class MainTurret: NewTurret
			{
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				body = "mainTurret";
				castGunnerShadow = 0;
				commanding = -1;
				gun = "mainGun";
				gunBeg = "laser_start";
				gunEnd = "laser_end";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\ca\weapons\2Dscope_UAV.p3d";
				gunnerUsesPilotView = 0;
				initElev = -45;
				initTurn = 0;
				magazines[] = {"Laserbatteries"};
				maxElev = -5;
				maxHorizontalRotSpeed = 100;
				maxTurn = 180;
				maxVerticalRotSpeed = 100;
				memoryPointGunnerOptics = "gunnerView";
				minElev = -90;
				minTurn = -180;
				outGunnerMayFire = 1;
				selectionFireAnim = "";
				soundServo[] = {"", 0.010000, 1.000000};
				startEngine = 0;
				turretinfotype = "RscUnitInfoUAV_gunner";
				viewGunnerShadow = 0;
				weapons[] = {"Laserdesignator_mounted"};

				class ViewOptics
				{
					initAngleX = 0;
					initAngleY = 0;
					initFov = 0.2;
					maxAngleX = 30;
					maxAngleY = 100;
					maxFov = 0.2;
					minAngleX = -30;
					minAngleY = -100;
					minFov = 0.002;
					thermalMode[] = {0, 1};
					visionMode[] = {
						"Normal",
						"Ti"
					};
				};
			};
		};
		class ViewOptics: ViewOptics
		{
			initFov = 0.85;
			maxFov = 0.35;
			minFov = 0.95;
		};
		class ViewPilot: ViewPilot
		{
			initFov = 0.8;
			maxAngleX = 0;
			maxAngleY = 0;
			maxFov = 1;
			minAngleX = 0;
			minAngleY = 0;
			minFov = 0.3;
		};
	};
};