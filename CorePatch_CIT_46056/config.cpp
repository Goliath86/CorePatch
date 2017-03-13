class CfgPatches
{
	class CorePatch_CIT_46056
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class RocketPods;
	class HeliBombLauncher : RocketPods
	{
		//canLock = 0;
		canLock = 2;
	};
	class AirBombLauncher : HeliBombLauncher
	{
		//canLock = 0;
		canLock = 2;
	};
	class Mk82BombLauncher : RocketPods
	{
		//canLock = 0;
		canLock = 2;
	};
};
