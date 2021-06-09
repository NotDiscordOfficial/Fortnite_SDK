// WidgetBlueprintGeneratedClass ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C
// Size: 0x2f8 (Inherited: 0x2e0)
struct UItemDetailsHeaderRarityTypeText_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCommonTextBlock* RarityTextBlock; // 0x2e8(0x08)
	struct UCommonTextBlock* TypeTextBlock; // 0x2f0(0x08)

	void HandlePostDifferentItemToDetailSet(); // Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToCompareWithSet(); // Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToCompareWithSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleItemToDetailChangedBP(); // Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandleItemToDetailChangedBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemDetailsHeaderRarityTypeText(int32_t EntryPoint); // Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.ExecuteUbergraph_ItemDetailsHeaderRarityTypeText // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

