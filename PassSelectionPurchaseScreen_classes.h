// WidgetBlueprintGeneratedClass PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C
// Size: 0x7d8 (Inherited: 0x700)
struct UPassSelectionPurchaseScreen_C : UAthenaPassPurchaseScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct UWidgetAnimation* FadeOnSubsButtons; // 0x708(0x08)
	struct UWidgetAnimation* FadeBetweenMainScreens; // 0x710(0x08)
	struct UWidgetAnimation* FadeOffBPButtons; // 0x718(0x08)
	struct UWidgetAnimation* ReverseShowPurchaseConfirmation; // 0x720(0x08)
	struct UWidgetAnimation* OnShowPurchaseConfirmation_Final; // 0x728(0x08)
	struct UWidgetAnimation* ShowConfirmationButtons; // 0x730(0x08)
	struct UWidgetAnimation* OnIntro; // 0x738(0x08)
	struct USizeBox* BattleBundle_text_wrap; // 0x740(0x08)
	struct UBattlePassPurchaseDetailsScreen_C* BattlePassPurchaseDetailsScreen; // 0x748(0x08)
	struct UHorizontalBox* ConfirmationButtons; // 0x750(0x08)
	struct UVerticalBox* MainButtonsPadding; // 0x758(0x08)
	struct UOverlay* Overlay_BattleBundleRedirect; // 0x760(0x08)
	struct UVerticalBox* Overlay_SubDisclaimer; // 0x768(0x08)
	struct USafeZone* SafeZone_2; // 0x770(0x08)
	struct USafeZone* SafeZone_3; // 0x778(0x08)
	struct USafeZone* SafeZone_4; // 0x780(0x08)
	struct USoundBase* BattlePass_Stinger; // 0x788(0x08)
	struct UAudioComponent* BPMusic; // 0x790(0x08)
	bool DidTransitionHappen; // 0x798(0x01)
	char pad_799[0x7]; // 0x799(0x07)
	struct FText JoinText; // 0x7a0(0x18)
	struct UAudioComponent* CrewSplashAudio; // 0x7b8(0x08)
	struct UAudioComponent* BattlepassSplashAudio; // 0x7c0(0x08)
	struct ABattlepass_MusicController_Quartz_C* MusicController_Quartz; // 0x7c8(0x08)
	struct FTimerHandle MusicControllerHandle; // 0x7d0(0x08)

	void StopAllBattlePassMusic(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.StopAllBattlePassMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpSellMusic(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.UpSellMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BattlePassMusic(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.BattlePassMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SubscriptionMusic(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.SubscriptionMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowBattlePassIntro(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.ShowBattlePassIntro // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePurchasButtonColorShiftBattlePass(bool Instant); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.HandlePurchasButtonColorShiftBattlePass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePurchasButtonColorShiftSubscriptions(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.HandlePurchasButtonColorShiftSubscriptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePurchaseButtonHoverStateSubscriptions(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.HandlePurchaseButtonHoverStateSubscriptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePurchaseButtonHoverStateBattlePass(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.HandlePurchaseButtonHoverStateBattlePass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetAnimationStates(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.ResetAnimationStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPurchaseClicked(bool bPlayForward, bool bBuyBattleBundle); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.OnPurchaseClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLeaveScreen(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.OnLeaveScreen // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFinalPurchaseConfirmed(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.OnFinalPurchaseConfirmed // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBattlePassSelected(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.OnBattlePassSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSubscriptionSelected(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.OnSubscriptionSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void TriggerSubsTransition(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.TriggerSubsTransition // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayBattlepassSplashAudio(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.PlayBattlepassSplashAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlaySubscriptionSplashAudio(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.PlaySubscriptionSplashAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CallMusicController(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.CallMusicController // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetAnimations(); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.ResetAnimations // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PassSelectionPurchaseScreen(int32_t EntryPoint); // Function PassSelectionPurchaseScreen.PassSelectionPurchaseScreen_C.ExecuteUbergraph_PassSelectionPurchaseScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

