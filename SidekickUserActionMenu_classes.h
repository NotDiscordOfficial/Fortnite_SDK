// WidgetBlueprintGeneratedClass SidekickUserActionMenu.SidekickUserActionMenu_C
// Size: 0x428 (Inherited: 0x3e8)
struct USidekickUserActionMenu_C : UFortHousepartyMemberActionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x3f0(0x08)
	struct UWidgetAnimation* Opened; // 0x3f8(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x400(0x08)
	struct UBorder* EntryBorder; // 0x408(0x08)
	struct UFortMobileImage* Image_Platform; // 0x410(0x08)
	struct UCommonRichTextBlock* RichText_PlatformNames; // 0x418(0x08)
	struct UCommonRichTextBlock* Text_Presence; // 0x420(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function SidekickUserActionMenu.SidekickUserActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOpened(); // Function SidekickUserActionMenu.SidekickUserActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SidekickUserActionMenu(int32_t EntryPoint); // Function SidekickUserActionMenu.SidekickUserActionMenu_C.ExecuteUbergraph_SidekickUserActionMenu // (Final|UbergraphFunction) // @ game+0xda7c34
};

