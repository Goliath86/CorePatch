class CfgPatches {
	class CorePatch_An2HiddenSelections {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgVehicles {
	class Plane;
	class An2_Base_EP1:Plane {
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	};
};