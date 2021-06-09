// WidgetBlueprintGeneratedClass MTXButton.MTXButton_C
// Size: 0xc68 (Inherited: 0xc28)
struct UMTXButton_C : UFortMTXButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0xc30(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0xc38(0x08)
	struct UWidgetAnimation* Hover; // 0xc40(0x08)
	struct UBorder* AmountColor; // 0xc48(0x08)
	struct UImage* ButtonBacking; // 0xc50(0x08)
	struct UImage* Image_Vbucks; // 0xc58(0x08)
	struct USizeBox* VariableSize; // 0xc60(0x08)

	void Construct(); // Function MTXButton.MTXButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function MTXButton.MTXButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function MTXButton.MTXButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MTXButton(int32_t EntryPoint); // Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

