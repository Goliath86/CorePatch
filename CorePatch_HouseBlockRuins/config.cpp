class CfgPatches
{
	class CorePatch_HouseBlockRuins
	{
		requiredAddons[] = {"CorePatch"};
		requiredVersion = 1.00;
		units[] = {};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class HouseBase;
	class House : HouseBase
	{
		class DestructionEffects;
	};
	class Land_HouseBlock_A1 : House
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A1_ruins";
			};
		};
	};
	class Land_HouseBlock_A1_1 : Land_HouseBlock_A1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A1_1_ruins";
			};
		};
	};
	class Land_HouseBlock_A2 : Land_HouseBlock_A1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A2_ruins";
			};
		};
	};
	class Land_HouseBlock_A2_1 : Land_HouseBlock_A1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A2_1_ruins";
			};
		};
	};
	class Land_HouseBlock_A3 : Land_HouseBlock_A1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A3_ruins";
			};
		};
	};
	class Land_HouseBlock_B1 : House
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B1_ruins";
			};
		};
	};
	class Land_HouseBlock_B2 : Land_HouseBlock_B1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B2_ruins";
			};
		};
	};
	class Land_HouseBlock_B3 : Land_HouseBlock_B1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B3_ruins";
			};
		};
	};
	class Land_HouseBlock_B4 : Land_HouseBlock_B1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B4_ruins";
			};
		};
	};
	class Land_HouseBlock_B5 : Land_HouseBlock_B1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B5_ruins";
			};
		};
	};
	class Land_HouseBlock_B6 : Land_HouseBlock_B1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B6_ruins";
			};
		};
	};
	class Land_HouseBlock_C1 : House
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C1_ruins";
			};
		};
	};
	class Land_HouseBlock_C2 : Land_HouseBlock_C1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C2_ruins";
			};
		};
	};
	class Land_HouseBlock_C3 : Land_HouseBlock_C1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C3_ruins";
			};
		};
	};
	class Land_HouseBlock_C4 : Land_HouseBlock_C1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C4_ruins";
			};
		};
	};
	class Land_HouseBlock_C5 : Land_HouseBlock_C1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C5_ruins";
			};
		};
	};
	class Land_HouseBlock_D1 : House
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_D1_ruins";
			};
		};
	};
	class Land_HouseBlock_D2 : Land_HouseBlock_D1
	{
		class DestructionEffects : DestructionEffects
		{
			class Ruin1
			{
				type = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_D2_ruins";
			};
		};
	};
	class Ruins;
	class Land_HouseBlock_A1_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A1_ruins";
	};
	class Land_HouseBlock_A1_1_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A1_1_ruins";
	};
	class Land_HouseBlock_A2_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A2_ruins";
	};
	class Land_HouseBlock_A2_1_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A2_1_ruins";
	};
	class Land_HouseBlock_A3_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_A3_ruins";
	};
	class Land_HouseBlock_B1_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B1_ruins";
	};
	class Land_HouseBlock_B2_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B2_ruins";
	};
	class Land_HouseBlock_B3_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B3_ruins";
	};
	class Land_HouseBlock_B4_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B4_ruins";
	};
	class Land_HouseBlock_B5_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B5_ruins";
	};
	class Land_HouseBlock_B6_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_B6_ruins";
	};
	class Land_HouseBlock_C1_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C1_ruins";
	};
	class Land_HouseBlock_C2_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C2_ruins";
	};
	class Land_HouseBlock_C3_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C3_ruins";
	};
	class Land_HouseBlock_C4_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C4_ruins";
	};
	class Land_HouseBlock_C5_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_C5_ruins";
	};
	class Land_HouseBlock_D1_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_D1_ruins";
	};
	class Land_HouseBlock_D2_ruins : Ruins
	{
		model = "\CorePatch\CorePatch_HouseBlockRuins\models\HouseBlock_D2_ruins";
	};
};
