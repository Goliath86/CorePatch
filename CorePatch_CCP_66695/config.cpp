class CfgPatches
{
	class CorePatch_CCP_66695
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class Rifle;
	class BAF_L110A1_Aim: Rifle
	{
		magazines[] = {
			"200Rnd_556x45_L110A1",
			"200Rnd_556x45_M249",
			"100Rnd_556x45_M249",
			"100Rnd_556x45_BetaCMag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_G36",
			"30Rnd_556x45_StanagSD",
			"30Rnd_556x45_G36SD",
			"20Rnd_556x45_Stanag"
		};
	};
	class M249: Rifle
	{
		magazines[] = {
			"200Rnd_556x45_M249",
			"200Rnd_556x45_L110A1",
			"100Rnd_556x45_M249",
			"100Rnd_556x45_BetaCMag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_G36",
			"30Rnd_556x45_StanagSD",
			"30Rnd_556x45_G36SD",
			"20Rnd_556x45_Stanag"
		};
	};
	class M249_EP1: M249
	{
		magazines[] = {
			"100Rnd_556x45_M249",
			"200Rnd_556x45_M249",
			"200Rnd_556x45_L110A1",
			"100Rnd_556x45_BetaCMag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_G36",
			"30Rnd_556x45_StanagSD",
			"30Rnd_556x45_G36SD",
			"20Rnd_556x45_Stanag"
		};
	};
	class M249_TWS_EP1: M249
	{
		magazines[] = {
			"100Rnd_556x45_M249",
			"200Rnd_556x45_M249",
			"200Rnd_556x45_L110A1",
			"100Rnd_556x45_BetaCMag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_G36",
			"30Rnd_556x45_StanagSD",
			"30Rnd_556x45_G36SD",
			"20Rnd_556x45_Stanag"
		};
	};
	class M249_m145_EP1: M249
	{
		magazines[] = {
			"100Rnd_556x45_M249",
			"200Rnd_556x45_M249",
			"200Rnd_556x45_L110A1",
			"100Rnd_556x45_BetaCMag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_G36",
			"30Rnd_556x45_StanagSD",
			"30Rnd_556x45_G36SD",
			"20Rnd_556x45_Stanag"
		};
	};
};
