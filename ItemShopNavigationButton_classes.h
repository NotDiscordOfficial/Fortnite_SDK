// WidgetBlueprintGeneratedClass ItemShopNavigationButton.ItemShopNavigationButton_C
// Size: 0xc7a (Inherited: 0xc30)
struct UItemShopNavigationButton_C : UAthenaItemShopNavigationButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc30(0x08)
	struct UWidgetAnimation* FadeOutBacking; // 0xc38(0x08)
	struct UWidgetAnimation* Translate_Bottom; // 0xc40(0x08)
	struct UWidgetAnimation* Translate_Top; // 0xc48(0x08)
	struct UWidgetAnimation* Hover; // 0xc50(0x08)
	struct UImage* Backing; // 0xc58(0x08)
	struct UBorder* BorderButton; // 0xc60(0x08)
	struct UBorder* GridBoundBorder; // 0xc68(0x08)
	struct UImage* IMG_Arrow; // 0xc70(0x08)
	bool bFlipArrow; // 0xc78(0x01)
	bool bIsTop; // 0xc79(0x01)

	void PreConstruct(bool IsDesignTime); // Function ItemShopNavigationButton.ItemShopNavigationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function ItemShopNavigationButton.ItemShopNavigationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function ItemShopNavigationButton.ItemShopNavigationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemShopNavigationButton(int32_t EntryPoint); // Function ItemShopNavigationButton.ItemShopNavigationButton_C.ExecuteUbergraph_ItemShopNavigationButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

