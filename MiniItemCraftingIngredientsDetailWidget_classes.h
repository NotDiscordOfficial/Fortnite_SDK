// WidgetBlueprintGeneratedClass MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C
// Size: 0x2f0 (Inherited: 0x2e0)
struct UMiniItemCraftingIngredientsDetailWidget_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UMiniCraftingIngredientList_C* MiniCraftingIngredientList; // 0x2e8(0x08)

	void GetRecipeItemQuantityPairs(struct UFortItem* Item, struct TArray<struct FFortItemQuantityPair> Pairs); // Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.GetRecipeItemQuantityPairs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToCompareWithSet(); // Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget(int32_t EntryPoint); // Function MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

