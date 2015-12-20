
class CfgPatches {

	class CorePatch_GC_Fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
    class PreloadAddons {
       class CorePatch_GC_Fix {
          list[] = {"CorePatch_GC_Fix"};
       };
    };
};

class CfgVehicles {
	class Logic;

	class GarbageCollector: Logic {
		class Eventhandlers {
			init = "private ['_ok']; _ok = (_this select 0) execVM '\CorePatch\CorePatch_GC\data\scripts\init.sqf'";
		};
	};
};
