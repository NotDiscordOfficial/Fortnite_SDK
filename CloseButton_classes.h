// WidgetBlueprintGeneratedClass CloseButton.CloseButton_C
// Size: 0xca1 (Inherited: 0xc28)
struct UCloseButton_C : UBacchusCloseButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* Unhover; // 0xc30(0x08)
	struct UWidgetAnimation* Pressed; // 0xc38(0x08)
	struct UWidgetAnimation* Hover; // 0xc40(0x08)
	struct UBorder* Border_Container; // 0xc48(0x08)
	struct UImage* ButtonBacking; // 0xc50(0x08)
	struct UImage* CloseIcon; // 0xc58(0x08)
	struct USizeBox* SizeBox_Control; // 0xc60(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0xc68(0x08)
	struct FText Button Description; // 0xc70(0x18)
	bool FontSizeOveride; // 0xc88(0x01)
	char pad_C89[0x3]; // 0xc89(0x03)
	int32_t FontSize; // 0xc8c(0x04)
	struct FMargin Padding Overide; // 0xc90(0x10)
	bool PaddingOveride; // 0xca0(0x01)

	void SetText(struct FText Text); // Function CloseButton.CloseButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleSize(); // Function CloseButton.CloseButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function CloseButton.CloseButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function CloseButton.CloseButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CloseButton(int32_t EntryPoint); // Function CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

