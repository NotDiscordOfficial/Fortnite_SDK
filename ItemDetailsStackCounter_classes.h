// WidgetBlueprintGeneratedClass ItemDetailsStackCounter.ItemDetailsStackCounter_C
// Size: 0x306 (Inherited: 0x2e0)
struct UItemDetailsStackCounter_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct USizeBox* [SizeBox]; // 0x2e8(0x08)
	struct UCommonBorder* BorderBase; // 0x2f0(0x08)
	struct UCommonTextBlock* TextCounter; // 0x2f8(0x08)
	int32_t Count; // 0x300(0x04)
	bool AlwaysVisible; // 0x304(0x01)
	bool TruncateValue; // 0x305(0x01)

	void Refresh Visibility(); // Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Stack Count(); // Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update Stack Count // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandlePreDifferentItemToDetailSet(); // Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePreDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOnItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandleOnItemChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleQuantityOverrideChanged(); // Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandleQuantityOverrideChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemDetailsStackCounter(int32_t EntryPoint); // Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter // (Final|UbergraphFunction) // @ game+0xda7c34
};

