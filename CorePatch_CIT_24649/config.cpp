class CfgPatches
{
	class CorePatch_CIT_24649
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
	class A10 : Plane
	{
		HeadAimDown = 0;
	};
	class Su25_base : Plane
	{
		delete HeadAimDown;
	};
	class Su34 : Plane
	{
		HeadAimDown = 0;
	};
	class Truck;
	class Kamaz_Base : Truck
	{
		delete HeadAimDown;
	};
};
