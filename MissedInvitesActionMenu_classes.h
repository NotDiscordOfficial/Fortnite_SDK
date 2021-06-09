// WidgetBlueprintGeneratedClass MissedInvitesActionMenu.MissedInvitesActionMenu_C
// Size: 0x3b0 (Inherited: 0x360)
struct UMissedInvitesActionMenu_C : UFortMissedInvitesActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x368(0x08)
	struct UWidgetAnimation* Opened; // 0x370(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x378(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock; // 0x380(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock_144; // 0x388(0x08)
	struct UBorder* EntryBorder; // 0x390(0x08)
	struct UImage* Image_120; // 0x398(0x08)
	struct UImage* Image_Platform; // 0x3a0(0x08)
	struct UCommonRichTextBlock* Text_DisplayName; // 0x3a8(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnOpened(); // Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MissedInvitesActionMenu(int32_t EntryPoint); // Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu // (Final|UbergraphFunction) // @ game+0xda7c34
};

