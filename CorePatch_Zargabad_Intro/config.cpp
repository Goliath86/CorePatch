
class CfgPatches {

	class CorePatch_Zargabad_Intro_Fix {
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
			class Overcast;
		};
	};

	class CAWorld: DefaultWorld {

		class Grid {
		};
		/*extern*/ class DayLightingBrightAlmost;
		/*extern*/ class DayLightingRainy;
		/*extern*/ class DefaultClutter;
		/*extern*/ class EnvSounds;

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

	class Zargabad: CAWorld {
		access = 3;
		worldId = 5;
		cutscenes[] = {"ZargabadIntro1", "ZargabadIntro2"};
		description = "$STR_EP1_LOCATION_ZARGABAD";
		icon = "";
		worldName = "\ca\zargabad\zargabad.wrp";
		pictureMap = "";
		pictureShot = "\ca\zargabad\data\ui_selectisland_zargabad_ca.paa";
		plateFormat = "TK$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 66;
		latitude = -34;
		elevationOffset = 2000;

		class EnvSounds: EnvSounds {

			class Sea {
				name = "$STR_DN_SEA";
				sound[] = {"\ca\Sounds_E\sfx\lake_1", 0.010000, 1};
				soundNight[] = {"\ca\Sounds_E\sfx\lake_3", 0.056234, 1};
				volume = "sea";
			};
		};

		class OutsideTerrain {
			satellite = "ca\zargabad\data\s_satout_co.paa";
			enableTerrainSynth = 1;

			class Layers {

				class Layer0 {
					nopx = "ca\zargabad\data\zr_polopoust_nopx.paa";
					texture = "ca\zargabad\data\zr_polopoust_co.paa";
				};
			};
		};

		class Grid: Grid {
			offsetX = 0;
			offsetY = 8192;

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
		startTime = "11:30";
		startDate = "29/5/2009";
		startWeather = 0.250000;
		startFog = 0.000000;
		forecastWeather = 0.000000;
		forecastFog = 0.000000;
		centerPosition[] = {4096, 4096, 300};
		seagullPos[] = {1272.842041, 150.000000, 14034.961914};
		ilsPosition[] = {3402, 3560};
		ilsDirection[] = {0, 0.080000, -1};
		ilsTaxiOff[] = {3402, 3800, 3402, 4072, 3402, 4310, 3410, 4332, 3428, 4338, 3472, 4338, 3488, 4329, 3492, 4310, 3492, 4098};
		ilsTaxiIn[] = {3492, 4098, 3492, 3576, 3486, 3564, 3472, 3558, 3428, 3558, 3410, 3562, 3402, 3578, 3402, 3598};

		class ReplaceObjects {
		};

		class Sounds {
			sounds[] = {};
		};

		class Animation {
			vehicles[] = {};
		};

		class Lighting: DefaultLighting {
			groundReflection[] = {0.063000, 0.061000, 0.038000};
		};

		class DayLightingBrightAlmost: DayLightingBrightAlmost {
			deepNight[] = {-15, {0.037000, 0.063000, 0.091000}, {0.001000, 0.001000, 0.001200}, {0.067000, 0.075000, 0.091000}, {0.003000, 0.004000, 0.006000}, {0.000100, 0.000100, 0.000200}, {0.000100, 0.000100, 0.000200}, 0};
			fullNight[] = {-5, {0.182000, 0.213000, 0.250000}, {0.050000, 0.111000, 0.221000}, {0.040000, 0.034000, 0.004000}, {0.039000, 0.049000, 0.072000}, {0.082000, 0.128000, 0.185000}, {0.283000, 0.350000, 0.431000}, 0};
			sunMoon[] = {-3.750000, {0.377000, 0.441000, 0.518000}, {0.103000, 0.227000, 0.453000}, {0.040000, 0.034000, 0.004000}, {0.039000, 0.049000, 0.072000}, {0.174000, 0.274000, 0.395000}, {0.582000, 0.720000, 0.887000}, 0.500000};
			earlySun[] = {-2.500000, {0.675000, 0.690000, 0.784000}, {0.220000, 0.322000, 0.471000}, {0.040000, 0.034000, 0.004000}, {0.039000, 0.049000, 0.072000}, {0.424000, 0.549000, 0.745000}, {0.698000, 0.753000, 0.894000}, 1};
			sunrise[] = {0, {0.675000, 0.690000, 0.784000}, {0.478000, 0.510000, 0.659000}, {0.200000, 0.190000, 0.070000}, {0.124000, 0.161000, 0.236000}, {{0.847000, 0.855000, 0.965000}, 0.200000}, {{0.933000, 0.949000, 0.996000}, 2}, 1};
			earlyMorning[] = {3, {{0.844000, 0.610000, 0.469000}, 2}, {0.424000, 0.557000, 0.651000}, {{1, 0.450000, 0.200000}, 1}, {0.120000, 0.260000, 0.380000}, {{0.428000, 0.579000, 0.743000}, 2}, {{0.844000, 0.610000, 0.469000}, 2.700000}, 1};
			midMorning[] = {8, {{0.822000, 0.750000, 0.646000}, 3.800000}, {{0.383000, 0.580000, 0.858000}, 1.300000}, {{1.300000, 0.900000, 0.610000}, 3.800000}, {{0.120000, 0.180000, 0.280000}, 0.500000}, {{0.322000, 0.478000, 0.675000}, 3.500000}, {{1.000000, 0.929000, 0.815000}, 4.700000}, 1};
			morning[] = {16, {{1, 0.950000, 0.910000}, 11.200000}, {{0.120000, 0.180000, 0.280000}, 7.500000}, {{1, 0.950000, 0.910000}, 11.200000}, {{0.120000, 0.160000, 0.180000}, 7.500000}, {{0.140000, 0.180000, 0.240000}, 10.500000}, {{0.500000, 0.600000, 0.900000}, 11.700000}, 1};
			noon[] = {45, {{0.980000, 0.960000, 0.900000}, 13.550000}, {{0.300000, 0.320000, 0.350000}, 9.500000}, {{1, 0.950000, 0.910000}, 13.200000}, {{0.120000, 0.160000, 0.180000}, 9.500000}, {{0.140000, 0.140000, 0.140000}, 12.500000}, {{0.500000, 0.600000, 0.900000}, 13.700000}, 1};
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
		clutterGrid = 1.500000;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 10;
		midDetailTexture = "ca\zargabad\data\zr_middle_mco.paa";
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
						probability = 0.200000;
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

			class local_Zargabad {
				name = "$STR_EP1_LOCATION_ZARGABAD";
				position[] = {4071.370117, 4183.319824};
				type = "NameCityCapital";
				radiusA = 300.000000;
				radiusB = 300.000000;
				angle = 0.000000;
			};

			class local_Yarum {
				name = "$STR_EP1_LOCATION_YARUM";
				position[] = {4154.240234, 3592.649902};
				type = "NameVillage";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class local_Shahbaz {
				name = "$STR_EP1_LOCATION_SHAHBAZ";
				position[] = {3528.110107, 1932.739990};
				type = "NameVillage";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class local_Azizayt {
				name = "$STR_EP1_LOCATION_AZIZAYT";
				position[] = {1929.890015, 4652.939941};
				type = "NameVillage";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class local_Nango {
				name = "$STR_EP1_LOCATION_NANGO";
				position[] = {2823.530029, 5022.129883};
				type = "NameCity";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class local_Hazar_Bagh {
				name = "$STR_EP1_LOCATION_HAZARBAGH";
				position[] = {3943.510010, 5957.629883};
				type = "NameVillage";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class local_military_base {
				name = "$STR_EP1_LOCATION_MILITARYBASE";
				position[] = {4982.720215, 6207.939941};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class local_The_Villa {
				name = "$STR_EP1_LOCATION_THEVILLA";
				position[] = {4813.259766, 4645.279785};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class local_factory {
				name = "$STR_EP1_LOCATION_FACTORY";
				position[] = {3019.800049, 4874.669922};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class local_airport {
				name = "$STR_EP1_LOCATION_AIRPORT";
				position[] = {3386.260010, 4082.669922};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class local_Firuz_Baharv {
				name = "$STR_EP1_LOCATION_FIRUZBAHARV";
				position[] = {5059.490234, 1878.239990};
				type = "NameLocal";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class water_Abe_Shur_dam {
				name = "$STR_EP1_LOCATION_ABESHURDAM";
				position[] = {2889.649902, 3143.629883};
				type = "NameMarine";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class ACityC_azizayt {
				name = "";
				position[] = {1996.780029, 4655.899902};
				type = "CityCenter";
				neighbors[] = {"ACityC_Nango", "ACityC_Airport"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 125.657997;
			};

			class AStrong_azizayt01 {
				name = "";
				position[] = {1996.060059, 4751.069824};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 14.756000;
			};

			class AStrong_azizayt02 {
				name = "";
				position[] = {1892.439941, 4598.879883};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 243.453995;
			};

			class AStrong_azizayt03 {
				name = "";
				position[] = {2007.949951, 4492.600098};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 162.386993;
			};

			class AStrong_azizayt04 {
				name = "";
				position[] = {2180.000000, 4523.970215};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 117.499001;
			};

			class AFlatCS_azizayt {
				name = "";
				position[] = {2096.050049, 4658.620117};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 45.584999;
			};

			class ACityC_Nango {
				name = "";
				position[] = {2857.679932, 5026.700195};
				type = "CityCenter";
				neighbors[] = {"ACityC_Airport", "ACityC_HazarBagh", "ACityC_Azizayt", "ACityC_Zargabad"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AStrong_Nango01 {
				name = "";
				position[] = {2737.169922, 5265.339844};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 329.369995;
			};

			class AStrong_Nango02 {
				name = "";
				position[] = {2821.820068, 4933.930176};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 189.809998;
			};

			class AStrong_Nango03 {
				name = "";
				position[] = {3032.629883, 4840.609863};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 143.751007;
			};

			class AStrong_Nango04 {
				name = "";
				position[] = {3018.100098, 4960.100098};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 61.768002;
			};

			class AFlatCS_Nango {
				name = "";
				position[] = {2826.600098, 5004.109863};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 49.223999;
			};

			class ACityC_HazarBagh {
				name = "";
				position[] = {3822.679932, 6070.520020};
				type = "CityCenter";
				neighbors[] = {"ACityC_Airport", "ACityC_Nango", "ACityC_TheVilla", "ACityC_Zargabad"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 70.859001;
			};

			class AStrong_HazarBagh01 {
				name = "";
				position[] = {3843.729980, 6194.279785};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 335.964996;
			};

			class AStrong_HazarBagh02 {
				name = "";
				position[] = {3734.850098, 6102.970215};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 257.114990;
			};

			class AStrong_HazarBagh04 {
				name = "";
				position[] = {4000.899902, 6009.500000};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 123.289001;
			};

			class AStrong_HazarBagh03 {
				name = "";
				position[] = {3806.469971, 5906.270020};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 200.453995;
			};

			class AFlatCS_HazarBagh {
				name = "";
				position[] = {3831.500000, 6048.290039};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 72.078003;
			};

			class ACityC_TheVilla {
				name = "";
				position[] = {4773.979980, 4436.080078};
				type = "CityCenter";
				neighbors[] = {"ACityC_HazarBagh", "ACityC_Zargabad", "ACityC_FiruzBaharv"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 308.229004;
			};

			class AStrong_TheVilla01 {
				name = "";
				position[] = {4919.390137, 4453.879883};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 102.837997;
			};

			class AFlatCS_TheVilla {
				name = "";
				position[] = {4728.629883, 4409.129883};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 264.316010;
			};

			class AStrong_TheVilla02 {
				name = "";
				position[] = {4728.759766, 4566.759766};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 294.385010;
			};

			class AStrong_TheVilla03 {
				name = "";
				position[] = {4950.160156, 4703.270020};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 59.978001;
			};

			class AStrong_TheVilla04 {
				name = "";
				position[] = {4679.839844, 4446.220215};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 177.113998;
			};

			class ACityC_FiruzBaharv {
				name = "";
				position[] = {5082.529785, 1911.589966};
				type = "CityCenter";
				neighbors[] = {"ACityC_Yarum", "ACityC_base", "ACityC_nothing", "ACityC_TheVilla", "ACityC_Zargabad"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 289.791992;
			};

			class AFlatCS_FiruzBaharv {
				name = "";
				position[] = {5066.419922, 1849.670044};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 289.278992;
			};

			class AStrong_FiruzBaharv01 {
				name = "";
				position[] = {5032.819824, 1807.979980};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 198.837006;
			};

			class AStrong_FiruzBaharv02 {
				name = "";
				position[] = {4977.220215, 1926.099976};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 289.177002;
			};

			class AStrong_FiruzBaharv03 {
				name = "";
				position[] = {4836.189941, 1858.510010};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 238.177002;
			};

			class AStrong_FiruzBaharv04 {
				name = "";
				position[] = {5101.799805, 2007.599976};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 357.622986;
			};

			class ACityC_nothing {
				name = "";
				position[] = {3264.379883, 1084.739990};
				type = "CityCenter";
				neighbors[] = {"ACityC_dam", "ACityC_base", "ACityC_FiruzBaharv"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.297000;
			};

			class AFlatCS_nothing {
				name = "";
				position[] = {3255.050049, 1051.459961};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 258.601990;
			};

			class AStrong_nothing01 {
				name = "";
				position[] = {3416.810059, 1155.300049};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 66.761002;
			};

			class AStrong_nothing02 {
				name = "";
				position[] = {3389.179932, 1371.109985};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 23.084999;
			};

			class AStrong_nothing03 {
				name = "";
				position[] = {3275.860107, 1417.630005};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 342.791992;
			};

			class AStrong_nothing04 {
				name = "";
				position[] = {3158.350098, 1221.079956};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 339.595001;
			};

			class ACityC_base {
				name = "";
				position[] = {3954.590088, 2776.169922};
				type = "CityCenter";
				neighbors[] = {"ACityC_Yarum", "ACityC_dam", "ACityC_nothing", "ACityC_FiruzBaharv"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 252.703995;
			};

			class AFlatCS_base {
				name = "";
				position[] = {3862.939941, 2760.030029};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 73.098999;
			};

			class AStrong_base01 {
				name = "";
				position[] = {3983.419922, 2679.370117};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 158.809998;
			};

			class AStrong_base02 {
				name = "";
				position[] = {4056.659912, 2802.469971};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 48.869999;
			};

			class AStrong_base03 {
				name = "";
				position[] = {3907.360107, 2841.270020};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 10.006000;
			};

			class AStrong_base04 {
				name = "";
				position[] = {3844.340088, 2777.360107};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 265.022003;
			};

			class ACityC_dam {
				name = "";
				position[] = {3091.860107, 2752.959961};
				type = "CityCenter";
				neighbors[] = {"ACityC_Yarum", "ACityC_Airport", "ACityC_nothing", "ACityC_base"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 342.979004;
			};

			class AFlatCS_dam {
				name = "";
				position[] = {3149.030029, 2769.979980};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 335.808990;
			};

			class AStrong_dam01 {
				name = "";
				position[] = {3152.159912, 2824.370117};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 74.764000;
			};

			class AStrong_dam02 {
				name = "";
				position[] = {3052.250000, 2856.909912};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 342.902008;
			};

			class AStrong_dam03 {
				name = "";
				position[] = {3027.370117, 2792.270020};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 277.472992;
			};

			class AStrong_dam04 {
				name = "";
				position[] = {3188.510010, 2738.830078};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 171.414993;
			};

			class AFlatCS_Yarum {
				name = "";
				position[] = {3949.379883, 3637.379883};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 58.576000;
			};

			class AStrong_Yarum01 {
				name = "";
				position[] = {4104.250000, 3666.010010};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 17.805000;
			};

			class AStrong_Yarum02 {
				name = "";
				position[] = {4149.700195, 3553.010010};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 100.764000;
			};

			class AStrong_Yarum03 {
				name = "";
				position[] = {4013.659912, 3476.090088};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 185.505005;
			};

			class AStrong_Yarum04 {
				name = "";
				position[] = {3929.040039, 3646.699951};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 305.903015;
			};

			class ACityC_Airport {
				name = "";
				position[] = {3556.459961, 4092.850098};
				type = "CityCenter";
				neighbors[] = {"ACityC_Azizayt", "ACityC_Nango", "ACityC_HazaBagh", "ACityC_Zargabad", "ACityC_base", "ACityC_dam", "ACityC_Yarum"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 89.693001;
			};

			class AFlatCS_Airport {
				name = "";
				position[] = {3551.820068, 4059.530029};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 89.401001;
			};

			class AStrong_Airport01 {
				name = "";
				position[] = {3627.969971, 4107.399902};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 108.094002;
			};

			class AStrong_Airport02 {
				name = "";
				position[] = {3524.419922, 4213.990234};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 12.767000;
			};

			class AStrong_Airport03 {
				name = "";
				position[] = {3370.270020, 4110.589844};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 270.562988;
			};

			class AStrong_Airport04 {
				name = "";
				position[] = {3524.120117, 3890.719971};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 154.528000;
			};

			class ACityC_Zargabad {
				name = "";
				position[] = {4073.199951, 4139.850098};
				type = "CityCenter";
				neighbors[] = {"ACityC_Airport", "ACityC_Nango", "ACityC_HazaBagh", "ACityC_TheVilla", "ACityC_FiruzBaharv", "ACityC_dam", "ACityC_Yarum"};
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlatCS_Zargabad {
				name = "";
				position[] = {4034.250000, 4110.180176};
				type = "FlatAreaCitySmall";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 181.179001;
			};

			class AStrong_Zargabad01 {
				name = "";
				position[] = {4136.189941, 4253.450195};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 23.172001;
			};

			class AStrong_Zargabad02 {
				name = "";
				position[] = {4274.970215, 4110.540039};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 130.367996;
			};

			class AStrong_Zargabad03 {
				name = "";
				position[] = {4009.580078, 4129.580078};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 293.940002;
			};

			class AStrong_Zargabad04 {
				name = "";
				position[] = {4093.500000, 4015.729980};
				type = "StrongpointArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 176.479004;
			};

			class AFlat_01 {
				name = "";
				position[] = {1968.949951, 5057.729980};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_13 {
				name = "";
				position[] = {2753.110107, 5383.450195};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_24 {
				name = "";
				position[] = {3541.350098, 5303.419922};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 171.417999;
			};

			class AFlat_26 {
				name = "";
				position[] = {4151.779785, 5671.959961};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 329.595001;
			};

			class AFlat_27 {
				name = "";
				position[] = {4624.689941, 6082.310059};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_28 {
				name = "";
				position[] = {4240.600098, 6525.689941};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 233.684998;
			};

			class AFlat_29 {
				name = "";
				position[] = {3529.939941, 6438.560059};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 72.398003;
			};

			class AFlat_30 {
				name = "";
				position[] = {4972.850098, 5471.560059};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 205.744003;
			};

			class AFlat_04 {
				name = "";
				position[] = {4213.149902, 4457.560059};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_02 {
				name = "";
				position[] = {3629.639893, 4991.620117};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_03 {
				name = "";
				position[] = {2501.770020, 4509.029785};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 151.018997;
			};

			class AFlat_05 {
				name = "";
				position[] = {3097.370117, 3801.330078};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_06 {
				name = "";
				position[] = {3654.209961, 4234.430176};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_07 {
				name = "";
				position[] = {4508.069824, 4164.490234};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_08 {
				name = "";
				position[] = {4894.359863, 4221.259766};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_09 {
				name = "";
				position[] = {4700.509766, 3742.939941};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_10 {
				name = "";
				position[] = {4962.390137, 3569.419922};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_11 {
				name = "";
				position[] = {3903.310059, 3859.419922};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_12 {
				name = "";
				position[] = {3477.739990, 3449.290039};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 356.829987;
			};

			class AFlat_14 {
				name = "";
				position[] = {3747.280029, 3204.250000};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 27.412001;
			};

			class AFlat_15 {
				name = "";
				position[] = {4233.729980, 3249.110107};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 91.208000;
			};

			class AFlat_16 {
				name = "";
				position[] = {4607.200195, 3374.020020};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 316.127014;
			};

			class AFlat_17 {
				name = "";
				position[] = {4944.589844, 2656.939941};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_18 {
				name = "";
				position[] = {5287.390137, 2045.719971};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_20 {
				name = "";
				position[] = {4335.540039, 1873.599976};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_21 {
				name = "";
				position[] = {3978.750000, 1363.880005};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_22 {
				name = "";
				position[] = {3657.040039, 2004.310059};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_23 {
				name = "";
				position[] = {3139.639893, 2050.479980};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 0.000000;
			};

			class AFlat_25 {
				name = "";
				position[] = {3453.469971, 2566.419922};
				type = "FlatArea";
				radiusA = 100.000000;
				radiusB = 100.000000;
				angle = 329.451996;
			};

			class AFlat_19 {
				name = "";
				position[] = {4909.180176, 1336.140015};
				type = "FlatArea";
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
			positionStart[] = {3462.080078, 4044.129883};
			positionAdmin[] = {7821.839844, 301.510986};
			positionsViewer[] = {{3515.469971, 4124.839844}, {3920.600098, 4563.629883}, {2962.320068, 2737.530029}};
			positionBlacklist[] = {{{2542.620117, 3405.820068}, {3328.080078, -385.256012}}};
			disableShips = 1;

			class Challenges {

				class FiringRange {
					positionsStart[] = {{3402.060059, 3575.590088}};
					directionsStart[] = {0};
				};
			};
		};
		safePositionAnchor[] = {3710.669922, 3282.770020};
		safePositionRadius = 5000;
	};
};

class CfgWorldList {

	class Zargabad {
	};
};

class CfgMissions {

	class Cutscenes {

		class ZargabadIntro1 {
			directory = "ca\zargabad\data\scenes\intro.zargabad";
		};

		class ZargabadIntro2 {
			directory = "CorePatch\CorePatch_Zargabad_Intro\scenes\intro2.zargabad";
		};
	};
};

class CfgSurfaces {

	class Default {
	};

	class Water {
	};

	class ZRAsfalt: Default {
		access = 2;
		files = "zr_asfalt_*";
		rough = 0.001000;
		dust = 0.100000;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};

	class ZRBeton: Default {
		access = 2;
		files = "zr_beton_*";
		rough = 0.010000;
		dust = 0.080000;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};

	class ZRHlina: Default {
		access = 2;
		files = "zr_hlina_*";
		rough = 0.100000;
		dust = 0.800000;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
	};

	class ZRPlevel: Default {
		access = 2;
		files = "zr_plevel_*";
		rough = 0.110000;
		dust = 0.700000;
		soundEnviron = "drygrass";
		character = "ZRWeedsClutter";
		soundHit = "soft_ground";
	};

	class ZRPole: Default {
		access = 2;
		files = "zr_pole_*";
		rough = 0.120000;
		dust = 0.600000;
		soundEnviron = "grass";
		character = "ZRFieldGrassClutter";
		soundHit = "soft_ground";
	};

	class ZRPolopoust: Default {
		access = 2;
		files = "zr_polopoust_*";
		rough = 0.010000;
		dust = 0.900000;
		soundEnviron = "dirt";
		character = "ZRDesertClutter";
		soundHit = "soft_ground";
	};

	class ZRSkala: Default {
		access = 2;
		files = "zr_skala_*";
		rough = 0.300000;
		dust = 0.500000;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};

	class ZRSkalniSterk: Default {
		access = 2;
		files = "zr_skalni_sterk_*";
		rough = 0.150000;
		dust = 1.000000;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};

	class ZRSterkNaDno: Default {
		access = 2;
		files = "zr_sterk_na_dno_*";
		rough = 0.200000;
		dust = 0.000000;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};

	class ZRValouny: Default {
		access = 2;
		files = "zr_valouny_*";
		rough = 0.150000;
		dust = 0.400000;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};

	class ZRTrava: Default {
		access = 2;
		files = "zr_trava_*";
		rough = 0.110000;
		dust = 0.500000;
		soundEnviron = "drygrass";
		character = "ZRGrassClutter";
		soundHit = "soft_ground";
	};

	class ZRDlazbaOld: Default {
		access = 2;
		files = "zr_dlazba_old_*";
		rough = 0.001000;
		dust = 0.100000;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
};

class CfgSurfaceCharacters {

	class ZRGrassClutter {
		probability[] = {0.890000, 0.030000, 0.030000};
		names[] = {"TK_GrassDry", "TK_BrushHard", "TK_PlantsWhite"};
	};

	class ZRDesertClutter {
		probability[] = {0.060000, 0.050000, 0.005000, 0.005000};
		names[] = {"TK_BrushSoft", "TK_BrushHard", "TK_PlantsWhite", "TK_WeedThistle"};
	};

	class ZRWeedsClutter {
		probability[] = {0.600000, 0.100000, 0.150000, 0.050000, 0.050000};
		names[] = {"TK_GrassDry", "TK_GrassDryLong", "TK_Weed1", "TK_WeedThistle", "TK_BrushHard"};
	};

	class ZRFieldGrassClutter {
		probability[] = {0.600000, 0.300000, 0.020000, 0.010000, 0.020000};
		names[] = {"TK_GrassGreen", "TK_GrassGreenLong", "TK_PlantsWhite", "TK_PlantsViolet", "TK_Weed1"};
	};
};
