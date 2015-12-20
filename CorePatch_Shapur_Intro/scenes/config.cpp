
class CfgPatches {

	class CorePatch_Shapur_Intro_Fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.020000;
		requiredAddons[] = {"CorePatch"};
	};
};

class CfgVehicles {
};

class CfgWorlds {

	class DefaultWorld {

		class Weather {
			/*extern*/ class Overcast;
		};
	};

	class CAWorld: DefaultWorld {

		class Grid {
		};
		/*extern*/ class DayLightingBrightAlmost;
		/*extern*/ class DayLightingRainy;
		/*extern*/ class DefaultClutter;

		class Weather: Weather {
			/*extern*/ class Lighting;

			class Overcast: Overcast {
				/*extern*/ class Weather1;
				/*extern*/ class Weather2;
				/*extern*/ class Weather3;
				/*extern*/ class Weather4;
				/*extern*/ class Weather5;
				/*extern*/ class Weather6;
			};
		};
	};
	/*extern*/ class DefaultLighting;

	class Shapur_BAF: CAWorld {
		access = 3;
		worldId = 5;
		cutscenes[] = {"ShapurIntro1"};
		description = "$STR_BAF_CFGWORLDS_DESERT_B0";
		icon = "";
		worldName = "\ca\shapur_baf\Shapur_BAF.wrp";
		pictureMap = "";
		pictureShot = "\ca\shapur_baf\data\ui_selectisland_Desert_B_ca.paa";
		plateFormat = "TK$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 64;
		latitude = -33;
		elevationOffset = 100;

		class OutsideTerrain {
			satellite = "ca\shapur_baf\data\s_satout_co.paa";
			enableTerrainSynth = 1;

			class Layers {

				class Layer0 {
					nopx = "ca\shapur_baf\data\baf_polopoust_nopx.paa";
					texture = "ca\shapur_baf\data\baf_polopoust_co.paa";
				};
			};
		};

		class Grid: Grid {
			offsetX = 0;
			offsetY = 2048;

			class Zoom1 {
				zoomMax = 0.150000;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};

			class Zoom2 {
				zoomMax = 0.850000;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};

			class Zoom3 {
				zoomMax = 1000000015047466200000000000000.000000;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		startTime = "10:00";
		startDate = "1/7/2012";
		startWeather = 0.100000;
		startFog = 0.000000;
		forecastWeather = 0.100000;
		forecastFog = 0.000000;
		centerPosition[] = {1350, 1410, 300};
		seagullPos[] = {1024, 150.000000, 1024};
		ilsPosition[] = {800.318970, 136.496994};
		ilsDirection[] = {0.799000, 0.080000, -0.601300};
		ilsTaxiOff[] = {190.451004, 596.073975, 184.406998, 622.241028, 199.690994, 652.739990, 216.985992, 674.984009, 234.259995, 690.512024, 255.009995, 684.969971, 703.291016, 347.944000};
		ilsTaxiIn[] = {703.291016, 347.944000, 830.036987, 251.651993, 847.479980, 229.600998, 840.715027, 206.100998, 817.130981, 175.921997, 794.304016, 155.776993, 761.390991, 165.488998};

		class ReplaceObjects {
		};

		class Sounds {
			sounds[] = {};
		};

		class Animation {
			vehicles[] = {};
		};

		class Lighting: DefaultLighting {
			groundReflection[] = {0.060000, 0.060000, 0.030000};
		};

