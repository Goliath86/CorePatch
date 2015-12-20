
class CfgPatches {

	class CorePatch_Javelin_Fix {
		Units[] = {};
		Weapons[] = {};
		RequiredVersion = 1.570000;
		RequiredAddons[] = {"CorePatch"};
	};
};

class CfgAddons {
    class PreloadAddons {
       class CorePatch_Javelin_Fix {
          list[] = {"CorePatch_Javelin_Fix"};
       };
    };
};

class RscControlsGroup;
class RscPicture;
class RscLine;

class RscInGameUI {

	class RscWeaponInfoJavelin {
		IDD = 300;
		OnLoad = "_this ExecVM '\CorePatch\CorePatch_Javelin\javelin.sqf';";
		Controls[] = {"CA_Javelin_Elements_Group"};

		class CA_Javelin_Elements_Group: RscControlsGroup {
			IDC = 170;
			X = "SafeZoneX";
			Y = "SafeZoneY";
			W = "SafeZoneW";
			H = "SafeZoneH";

			class VScrollbar {
				AutoScrollSpeed = -1;
				AutoScrollDelay = 5;
				AutoScrollRewind = 0;
				Color[] = {1.000000, 1.000000, 1.000000, 0.000000};
				Width = 0.001000;
			};

			class HScrollbar {
				Color[] = {1.000000, 1.000000, 1.000000, 0.000000};
				Height = 0.001000;
			};

			class Controls {

				class CA_Javelin_DAY_Mode_Off: RscPicture {
					IDC = 1001;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.0300 / 4) * 3 * SafeZoneH - SafeZoneX";
					Y = "(SafeZoneY + 0.0320 * SafeZoneH) - SafeZoneY";
					W = "0.10457520 * (((SafeZoneW * 3) / 4) / SafeZoneW) / (1 / SafeZoneH)";
					H = "0.10457520 * SafeZoneH";
					ColorText[] = {0.294100, 0.874500, 0.215700, 1.000000};
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_day_off.paa";
				};

				class CA_Javelin_DAY_Mode: CA_Javelin_DAY_Mode_Off {
					IDC = 160;
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_day_on.paa";
				};

				class CA_Javelin_WFOV_Mode_Off: CA_Javelin_DAY_Mode_Off {
					IDC = 1004;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.3080 / 4) * 3 * SafeZoneH - SafeZoneX";
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_wfov_off.paa";
				};

				class CA_Javelin_WFOV_Mode_Group: RscControlsGroup {
					IDC = 163;
					X = "SafeZoneX";
					Y = "SafeZoneY";
					W = "SafeZoneW";
					H = "SafeZoneH";

					class VScrollbar {
						AutoScrollSpeed = -1;
						AutoScrollDelay = 5;
						AutoScrollRewind = 0;
						Color[] = {1.000000, 1.000000, 1.000000, 0.000000};
						Width = 0.001000;
					};

					class HScrollbar {
						Color[] = {1.000000, 1.000000, 1.000000, 0.000000};
						Height = 0.001000;
					};

					class Controls {

						class CA_Javelin_WFOV_Mode: CA_Javelin_WFOV_Mode_Off {
							IDC = -1;
							Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_wfov_on.paa";
						};

