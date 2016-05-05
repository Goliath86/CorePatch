class CfgPatches {
	class CorePatch_FixedOG7Icon {
		Units[] = {};
		Weapons[] = {};
		RequiredVersion = 1.570000;
		RequiredAddons[] = {"CorePatch"};
	};
};

class CfgMagazines {
	class CA_LauncherMagazine;
	class OG7: CA_LauncherMagazine {
		picture = "\CorePatch\CorePatch_FixedOG7Icon\M_OG7V_ca.paa";
	};
};