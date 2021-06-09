// WidgetBlueprintGeneratedClass SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C
// Size: 0x33b (Inherited: 0x2e0)
struct USurvivorTraitsDetailWidget_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* DotRule; // 0x2e8(0x08)
	struct UFortItemCategoryIndicator* FortItemCategoryIndicator2Icon; // 0x2f0(0x08)
	struct UFortItemCategoryIndicator* FortItemCategoryIndicatorIcon; // 0x2f8(0x08)
	struct USizeBox* ParentSizeBox; // 0x300(0x08)
	struct UCommonBorder* SecondaryBorder; // 0x308(0x08)
	struct UFortItemCategoryIndicator* SecondaryCategoryIndicator; // 0x310(0x08)
	struct UCommonBorder* TertiaryBorder; // 0x318(0x08)
	struct UFortItemCategoryIndicator* TertiaryCategoryIndicator; // 0x320(0x08)
	struct UCommonTextBlock* TextPersonality; // 0x328(0x08)
	struct UCommonTextBlock* TextTertiaryHeader; // 0x330(0x08)
	bool HasPersonality; // 0x338(0x01)
	bool HasSetBonus; // 0x339(0x01)
	bool HasManagerSynergy; // 0x33a(0x01)

	void HandlePostDifferentItemToDetailSet(); // Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SurvivorTraitsDetailWidget(int32_t EntryPoint); // Function SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C.ExecuteUbergraph_SurvivorTraitsDetailWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

