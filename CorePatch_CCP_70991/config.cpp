class CfgPatches
{
	class CorePatch_CCP_70991
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
	class UAV : Plane
	{
		class NewTurret;
	};
	class MQ9PredatorB: UAV {
		model = "\Corepatch\CorePatch_CCP_70991\MQ9PredatorB.p3d";
		driverForceOptics = 1;
		driverOpticsModel = "\ca\weapons\optika_empty";
		selectionRotorStill = "propellerStatic";
		selectionRotorMove = "propellerBlurred";
		cabinOpening = 0;
		getInRadius = 3;
		class Turrets {
			class MainTurret: NewTurret {
				gunBeg = "laser_end";
				gunEnd = "laser_start";
				minElev = -89;
				maxElev = 26;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
			};
		};
		class ViewOptics {
			initFov = 0.85;
			maxFov = 0.35;
			minFov = 0.95;
			visionMode[] = {
				"Normal",
				"NVG"
			};
		};
		class ViewPilot {
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;

			initFov = 0.8;
			minFov = 0.3;
			maxFov = 1;
		};
	};
};
