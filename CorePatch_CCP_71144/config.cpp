class CfgPatches {

	class CorePatch_CCP_71144_Fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
    class PreloadAddons {
       class CorePatch_CCP_71144_Fix {
          list[] = {"CorePatch_CCP_71144_Fix"};
       };
    };
};

class CfgVehicles {
	class BMP2_HQ_Base;
	
	class BMP2_HQ_TK_EP1: BMP2_HQ_Base {
		magazines[] = {"SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
	};
};