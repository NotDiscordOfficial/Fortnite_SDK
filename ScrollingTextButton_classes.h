// WidgetBlueprintGeneratedClass ScrollingTextButton.ScrollingTextButton_C
// Size: 0xcf2 (Inherited: 0xc20)
struct UScrollingTextButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0xc28(0x08)
	struct UBorder* ContentBorder; // 0xc30(0x08)
	struct UImage* LeftSideImage; // 0xc38(0x08)
	struct FText ButtonText; // 0xc40(0x18)
	struct FSlateBrush IconBrush; // 0xc58(0x88)
	struct UCommonButtonStyle* ControllerInputStyle; // 0xce0(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0xce8(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0xcf0(0x01)
	bool bMouseKeyboardStyleSet; // 0xcf1(0x01)

	void SetInitialMouseKeyboardStyle(); // Function ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTextStyle(); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateContentAlignment(); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateStyle(bool UsingGamepad); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateText(); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTextAndStyle(bool bUsingGamepad); // Function ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeButton(); // Function ScrollingTextButton.ScrollingTextButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Icon(struct FSlateBrush IconBrush); // Function ScrollingTextButton.ScrollingTextButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Text(struct FText ButtonText); // Function ScrollingTextButton.ScrollingTextButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurrentTextStyleChanged(); // Function ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function ScrollingTextButton.ScrollingTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo); // Function ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle NewTriggeredAction); // Function ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnActionProgress(float HeldPercent); // Function ScrollingTextButton.ScrollingTextButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnActionComplete(); // Function ScrollingTextButton.ScrollingTextButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ScrollingTextButton.ScrollingTextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ScrollingTextButton(int32_t EntryPoint); // Function ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

