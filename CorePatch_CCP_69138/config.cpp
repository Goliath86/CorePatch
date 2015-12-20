class CfgPatches
{
	class CorePatch_CCP_69138
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr : CfgMovesBasic
{
	class States
	{
		class AmovPknlMwlkSrasWpstDf;
		class AmovPknlMwlkSrasWpstDb : AmovPknlMwlkSrasWpstDf
		{
			soundEdge[] = {0.5, 1};
			walkCycles = 1;
		};
		class AmovPknlMwlkSrasWpstDbl : AmovPknlMwlkSrasWpstDf
		{
			soundEdge[] = {0.5, 1};
			walkCycles = 1;
		};
		class AmovPknlMwlkSrasWpstDbr : AmovPknlMwlkSrasWpstDf
		{
			soundEdge[] = {0.5, 1};
			walkCycles = 1;
		};
		class AmovPknlMwlkSrasWpstDfl : AmovPknlMwlkSrasWpstDf
		{
			soundEdge[] = {0.5, 1};
			walkCycles = 1;
		};
		class AmovPknlMwlkSrasWpstDfr : AmovPknlMwlkSrasWpstDf
		{
			soundEdge[] = {0.5, 1};
			walkCycles = 1;
		};
		class AmovPknlMwlkSrasWpstDl : AmovPknlMwlkSrasWpstDf
		{
			soundEdge[] = {0.5, 1};
			walkCycles = 1;
		};
		class AmovPknlMwlkSrasWpstDr : AmovPknlMwlkSrasWpstDf
		{
			soundEdge[] = {0.5, 1};
			walkCycles = 1;
		};
	};
};