// WidgetBlueprintGeneratedClass ToastSocialWidget.ToastSocialWidget_C
// Size: 0x369 (Inherited: 0x2d8)
struct UToastSocialWidget_C : UFortSocialNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* Outro_New; // 0x2e0(0x08)
	struct UWidgetAnimation* Intro; // 0x2e8(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x2f0(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x2f8(0x08)
	struct UIconTextButton_C* Button_Cursor; // 0x300(0x08)
	struct UIconTextButton_C* Button_Hold; // 0x308(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x310(0x08)
	struct UCommonTextBlock* Description; // 0x318(0x08)
	struct UFortLazyImage* NotificationImage; // 0x320(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_InputButtons; // 0x328(0x08)
	struct UTextBlock* TextBlock_1; // 0x330(0x08)
	struct UCommonTextBlock* Title; // 0x338(0x08)
	struct UFortUINotification* ToastNotification; // 0x340(0x08)
	float AnimationFinishedDelay; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x350(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x360(0x08)
	bool bActionTaken; // 0x368(0x01)

	void GetFinishedAnimationDelay(float Value); // Function ToastSocialWidget.ToastSocialWidget_C.GetFinishedAnimationDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetButtonHoldText(struct FText Text); // Function ToastSocialWidget.ToastSocialWidget_C.GetButtonHoldText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetButtonCursorText(struct FText Text); // Function ToastSocialWidget.ToastSocialWidget_C.GetButtonCursorText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetVisibilityForOptionalElements(); // Function ToastSocialWidget.ToastSocialWidget_C.SetVisibilityForOptionalElements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TakeAction(); // Function ToastSocialWidget.ToastSocialWidget_C.TakeAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanupBeforeClosing(); // Function ToastSocialWidget.ToastSocialWidget_C.CleanupBeforeClosing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	int32_t GetActiveWidgetIndex(); // Function ToastSocialWidget.ToastSocialWidget_C.GetActiveWidgetIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	enum class ESlateVisibility GetInputSwitcherVisibility(); // Function ToastSocialWidget.ToastSocialWidget_C.GetInputSwitcherVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetupAnimBindings(bool Unbind); // Function ToastSocialWidget.ToastSocialWidget_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyAdditionalStyling(); // Function ToastSocialWidget.ToastSocialWidget_C.ApplyAdditionalStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetImage(); // Function ToastSocialWidget.ToastSocialWidget_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartIntro(); // Function ToastSocialWidget.ToastSocialWidget_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowText(struct FText Text, struct UCommonTextBlock* TextBlock); // Function ToastSocialWidget.ToastSocialWidget_C.ShowText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetToast(struct UFortUINotification* Toast); // Function ToastSocialWidget.ToastSocialWidget_C.SetToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayOutro(); // Function ToastSocialWidget.ToastSocialWidget_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ToastSocialWidget.ToastSocialWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function ToastSocialWidget.ToastSocialWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HandleOutroFinished(); // Function ToastSocialWidget.ToastSocialWidget_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleIntroFinished(); // Function ToastSocialWidget.ToastSocialWidget_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ToastSocialWidget.ToastSocialWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function ToastSocialWidget.ToastSocialWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSetToast(struct UFortUINotification* ToastNotification); // Function ToastSocialWidget.ToastSocialWidget_C.OnSetToast // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayOpenAnimation(); // Function ToastSocialWidget.ToastSocialWidget_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCursorModeChanged(bool bCursorModeEnabled); // Function ToastSocialWidget.ToastSocialWidget_C.OnCursorModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastSocialWidget.ToastSocialWidget_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnCancelNotification(); // Function ToastSocialWidget.ToastSocialWidget_C.OnCancelNotification // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTakeActionNotification(); // Function ToastSocialWidget.ToastSocialWidget_C.OnTakeActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUserStartedHoldActionNotification(); // Function ToastSocialWidget.ToastSocialWidget_C.OnUserStartedHoldActionNotification // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInputModeChanged(enum class ECommonInputType NewInputType); // Function ToastSocialWidget.ToastSocialWidget_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ToastSocialWidget(int32_t EntryPoint); // Function ToastSocialWidget.ToastSocialWidget_C.ExecuteUbergraph_ToastSocialWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnFinishedToast__DelegateSignature(); // Function ToastSocialWidget.ToastSocialWidget_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

