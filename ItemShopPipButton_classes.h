// WidgetBlueprintGeneratedClass ItemShopPipButton.ItemShopPipButton_C
// Size: 0xc70 (Inherited: 0xc48)
struct UItemShopPipButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc48(0x08)
	struct UWidgetAnimation* Hover; // 0xc50(0x08)
	struct UWidgetAnimation* Selected; // 0xc58(0x08)
	struct UImage* BacchusMobileShadow; // 0xc60(0x08)
	struct UImage* PIP; // 0xc68(0x08)

	void PreConstruct(bool IsDesignTime); // Function ItemShopPipButton.ItemShopPipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ItemShopPipButton.ItemShopPipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function ItemShopPipButton.ItemShopPipButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function ItemShopPipButton.ItemShopPipButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemShopPipButton(int32_t EntryPoint); // Function ItemShopPipButton.ItemShopPipButton_C.ExecuteUbergraph_ItemShopPipButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

