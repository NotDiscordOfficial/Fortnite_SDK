// WidgetBlueprintGeneratedClass MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C
// Size: 0x3dc (Inherited: 0x378)
struct UMainModeItemDetailsHostPanel_Store_C : UFortItemManagementItemDetailsPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UItemDetailsHeader_C* HeaderWidget; // 0x380(0x08)
	struct UHeroLoadoutActiveAbilitiesDetailWidget_C* HeroLoadoutActiveAbilitiesDetailWidget; // 0x388(0x08)
	struct UHeroLoadoutPerksDetailWidget_C* HeroLoadoutPerksDetailWidget; // 0x390(0x08)
	struct UItemAlterationsListDetailWidget_C* ItemAlterationsListDetailWidget; // 0x398(0x08)
	struct UItemCalledOutAttributesDetailWidget_C* ItemCalledOutAttributesDetailWidget_3; // 0x3a0(0x08)
	struct UItemDescriptionDetailWidget_C* ItemDescriptionDetailWidget; // 0x3a8(0x08)
	struct UItemPerksListDetailWidget_C* ItemPerksListDetailWidget; // 0x3b0(0x08)
	struct UImage* MarkedForMulchingBackgroundImage; // 0x3b8(0x08)
	struct UFortMultiSizeImage* MarkedForMulchingIndicatorImage; // 0x3c0(0x08)
	struct UMiniItemCraftingIngredientsDetailWidget_C* MiniItemCraftingIngredientsDetailWidget_10; // 0x3c8(0x08)
	struct USurvivorTraitsDetailWidget_C* SurvivorTraitsDetailWidget; // 0x3d0(0x08)
	bool ShowActiveAbilitiesOnly; // 0x3d8(0x01)
	bool ShowSurvivorDetails; // 0x3d9(0x01)
	bool HideItemDescription; // 0x3da(0x01)
	bool ShowHeroLoadoutPerks; // 0x3db(0x01)

	void UpdateDescriptionVisibility(); // Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.UpdateDescriptionVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleHasItemMarkedForMulchingChanged(); // Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MainModeItemDetailsHostPanel_Store(int32_t EntryPoint); // Function MainModeItemDetailsHostPanel_Store.MainModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_MainModeItemDetailsHostPanel_Store // (Final|UbergraphFunction) // @ game+0xda7c34
};

