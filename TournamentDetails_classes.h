// WidgetBlueprintGeneratedClass TournamentDetails.TournamentDetails_C
// Size: 0x8d0 (Inherited: 0x6d0)
struct UTournamentDetails_C : UFortTournamentDetailsPage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6d0(0x08)
	struct UWidgetAnimation* HidePosterFade; // 0x6d8(0x08)
	struct UWidgetAnimation* CollapseLeaderboardSummary; // 0x6e0(0x08)
	struct UWidgetAnimation* FullScreenContent; // 0x6e8(0x08)
	struct UWidgetAnimation* Intro; // 0x6f0(0x08)
	struct UWidgetAnimation* BlurPoster; // 0x6f8(0x08)
	struct UWidgetAnimation* BlurBG; // 0x700(0x08)
	struct UWidgetAnimation* ShowEventWindowDetails; // 0x708(0x08)
	struct UWidgetAnimation* ShowDetails; // 0x710(0x08)
	struct UWidgetAnimation* PosterFlip; // 0x718(0x08)
	struct UBackgroundBlur* BackgroundBlur_Background; // 0x720(0x08)
	struct UBackgroundBlur* BackgroundBlur_PosterLayer; // 0x728(0x08)
	struct UEventsSimpleButton_C* Button_Back; // 0x730(0x08)
	struct UIconTextButton_C* Button_EnableMFA; // 0x738(0x08)
	struct UCloseButton_C* CloseButton; // 0x740(0x08)
	struct UCommonBorder* CommonBorder_BGText; // 0x748(0x08)
	struct UCommonBorder* CommonBorder_ScoringBG; // 0x750(0x08)
	struct UCommonBorder* CommonBorder_ScoringTitleBG; // 0x758(0x08)
	struct UCommonTextBlock* CommonTextBlock_TournamentDescription; // 0x760(0x08)
	struct UCommonTextBlock* CommonTextBlock_TournamentSubtitle; // 0x768(0x08)
	struct UCommonTextBlock* CommonTextBlock_UnlockCriteria; // 0x770(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_DetailsButtons; // 0x778(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_FullScreenSwitch; // 0x780(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_WindowsDetails; // 0x788(0x08)
	struct UEventsSimpleButton_C* DetailsPanelButton; // 0x790(0x08)
	struct UCommonWidgetSwitcherLegacy* DetailsSwitcher; // 0x798(0x08)
	struct UEventLeaderboardScreen_C* EventLeaderboardScreen; // 0x7a0(0x08)
	struct UEventLeaderboardSummary_C* EventLeaderboardSummary; // 0x7a8(0x08)
	struct UScrollBox* EventsScrollBox; // 0x7b0(0x08)
	struct UImage* Image_PosterFade; // 0x7b8(0x08)
	struct UCommonTextBlock* MFA_WarningText; // 0x7c0(0x08)
	struct UVerticalBox* MFAContainer; // 0x7c8(0x08)
	struct UOverlay* OverviewPanel; // 0x7d0(0x08)
	struct UEventsSimpleButton_C* OverviewPanelButton; // 0x7d8(0x08)
	struct URetainerBox* RetainerBox_BGText; // 0x7e0(0x08)
	struct URetainerBox* RetainerBox_TimeCallout; // 0x7e8(0x08)
	struct URichTextBlock* RichTextBlock_TournamentTimeCallout1; // 0x7f0(0x08)
	struct UScrollBox* ScrollBox_DetailAndRules; // 0x7f8(0x08)
	struct UShowdownEventTile_C* ShowdownEventTile; // 0x800(0x08)
	struct UShowdownEventTile_C* ShowdownEventTile_1; // 0x808(0x08)
	struct UShowdownEventTile_C* ShowdownEventTile_2; // 0x810(0x08)
	struct UShowdownEventTile_C* ShowdownEventTile_3; // 0x818(0x08)
	struct UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule; // 0x820(0x08)
	struct UShowdownTournamentDetailsScoringRule_C* ShowdownTournamentDetailsScoringRule_C_4; // 0x828(0x08)
	struct UCommonTextBlock* Text_PinUnlockScore; // 0x830(0x08)
	struct UTournamentEventWindowDetails_C* TournamentEventWindowDetails; // 0x838(0x08)
	struct UCommonTextBlock* TournamentMatchType; // 0x840(0x08)
	struct UTournamentPayoutModal_C* TournamentPayoutModal; // 0x848(0x08)
	struct UShowdownTournamentPosterBack_C* TournamentPosterBack; // 0x850(0x08)
	struct UShowdownTournamentPosterFront_C* TournamentPosterFront; // 0x858(0x08)
	struct UCommonTextBlock* TournamentRoundText; // 0x860(0x08)
	struct UCommonTextBlock* TournamentSubTitleBackground; // 0x868(0x08)
	struct UTournamentLiveGames_C* TournamentWatchList; // 0x870(0x08)
	struct UUniformGridPanel* UniformGridPanel_TournamentScoringRules; // 0x878(0x08)
	struct UHorizontalBox* UnlockPinContent; // 0x880(0x08)
	bool EventWindowDetailsShown; // 0x888(0x01)
	bool TournamentDetailsShown; // 0x889(0x01)
	char pad_88A[0x6]; // 0x88a(0x06)
	struct FMulticastInlineDelegate BackActionSelected; // 0x890(0x10)
	struct UWidget* firstActiveEvent; // 0x8a0(0x08)
	struct UWidget* lastFocusedEvent; // 0x8a8(0x08)
	bool isCenteringScrollBox; // 0x8b0(0x01)
	bool LeaderboardisCollapsed; // 0x8b1(0x01)
	char pad_8B2[0x6]; // 0x8b2(0x06)
	struct FString DefaultTournamentIdForScoringRules; // 0x8b8(0x10)
	struct ULeaderboardListViewWrapper_C* LeaderboardListViewWrapper; // 0x8c8(0x08)

	void CreateScoringWidgets(struct FString TournamentSeriesId, struct FString TournamentId); // Function TournamentDetails.TournamentDetails_C.CreateScoringWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHandleBack(bool bResult); // Function TournamentDetails.TournamentDetails_C.OnHandleBack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshViolators(); // Function TournamentDetails.TournamentDetails_C.RefreshViolators // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Handle_Back(bool PassThrough); // Function TournamentDetails.TournamentDetails_C.Handle_Back // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshDetailsPanel(); // Function TournamentDetails.TournamentDetails_C.RefreshDetailsPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshOverviewPanel(); // Function TournamentDetails.TournamentDetails_C.RefreshOverviewPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshScoringRules(); // Function TournamentDetails.TournamentDetails_C.RefreshScoringRules // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshEvents(); // Function TournamentDetails.TournamentDetails_C.RefreshEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Refresh(); // Function TournamentDetails.TournamentDetails_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshDataBP(); // Function TournamentDetails.TournamentDetails_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EventShowWindowDetails(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.EventShowWindowDetails // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimTransition(bool In, struct UWidgetAnimation* Animation, float PlaySpeed); // Function TournamentDetails.TournamentDetails_C.AnimTransition // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function TournamentDetails.TournamentDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void CloseTournamentDetails(); // Function TournamentDetails.TournamentDetails_C.CloseTournamentDetails // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CloseEventWindowDetails(); // Function TournamentDetails.TournamentDetails_C.CloseEventWindowDetails // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventDeselectWindows(struct UWidget* SelectedWidget); // Function TournamentDetails.TournamentDetails_C.EventDeselectWindows // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventCenterEventWindow(struct UWidget* Widget); // Function TournamentDetails.TournamentDetails_C.EventCenterEventWindow // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TournamentDetails.TournamentDetails_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EventStartCentering(); // Function TournamentDetails.TournamentDetails_C.EventStartCentering // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventStopCentering(); // Function TournamentDetails.TournamentDetails_C.EventStopCentering // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__BackButton2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void EventViewFullLeaderboard(struct FString TournamentId, struct FString EventId); // Function TournamentDetails.TournamentDetails_C.EventViewFullLeaderboard // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventToggleFullScreenContent(bool In); // Function TournamentDetails.TournamentDetails_C.EventToggleFullScreenContent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventCloseLeaderboard(); // Function TournamentDetails.TournamentDetails_C.EventCloseLeaderboard // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void EventViewPayout(struct FString EventWindowId, struct FString EventId); // Function TournamentDetails.TournamentDetails_C.EventViewPayout // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventclosePayout(); // Function TournamentDetails.TournamentDetails_C.EventclosePayout // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void No payouts(); // Function TournamentDetails.TournamentDetails_C.No payouts // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnActivateScreen(); // Function TournamentDetails.TournamentDetails_C.OnActivateScreen // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventViewLiveGames(); // Function TournamentDetails.TournamentDetails_C.EventViewLiveGames // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventBackoutLiveGames(); // Function TournamentDetails.TournamentDetails_C.EventBackoutLiveGames // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventFullScreenAnimOutFinished(); // Function TournamentDetails.TournamentDetails_C.EventFullScreenAnimOutFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentDetails.TournamentDetails_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TournamentDetails(int32_t EntryPoint); // Function TournamentDetails.TournamentDetails_C.ExecuteUbergraph_TournamentDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void BackActionSelected__DelegateSignature(); // Function TournamentDetails.TournamentDetails_C.BackActionSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

