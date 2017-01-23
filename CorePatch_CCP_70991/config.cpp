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
	class MQ9PredatorB : UAV
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				gunBeg = "laser_end";
				gunEnd = "laser_start";
			};
		};
	};
};
