class CfgPatches {
	class CorePatch_NoDisassemblyVersionsOfBAFStatics {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
	class PreloadAddons {
		class CorePatch_NoDisassemblyVersionsOfBAFStatics {
			list[] = {"CorePatch_NoDisassemblyVersionsOfBAFStatics"};
		};
	};
};

class CfgVehicles {
	class BAF_L2A1_ACOG_base;
	class BAF_GPMG_Minitripod_D:BAF_L2A1_ACOG_base {
		class assembleInfo;
	};
	class BAF_GPMG_Minitripod_W_NoDisassembly:BAF_GPMG_Minitripod_D {
		scope = 1;
		class assembleInfo:assembleInfo {
			dissasembleTo[] = {};
		};
	};

	class BAF_L2A1_Tripod_D:BAF_L2A1_ACOG_base {
		class assembleInfo;
	};
	class BAF_L2A1_Tripod_W_NoDisassembly:BAF_L2A1_Tripod_D {
		scope = 1;
		class assembleInfo:assembleInfo {
			dissasembleTo[] = {};
		};
	};

	class BAF_L2A1_Minitripod_D:BAF_L2A1_ACOG_base {
		class assembleInfo;
	};
	class BAF_L2A1_Minitripod_W_NoDisassembly:BAF_L2A1_Minitripod_D {
		scope = 1;
		class assembleInfo:assembleInfo {
			dissasembleTo[] = {};
		};
	};

	class GMG_TriPod;
	class BAF_GMG_Tripod_D:GMG_TriPod {
		class assembleInfo;
	};
	class BAF_GMG_Tripod_W_NoDisassembly:BAF_GMG_Tripod_D {
		scope = 1;
		class assembleInfo:assembleInfo {
			dissasembleTo[] = {};
		};
	};
};