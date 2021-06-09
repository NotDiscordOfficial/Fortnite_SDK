// WidgetBlueprintGeneratedClass UserActionMenu.UserActionMenu_C
// Size: 0x420 (Inherited: 0x3f0)
struct UUserActionMenu_C : UFortSocialInteractionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct UWidgetAnimation* ConfirmationOpened; // 0x3f8(0x08)
	struct UWidgetAnimation* Opened; // 0x400(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x408(0x08)
	struct UBorder* EntryBorder; // 0x410(0x08)
	struct UFortMobileImage* Image_Platform; // 0x418(0x08)

	void OnToggleConfirmation(bool bIsVisible); // Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOpened(); // Function UserActionMenu.UserActionMenu_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_UserActionMenu(int32_t EntryPoint); // Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu // (Final|UbergraphFunction) // @ game+0xda7c34
};