		class DayLightingBrightAlmost: DayLightingBrightAlmost {
			deepNight[] = {-15, {0.050000, 0.050000, 0.060000}, {0.001000, 0.001000, 0.002000}, {0.020000, 0.020000, 0.050000}, {0.003000, 0.003000, 0.003000}, {0.000100, 0.000100, 0.000200}, {0.000100, 0.000100, 0.000200}, 0};
			fullNight[] = {-5, {0.050000, 0.050000, 0.050000}, {0.020000, 0.020000, 0.020000}, {0.040000, 0.040000, 0.040000}, {0.040000, 0.040000, 0.040000}, {0.010000, 0.010000, 0.020000}, {0.080000, 0.060000, 0.060000}, 0};
			sunMoon[] = {-3.750000, {0.045000, 0.040000, 0.040000}, {0.040000, 0.040000, 0.040000}, {0.045000, 0.040000, 0.040000}, {0.040000, 0.040000, 0.040000}, {0.040000, 0.035000, 0.040000}, {0.100000, 0.080000, 0.090000}, 0.500000};
			earlySun[] = {-2.500000, {0.120000, 0.100000, 0.100000}, {0.080000, 0.060000, 0.070000}, {0.120000, 0.100000, 0.100000}, {0.080000, 0.060000, 0.070000}, {0.080000, 0.070000, 0.080000}, {0.100000, 0.100000, 0.120000}, 1};
			sunrise[] = {0, {{0.700000, 0.450000, 0.450000}, "5.16+(-4)"}, {{0.070000, 0.090000, 0.120000}, "4.0+(-4)"}, {{0.600000, 0.470000, 0.250000}, "4.66+(-4)"}, {{0.100000, 0.090000, 0.100000}, "4.3+(-4)"}, {{0.500000, 0.400000, 0.400000}, "6.49+(-4)"}, {{0.880000, 0.510000, 0.240000}, "8.39+(-4)"}, 1};
			earlyMorning[] = {3, {{0.650000, 0.550000, 0.550000}, "6.04+(-4)"}, {{0.080000, 0.090000, 0.110000}, "4.5+(-4)"}, {{0.550000, 0.470000, 0.250000}, "5.54+(-4)"}, {{0.100000, 0.090000, 0.100000}, "5.02+(-4)"}, {{0.500000, 0.400000, 0.400000}, "7.05+(-4)"}, {{0.880000, 0.510000, 0.240000}, "8.88+(-4)"}, 1};
			midMorning[] = {8, {{0.980000, 0.850000, 0.800000}, "8.37+(-4)"}, {{0.080000, 0.090000, 0.110000}, "6.42+(-4)"}, {{0.870000, 0.470000, 0.250000}, "7.87+(-4)"}, {{0.090000, 0.090000, 0.100000}, "6.89+(-4)"}, {{0.500000, 0.400000, 0.400000}, "8.9+(-4)"}, {{0.880000, 0.510000, 0.240000}, "10.88+(-4)"}, 1};
			morning[] = {16, {{1, 1, 0.900000}, "13.17+(-4)"}, {{0.170000, 0.180000, 0.190000}, "10.26+(-4)"}, {{1, 1, 0.900000}, "12.67+(-4)"}, {{0.170000, 0.180000, 0.190000}, "11.71+(-4)"}, {{0.150000, 0.150000, 0.150000}, "12.42+(-4)"}, {{0.170000, 0.170000, 0.150000}, "14.42+(-4)"}, 1};
			noon[] = {45, {{1, 1, 1}, "17+(-4)"}, {{1, 1.300000, 1.550000}, "13.5+(-4)"}, {{1, 1, 1}, "15+(-4)"}, {{0.360000, 0.370000, 0.380000}, "13.5+(-4)"}, {{1, 1, 1}, "16+(-4)"}, {{1.000000, 1.000000, 1}, "17+(-4)"}, 1};
		};

		class DayLightingRainy: DayLightingRainy {
			deepNight[] = {-15, {0.003400, 0.003400, 0.004000}, {0.003000, 0.003000, 0.003000}, {0.003400, 0.003400, 0.004000}, {0.003000, 0.003000, 0.003000}, {0.001000, 0.001000, 0.002000}, {0.001000, 0.001000, 0.002000}, 0};
			fullNight[] = {-5, {0.023000, 0.023000, 0.023000}, {0.020000, 0.020000, 0.020000}, {0.023000, 0.023000, 0.023000}, {0.020000, 0.020000, 0.020000}, {0.010000, 0.010000, 0.020000}, {0.080000, 0.060000, 0.060000}, 0};
			sunMoon[] = {-3.750000, {0.040000, 0.040000, 0.050000}, {0.040000, 0.040000, 0.050000}, {0.040000, 0.040000, 0.050000}, {0.040000, 0.040000, 0.050000}, {0.040000, 0.035000, 0.040000}, {0.110000, 0.080000, 0.090000}, 0.500000};
			earlySun[] = {-2.500000, {0.068900, 0.068900, 0.080400}, {0.060000, 0.060000, 0.070000}, {0.068900, 0.068900, 0.080400}, {0.060000, 0.060000, 0.070000}, {0.080000, 0.070000, 0.080000}, {0.140000, 0.100000, 0.120000}, 0.500000};
			earlyMorning[] = {0, {{1, 1, 1}, "(-4)+3.95"}, {{1, 1, 1}, "(-4)+3.0"}, {{1, 1, 1}, "(-4)+3.95"}, {{1, 1, 1}, "(-4)+3.0"}, {{1, 1, 1}, "(-4)+4"}, {{1, 1, 1}, "(-4)+5.5"}, 1};
			morning[] = {5, {{1, 1, 1}, "(-4)+5.7"}, {{1, 1, 1}, "(-4)+4.5"}, {{1, 1, 1}, "(-4)+5.7"}, {{1, 1, 1}, "(-4)+4.5"}, {{1, 1, 1}, "(-4)+7"}, {{1, 1, 1}, "(-4)+8"}, 1};
			lateMorning[] = {25, {{1, 1, 1}, "(-4)+10.45"}, {{1, 1, 1}, "(-4)+9.75"}, {{1, 1, 1}, "(-4)+10.45"}, {{1, 1, 1}, "(-4)+9.75"}, {{1, 1, 1}, "(-4)+12"}, {{1, 1, 1}, "(-4)+12.75"}, 1};
			noon[] = {70, {{1, 1, 1}, "(-4)+12.5"}, {{1, 1, 1}, "(-4)+11"}, {{1, 1, 1}, "(-4)+12"}, {{1, 1, 1}, "(-4)+11"}, {{1, 1, 1}, "(-4)+13.5"}, {{1, 1, 1}, "(-4)+14"}, 1};
		};

