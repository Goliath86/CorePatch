class CfgPatches
{
	class CorePatch_CIT_24842
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Air;
	class Plane : Air
	{
		threat[] = {0, 0, 0};
	};
	class AV8B2 : Plane
	{
		threat[] = {0.7, 1, 1};
	};
	class AV8B : AV8B2
	{
		threat[] = {0.7, 1, 0.8};
	};
	class An2_Base_EP1 : Plane
	{
		delete threat;
	};
	class C130J : Plane
	{
		threat[] = {0, 0, 0};
	};
	class F35_base : Plane
	{
	};
	class F35B : F35_base
	{
		threat[] = {0.7, 1, 1};
	};
	class L39_base : Plane
	{
		threat[] = {0.7, 1, 0.8};
	};
	class Su34 : Plane
	{
		threat[] = {0.7, 1, 1};
	};
};
