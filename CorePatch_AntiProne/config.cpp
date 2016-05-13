class CfgPatches {
	class CorePatch_AntiProne {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
	class PreloadAddons {
		class CorePatch_AntiProne {
			list[] = {"CorePatch_AntiProne"};
		};
	};
};

class CfgVehicles {
	class Land;
	class Man;

	class CAManBase:Man {
		fsmDanger = "\CorePatch\CorePatch_AntiProne\formationCDanger.fsm";
	};
	
	class Civilian:CAManBase {
		fsmDanger = "\CorePatch\CorePatch_AntiProne\formationCDanger.fsm";
	};
};