		class Weather: Weather {

			class Lighting: Lighting {

				class BrightAlmost: DayLightingBrightAlmost {
					overcast = 0;
				};

				class Rainy: DayLightingRainy {
					overcast = 1.000000;
				};
			};

			class Overcast: Overcast {

				class Weather1: Weather1 {
					sky = "ca\Takistan\Data\sky_clear_sky.paa";
					skyR = "ca\Takistan\Data\sky_clear_lco.paa";
					horizon = "ca\Takistan\Data\sky_clear_horizont_sky.paa";
				};

				class Weather7: Weather1 {
					sky = "ca\Takistan\Data\sky_veryclear_sky.paa";
					skyR = "ca\Takistan\Data\sky_clear_lco.paa";
					horizon = "ca\Takistan\Data\sky_veryclear_horizont_sky.paa";
				};

				class Weather2: Weather2 {
					sky = "ca\Takistan\Data\sky_almostclear_sky.paa";
					skyR = "ca\Takistan\Data\sky_almostclear_lco.paa";
					horizon = "ca\Takistan\Data\sky_almostclear_horizont_sky.paa";
				};

				class Weather3: Weather3 {
					sky = "ca\Takistan\Data\sky_semicloudy_sky.paa";
					skyR = "ca\Takistan\Data\sky_semicloudy_lco.paa";
					horizon = "ca\Takistan\Data\sky_semicloudy_horizont_sky.paa";
				};

				class Weather4: Weather4 {
					sky = "ca\Takistan\Data\sky_cloudy_sky.paa";
					skyR = "ca\Takistan\Data\sky_cloudy_lco.paa";
					horizon = "ca\Takistan\Data\sky_cloudy_horizont_sky.paa";
				};

				class Weather5: Weather5 {
					sky = "ca\Takistan\Data\sky_mostlycloudy_sky.paa";
					skyR = "ca\Takistan\Data\sky_mostlycloudy_lco.paa";
					horizon = "ca\Takistan\Data\sky_mostlycloudy_horizont_sky.paa";
				};

				class Weather6: Weather6 {
					sky = "ca\Takistan\Data\sky_overcast_sky.paa";
					skyR = "ca\Takistan\Data\sky_overcast_lco.paa";
					horizon = "ca\Takistan\Data\sky_overcast_horizont_sky.paa";
				};
			};
		};
		clutterGrid = 1.000000;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "ca\shapur_baf\data\baf_middle_mco.paa";
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 3;

		class clutter {

			class TK_GrassDry: DefaultClutter {
				model = "ca\plants_E\Clutter\c_GrassDesert_GroupSoft_EP1.p3d";
				affectedByWind = 0.700000;
				swLighting = 1;
				scaleMin = 0.700000;
				scaleMax = 1.000000;
			};

			class TK_GrassDryLong: DefaultClutter {
				model = "ca\plants_E\Clutter\c_GrassDryLong_EP1.p3d";
				affectedByWind = 0.850000;
				swLighting = 1;
				scaleMin = 0.750000;
				scaleMax = 1.000000;
			};

