// WidgetBlueprintGeneratedClass IconTextButton.IconTextButton_C
// Size: 0xd21 (Inherited: 0xc20)
struct UIconTextButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0xc28(0x08)
	struct UBorder* ContentBorder; // 0xc30(0x08)
	struct UImage* LeftSideImage; // 0xc38(0x08)
	struct UNamedSlot* RightExtraContentSlot; // 0xc40(0x08)
	struct FText ButtonText; // 0xc48(0x18)
	struct FSlateBrush IconBrush; // 0xc60(0x88)
	struct UCommonButtonStyle* ControllerInputStyle; // 0xce8(0x08)
	struct UCommonButtonStyle* MouseKeyboardStyle; // 0xcf0(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0xcf8(0x01)
	bool bMouseKeyboardStyleSet; // 0xcf9(0x01)
	char pad_CFA[0x6]; // 0xcfa(0x06)
	struct FText OverrideButtonText; // 0xd00(0x18)
	enum class ETextJustify ButtonTextJustification; // 0xd18(0x01)
	bool bDisplayAllCaps; // 0xd19(0x01)
	char pad_D1A[0x2]; // 0xd1a(0x02)
	float PressProgress; // 0xd1c(0x04)
	bool bIgnoreInputActionWidgetText; // 0xd20(0x01)

	void GetPressProgress(float Progress); // Function IconTextButton.IconTextButton_C.GetPressProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get Dynamic Material(struct UMaterialInstanceDynamic* Ret Material); // Function IconTextButton.IconTextButton_C.Get Dynamic Material // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowIcon(bool bShouldShow); // Function IconTextButton.IconTextButton_C.ShowIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextInternal(struct FText InButtonText); // Function IconTextButton.IconTextButton_C.SetTextInternal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetInitialMouseKeyboardStyle(); // Function IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTextStyle(); // Function IconTextButton.IconTextButton_C.UpdateTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function IconTextButton.IconTextButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateContentAlignment(); // Function IconTextButton.IconTextButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMouseKeyboardStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateStyle(bool UsingGamepad); // Function IconTextButton.IconTextButton_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateText(); // Function IconTextButton.IconTextButton_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetControllerStyle(struct UCommonButtonStyle* ControllerInputStyle); // Function IconTextButton.IconTextButton_C.SetControllerStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTextAndStyle(enum class ECommonInputType InputType); // Function IconTextButton.IconTextButton_C.UpdateTextAndStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeButton(); // Function IconTextButton.IconTextButton_C.InitializeButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTextButton.IconTextButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Text(struct FText ButtonText); // Function IconTextButton.IconTextButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurrentTextStyleChanged(); // Function IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function IconTextButton.IconTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo); // Function IconTextButton.IconTextButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle NewTriggeredAction); // Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnActionProgress(float HeldPercent); // Function IconTextButton.IconTextButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnActionComplete(); // Function IconTextButton.IconTextButton_C.OnActionComplete // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function IconTextButton.IconTextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function IconTextButton.IconTextButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_IconTextButton(int32_t EntryPoint); // Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

