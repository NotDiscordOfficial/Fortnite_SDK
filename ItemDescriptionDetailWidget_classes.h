// WidgetBlueprintGeneratedClass ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C
// Size: 0x2f9 (Inherited: 0x2e0)
struct UItemDescriptionDetailWidget_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCommonTextBlock* ItemDescriptionTextBlock; // 0x2e8(0x08)
	struct UCommonTextBlock* QuantityTextBlock; // 0x2f0(0x08)
	bool ShouldShowOnlyIfItemIsSimple; // 0x2f8(0x01)

	void HandleItemChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged); // Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandleItemChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateQuantityTextBlock(); // Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.UpdateQuantityTextBlock // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IsItemSimple(bool Result); // Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.IsItemSimple // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePreDifferentItemToDetailSet(); // Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandlePreDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleQuantityOverrideChanged(); // Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.HandleQuantityOverrideChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemDescriptionDetailWidget(int32_t EntryPoint); // Function ItemDescriptionDetailWidget.ItemDescriptionDetailWidget_C.ExecuteUbergraph_ItemDescriptionDetailWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

