// WidgetBlueprintGeneratedClass ItemAttributesDetailWidget.ItemAttributesDetailWidget_C
// Size: 0x2f0 (Inherited: 0x2e0)
struct UItemAttributesDetailWidget_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UStatsListWidget_C* StatsListWidget; // 0x2e8(0x08)

	void UpdateItemsForWidgets(); // Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.UpdateItemsForWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToCompareWithSet(); // Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToCompareWithSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleShouldPreviewUpgradingItemChanged(); // Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleShouldPreviewUpgradingItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleItemToDetailChangedBP(); // Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToDetailChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleItemToCompareWithChangedBP(); // Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToCompareWithChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleUpgradeLevelDeltaChanged(); // Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleUpgradeLevelDeltaChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemAttributesDetailWidget(int32_t EntryPoint); // Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.ExecuteUbergraph_ItemAttributesDetailWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

