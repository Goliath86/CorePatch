class CfgPatches
{
	class Corepatch_ATV
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class Corepatch_ATV
		{
			list[] = {"Corepatch_ATV"};
		};
	};
};
class CfgVehicles
{
	class Car;
	class ATV_Base_EP1:Car {
		model = "\Corepatch\Corepatch_ATV\atv.p3d";
		damperSize = 0.1;
		damperForce = 1;
		damperDamping = 1;
		hiddenSelections[] = {"camo1","camo2","camo_mlod"};
		hiddenSelectionsTextures[] = {"ca\wheeled_e\atv\data\atv_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","ca\wheeled_e\atv\data\atv_mlod_co.paa"};
	};

	class BAF_ATV_D:ATV_Base_EP1 {};
	class BAF_ATV_W:BAF_ATV_D {
		hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_wood_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_wood_mlod_co.paa"};
	};

	class ATV_TK_CP:ATV_Base_EP1 {
		side = 0;
		scope = 1;
		faction = "BIS_TK";
	};

	class ATV_RU_CP:ATV_TK_CP {
		faction = "RU";
		hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_wood_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_wood_mlod_co.paa"};
	};

	class ATV_Gue_CP:ATV_Base_EP1 {
		side = 2;
		scope = 1;
		faction = "GUE";
		hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_black_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_black_mlod_co.paa"};
	};

	class ATV_CIV_CP:ATV_Base_EP1 {
		side = 3;
		scope = 1;
		faction = "CIV";
		hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_white_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_white_mlod_co.paa"};
	};

	class ATV_CIV_Black_CP:ATV_CIV_CP	{hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_black_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_black_mlod_co.paa"};};
	class ATV_CIV_Grey_CP:ATV_CIV_CP	{hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_grey_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_grey_mlod_co.paa"};};
	class ATV_CIV_Red_CP:ATV_CIV_CP		{hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_red_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_red_mlod_co.paa"};};
	class ATV_CIV_Green_CP:ATV_CIV_CP	{hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_green_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_green_mlod_co.paa"};};
	class ATV_CIV_Blue_CP:ATV_CIV_CP	{hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_blue_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_blue_mlod_co.paa"};};
	class ATV_CIV_Yellow_CP:ATV_CIV_CP	{hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_yellow_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_yellow_mlod_co.paa"};};
	class ATV_CIV_Purple_CP:ATV_CIV_CP	{hiddenSelectionsTextures[] = {"\Corepatch\Corepatch_ATV\textures\atv_purple_co.paa","ca\wheeled_e\atv\data\atv_detail_co.paa","\Corepatch\Corepatch_ATV\textures\atv_purple_mlod_co.paa"};};
};
