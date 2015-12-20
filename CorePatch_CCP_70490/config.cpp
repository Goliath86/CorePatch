
class CfgPatches {

	class CorePatch_CCP_70490_Fix {
		Units[] = {};
		Weapons[] = {};
		RequiredVersion = 0.100000;
		RequiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
    class PreloadAddons {
       class CorePatch_CCP_70940_Fix {
          list[] = {"CorePatch_CCP_70490_Fix"};
       };
    };
};

class CfgAmmo {
	class R_Hydra_HE;

	class M_CRV7_HEPD: R_Hydra_HE {
		indirectHit = 100;
		indirectHitRange = 10;
	};
	
	class M_CRV7_FAT: M_CRV7_HEPD {
		indirectHit = 20;
		indirectHitRange = 2;
	};
};