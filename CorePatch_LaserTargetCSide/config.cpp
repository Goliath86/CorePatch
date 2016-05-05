class CfgPatches {
	class CorePatch_LaserTargetCSide {
		Units[] = {};
		Weapons[] = {};
		RequiredVersion = 1.570000;
		RequiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
	class PreloadAddons {
		class CorePatch_LaserTargetCSide {
			list[] = {"CorePatch_LaserTargetCSide"};
		};
	};
};

class CfgVehicles {
	class LaserTargetCBase;
	class LaserTargetC: LaserTargetCBase {
		side = 0;
	};
};