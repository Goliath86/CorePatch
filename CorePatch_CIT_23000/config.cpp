class CfgPatches
{
	class CorePatch_CIT_23000
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 2Rnd_Maverick_A10 : VehicleMagazine
	{
		delete initTime;
		delete irLock;
		delete maneuvrability;
		delete maxSpeed;
		delete reloadSound;
		delete sideAirFriction;
		delete simulationStep;
		delete sound;
		delete timeToLive;
		delete thrust;
		delete thrustTime;
		delete trackLead;
		delete trackOversteer;
	};
};
