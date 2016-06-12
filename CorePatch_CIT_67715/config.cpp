class CfgPatches
{
	class CorePatch_CIT_67715
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter : Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class AH64_base_EP1 : Helicopter
	{
	};
	class AH64D : AH64_base_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				maxElev = 11;
			};
		};
	};
	class AH64D_EP1 : AH64_base_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				maxElev = 11;
			};
		};
	};
	class BAF_Apache_AH1_D : AH64D_EP1
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				delete maxElev;
			};
		};
	};
};
