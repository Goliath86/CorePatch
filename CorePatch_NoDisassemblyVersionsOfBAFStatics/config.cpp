class CfgPatches {
	class CorePatch_NoDisassemblyVersionsOfBAFStatics {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgVehicles {
	class BAF_GPMG_Minitripod_D;
	class BAF_GPMG_Minitripod_W_NoDisassembly:BAF_GPMG_Minitripod_D {
		class assembleInfo {};
	};

	class BAF_GMG_Tripod_D;
	class BAF_GMG_Tripod_W_NoDisassembly:BAF_GMG_Tripod_D {
		class assembleInfo {};
	};

	class BAF_L2A1_Tripod_D;
	class BAF_L2A1_Tripod_W_NoDisassembly:BAF_L2A1_Tripod_D {
		class assembleInfo {};
	};

	class BAF_L2A1_Minitripod_D;
	class BAF_L2A1_Minitripod_W_NoDisassembly:BAF_L2A1_Minitripod_D {
		class assembleInfo {};
	};
};