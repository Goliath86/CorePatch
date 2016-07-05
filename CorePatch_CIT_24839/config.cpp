class CfgPatches
{
	class CorePatch_CIT_24839
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
		threat[] = {0.3, 0.1, 0.1};
	};
	class AH1_Base : Helicopter
	{
	};
	class AH1Z : AH1_Base
	{
		threat[] = {1, 1, 0.6};
	};
	class BAF_Merlin_HC3_D : Helicopter
	{
		threat[] = {0, 0, 0};
	};
	class CH47_base_EP1 : Helicopter
	{
		delete threat;
	};
	class Ka60_Base_PMC : Helicopter
	{
		threat[] = {0.6, 0.5, 0.1};
	};
	class Kamov_Base : Helicopter
	{
	};
	class Ka52 : Kamov_Base
	{
		threat[] = {0.9, 1, 1};
	};
	class Mi17_base : Helicopter
	{
		delete threat;
	};
	class Mi17_base_CZ_EP1 : Mi17_base
	{
	};
	class Mi171Sh_Base_EP1 : Mi17_base_CZ_EP1
	{
		threat[] = {0.8, 0.8, 0.1};
	};
	class Mi17_base_RU : Mi17_base
	{
	};
	class Mi17_rockets_RU : Mi17_base_RU
	{
		threat[] = {0.8, 0.8, 0.1};
	};
	class UH1_Base : Helicopter
	{
		threat[] = {0.6, 0.5, 0.1};
	};
	class UH1H_base : Helicopter
	{
		threat[] = {0.4, 0.1, 0.1};
	};
	class UH60_Base : Helicopter
	{
	};
	class MH60S : UH60_Base
	{
		threat[] = {0.4, 0.1, 0.1};
	};
	class UH60M_base_EP1 : UH60_Base
	{
		threat[] = {0.4, 0.1, 0.1};
	};
};
