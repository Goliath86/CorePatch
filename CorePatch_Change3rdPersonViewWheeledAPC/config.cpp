
class CfgPatches {

	class CorePatch_Change3rdPersonViewWheeledAPC_Fix {
		Units[] = {};
		Weapons[] = {};
		RequiredVersion = 1.550000;
		RequiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
    class PreloadAddons {
       class CorePatch_Change3rdPersonViewWheeledAPC_Fix {
          list[] = {"CorePatch_Change3rdPersonViewWheeledAPC_Fix"};
       };
    };
};

class CfgVehicles {
	class Land;

	class LandVehicle: Land {
	};
	
	class car: LandVehicle {
	};
	
	class Wheeled_APC: car {
		extCameraPosition[] = {0,2,-9};
	};	
};