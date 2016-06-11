class CfgPatches
{
	class CorePatch_CCP_67310
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMovesBasic;
class TransAnimBase;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
		{
			looped = 1;
		};
	};
};
