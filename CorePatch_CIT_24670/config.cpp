class CfgPatches
{
	class CorePatch_CIT_24670
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
	class AV8B2 : Plane
	{
		delete fov;
	};
	class F35_base : Plane
	{
	};
	class F35B : F35_base
	{
		delete fov;
	};
};