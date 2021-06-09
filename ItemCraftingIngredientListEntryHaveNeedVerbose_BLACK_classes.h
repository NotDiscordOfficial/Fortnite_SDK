// WidgetBlueprintGeneratedClass ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C
// Size: 0x308 (Inherited: 0x2b0)
struct UItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C : UFortItemQuantityListEntryBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UCommonBorder* Border; // 0x2b8(0x08)
	struct UFortItemCountTextBlock* ItemCountHave; // 0x2c0(0x08)
	struct UFortItemCountTextBlock* ItemCountNeed; // 0x2c8(0x08)
	struct UFortLazyImage* ItemIcon; // 0x2d0(0x08)
	struct UFortItemDisplayNameText* ItemName; // 0x2d8(0x08)
	struct UCommonTextBlock* TextCountPrefix; // 0x2e0(0x08)
	struct UCommonTextBlock* TextDescription; // 0x2e8(0x08)
	struct UCommonTextBlock* TextSlash; // 0x2f0(0x08)
	bool bOverrideTextStyle; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct UCommonTextStyle* TextStyle; // 0x300(0x08)

	void ShowHaveNeed(bool HaveNeed); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.ShowHaveNeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RefreshPreviewData(); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.RefreshPreviewData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshVisibility(); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.RefreshVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Refresh(); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DoDesignTimeRandomization(); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.DoDesignTimeRandomization // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.HandleDifferentItemOrQuantitySetBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreviewStarted(); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.PreviewStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreviewEnded(); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.PreviewEnded // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void RefreshListEntry(); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.RefreshListEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK(int32_t EntryPoint); // Function ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK.ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK_C.ExecuteUbergraph_ItemCraftingIngredientListEntryHaveNeedVerbose_BLACK // (Final|UbergraphFunction) // @ game+0xda7c34
};

