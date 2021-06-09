// WidgetBlueprintGeneratedClass MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C
// Size: 0xc50 (Inherited: 0xc28)
struct UMTXButton_PurchaseScreen_C : UFortMTXButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* Hover; // 0xc30(0x08)
	struct UImage* ButtonBacking; // 0xc38(0x08)
	struct UImage* Image_Vbucks; // 0xc40(0x08)
	struct USizeBox* VariableSize; // 0xc48(0x08)

	void Construct(); // Function MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MTXButton_PurchaseScreen(int32_t EntryPoint); // Function MTXButton_PurchaseScreen.MTXButton_PurchaseScreen_C.ExecuteUbergraph_MTXButton_PurchaseScreen // (Final|UbergraphFunction) // @ game+0xda7c34
};

