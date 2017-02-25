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
		cost = 6000;
		hit = 350;
		indirectHit = 10;
		indirectHitRange = 1;
		manualControl = 1;
		maxControlRange = 3000;
	};
	class M_AT3_AT : MissileBase
	{
		model = "\CorePatch\CorePatch_Ammo\models\AT3_9M14_inflight.p3d";
		proxyShape = "\CorePatch\CorePatch_Ammo\models\AT3_Proxy.p3d";

		cost = 6000;

		explosive = 0.35;
		hit = 350;
		indirectHit = 10;

		maneuvrability = 4;
		manualControl = 1;
		maxControlRange = 3000;
		sideAirFriction = 0.076;
		trackLead = 1;
		trackOversteer = 1;

		initTime = 0;
		thrust = 125;
		thrustTime = 3;
		timeToLive = 20;
		maxSpeed = 200;
		typicalSpeed = 200;

		effectsMissile = "missile2";
		nameSound = "missiles";
		soundEngine[] = {
			"\ca\Weapons\Data\Sound\noise",
			0.031622998,
			1
		};
		soundFly[] = {
			"\Ca\sounds\Weapons\explosions\rocket_fly1",
			0.316228,
			1.5
		};
		soundHit[] = {
			"\ca\Weapons\Data\Sound\explosion_large1",
			17.782795,
			1
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 1Rnd_AT3 : VehicleMagazine
	{
		ammo = "M_AT3_AT";
		count = 1;
		displayName = "$STR_DN_M_AT3_CP";
		initSpeed = 80;
		nameSound = "missiles";
	};
	class AT3 : VehicleMagazine
	{
		ammo = "M_AT3_AT";
		descriptionShort = "";
		displayName = "$STR_DN_M_AT3_CP";
		initSpeed = 80;
	};
};
class CfgWeapons
{
	class CannonCore;
	class 2A28 : CannonCore
	{
		canLock = 0;
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		effectsFire = "";
	};
	class MissileLauncher;
	class AT3Launcher : MissileLauncher
	{
		canLock = 1;
		cursor = "Rocket";
		displayName = "$STR_DN_AT3LAUNCHER_CP";
		magazines[] = {
			"1Rnd_AT3",
			"4Rnd_AT3",
			"AT3"
		};
		magazineReloadTime = 1e-1;//30;
		maxRange = 3000;
		minRange = 500;
		reloadTime = 30;
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
