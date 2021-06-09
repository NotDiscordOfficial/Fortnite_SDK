// WidgetBlueprintGeneratedClass IncomingFriendRequestToast.IncomingFriendRequestToast_C
// Size: 0x329 (Inherited: 0x2a8)
struct UIncomingFriendRequestToast_C : UFortIncomingFriendRequestToast {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* Outro_New; // 0x2b0(0x08)
	struct UWidgetAnimation* Intro; // 0x2b8(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x2c0(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x2c8(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x2d0(0x08)
	struct UCommonTextBlock* Description; // 0x2d8(0x08)
	struct UFortLazyImage* NotificationImage; // 0x2e0(0x08)
	struct UIconTextButton_C* OpenButton; // 0x2e8(0x08)
	struct UTextBlock* TextBlock_1; // 0x2f0(0x08)
	struct UCommonTextBlock* Title; // 0x2f8(0x08)
	struct UFortUINotification* ToastNotification; // 0x300(0x08)
	float AnimationFinishedDelay; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x310(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x320(0x08)
	bool bActionTaken; // 0x328(0x01)

	void SetupAnimBindings(bool Unbind); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	enum class ESlateVisibility GetOpenButtonVisibility(); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.GetOpenButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void StartIntro(); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowText(struct FText Text, struct UCommonTextBlock* TextBlock); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.ShowText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetToast(struct UFortUINotification* Toast); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.SetToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayOutro(); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HandleOutroFinished(); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleIntroFinished(); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSetToast(struct UFortUINotification* ToastNotification); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.OnSetToast // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayOpenAnimation(); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_IncomingFriendRequestToast(int32_t EntryPoint); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.ExecuteUbergraph_IncomingFriendRequestToast // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnFinishedToast__DelegateSignature(); // Function IncomingFriendRequestToast.IncomingFriendRequestToast_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

