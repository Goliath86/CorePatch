class CfgPatches
{
	class CorePatch_CIT_30970
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAddons {
    class PreloadAddons {
       class CorePatch_CIT_30970 {
          list[] = {"CorePatch_CIT_30970"};
       };
    };
};

class CfgWeapons {
	class Rifle;

	class DMR: Rifle {
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\AK74.rtm"};
	};
};