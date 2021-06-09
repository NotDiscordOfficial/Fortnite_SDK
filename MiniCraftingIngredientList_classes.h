// WidgetBlueprintGeneratedClass MiniCraftingIngredientList.MiniCraftingIngredientList_C
// Size: 0x328 (Inherited: 0x318)
struct UMiniCraftingIngredientList_C : UFortItemQuantityListBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWrapBox* EntriesWrapBox; // 0x320(0x08)

	void AddListEntry(struct UFortItemQuantityListEntryBase* ListEntry); // Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.AddListEntry // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MiniCraftingIngredientList(int32_t EntryPoint); // Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.ExecuteUbergraph_MiniCraftingIngredientList // (Final|UbergraphFunction) // @ game+0xda7c34
};

