class CfgPatches
{
	class CorePatch_CCP_66995
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car : LandVehicle
	{
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
	};
	class HMMWV_Base : Car
	{
		class HitPoints : HitPoints
		{
			class HitGlass1 : HitGlass1
			{
				armor = 0.1;
			};
			class HitGlass2 : HitGlass2
			{
				armor = 0.1;
			};
			class HitGlass3 : HitGlass3
			{
				armor = 0.1;
			};
			class HitGlass4 : HitGlass4
			{
				armor = 0.1;
			};
		};
	};
};
