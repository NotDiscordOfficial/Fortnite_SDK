// WidgetBlueprintGeneratedClass MainMenu_HamburgerButton.MainMenu_HamburgerButton_C
// Size: 0xc60 (Inherited: 0xc20)
struct UMainMenu_HamburgerButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0xc28(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0xc30(0x08)
	struct UWidgetAnimation* Hover; // 0xc38(0x08)
	struct UImage* ButtonBacking; // 0xc40(0x08)
	struct UFortMobileImage* Icon; // 0xc48(0x08)
	struct UBorder* IconColor; // 0xc50(0x08)
	struct USizeBox* VariableSize; // 0xc58(0x08)

	void BP_OnHovered(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MainMenu_HamburgerButton(int32_t EntryPoint); // Function MainMenu_HamburgerButton.MainMenu_HamburgerButton_C.ExecuteUbergraph_MainMenu_HamburgerButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