			class TK_GrassGreen: DefaultClutter {
				model = "ca\plants_E\Clutter\c_GrassGreen_EP1.p3d";
				affectedByWind = 0.700000;
				swLighting = 1;
				scaleMin = 0.850000;
				scaleMax = 1.100000;
			};

			class TK_GrassGreenLong: DefaultClutter {
				model = "ca\plants_E\Clutter\c_GrassGreenLong_EP1.p3d";
				affectedByWind = 0.800000;
				swLighting = 1;
				scaleMin = 0.750000;
				scaleMax = 1.000000;
			};

			class TK_BrushHard: DefaultClutter {
				model = "ca\plants_E\Clutter\c_Brush_Hard_EP1.p3d";
				affectedByWind = 0.400000;
				swLighting = 1;
				scaleMin = 0.900000;
				scaleMax = 1.300000;
			};

			class TK_BrushSoft: DefaultClutter {
				model = "ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d";
				affectedByWind = 0.800000;
				swLighting = 1;
				scaleMin = 0.750000;
				scaleMax = 1.400000;
			};

			class TK_PlantsViolet: DefaultClutter {
				model = "ca\plants_E\Clutter\c_Plants_Violet_EP1.p3d";
				affectedByWind = 0.700000;
				swLighting = 1;
				scaleMin = 1.000000;
				scaleMax = 1.250000;
			};

			class TK_PlantsWhite: DefaultClutter {
				model = "ca\plants_E\Clutter\c_Plants_White_EP1.p3d";
				affectedByWind = 0.700000;
				swLighting = 1;
				scaleMin = 0.850000;
				scaleMax = 1.100000;
			};

			class TK_Weed1: DefaultClutter {
				model = "ca\plants_E\Clutter\c_Weed_1_EP1.p3d";
				affectedByWind = 0.650000;
				swLighting = 1;
				scaleMin = 0.650000;
				scaleMax = 1.000000;
			};

			class TK_WeedThistle: DefaultClutter {
				model = "ca\plants_E\Clutter\c_Weed_Thistle_EP1.p3d";
				affectedByWind = 0.700000;
				swLighting = 1;
				scaleMin = 1.000000;
				scaleMax = 1.250000;
			};
		};

		class Subdivision {

			class Fractal {
				rougness = 5;
				maxRoad = 0.020000;
				maxTrack = 0.500000;
				maxSlopeFactor = 0.050000;
			};

			class WhiteNoise {
				rougness = 2;
				maxRoad = 0.010000;
				maxTrack = 0.050000;
				maxSlopeFactor = 0.002500;
			};
			minY = 0.000000;
			minSlope = 0.020000;
		};

		class Ambient {

			class Mammals {
				radius = 200;
				cost = "(1 + forest + trees) * (0.5 + (0.5 * night)) * (1 - sea) * (1 - houses)";

				class Species {

					class Rabbit {
						probability = 0.050000;
						cost = 1;
					};
				};
			};

			class BigBirds {
				radius = 300;
				cost = "((1 + forest + trees) - ((2 * rain)) - houses) * (1 - night) * (1 - sea)";

				class Species {

					class Hawk {
						probability = 0.200000;
						cost = 1;
					};
				};
			};

			class Birds {
				radius = 170;
				cost = "(1 - night) * ((1 + (3 * sea)) - (2 * rain))";

				class Species {

					class Crow {
						probability = 0.200000;
						cost = 1;
					};
				};
			};

			class BigInsects {
				radius = 20;
				cost = "(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";

				class Species {

					class DragonFly {
						probability = "0.6 - (meadow * 0.5) + (forest * 0.4)";
						cost = 1;
					};

					class ButterFly {
						probability = "0.4 + (meadow * 0.5) - (forest * 0.4)";
						cost = 1;
					};
				};
			};

			class BigInsectsAquatic {
				radius = 20;
				cost = "(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";

				class Species {

					class DragonFly {
						probability = 1;
						cost = 1;
					};
				};
			};

			class SmallInsects {
				radius = 3;
				cost = "(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";

				class Species {

					class HouseFly {
						probability = "deadBody + (1 - deadBody) * (0.5 - forest * 0.1 - meadow * 0.2)";
						cost = 1;
					};

					class HoneyBee {
						probability = "(1 - deadBody) * (0.5 - forest * 0.1 + meadow * 0.2)";
						cost = 1;
					};

