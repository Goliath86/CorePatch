class CfgPatches {
	class CorePatch_CIT_66136 {
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	class Car;
	class Volha_TK_CIV_Base_EP1:Car {
		memoryPointSupply = "supply";
	};
};