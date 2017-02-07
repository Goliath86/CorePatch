class CfgPatches {

	class CorePatch_Dubbing_Fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.100000;
		requiredAddons[] = {"CorePatch"};
	};
};

/*class CfgVoice {
	class EN;
	class Male03EN: EN {
		directories[] = {"\CorePatch\CorePatch_Dubbing\RADIO\Male03EN\", "\CorePatch\CorePatch_Dubbing\RADIO\Male03EN\"};
	};
};*/

class RadioProtocolBase;
class SentObjectDestroyed;
class SentObjectDestroyedUnknown;

class RadioProtocolEN: RadioProtocolBase {

	class Words {
		WeRequireLongRangeTransportHowCopyQ[] = {"en\secops\transport\secop_trans_01.wss"};
	};
};

class RadioProtocolRU: RadioProtocolBase {
		
		class SentObjectDestroyed: SentObjectDestroyed {
			versions[] = {"Version1", 0.100000, "Version2", 0.100000, "Version3", 0.100000, "Version4", 0.000000, "Version5", 0.100000};
		};
		
		class SentObjectDestroyedUnknown: SentObjectDestroyedUnknown {
			versions[] = {"Version1", 0.100000, "Version2", 0.100000, "Version3", 0.100000, "Version4", 0.000000, "Version5", 0.100000};
		};
};