					class Mosquito {
						probability = "(1 - deadBody) * (0.2 * forest)";
						cost = 1;
					};
				};
			};

			class NightInsects {
				radius = 3;
				cost = "(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";

				class Species {

					class Mosquito {
						probability = 1;
						cost = 1;
					};
				};
			};

			class WindClutter {
				radius = 10;
				cost = "((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";

				class Species {

					class FxWindGrass1 {
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};

					class FxWindGrass2 {
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};

					class FxWindRock1 {
						probability = "0.4 * hills";
						cost = 1;
					};
				};
			};

			class NoWindClutter {
				radius = 15;
				cost = 8;

				class Species {

					class FxWindPollen1 {
						probability = 1;
						cost = 1;
					};
				};
			};
		};

		class Names {

			class airport_shapur {
				name = "$STR_EP1_LOCATION_LOYMANARAAIRFIELD";
				position[] = {625.429993, 333.760010};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class militaryBase_shapur {
				name = "$STR_EP1_LOCATION_RASMANMILITARYBASE";
				position[] = {1343.569946, 853.150024};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class Shapur_eDalanper {
				name = "$STR_baf_shapur_e_dalanper";
				position[] = {1574.290039, 1374.319946};
				type = "NameCity";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class shapur1 {
				name = "$STR_baf_shapur_1";
				position[] = {1114.989990, 1512.989990};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class shapur3 {
				name = "$STR_baf_shapur_3";
				position[] = {1596.880005, 1661.699951};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class shapur2 {
				name = "$STR_baf_shapur_2";
				position[] = {1570.910034, 1134.180054};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class oilProcFacility_shapur {
				name = "$STR_baf_oil_processing_facility";
				position[] = {1112.109985, 472.100006};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};
		};
		skyObject = "ca\Takistan\Data\obloha.p3d";
		horizontObject = "ca\Takistan\Data\horizont.p3d";
		skyTexture = "ca\Takistan\Data\sky_semicloudy_sky.paa";
		skyTextureR = "ca\Takistan\Data\sky_semicloudy_lco.paa";

		class Armory {
			disabled = 1;
			positionAdmin[] = {1956.250000, 84.150803};
			positionsViewer[] = {{1346.670044, 1428.270020}, {1086.329956, 1548.770020}};
			disableShips = 1;

			class Challenges {

				class FiringRange {
					positionsStart[] = {{976.630981, 1569.390015}};
					directionsStart[] = {245};
				};
			};
		};
		safePositionAnchor[] = {1101.089966, 1220.270020};
		safePositionRadius = 1000;
	};
};

class CfgWorldList {

	class Shapur_BAF {
	};
};

class CfgMissions {

	class Cutscenes {

		class ShapurIntro1 {
			directory = "CorePatch\CorePatch_Shapur_Intro\scenes\intro.Shapur_BAF";
		};
	};
};

class CfgSurfaces {

	class Default {
	};

	class Water {
	};

	class DBTrava: Default {
		access = 2;
		files = "baf_trava_*";
		rough = 0.080000;
		dust = 0.500000;
		soundEnviron = "drygrass";
		character = "DBGrassClutter";
		soundHit = "soft_ground";
	};

	class DBPolopoust: Default {
		access = 2;
		files = "baf_polopoust_*";
		rough = 0.050000;
		dust = 0.900000;
		soundEnviron = "dirt";
		character = "DBDenseAridClutter";
		soundHit = "soft_ground";
	};

	class DBSkalniSterk: Default {
		access = 2;
		files = "baf_skalni_sterk_*";
		rough = 0.100000;
		dust = 1.000000;
		soundEnviron = "rock";
		character = "DBSparseAridClutter";
		soundHit = "hard_ground";
	};

	class DBAsfalt: Default {
		access = 2;
		files = "baf_asfalt_*";
		rough = 0.005000;
		dust = 0.100000;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
};

class CfgSurfaceCharacters {

	class DBGrassClutter {
		probability[] = {0.890000, 0.070000, 0.050000};
		names[] = {"TK_GrassDry", "TK_BrushHard", "TK_PlantsWhite"};
	};

	class DBDenseAridClutter {
		probability[] = {0.070000, 0.050000};
		names[] = {"TK_BrushSoft", "TK_BrushHard"};
	};

	class DBSparseAridClutter {
		probability[] = {0.050000};
		names[] = {"TK_BrushSoft"};
	};
};
