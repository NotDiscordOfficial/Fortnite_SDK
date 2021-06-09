// WidgetBlueprintGeneratedClass CosmeticLoadoutScreen.CosmeticLoadoutScreen_C
// Size: 0x660 (Inherited: 0x5a8)
struct UCosmeticLoadoutScreen_C : UFortCosmeticLoadoutScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a8(0x08)
	struct UWidgetAnimation* Intro; // 0x5b0(0x08)
	struct UVerticalBox* LeftSideButtons; // 0x5b8(0x08)
	struct UCommonTextBlock* NewPresetDisclaimerText; // 0x5c0(0x08)
	struct UImage* Panel; // 0x5c8(0x08)
	struct UCommonTextBlock* PresetHeader; // 0x5d0(0x08)
	struct UCommonTextBlock* RandomDisclaimertext; // 0x5d8(0x08)
	struct UCommonTextBlock* SaveSubHeader; // 0x5e0(0x08)
	struct USoloButton_C* xButton_DeleteLoadout; // 0x5e8(0x08)
	struct USoloButton_C* xButton_RenameLoadout; // 0x5f0(0x08)
	struct USimpleFeatured_YellowButton_C* xSimpleFeatured_YellowButton; // 0x5f8(0x08)
	struct FText BrowseHeaderText; // 0x600(0x18)
	struct FText SaveHeaderText; // 0x618(0x18)
	struct FText ApplyButtonText; // 0x630(0x18)
	struct FText SaveButtonText; // 0x648(0x18)

	void BP_OnActivated(); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPreviewTile(enum class EFortLoadoutCardType CardType); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.OnPreviewTile // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFlavorForScreenMode(enum class EFortCosmeticLoadoutScreenMode NewMode); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.OnFlavorForScreenMode // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CosmeticLoadoutScreen(int32_t EntryPoint); // Function CosmeticLoadoutScreen.CosmeticLoadoutScreen_C.ExecuteUbergraph_CosmeticLoadoutScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

