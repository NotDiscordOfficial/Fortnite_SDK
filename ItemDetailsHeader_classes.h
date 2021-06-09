// WidgetBlueprintGeneratedClass ItemDetailsHeader.ItemDetailsHeader_C
// Size: 0x4d3 (Inherited: 0x358)
struct UItemDetailsHeader_C : UFortItemDetailsHostPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UCommonTextBlock* AmmoLoadedText; // 0x360(0x08)
	struct UFortItemCategoryIndicator* CategoryIndicator; // 0x368(0x08)
	struct UFortItemCategoryIndicator* CategoryIndicatorTertiary; // 0x370(0x08)
	struct UHorizontalBox* EvolutionAndTierBox; // 0x378(0x08)
	struct UFortEvolveIndicator* EvolveIndicator; // 0x380(0x08)
	struct UNamedSlot* ExtraIndicatorSlot; // 0x388(0x08)
	struct UFortFavoriteIndicator* FavoriteIndicator; // 0x390(0x08)
	struct USpacer* IconSpacer; // 0x398(0x08)
	struct USpacer* IconSpacerTertiary; // 0x3a0(0x08)
	struct UItemDetailsHeaderItemDisplayText_C* ItemDetailsHeaderItemDisplayText; // 0x3a8(0x08)
	struct UItemDetailsHeaderKeywordsListText_C* ItemDetailsHeaderKeywordsListText; // 0x3b0(0x08)
	struct UItemDetailsHeaderOwnedCountText_C* ItemDetailsHeaderOwnedCountText; // 0x3b8(0x08)
	struct UItemDetailsHeaderRarityTypeText_C* ItemDetailsHeaderRarityTypeText; // 0x3c0(0x08)
	struct UItemDetailsHeaderTagListText_C* ItemDetailsHeaderTagListText; // 0x3c8(0x08)
	struct UItemDetailsStackCounter_C* ItemDetailsStackCounter; // 0x3d0(0x08)
	struct UItemRatingIndicator_C* ItemRatingIndicator; // 0x3d8(0x08)
	struct UCommonBorder* LevelBar; // 0x3e0(0x08)
	struct UFortLevelIndicator* LevelIndicator; // 0x3e8(0x08)
	struct UFortInventoryOverflowIndicator* OverflowIndicator; // 0x3f0(0x08)
	struct UCommonBorder* RarityBorder; // 0x3f8(0x08)
	struct UWidgetSwitcher* RatingSwitcher; // 0x400(0x08)
	struct USizeBox* SizeBox_LoadGuard; // 0x408(0x08)
	struct UHorizontalBox* TagListBox; // 0x410(0x08)
	struct UHorizontalBox* TertiaryRow; // 0x418(0x08)
	struct UFortTierIndicator* TierIndicator; // 0x420(0x08)
	struct UFortUpgradeIndicator* UpgradeIndicator; // 0x428(0x08)
	struct UMaterialInstanceDynamic* RarityBorderMID; // 0x430(0x08)
	struct FFortRarityItemData RarityData; // 0x438(0x80)
	struct UMaterialInstanceDynamic* Level Bar MID; // 0x4b8(0x08)
	struct FLinearColor LockItemColor; // 0x4c0(0x10)
	bool Show Ammo Header; // 0x4d0(0x01)
	bool Force Show Details; // 0x4d1(0x01)
	bool ShowOwnedCount; // 0x4d2(0x01)

	void SetStyles(); // Function ItemDetailsHeader.ItemDetailsHeader_C.SetStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateItemsForWidgets(); // Function ItemDetailsHeader.ItemDetailsHeader_C.UpdateItemsForWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ItemDetailsHeader.ItemDetailsHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleDifferentItemToDetailSet(); // Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleDifferentItemToCompareSet(); // Function ItemDetailsHeader.ItemDetailsHeader_C.HandleDifferentItemToCompareSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function ItemDetailsHeader.ItemDetailsHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleItemToDetailChangedBP(); // Function ItemDetailsHeader.ItemDetailsHeader_C.HandleItemToDetailChangedBP // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemDetailsHeader(int32_t EntryPoint); // Function ItemDetailsHeader.ItemDetailsHeader_C.ExecuteUbergraph_ItemDetailsHeader // (Final|UbergraphFunction) // @ game+0xda7c34
};

