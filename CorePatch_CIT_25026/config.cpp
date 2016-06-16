class CfgPatches
{
	class CorePatch_CIT_25026
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
	class Helicopter : Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class CH47_base_EP1 : Helicopter
	{
		cargoCompartments[] = {"Compartment1"};
		driverCompartments = "Compartment1";
	};
	class CH_47F_EP1 : CH47_base_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerCompartments = "Compartment1";
			};
		};
	};
};
