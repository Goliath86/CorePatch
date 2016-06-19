class CfgPatches
{
	class CorePatch_CIT_27790
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Civilian;
	class CIV_EuroMan01_EP1 : Civilian
	{
		accuracy = 3.9000001;
	};
	class TK_CIV_Takistani_Base_EP1 : Civilian
	{
		delete accuracy;
	};
	class TK_CIV_Takistani01_EP1 : TK_CIV_Takistani_Base_EP1
	{
		accuracy = 3.9000001;
	};
	class TK_CIV_Takistani02_EP1 : TK_CIV_Takistani_Base_EP1
	{
		accuracy = 3.9000001;
	};
	class TK_CIV_Takistani03_EP1 : TK_CIV_Takistani_Base_EP1
	{
		accuracy = 3.9000001;
	};
	class TK_CIV_Takistani04_EP1 : TK_CIV_Takistani_Base_EP1
	{
		accuracy = 3.9000001;
	};
	class TK_CIV_Takistani05_EP1 : TK_CIV_Takistani_Base_EP1
	{
		accuracy = 3.9000001;
	};
	class TK_CIV_Takistani06_EP1 : TK_CIV_Takistani_Base_EP1
	{
		accuracy = 3.9000001;
	};
	class TK_CIV_Worker01_EP1 : TK_CIV_Takistani_Base_EP1
	{
		accuracy = 3.9000001;
	};
	class SoldierGB;
	class CIV_Contractor1_BAF : SoldierGB
	{
		accuracy = 3.9000001;
	};
};
