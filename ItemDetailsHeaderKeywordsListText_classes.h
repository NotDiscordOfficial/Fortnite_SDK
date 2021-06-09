// WidgetBlueprintGeneratedClass ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C
// Size: 0x2f0 (Inherited: 0x2e0)
struct UItemDetailsHeaderKeywordsListText_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UCommonTextBlock* TagListTextBlock; // 0x2e8(0x08)

	void FormatItemDisplayTags(struct TArray<struct FText> TagTexts, struct FText FormatedText); // Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.FormatItemDisplayTags // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToCompareWithSet(); // Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.HandlePostDifferentItemToCompareWithSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemDetailsHeaderKeywordsListText(int32_t EntryPoint); // Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.ExecuteUbergraph_ItemDetailsHeaderKeywordsListText // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

