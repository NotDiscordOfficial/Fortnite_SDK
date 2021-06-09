// WidgetBlueprintGeneratedClass EventLeaderboardEntry.EventLeaderboardEntry_C
// Size: 0xce8 (Inherited: 0xc30)
struct UEventLeaderboardEntry_C : UFortEventLeaderboardEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc30(0x08)
	struct UWidgetAnimation* Selected; // 0xc38(0x08)
	struct UCommonBorder* CommonBorder_IsPlayer; // 0xc40(0x08)
	struct UCommonBorder* CommonBorder_Zebra; // 0xc48(0x08)
	struct UCommonTextBlock* CommonTextBlock_TeamLine1; // 0xc50(0x08)
	struct UCommonTextBlock* CommonTextBlock_TeamLine2; // 0xc58(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Rank; // 0xc60(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TeamSize; // 0xc68(0x08)
	struct UImage* Image_OnlineStatus; // 0xc70(0x08)
	struct UImage* Image_Qualified; // 0xc78(0x08)
	struct UImage* Image_SelectedBG; // 0xc80(0x08)
	struct UOverlay* Overlay_OnlineStatus; // 0xc88(0x08)
	struct UOverlay* Overlay_QualifiedContent; // 0xc90(0x08)
	struct UCommonTextBlock* Text_Rank; // 0xc98(0x08)
	struct UCommonTextBlock* Text_Rank_First; // 0xca0(0x08)
	struct UCommonTextBlock* Text_Score; // 0xca8(0x08)
	struct UCommonTextBlock* Text_Team; // 0xcb0(0x08)
	bool isZebra; // 0xcb8(0x01)
	bool IsPlayer; // 0xcb9(0x01)
	char pad_CBA[0x6]; // 0xcba(0x06)
	struct TSoftObjectPtr<struct UDataTable> TEMPDatatableIdentities; // 0xcc0(0x28)

	void SetTeamDisplayNames(struct UFortEventLeaderboardEntryData* Entry Data); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetTeamDisplayNames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetEntryDetails(struct UFortEventLeaderboardEntryData* EntryData); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.SetEntryDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EventStyleEntry(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventStyleEntry // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTeammateDisplayNameAdded(struct UFortEventLeaderboardEntryData* LeaderboardEntryData); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.OnTeammateDisplayNameAdded // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventLeaderboardEntry(int32_t EntryPoint); // Function EventLeaderboardEntry.EventLeaderboardEntry_C.ExecuteUbergraph_EventLeaderboardEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

