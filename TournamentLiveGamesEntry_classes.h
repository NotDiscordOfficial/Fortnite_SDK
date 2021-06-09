// WidgetBlueprintGeneratedClass TournamentLiveGamesEntry.TournamentLiveGamesEntry_C
// Size: 0xc60 (Inherited: 0xc38)
struct UTournamentLiveGamesEntry_C : UFortTournamentLiveGameSessionEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc38(0x08)
	struct UWidgetAnimation* Selected; // 0xc40(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0xc48(0x08)
	struct UCommonBorder* CommonBorder_Selected; // 0xc50(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0xc58(0x08)

	void OnEntrySet(int32_t EntryIndex); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.OnEntrySet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TournamentLiveGamesEntry(int32_t EntryPoint); // Function TournamentLiveGamesEntry.TournamentLiveGamesEntry_C.ExecuteUbergraph_TournamentLiveGamesEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

