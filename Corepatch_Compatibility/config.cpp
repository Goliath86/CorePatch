class CfgPatches {
	class CorePatch_Compatibility {
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};

	class CorePatch_GC_Fix: CorePatch_Compatibility {};
	class CorePatch_CIT_8198: CorePatch_Compatibility {};
};

class CfgAddons {
	class PreloadAddons {
		class ca_communityconfigurationproject_e_editor_addedallweaponslotsinfantryvariants {
			list[] = {"ca_communityconfigurationproject_e_editor_addedallweaponslotsinfantryvariants"};
		};
	};
};
