class CfgPatches {
	class CorePatch_NoPierDestruction {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgVehicles {
	class House;
	class Land_nav_pier_m_2:House {
		destrType = "DestructNo";
	};
};