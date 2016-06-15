class CfgPatches
{
	class CorePatch_CIT_19347
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Plane;
	class Su25_base : Plane
	{
		class MFD
		{
			class AirplaneHUD
			{
				class Bones
				{
					class HorizonBankMGun
					{
						maxAngle = -360;
						minAngle = 360;
					};
				};
			};
		};
	};
};
