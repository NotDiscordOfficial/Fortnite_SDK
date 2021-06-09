// WidgetBlueprintGeneratedClass UserListHeaderEntry.UserListHeaderEntry_C
// Size: 0xc70 (Inherited: 0xc48)
struct UUserListHeaderEntry_C : USocialUserListHeaderEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc48(0x08)
	struct UWidgetAnimation* OnExpansion; // 0xc50(0x08)
	struct UWidgetAnimation* OnHover; // 0xc58(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0xc60(0x08)
	struct USizeBox* SB_EntryContent; // 0xc68(0x08)

	void BP_OnUnhovered(); // Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnListItemObjectSet_2(struct UObject* ListItemObject); // Function UserListHeaderEntry.UserListHeaderEntry_C.OnListItemObjectSet_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UserListHeaderEntry.UserListHeaderEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_UserListHeaderEntry(int32_t EntryPoint); // Function UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

