// WidgetBlueprintGeneratedClass SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C
// Size: 0xc98 (Inherited: 0xc40)
struct USimpleFeatured_YellowButton_C : UFortSimpleFeaturedYellowButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct UWidgetAnimation* Pressed; // 0xc48(0x08)
	struct UWidgetAnimation* TextBounce; // 0xc50(0x08)
	struct UWidgetAnimation* Hover; // 0xc58(0x08)
	struct UBorder* Border_Container; // 0xc60(0x08)
	struct UImage* ButtonBacking; // 0xc68(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0xc70(0x08)
	struct UCommonTextBlock* Text_SecondaryText; // 0xc78(0x08)
	struct FText Button Description; // 0xc80(0x18)

	void HandleSize(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetText(struct FText NewText); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.SetText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ChangeSecondaryText(struct FText NewText); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.ChangeSecondaryText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshUI(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.RefreshUI // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SimpleFeatured_YellowButton(int32_t EntryPoint); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.ExecuteUbergraph_SimpleFeatured_YellowButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

