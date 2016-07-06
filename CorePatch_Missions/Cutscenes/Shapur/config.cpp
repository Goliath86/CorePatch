class CfgPatches
{
	class CorePatch_Missions_Cutscenes_ShapurIntro1
	{
		requiredAddons[] = {"CorePatch_Missions"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class ShapurIntro1
		{
			directory = "CorePatch\CorePatch_Missions\Cutscenes\Shapur\data\scenes\intro.Shapur_BAF";
		};
	};
};
