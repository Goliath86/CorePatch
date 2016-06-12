class CfgPatches
{
	class CorePatch_CCP_68103
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Car;
	class Wheeled_APC : Car
	{
		class NewTurret;
	};
	class GAZ_Vodnik_HMG : Wheeled_APC
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewOptics
				{
					visionMode[] = {
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
};
