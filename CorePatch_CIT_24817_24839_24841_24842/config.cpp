class CfgPatches
{
	class CorePatch_CIT_24817_24839_24841_24842
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
		//delete threat;
	};
	class Ka60_Base_PMC : Helicopter
	{
		threat[] = {0.6, 0.5, 0.1};
	};
	class Ka137_Base_PMC : Helicopter
	{
		threat[] = {0.2, 0, 0};
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
		//delete threat;
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
		threat[] = {0.4, 0.1, 0.1};
	};
	class MH60S : UH60_Base
	{
		//delete threat;
	};
	class UH60M_base_EP1 : UH60_Base
	{
		//delete threat;
	};
	class Plane : Air
	{
		threat[] = {0, 0, 0};
	};
	class AV8B2 : Plane
	{
		threat[] = {0.7, 1, 1};
	};
	class AV8B : AV8B2
	{
		threat[] = {0.7, 1, 0.8};
	};
	class An2_Base_EP1 : Plane
	{
		//delete threat;
	};
	class C130J : Plane
	{
		//delete threat;
	};
	class F35_base : Plane
	{
	};
	class F35B : F35_base
	{
		threat[] = {0.7, 1, 1};
	};
	class L39_base : Plane
	{
		threat[] = {0.7, 1, 0.8};
	};
	class Su34 : Plane
	{
		threat[] = {0.7, 1, 1};
	};
	class UAV : Plane
	{
	};
	class MQ9PredatorB : UAV
	{
		threat[] = {0, 1, 0};
	};
	class Pchela1T : UAV
	{
		//delete threat;
	};
};