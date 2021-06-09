// WidgetBlueprintGeneratedClass JoinablePartyActionMenu.JoinablePartyActionMenu_C
// Size: 0x3f8 (Inherited: 0x3d0)
struct UJoinablePartyActionMenu_C : UFortJoinablePartyActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x3d8(0x08)
	struct UWidgetAnimation* Opened; // 0x3e0(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x3e8(0x08)
	struct UBorder* EntryBorder; // 0x3f0(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOpened(); // Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_JoinablePartyActionMenu(int32_t EntryPoint); // Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu // (Final|UbergraphFunction) // @ game+0xda7c34
};

