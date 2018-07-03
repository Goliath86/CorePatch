class CfgPatches
{
	class CorePatch_Flares
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
		class CorePatch_Flares
		{
			list[] = {"CorePatch_Flares"};
		};
	};
};

class cfgAmmo {
	class FlareCore;
	
    class FlareBase: FlareCore {
        timeToLive = 80;
        brightness = 200;
        intensity  = 1000000;
    };
	
    class F_40mm_White: FlareBase {
        timeToLive = 40;
        brightness = 100;
        intensity  = 5;
    };
	
	class F_40mm_Green: F_40mm_White
	{
	};
	
	class F_40mm_Red: F_40mm_White
	{
	};
	
	class F_40mm_Yellow: F_40mm_White
	{
	};
};
