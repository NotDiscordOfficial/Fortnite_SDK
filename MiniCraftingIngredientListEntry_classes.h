// WidgetBlueprintGeneratedClass MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C
// Size: 0x2c0 (Inherited: 0x2b0)
struct UMiniCraftingIngredientListEntry_C : UFortItemQuantityListEntryBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UItemCount_C* ItemCountWidget; // 0x2b8(0x08)

	struct UWidget* Get_ItemCountWidget_ToolTipWidget(); // Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Get_ItemCountWidget_ToolTipWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RefreshBeingPreviewed(); // Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshBeingPreviewed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Refresh(); // Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset); // Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.HandleDifferentItemOrQuantitySetBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreviewStarted(); // Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreviewEnded(); // Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.PreviewEnded // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void RefreshListEntry(); // Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.RefreshListEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MiniCraftingIngredientListEntry(int32_t EntryPoint); // Function MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C.ExecuteUbergraph_MiniCraftingIngredientListEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

