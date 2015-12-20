class CfgPatches
{
	class CorePatch_CIT_24661_24662_24663
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon : LandVehicle
	{
		class Turrets;
	};
	class StaticGrenadeLauncher : StaticWeapon
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};
	class GMG_TriPod : StaticGrenadeLauncher
	{
	};
	class BAF_GMG_Tripod_D : GMG_TriPod
	{
		delete UiPicture;
		delete descriptionShort;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class OpticsIn
				{
					class ACOG
					{
						delete cameraDir;
						delete opticsDisablePeripherialVision;
						delete opticsFlare;
						delete useModelOptics;
					};
				};
			};
		};
	};
	class StaticMGWeapon : StaticWeapon
	{
	};
	class BAF_L2A1_ACOG_base : StaticMGWeapon
	{
		delete UiPicture;
	};
	class BAF_GPMG_Minitripod_D : BAF_L2A1_ACOG_base
	{
		delete UiPicture;
		delete descriptionShort;
	};
	class BAF_L2A1_Minitripod_D : BAF_L2A1_ACOG_base
	{
		delete descriptionShort;
	};
	class BAF_L2A1_Tripod_D : BAF_L2A1_ACOG_base
	{
		delete descriptionShort;
	};
};