// WidgetBlueprintGeneratedClass ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C
// Size: 0x308 (Inherited: 0x2e0)
struct UItemCalledOutAttributesDetailWidget_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UFortItemCategoryIndicator* AmmoTypeIndicator; // 0x2e8(0x08)
	struct UWrapBox* ContainerWrapBox; // 0x2f0(0x08)
	struct TArray<struct UStatsListItemWIdget_C*> StatWidgets; // 0x2f8(0x10)

	void Clear Stats(); // Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.Clear Stats // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateStats(); // Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.UpdateStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetDisplayAttributesToCallOut(struct TArray<struct FFortDisplayAttribute> Attributes); // Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.GetDisplayAttributesToCallOut // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleItemToDetailChangedBP(); // Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.HandleItemToDetailChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemCalledOutAttributesDetailWidget(int32_t EntryPoint); // Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.ExecuteUbergraph_ItemCalledOutAttributesDetailWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

