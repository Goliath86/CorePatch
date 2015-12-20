
class CfgPatches {

	class CorePatch_CCP_70400_Fix {
		Units[] = {};
		Weapons[] = {};
		RequiredVersion = 0.100000;
		RequiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
    class PreloadAddons {
       class CorePatch_CCP_70400_Fix {
          list[] = {"CorePatch_CCP_70400_Fix"};
       };
    };
};

class CfgAmmo {
	class BulletCore;

	class BulletBase: BulletCore {
	};
	
	class B_145x115_AP: BulletBase {
		hit = 34;
		caliber = 2.330000;		
	};
};