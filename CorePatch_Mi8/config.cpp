class CfgPatches
{
	class CorePatch_Mi8
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class CorePatch_Mi8
		{
			list[] = {"CorePatch_Mi8"};
		};
	};
};
class CfgVehicles {
	class Mi17_base_CZ_EP1;
	class Mi171Sh_Base_EP1: Mi17_base_CZ_EP1 {
		model = "\CorePatch\CorePatch_Mi8\models\Mi_171";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	};

	class Helicopter;
	class Mi17_base: Helicopter {
		model = "\CorePatch\CorePatch_Mi8\models\Mi_8MT";
	};
	class Mi17_medevac_base: Mi17_base {
		model = "\CorePatch\CorePatch_Mi8\models\Mi_8AMT";
	};

	class Mi17_Civilian_base_Ru;
	class Mi17_Civilian: Mi17_Civilian_base_Ru {
		model = "\CorePatch\CorePatch_Mi8\models\Mi_8AMT";
	};

	class Mi17_base_RU;
	class Mi17_rockets_RU: Mi17_base_RU {
		model = "\CorePatch\CorePatch_Mi8\models\Mi_8MTV_3";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","screen"};
	};
};
