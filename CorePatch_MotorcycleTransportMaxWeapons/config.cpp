class CfgPatches {
	class CorePatch_MotorcycleTransportMaxWeapons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgVehicles {
	class LandVehicle;
	class Motorcycle:LandVehicle {
		transportMaxWeapons = 1;
	};
};