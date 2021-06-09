// Class CraftingUI.AthenaCraftingQuickBarButton
// Size: 0xc00 (Inherited: 0xbe0)
struct UAthenaCraftingQuickBarButton : UAthenaQuickBarSlotButtonBase {
	char pad_BE0[0x20]; // 0xbe0(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaCraftingQuickBarButton.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaCraftingQuickBarButton.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class CraftingUI.AthenaEquippedItemCraftingIndicator
// Size: 0x2a8 (Inherited: 0x288)
struct UAthenaEquippedItemCraftingIndicator : UCommonUserWidget {
	char pad_288[0x20]; // 0x288(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaEquippedItemCraftingIndicator.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function CraftingUI.AthenaEquippedItemCraftingIndicator.HandleWeaponEquipped // (Final|Native|Private) // @ game+0x3b475e0
};

// Class CraftingUI.AthenaInventoryItemInfoCraftingIndicator
// Size: 0x2a8 (Inherited: 0x288)
struct UAthenaInventoryItemInfoCraftingIndicator : UCommonUserWidget {
	char pad_288[0x20]; // 0x288(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleInventoryItemSelected(struct UFortItem* SelectedItem); // Function CraftingUI.AthenaInventoryItemInfoCraftingIndicator.HandleInventoryItemSelected // (Final|Native|Private) // @ game+0x3b474a8
};

// Class CraftingUI.AthenaQuickBarSlotCraftingIndicator
// Size: 0x2a8 (Inherited: 0x288)
struct UAthenaQuickBarSlotCraftingIndicator : UAthenaQuickBarSlotExtensionWidgetBase {
	char pad_288[0x20]; // 0x288(0x20)

	void OnIsCraftableItemChanged(bool bIsCraftableItem); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnIsCraftableItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCanCraftNowChanged(bool bCanCraftNow); // Function CraftingUI.AthenaQuickBarSlotCraftingIndicator.OnCanCraftNowChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class CraftingUI.FortCookingScreen
// Size: 0x370 (Inherited: 0x320)
struct UFortCookingScreen : UCommonActivatableWidget {
	char pad_320[0x8]; // 0x320(0x08)
	struct FDataTableRowHandle CloseInputAction; // 0x328(0x10)
	char pad_338[0x8]; // 0x338(0x08)
	struct UCommonButtonLegacy* Button_EjectAll; // 0x340(0x08)
	struct UCommonButtonLegacy* Button_Cancel; // 0x348(0x08)
	struct UCommonTextBlock* Text_RecipeName; // 0x350(0x08)
	struct UCommonTextBlock* Text_RecipeDescription; // 0x358(0x08)
	struct UImage* Image_Recipe; // 0x360(0x08)
	struct UFortSlottedRadialMenu* RadialMenu_Recipes; // 0x368(0x08)
};

// Class CraftingUI.FortCraftingFormulaIngredientsWidget
// Size: 0x290 (Inherited: 0x288)
struct UFortCraftingFormulaIngredientsWidget : UCommonUserWidget {
	struct UDynamicEntryBox* EntryBox_Ingredients; // 0x288(0x08)
};

// Class CraftingUI.FortCraftingIngredientWidget
// Size: 0x2b0 (Inherited: 0x288)
struct UFortCraftingIngredientWidget : UCommonUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UCommonTextBlock* Text_NumAvailable; // 0x290(0x08)
	struct UCommonTextBlock* Text_NumRequired; // 0x298(0x08)
	struct UAthenaItemIcon* ItemIcon; // 0x2a0(0x08)
	struct UCommonLazyImage* LazyImage_Icon; // 0x2a8(0x08)

