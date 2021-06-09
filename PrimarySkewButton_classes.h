// WidgetBlueprintGeneratedClass PrimarySkewButton.PrimarySkewButton_C
// Size: 0xc70 (Inherited: 0xc20)
struct UPrimarySkewButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Pressed; // 0xc28(0x08)
	struct UWidgetAnimation* Hover; // 0xc30(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0xc38(0x08)
	struct UImage* Image_ButtonTop; // 0xc40(0x08)
	struct UImage* Image_Shadow; // 0xc48(0x08)
	bool ToUpper; // 0xc50(0x01)
	bool XL; // 0xc51(0x01)
	char pad_C52[0x6]; // 0xc52(0x06)
	struct FText ButtonNameText; // 0xc58(0x18)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PrimarySkewButton.PrimarySkewButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function PrimarySkewButton.PrimarySkewButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function PrimarySkewButton.PrimarySkewButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function PrimarySkewButton.PrimarySkewButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function PrimarySkewButton.PrimarySkewButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function PrimarySkewButton.PrimarySkewButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PrimarySkewButton(int32_t EntryPoint); // Function PrimarySkewButton.PrimarySkewButton_C.ExecuteUbergraph_PrimarySkewButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

