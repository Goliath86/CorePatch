class CfgPatches
{
	class CorePatch_CIT_24659
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
	};
	class Wheeled_APC : Car
	{
	};
	class BRDM2_Base : Wheeled_APC
	{
	};
	class BTR60_TK_EP1 : BRDM2_Base
	{
		delete hascommander;
	};
	class Tank : LandVehicle
	{
	};
	class M113_Base : Tank
	{
		delete hasCommander;
	};
};