class CfgPatches
{
	class CorePatch_CIT_39474
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
	class Dingo_Base_ACR : Car
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
		class TransportWeapons
		{
			class _xx_CZ805_A1_ACR
			{
				count = "1 * 2";
				weapon = "CZ805_A1_ACR";
			};
			class _xx_Sa58P_EP1
			{
				count = "1 * 1";
				weapon = "Sa58P_EP1";
			};
			class _xx_UK59_ACR
			{
				count = "1 * 1";
				weapon = "UK59_ACR";
			};
		};
	};
	class Dingo_GL_Wdl_ACR : Dingo_Base_ACR
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
		class TransportWeapons
		{
			class _xx_CZ805_A1_ACR
			{
				count = "1 * 2";
				weapon = "CZ805_A1_ACR";
			};
			class _xx_Sa58P_EP1
			{
				count = "1 * 1";
				weapon = "Sa58P_EP1";
			};
			class _xx_UK59_ACR
			{
				count = "1 * 1";
				weapon = "UK59_ACR";
			};
		};
	};
	class Dingo_WDL_ACR : Dingo_Base_ACR
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
		class TransportWeapons
		{
			class _xx_CZ805_A1_ACR
			{
				count = "1 * 2";
				weapon = "CZ805_A1_ACR";
			};
			class _xx_Sa58P_EP1
			{
				count = "1 * 1";
				weapon = "Sa58P_EP1";
			};
			class _xx_UK59_ACR
			{
				count = "1 * 1";
				weapon = "UK59_ACR";
			};
		};
	};
	class BRDM2_Base;
	class BRDM2_ACR : BRDM2_Base
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 30";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
	class GRAD_Base;
	class RM70_ACR : GRAD_Base
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;

		class TransportMagazines
		{
			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
		class TransportWeapons
		{
			class _xx_CZ805_A1_ACR
			{
				count = "1 * 2";
				weapon = "CZ805_A1_ACR";
			};
			class _xx_Sa58P_EP1
			{
				count = "1 * 1";
				weapon = "Sa58P_EP1";
			};
			class _xx_UK59_ACR
			{
				count = "1 * 1";
				weapon = "UK59_ACR";
			};
		};
	};
	class HMMWV_M1151_M2_DES_Base_EP1;
	class M1114_AGS_ACR : HMMWV_M1151_M2_DES_Base_EP1
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
	class M1114_DSK_ACR : HMMWV_M1151_M2_DES_Base_EP1
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
	class LandRover_Base;
	class LandRover_ACR : LandRover_Base
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
	class LandRover_Ambulance_ACR : LandRover_ACR
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
	class Pandur2_Base;
	class Pandur2_ACR : Pandur2_Base
	{
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
		class TransportWeapons
		{
			class _xx_CZ805_A1_ACR
			{
				count = "1 * 2";
				weapon = "CZ805_A1_ACR";
			};
			class _xx_Sa58P_EP1
			{
				count = "1 * 1";
				weapon = "Sa58P_EP1";
			};
			class _xx_UK59_ACR
			{
				count = "1 * 1";
				weapon = "UK59_ACR";
			};
		};
	};
	class Truck;
	class T810_Turrets_Base_ACR : Truck
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "2 * 30";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "2 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "2 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "2 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "2 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
	class T810_Base_ACR : T810_Turrets_Base_ACR
	{
	};
	class T810Reammo_ACR : T810_Base_ACR
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "3 * 30";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "3 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "3 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "3 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "3 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
	class T810Refuel_ACR : T810_Base_ACR
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;

		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
	class T810Repair_ACR : T810_Base_ACR
	{
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;

		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
	class UAZ_Unarmed_Base;
	class UAZ_Unarmed_ACR : UAZ_Unarmed_Base
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;

			class _xx_30Rnd_556x45_G36
			{
				count = "1 * 20";
				magazine = "30Rnd_556x45_G36";
			};
			class _xx_30Rnd_762x39_SA58
			{
				count = "1 * 10";
				magazine = "30Rnd_762x39_SA58";
			};
			class _xx_100Rnd_762x54_PK
			{
				count = "1 * 5";
				magazine = "100Rnd_762x54_PK";
			};
			class _xx_HandGrenade_West
			{
				count = "1 * 6";
				magazine = "HandGrenade_West";
			};
			class _xx_SmokeShell
			{
				count = "1 * 6";
				magazine = "SmokeShell";
			};
			class _xx_SmokeShellRed
			{
				count = "1 * 2";
				magazine = "SmokeShellRed";
			};
		};
	};
};
