// WidgetBlueprintGeneratedClass ToastWidget_MinorError.ToastWidget_MinorError_C
// Size: 0x339 (Inherited: 0x298)
struct UToastWidget_MinorError_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* Outro_New; // 0x2a0(0x08)
	struct UWidgetAnimation* Intro_213; // 0x2a8(0x08)
	struct UWidgetAnimation* Intro_4115; // 0x2b0(0x08)
	struct UWidgetAnimation* Intro_new2; // 0x2b8(0x08)
	struct UWidgetAnimation* Outro; // 0x2c0(0x08)
	struct UWidgetAnimation* Intro; // 0x2c8(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x2d0(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x2d8(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x2e0(0x08)
	struct UCommonTextBlock* Description; // 0x2e8(0x08)
	struct UImage* NotificationImage; // 0x2f0(0x08)
	struct UIconTextButton_C* OpenButton; // 0x2f8(0x08)
	struct UCommonTextBlock* ProgrammerNote; // 0x300(0x08)
	struct UCommonTextBlock* Title; // 0x308(0x08)
	struct UFortUINotification* ToastNotification; // 0x310(0x08)
	float AnimationFinishedDelay; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x320(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x330(0x08)
	bool bActionTaken; // 0x338(0x01)

	void SetupAnimBindings(bool Unbind); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyAdditionalStyling(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.ApplyAdditionalStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	enum class ESlateVisibility GetOpenButtonVisibility(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.GetOpenButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void StartIntro(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowText(struct FText Text, struct UCommonTextBlock* TextBlock); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.ShowText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetToast(struct UFortUINotification* Toast); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.SetToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayOutro(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HandleOutroFinished(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleIntroFinished(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSetToast(struct UFortUINotification* ToastNotification); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnSetToast // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayOpenAnimation(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ToastWidget_MinorError(int32_t EntryPoint); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.ExecuteUbergraph_ToastWidget_MinorError // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnFinishedToast__DelegateSignature(); // Function ToastWidget_MinorError.ToastWidget_MinorError_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