						class StadiaL: RscLine {
							X = "0.4899 * SafeZoneW - SafeZoneX";
							Y = "0.1710 * SafeZoneH - SafeZoneY";
							W = "0.0000";
							H = "0.0490 * SafeZoneH";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class StadiaR: RscLine {
							X = "0.5109 * SafeZoneW - SafeZoneX";
							Y = "0.1710 * SafeZoneH - SafeZoneY";
							W = "0.0000";
							H = "0.0490 * SafeZoneH";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class BracketL: RscLine {
							X = "((SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.2930 / 4) * 3 * SafeZoneH - SafeZoneX";
							Y = "0.4677 * SafeZoneH - SafeZoneY";
							W = "0.0000";
							H = "0.0646 * SafeZoneH";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class BracketR: RscLine {
							X = "((SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.7000 / 4) * 3 * SafeZoneH - SafeZoneX";
							Y = "0.4677 * SafeZoneH - SafeZoneY";
							W = "0.0000";
							H = "0.0646 * SafeZoneH";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class BracketT: RscLine {
							X = "((SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.4670 / 4) * 3 * SafeZoneH - SafeZoneX";
							Y = "0.3535 * SafeZoneH - SafeZoneY";
							W = "0.0650 * (((SafeZoneW * 3) / 4) / SafeZoneW) / (1 / SafeZoneH)";
							H = "0.0000";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class BracketB: RscLine {
							X = "((SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.4670 / 4) * 3 * SafeZoneH - SafeZoneX";
							Y = "0.6465 * SafeZoneH - SafeZoneY";
							W = "0.0650 * (((SafeZoneW * 3) / 4) / SafeZoneW) / (1 / SafeZoneH)";
							H = "0.0000";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};
					};
				};

				class CA_Javelin_NFOV_Mode_Off: CA_Javelin_DAY_Mode_Off {
					IDC = 1003;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.5860 / 4) * 3 * SafeZoneH - SafeZoneX";
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_nfov_off.paa";
				};

				class CA_Javelin_NFOV_Mode_Group: RscControlsGroup {
					IDC = 162;
					X = "SafeZoneX";
					Y = "SafeZoneY";
					W = "SafeZoneW-SafeZoneX";
					H = "SafeZoneH-SafeZoneY";

					class VScrollbar {
						AutoScrollSpeed = -1;
						AutoScrollDelay = 5;
						AutoScrollRewind = 0;
						Color[] = {1.000000, 1.000000, 1.000000, 0.000000};
						Width = 0.001000;
					};

					class HScrollbar {
						Color[] = {1.000000, 1.000000, 1.000000, 0.000000};
						Height = 0.001000;
					};

					class Controls {

						class CA_Javelin_NFOV_Mode: CA_Javelin_NFOV_Mode_Off {
							IDC = -1;
							Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_nfov_on.paa";
						};

						class StadiaL: RscLine {
							X = "0.4788 * SafeZoneW - SafeZoneX";
							Y = "0.1710 * SafeZoneH - SafeZoneY";
							W = "0.0000";
							H = "0.0490 * SafeZoneH";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class StadiaR: RscLine {
							X = "0.5212 * SafeZoneW - SafeZoneX";
							Y = "0.1710 * SafeZoneH - SafeZoneY";
							W = "0.0000";
							H = "0.0490 * SafeZoneH";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class LineHL: RscLine {
							X = "((SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.0100 / 4) * 3 * SafeZoneH - SafeZoneX";
							Y = "SafeZoneH * 0.5 - SafeZoneY";
							W = "0.2900 * (((SafeZoneW * 3) / 4) / SafeZoneW) / (1 / SafeZoneH)";
							H = "0.0000";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class LineHR: RscLine {
							X = "((SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.6950 / 4) * 3 * SafeZoneH - SafeZoneX";
							Y = "SafeZoneH * 0.5 - SafeZoneY";
							W = "0.2900 * (((SafeZoneW * 3) / 4) / SafeZoneW) / (1 / SafeZoneH)";
							H = "0.0000";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class LineVT: RscLine {
							X = "0.5000 * SafeZoneW - SafeZoneX";
							Y = "0.1710 * SafeZoneH - SafeZoneY";
							W = "0.0000";
							H = "0.1825 * SafeZoneH";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};

						class LineVB: RscLine {
							X = "0.5000 * SafeZoneW - SafeZoneX";
							Y = "0.6465 * SafeZoneH - SafeZoneY";
							W = "0.0000";
							H = "0.1895 * SafeZoneH";
							ColorText[] = {1.000000, 1.000000, 1.000000, 1.000000};
						};
					};
				};

				class CA_Javelin_SEEK_Off: CA_Javelin_DAY_Mode_Off {
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.8640 / 4) * 3 * SafeZoneH - SafeZoneX";
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_seek_off.paa";
				};

				class CA_Javelin_SEEK: CA_Javelin_SEEK_Off {
					IDC = 166;
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_seek_on.paa";
				};

				class CA_Javelin_NIGHT_Off: CA_Javelin_DAY_Mode_Off {
					IDC = -1;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (-0.1340 / 4) * 3 * SafeZoneH - SafeZoneX";
					Y = "(SafeZoneY + 0.2080 * SafeZoneH) - SafeZoneY";
					ColorText[] = {0.925500, 0.521600, 0.121600, 1.000000};
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_night_off.paa";
				};

				class CA_Javelin_PLUS_Off: CA_Javelin_NIGHT_Off {
					IDC = 1028;
					Y = "(SafeZoneY + 0.6880 * SafeZoneH) - SafeZoneY";
					ColorText[] = {0.874500, 0.294100, 0.215700, 1.000000};
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_plus_off.paa";
				};

				class CA_Javelin_TOP_Off: CA_Javelin_DAY_Mode_Off {
					IDC = 1006;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (1.0280 / 4) * 3 * SafeZoneH - SafeZoneX";
					Y = "(SafeZoneY + 0.2080 * SafeZoneH) - SafeZoneY";
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_top_off.paa";
				};

				class CA_Javelin_DIR: CA_Javelin_Day_mode {
					IDC = 1007;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (1.0280 / 4) * 3 * SafeZoneH - SafeZoneX";
					Y = "(SafeZoneY + 0.4480 * SafeZoneH) - SafeZoneY";
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_dir_on.paa";
				};

				class CA_Javelin_FLTR_mode_off: CA_Javelin_Day_mode_off {				
					IDC = 1002;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (1.0280 / 4) * 3 * SafeZoneH - SafeZoneX";
					Y = "(SafeZoneY + 0.6880 * SafeZoneH) - SafeZoneY";
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_fltr_off.paa";
				};

				class CA_Javelin_FLTR_Mode: CA_Javelin_FLTR_Mode_Off {
					IDC = 161;
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_fltr_on.paa";
				};

				class CA_Javelin_BCU_Off: CA_Javelin_DAY_Mode_Off {
					IDC = -1;
					Y = "(SafeZoneY + 0.8640 * SafeZoneH) - SafeZoneY";
					ColorText[] = {0.874500, 0.294100, 0.215700, 1.000000};
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_bcu_off.paa";
				};

				class CA_Javelin_Missle_off: CA_Javelin_Day_mode_off {
					IDC = -1;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.5860 / 4) * 3 * SafeZoneH - SafeZoneX";
					Y = "(SafeZoneY + 0.8640 * SafeZoneH) - SafeZoneY";
					ColorText[] = {0.874500, 0.294100, 0.215700, 1.000000};
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_msl_off.paa";
				};
				
				class CA_Javelin_HangFire_off: CA_Javelin_Missle_off {
					IDC = -1;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.3080 / 4) * 3 * SafeZoneH - SafeZoneX";
					Y = "(SafeZoneY + 0.8640 * SafeZoneH) - SafeZoneY";
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_hang_off.paa";
				};
				
				class CA_Javelin_CLU_off: CA_Javelin_Missle_off {
					IDC = 1027;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (-0.1340 / 4) * 3 * SafeZoneH - SafeZoneX";
					Y = "(SafeZoneY + 0.4480 * SafeZoneH) - SafeZoneY";
					ColorText[] = {0.874500, 0.294100, 0.215700, 1.000000};
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_clu_off.paa";
				};

				class CA_Javelin_Missle: CA_Javelin_Missle_Off {
					IDC = 2468;
					ColorText[] = {0.000000, 0.000000, 0.000000, 0.000000};
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_msl_on.paa";
				};

				class CA_Javelin_WAIT_Off: CA_Javelin_BCU_Off {
					IDC = 1032;
					X = "(SafeZoneX + (SafeZoneW - SafeZoneH * 3 / 4) / 2) + (0.8640 / 4) * 3 * SafeZoneH - SafeZoneX";
					ColorText[] = {0.925500, 0.521600, 0.121600, 1.000000};
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_wait_off.paa";
				};

				class CA_Javelin_WAIT: CA_Javelin_WAIT_Off {
					IDC = 167;
					Text = "\CorePatch\CorePatch_Javelin\data\javelin_lamp_wait_on.paa";
				};
			};
		};
	};
};

class CfgWeapons {
	class Launcher;

	class Javelin: Launcher {
		ModelOptics = "\CorePatch\CorePatch_Javelin\javelin_optic.p3d";

		class OpticsModes {

			class StepScope {
				OpticsID = 1;
				UseModelOptics = 1;
				OpticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				OpticsFlare = 0;
				OpticsZoomMin = 0.062300;
				OpticsZoomMax = 0.027700;
				OpticsZoomInit = 0.062300;
				DistanceZoomMin = 300;
				DistanceZoomMax = 300;
				MemoryPointCamera = "Eye";
				CameraDir = "Look";
				VisionMode[] = {"Ti", "NVG", "Normal"};
				ThermalMode[] = {0, 1};
				OpticsDisablePeripherialVision = 1;
				DiscreteFOV[] = {0.062300, 0.027700};
				DiscreteInitIndex = 0;
			};
		};
	};
};
