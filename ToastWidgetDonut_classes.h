// WidgetBlueprintGeneratedClass ToastWidgetDonut.ToastWidgetDonut_C
// Size: 0x301 (Inherited: 0x298)
struct UToastWidgetDonut_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* Outro_New; // 0x2a0(0x08)
	struct UWidgetAnimation* Intro; // 0x2a8(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x2b0(0x08)
	struct UCommonTextBlock* Description; // 0x2b8(0x08)
	struct UImage* Image_135; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2c8(0x08)
	struct UCommonTextBlock* Title; // 0x2d0(0x08)
	struct UFortUINotification* ToastNotification; // 0x2d8(0x08)
	float AnimationFinishedDelay; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x2e8(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x2f8(0x08)
	bool bActionTaken; // 0x300(0x01)

	void SetupAnimBindings(bool Unbind); // Function ToastWidgetDonut.ToastWidgetDonut_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyAdditionalStyling(); // Function ToastWidgetDonut.ToastWidgetDonut_C.ApplyAdditionalStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetImage(); // Function ToastWidgetDonut.ToastWidgetDonut_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	enum class ESlateVisibility GetOpenButtonVisibility(); // Function ToastWidgetDonut.ToastWidgetDonut_C.GetOpenButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void StartIntro(); // Function ToastWidgetDonut.ToastWidgetDonut_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowText(struct FText Text, struct UCommonTextBlock* TextBlock); // Function ToastWidgetDonut.ToastWidgetDonut_C.ShowText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetToast(struct UFortUINotification* Toast); // Function ToastWidgetDonut.ToastWidgetDonut_C.SetToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleOutroFinished(); // Function ToastWidgetDonut.ToastWidgetDonut_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayOutro(); // Function ToastWidgetDonut.ToastWidgetDonut_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleIntroFinished(); // Function ToastWidgetDonut.ToastWidgetDonut_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ToastWidgetDonut.ToastWidgetDonut_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function ToastWidgetDonut.ToastWidgetDonut_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSetToast(struct UFortUINotification* ToastNotification); // Function ToastWidgetDonut.ToastWidgetDonut_C.OnSetToast // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayOpenAnimation(); // Function ToastWidgetDonut.ToastWidgetDonut_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ToastWidgetDonut(int32_t EntryPoint); // Function ToastWidgetDonut.ToastWidgetDonut_C.ExecuteUbergraph_ToastWidgetDonut // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnFinishedToast__DelegateSignature(); // Function ToastWidgetDonut.ToastWidgetDonut_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

