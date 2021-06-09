// WidgetBlueprintGeneratedClass SoloButton.SoloButton_C
// Size: 0xc8a (Inherited: 0xc20)
struct USoloButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Pressed; // 0xc28(0x08)
	struct UWidgetAnimation* Hover; // 0xc30(0x08)
	struct UBorder* Border_Container; // 0xc38(0x08)
	struct UImage* ButtonBacking; // 0xc40(0x08)
	struct USizeBox* SizeBox_Control; // 0xc48(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0xc50(0x08)
	struct FText Button Description; // 0xc58(0x18)
	bool FontSizeOveride; // 0xc70(0x01)
	char pad_C71[0x3]; // 0xc71(0x03)
	int32_t FontSize; // 0xc74(0x04)
	struct FMargin Padding Overide; // 0xc78(0x10)
	bool PaddingOveride; // 0xc88(0x01)
	bool IsDisabled; // 0xc89(0x01)

	void SetText(struct FText Text); // Function SoloButton.SoloButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleSize(); // Function SoloButton.SoloButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function SoloButton.SoloButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function SoloButton.SoloButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SoloButton.SoloButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SoloButton.SoloButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function SoloButton.SoloButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDisabled(); // Function SoloButton.SoloButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnEnabled(); // Function SoloButton.SoloButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SoloButton(int32_t EntryPoint); // Function SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

