class CfgPatches {
	class CorePatch_CCP_67951_OA {
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {

	class LandVehicle;
	
	class Car : LandVehicle {
		terrainCoef = 3;
	};
	
	class Motorcycle : LandVehicle {
		terrainCoef = 2;
	};
	
	class HMMWV_base : Car {
		terrainCoef = 2;
	};
	
	class UAZ_Base : Car {
		terrainCoef = 2;
	};
	
	class LandRover_Base : Car {
		terrainCoef = 2;
	};
	
	class BAF_Jackal2_BASE_D : Car {
		terrainCoef = 2;
	};
	
	class SUV_Base_EP1 : Car {
		terrainCoef = 2;
	};

	class ArmoredSUV_Base_PMC : Car {
		terrainCoef = 2;
	};
	
	class Truck : Car {
		terrainCoef = 2;
	};
	
	class ATV_base_EP1 : Car {
		terrainCoef = 2;
	};
	
	class Wheeled_APC : Car {
		terrainCoef = 2;
	};
	
/*	class WheeledAPC : Car {
		terrainCoef = 2;
	};*/
	
	class BRDM2_Base : Wheeled_APC {
		terrainCoef = 2;
	};
};

class CfgSurfaces {
	class Default {
		access = ReadOnly;
		files = "default";
		rough = 0.15;
		dust = 0.1;
		isWater = 0;
		friction = 0.9;
		restitution = 0;
		soundEnviron = "normalExt";
		character = "Empty";
		impact = "default_Mat";
	};
	
	class Sterk : Default {
		rough = 0.15;
		dust = 0.15;
	};
	
	class SterkBIG : Default {
		rough = 0.15;
		dust = 0.15;
	};
	
	class Sutiny : Default {
		rough = 0.15;
		dust = 0.15;
	};
	
	class Hlina : Default {
		rough = 0.2;
		dust = 0.5;
	};
	
	class Grass : Default {
		rough = 0.2;
		dust = 0.1;
	};
	
	class GrassSouth : Default {
		rough = 0.2;
		dust = 0.2;
	};
	
	class ForestLeaves : Default {
		rough = 0.2;
		dust = 0.2;
	};
	
	class ForestNeedles : Default {
		rough = 0.2;
		dust = 0.2;
	};
	
	class RockSouth : Default {
		rough = 0.3;
		dust = 0.2;
	};
	
	class RockNorth : Default {
		rough = 0.3;
		dust = 0.2;
	};
	
	class Mud : Default {
		rough = 0.2;
		dust = 0.3;
	};
	
	class DryGround : Default {
		rough = 0.1;
		dust = 0.05;
	};
	
	class Field1 : Default {
		rough = 0.2;
		dust = 0.25;
	};
	
	class SandGeneral : Default {
		rough = 0.2;
		dust = 0.5;
	};
	
	class SandDesert : Default {
		rough = 0.2;
		dust = 0.8;
	};
	
	class SandBeach : Default {
		rough = 0.15;
		dust = 0.5;
	};
	
	#include "desert.hpp"
	#include "fallujah.hpp"
	#include "namalsk.hpp"
	#include "podagorsk.hpp"
	#include "proving_grounds.hpp"
	#include "shapur.hpp"
	#include "takistan.hpp"
	#include "torabora.hpp"
	#include "zargabad.hpp"
};