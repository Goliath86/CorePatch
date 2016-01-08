class CfgPatches
{
	class CorePatch_ChangedGetInOutSounds
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class BRDM2_Base;
	class BTR60_TK_EP1 : BRDM2_Base
	{
		soundGetOut[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getout",
			1,
			1,
			40
		};
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1
		};
	};
	class Wheeled_APC;
	class StrykerBase_EP1 : Wheeled_APC
	{
		soundGetOut[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getout",
			1,
			1,
			50
		};
		soundGetIn[] = {
			"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",
			1,
			1
		};
	};
};
