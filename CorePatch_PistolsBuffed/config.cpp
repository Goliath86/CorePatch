class CfgPatches {
	class CorePatch_PistolsBuffed {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgAmmo {
	class BulletBase;
	
	// Makarov
	class B_9x18_Ball:BulletBase {
		hit = 5;
	};
	class B_9x18_SD:B_9x18_Ball {
		hit = 5;
	};

	// M9
	class B_9x19_Ball:B_9x18_Ball {
		hit = 5;
	};
	class B_9x19_SD:B_9x19_Ball {
		hit = 5;
	};

	// Sa-61
	class B_765x17_Ball:BulletBase {
		hit = 5;
	};

	// M1911
	class B_45ACP_Ball:BulletBase {
		hit = 6;
	};

	// Revolver
	class B_45ACP_noCartridge_Ball:B_45ACP_Ball {
		hit = 7;
	};
};