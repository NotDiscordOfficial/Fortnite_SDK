// WidgetBlueprintGeneratedClass ItemCraftingIngredientList.ItemCraftingIngredientList_C
// Size: 0x334 (Inherited: 0x318)
struct UItemCraftingIngredientList_C : UFortItemQuantityListBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* IngredientsList; // 0x320(0x08)
	struct UFortItem* ItemRepresented; // 0x328(0x08)
	int32_t Quantity; // 0x330(0x04)

	void RefreshItemToRepresent(); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.RefreshItemToRepresent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetItemQuantity(int32_t ItemQuantity); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemQuantity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bind Delegates(); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Bind Delegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnbindDelegates(); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.UnbindDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleCraftItemFailed(enum class EFortCraftFailCause FailCause); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleCraftItemFailed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetIngredients(struct UObject* Item, struct TArray<struct FFortItemQuantityPair> ReturnIngredients); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.GetIngredients // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetItemToCompare(struct UFortItem* ItemToCompare); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToCompare // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ItemNeedsInventoryTracking(struct UFortItem* Item, bool NeedsTracking); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ItemNeedsInventoryTracking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleItemChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshInventoryTracking(); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.RefreshInventoryTracking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleWorldItemListChanged(struct TArray<struct UFortWorldItem*> ItemsAdded, struct TArray<struct UFortWorldItem*> ItemsRemoved); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.HandleWorldItemListChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Refresh(); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetItemToRepresent(struct UFortItem* Item, int32_t ItemQuantity); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.SetItemToRepresent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddListEntry(struct UFortItemQuantityListEntryBase* ListEntry); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.AddListEntry // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemCraftingIngredientList(int32_t EntryPoint); // Function ItemCraftingIngredientList.ItemCraftingIngredientList_C.ExecuteUbergraph_ItemCraftingIngredientList // (Final|UbergraphFunction) // @ game+0xda7c34
};

