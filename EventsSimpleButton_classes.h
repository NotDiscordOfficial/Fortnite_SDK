// WidgetBlueprintGeneratedClass EventsSimpleButton.EventsSimpleButton_C
// Size: 0xcf8 (Inherited: 0xc20)
struct UEventsSimpleButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Pressed; // 0xc28(0x08)
	struct UWidgetAnimation* Hover; // 0xc30(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0xc38(0x08)
	struct UCommonBorder* CommonBorder_VariablePadding; // 0xc40(0x08)
	struct UImage* Image_ButtonTop; // 0xc48(0x08)
	struct UImage* Image_Shadow; // 0xc50(0x08)
	struct UOverlay* Overlay_ButtonBG; // 0xc58(0x08)
	bool ToUpper; // 0xc60(0x01)
	bool XL; // 0xc61(0x01)
	char pad_C62[0x6]; // 0xc62(0x06)
	struct FText ButtonNameText; // 0xc68(0x18)
	struct TMap<struct FString, struct FLinearColor> Color; // 0xc80(0x50)
	struct FLinearColor GamepadButtonTextColor; // 0xcd0(0x10)
	struct FLinearColor DefaultTextColor; // 0xce0(0x10)
	struct FVector2D ButtonPadding; // 0xcf0(0x08)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function EventsSimpleButton.EventsSimpleButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function EventsSimpleButton.EventsSimpleButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function EventsSimpleButton.EventsSimpleButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void InputTypeChanged(bool bUsingGamepad); // Function EventsSimpleButton.EventsSimpleButton_C.InputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateColor(struct FString ParameterName, struct FLinearColor New Color); // Function EventsSimpleButton.EventsSimpleButton_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventsSimpleButton(int32_t EntryPoint); // Function EventsSimpleButton.EventsSimpleButton_C.ExecuteUbergraph_EventsSimpleButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

