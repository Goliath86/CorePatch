class CfgPatches
{
	class CorePatch_CCP_67747
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class BRDM2_Base;
	class BTR60_TK_EP1: BRDM2_Base
	{
		hiddenSelections[] = {
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = {
			"\CA\wheeled_e\BTR60\Data\btr60_body_co.paa",
			"\CA\wheeled_e\BTR60\Data\btr60_details_co.paa"
		};
	};
};