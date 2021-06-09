// WidgetBlueprintGeneratedClass EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C
// Size: 0xcc0 (Inherited: 0xc60)
struct UEventTeamMatchHistoryEntry_C : UFortEventTeamMatchHistoryEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc60(0x08)
	struct UWidgetAnimation* Selected; // 0xc68(0x08)
	struct UCommonBorder* Border_Zebra; // 0xc70(0x08)
	struct UImage* Image_eliminations; // 0xc78(0x08)
	struct UImage* Image_OnlineStatus; // 0xc80(0x08)
	struct UImage* Image_Placement; // 0xc88(0x08)
	struct UImage* Image_SelectedBG; // 0xc90(0x08)
	struct UCommonTextBlock* Text_ReplayInteraction; // 0xc98(0x08)
	struct FMulticastInlineDelegate Hovered; // 0xca0(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0xcb0(0x10)

	void BP_OnHovered(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventTeamMatchHistoryEntry(int32_t EntryPoint); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.ExecuteUbergraph_EventTeamMatchHistoryEntry // (Final|UbergraphFunction) // @ game+0xda7c34
	void Unhovered__DelegateSignature(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Hovered__DelegateSignature(); // Function EventTeamMatchHistoryEntry.EventTeamMatchHistoryEntry_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

