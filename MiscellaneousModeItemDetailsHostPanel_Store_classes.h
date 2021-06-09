// WidgetBlueprintGeneratedClass MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C
// Size: 0x3b0 (Inherited: 0x378)
struct UMiscellaneousModeItemDetailsHostPanel_Store_C : UFortItemManagementItemDetailsPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UItemDetailsHeader_C* HeaderWidget; // 0x380(0x08)
	struct UHeroLoadoutPerksDetailWidget_C* HeroLoadoutPerksDetailWidget; // 0x388(0x08)
	struct UItemCraftingIngredientsDetailWidget_C* ItemCraftingIngredientsDetailWidget; // 0x390(0x08)
	struct UImage* MarkedForMulchingBackgroundImage; // 0x398(0x08)
	struct UFortMultiSizeImage* MarkedForMulchingIndicatorImage; // 0x3a0(0x08)
	struct USurvivorTraitsDetailWidget_C* SurvivorTraitsDetailWidget; // 0x3a8(0x08)

	void HandleHasItemMarkedForMulchingChanged(); // Function MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C.HandleHasItemMarkedForMulchingChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store(int32_t EntryPoint); // Function MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C.ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store // (Final|UbergraphFunction) // @ game+0xda7c34
};

