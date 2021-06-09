// WidgetBlueprintGeneratedClass ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C
// Size: 0x2f0 (Inherited: 0x2e0)
struct UItemCraftingIngredientsDetailWidget_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UItemCraftingIngredientList_C* DetailsWidget_ItemCraftingIngredientsList; // 0x2e8(0x08)

	void HandlePostDifferentItemToDetailSet(); // Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToCompareWithSet(); // Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemCraftingIngredientsDetailWidget(int32_t EntryPoint); // Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_ItemCraftingIngredientsDetailWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

