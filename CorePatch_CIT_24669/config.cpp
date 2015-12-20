class CfgPatches
{
	class CorePatch_CIT_24669
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Car;
	class HMMWV_Base : Car
	{
		delete armorGlass;
		delete armorWheels;
	};
	class UAZ_Base : Car
	{
	};
	class UAZ_Unarmed_Base : UAZ_Base
	{
		delete armorWheels;
	};
	class Wheeled_APC : Car
	{
	};
	class BRDM2_Base : Wheeled_APC
	{
		delete armorBody;
		delete armorFuel;
		delete armorGlass;
		delete armorWheels;
	};
};