	void OnIngredientWidgetUpdated(int32_t NumAvailable, int32_t NumRequired, bool bIsPrimaryIngredient, bool bIsLastIngredient); // Function CraftingUI.FortCraftingIngredientWidget.OnIngredientWidgetUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class CraftingUI.FortCraftingItemInfoWidget
// Size: 0x388 (Inherited: 0x320)
struct UFortCraftingItemInfoWidget : UCommonActivatableWidget {
	char pad_320[0x8]; // 0x320(0x08)
	struct FText RarityTextFormat; // 0x328(0x18)
	struct UCommonTextBlock* Text_ItemName; // 0x340(0x08)
	struct UCommonTextBlock* Text_ItemRarity; // 0x348(0x08)
	struct UCommonTextBlock* Text_ItemCategory; // 0x350(0x08)
	struct UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x358(0x08)
	struct UCommonTextBlock* Text_ItemDescription; // 0x360(0x08)
	struct UAthenaInventoryItemStatsWidget* ItemStatsWidget; // 0x368(0x08)
	struct UFortCraftingFormulaIngredientsWidget* IngredientsWidget; // 0x370(0x08)
	struct UCommonButtonLegacy* Button_StartCrafting; // 0x378(0x08)
	char pad_380[0x8]; // 0x380(0x08)

	void OnItemRaritySet(enum class EFortRarity Rarity, struct FFortRarityItemData RarityItemData); // Function CraftingUI.FortCraftingItemInfoWidget.OnItemRaritySet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class CraftingUI.FortCraftingListEntry
// Size: 0xc40 (Inherited: 0xc20)
struct UFortCraftingListEntry : UCommonButtonLegacy {
	char pad_C20[0x8]; // 0xc20(0x08)
	struct UAthenaItemIcon* ItemIcon; // 0xc28(0x08)
	bool bCanCraftItem; // 0xc30(0x01)
	char pad_C31[0xf]; // 0xc31(0x0f)

	void OnCraftingListItemSet(); // Function CraftingUI.FortCraftingListEntry.OnCraftingListItemSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class CraftingUI.FortCraftingListItem
// Size: 0xe8 (Inherited: 0x28)
struct UFortCraftingListItem : UObject {
	char pad_28[0xc0]; // 0x28(0xc0)
};

// Class CraftingUI.FortCraftingTab
// Size: 0x408 (Inherited: 0x320)
struct UFortCraftingTab : UCommonActivatableWidget {
	char pad_320[0x8]; // 0x320(0x08)
	struct FName TabNameID; // 0x328(0x08)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x330(0xa0)
	struct FGameplayTagContainer PrimaryIngredientTags; // 0x3d0(0x20)
	struct UFortCraftingItemInfoWidget* CraftingItemInfo; // 0x3f0(0x08)
	struct UCommonListView* ListView_Recipes; // 0x3f8(0x08)
	struct UAthenaQuickbarEditorBase* QuickbarEditor; // 0x400(0x08)

	void OnFormulaListUpdated(int32_t NumFormulas); // Function CraftingUI.FortCraftingTab.OnFormulaListUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleInventoryItemSelected(struct UFortItem* Item); // Function CraftingUI.FortCraftingTab.HandleInventoryItemSelected // (Final|Native|Private) // @ game+0x3b47544
};

// Class CraftingUI.FortPotContentsPopup
// Size: 0x288 (Inherited: 0x260)
struct UFortPotContentsPopup : UUserWidget {
	int32_t MaxItemsToShow; // 0x260(0x04)
	char pad_264[0xc]; // 0x264(0x0c)
	struct UCommonTileView* TileView_PotContents; // 0x270(0x08)
	struct UCommonTextBlock* Text_MoreItems; // 0x278(0x08)
	struct UWidget* Overlay_Popup; // 0x280(0x08)

	void SetOwningCraftingObject(struct ACraftingObjectBGA* InCraftingObject); // Function CraftingUI.FortPotContentsPopup.SetOwningCraftingObject // (Final|Native|Public|BlueprintCallable) // @ game+0x3b476c8
};

// Class CraftingUI.FortPotContentsTile
// Size: 0xc30 (Inherited: 0xc20)
struct UFortPotContentsTile : UCommonButtonLegacy {
	char pad_C20[0x8]; // 0xc20(0x08)
	struct UCommonLazyImage* Image_Item; // 0xc28(0x08)
};

