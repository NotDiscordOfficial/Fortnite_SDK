// WidgetBlueprintGeneratedClass BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C
// Size: 0x311 (Inherited: 0x298)
struct UBattlePassPageUnlockedToast_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* Outro_New; // 0x2a0(0x08)
	struct UWidgetAnimation* Intro; // 0x2a8(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x2b0(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x2b8(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x2c0(0x08)
	struct UCommonTextBlock* Description; // 0x2c8(0x08)
	struct UFortLazyImage* NotificationImage; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_1; // 0x2d8(0x08)
	struct UCommonTextBlock* Title; // 0x2e0(0x08)
	struct UFortUINotification* ToastNotification; // 0x2e8(0x08)
	float AnimationFinishedDelay; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x2f8(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x308(0x08)
	bool bActionTaken; // 0x310(0x01)

	void SetupAnimBindings(bool Unbind); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyAdditionalStyling(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ApplyAdditionalStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetImage(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	enum class ESlateVisibility GetOpenButtonVisibility(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.GetOpenButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void StartIntro(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowText(struct FText Text, struct UCommonTextBlock* TextBlock); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ShowText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetToast(struct UFortUINotification* Toast); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetToast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayOutro(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HandleOutroFinished(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleIntroFinished(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSetToast(struct UFortUINotification* ToastNotification); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnSetToast // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayOpenAnimation(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BattlePassPageUnlockedToast(int32_t EntryPoint); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ExecuteUbergraph_BattlePassPageUnlockedToast // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnFinishedToast__DelegateSignature(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

