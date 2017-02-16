class CfgPatches
{
	class CorePatch_CIT_70470
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAmmo
{
	class MissileBase;
	class AT3 : MissileBase
	{
		cost = 7000;
		hit = 350;
		indirectHit = 10;
		indirectHitRange = 1;
		manualControl = 1;
		maxControlRange = 3000;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class AT3 : VehicleMagazine
	{
		initSpeed = 80;
	};
};
class CfgWeapons
{
	class CannonCore;
	class 2A28 : CannonCore
	{
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
	};
	class MissileLauncher;
	class AT3Launcher : MissileLauncher
	{
		canLock = 1;
		cursor = "Rocket";
		displayName = "$STR_DN_AT3LAUNCHER_CP";
		magazineReloadTime = 30;
		maxRange = 3000;
		minRange = 500;
		reloadTime = 90;
	};
};
class CfgVehicles
{
	class Tracked_APC;
	class BMP2_Base : Tracked_APC
	{
		class NewTurret;
	};
	class BVP1_BASE : BMP2_Base
	{
		delete extCameraPosition;
		delete weapons;

		driverForceOptics = 0;

		class Turrets
		{
			class CommanderOptics : NewTurret
			{
				delete magazines;
				delete turretInfoType;
				delete weapons;

				soundServo[] = {
					"\Ca\sounds\Vehicles\Servos\turret-1",
					0.0099999998,
					1,
					10
				};
				stabilizedInAxes = "StabilizedInAxesNone";

				class ViewGunner
				{
					initAngleX = 5;
					initFov = 0.69999999;
					maxAngleX = 85;
					maxAngleY = 150;
					maxFov = 1.1;
					minAngleX = -65;
					minAngleY = -150;
					minFov = 0.25;
				};
				class ViewOptics
				{
					initFov = 0.47499999;
				};
			};
			class MainTurret : NewTurret
			{
				delete startEngine;
				delete turretInfoType;

				maxElev = 33;
				soundServo[] = {
					"\Ca\sounds\Vehicles\Servos\turret-1",
					0.0099999998,
					1,
					10
				};
				stabilizedInAxes = "StabilizedInAxesNone";

				class ViewGunner
				{
					initAngleX = 5;
					initAngleY = 0;
					initFov = 0.69999999;
					maxAngleX = 85;
					maxAngleY = 150;
					maxFov = 0.85000002;
					minAngleX = -85;
					minAngleY = -150;
					minFov = 0.41999999;
				};
				class ViewOptics
				{
					initFov = 0.47499999;
				};
			};
		};
		class ViewOptics
		{
			delete visionMode;
		};
		class ViewPilot
		{
			initAngleX = 7;
			initAngleY = 0;
			initFov = 0.69999999;
			maxAngleX = 85;
			maxAngleY = 150;
			maxFov = 1.2;
			minAngleX = -65;
			minAngleY = -150;
			minFov = 0.41999999;
		};
	};
};
