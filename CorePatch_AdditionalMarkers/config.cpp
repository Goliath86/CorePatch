class CfgPatches {
	class CorePatch_AdditionalMarkers {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgMarkers {
	class Empty;
	class Shadow2TextSize0:Empty {
		scope = 0;
		shadow = 2;
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		size = "1e-45";
		color[] = {1,1,1,1};
	};
	class Shadow2TextSize16:Shadow2TextSize0 {
		size = 16;
	};
	class Shadow2TextSize24:Shadow2TextSize0 {
		size = 24;
	};
	class Shadow2TextSize32:Shadow2TextSize0 {
		size = 32;
	};
	class CorepatchHeal:Empty {
		scope = 0;
		size = 16;
		shadow = 2;
		color[] = {1,0,0,1};
		icon = "\ca\ui\data\ui_action_heal_ca.paa";
	};
	class CorepatchMan:Empty {
		scope = 0;
		size = 24;
		shadow = 2;
		color[] = {0.8,0.8,0.8,1};
		icon = "\CorePatch\CorePatch_AdditionalMarkers\data\corepatch_icon_man.paa";
	};
	class CorepatchVeh:CorepatchMan {
		icon = "\CorePatch\CorePatch_AdditionalMarkers\data\corepatch_icon_veh.paa";
	};
	class CorepatchCrate:CorepatchMan {
		size = 18;
		color[] = {0.86,0.86,0,1};
		icon = "\Ca\weapons\Data\map_ico\icomap_ammo_CA.paa";
	};
};

class CfgMarkerColors {
	class ColorLightGrey {
		scope = 1;
		color[] = {0.8,0.8,0.8,1};
	};
	class ColorLightGreen {
		scope = 1;
		color[] = {0.333,0.8,0.333,1};
	};
	class ColorMan {
		scope = 1;
		color[] = {0.86,0.86,0,1};
	};
};