class CfgPatches
{
	class CorePatch_Binoculars
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class Default;
	class Binocular : Default
	{
		opticsZoomInit = 0.046999998;
		visionMode[] = {"Normal"};
	};
	class Binocular_Vector : Binocular // Vector 21
	{
		opticsZoomInit = 0.024900001; // 10x
		opticsZoomMax = 0.024900001;
		opticsZoomMin = 0.024900001;
	};
	class Laserdesignator : Binocular // AN/PEQ-1A SOFLAM
	{
		delete visionMode;

		opticsZoomInit = 0.024900001; // 10x
		opticsZoomMax = 0.024900001;
		opticsZoomMin = 0.024900001;
	};
};
