class CfgPatches
{
	class CorePatch_UI
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class RscOpticsValue;
class RscInGameUI
{	
	class RscWeaponRangeZeroing;
	class RscWeaponRangeZeroing_Ka52: RscWeaponRangeZeroing
	{
		class CA_Distance: RscOpticsValue
		{
			colorText[] = {1, 1, 1, 1};
			h = 0.050000001;
			idc = 151;
			style = 2;
			y = "(safeZoneY + safeZoneH) - 0.195";
			w = 1;
		};
	};
	class RscWeaponRangeZeroing_Mi24: RscWeaponRangeZeroing
	{
		class CA_Distance: RscOpticsValue
		{
			colorText[] = {1, 0.7, 0.4, 1};
			h = 0.050000001;
			idc = 151;
			style = 2;
			y = "(safeZoneY + safeZoneH) - 0.195";
			w = 1;
		};
	};
};
