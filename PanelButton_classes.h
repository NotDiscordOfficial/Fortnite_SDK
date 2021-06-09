// WidgetBlueprintGeneratedClass PanelButton.PanelButton_C
// Size: 0xc58 (Inherited: 0xc20)
struct UPanelButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UNamedSlot* ContentSlot; // 0xc28(0x08)
	struct UCommonButtonStyle* ControllerInputStyle; // 0xc30(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0xc38(0x08)
	enum class EHorizontalAlignment InputActionHorizontalAlignment; // 0xc40(0x01)
	enum class EVerticalAlignment InputActionVerticalAlignment; // 0xc41(0x01)
	char pad_C42[0x2]; // 0xc42(0x02)
	struct FVector2D InputActionRenderTranslation; // 0xc44(0x08)
	bool InputActionUseRimBrush; // 0xc4c(0x01)
	char pad_C4D[0x3]; // 0xc4d(0x03)
	struct FVector2D InputActionRimBrushSize; // 0xc50(0x08)

	void UpdateInputActionLayout(); // Function PanelButton.PanelButton_C.UpdateInputActionLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateStyle(bool bUsingGamepad); // Function PanelButton.PanelButton_C.UpdateStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeButton(); // Function PanelButton.PanelButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTextAndStyle(); // Function PanelButton.PanelButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function PanelButton.PanelButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle NewTriggeredAction); // Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnActionProgress(float HeldPercent); // Function PanelButton.PanelButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnActionComplete(); // Function PanelButton.PanelButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PanelButton.PanelButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function PanelButton.PanelButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function PanelButton.PanelButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PanelButton(int32_t EntryPoint); // Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

