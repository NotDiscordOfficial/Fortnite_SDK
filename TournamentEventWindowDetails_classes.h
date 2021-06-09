// WidgetBlueprintGeneratedClass TournamentEventWindowDetails.TournamentEventWindowDetails_C
// Size: 0x7b0 (Inherited: 0x6b8)
struct UTournamentEventWindowDetails_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UWidgetAnimation* PayoutHover; // 0x6c0(0x08)
	struct UWidgetAnimation* LeaderboardHover; // 0x6c8(0x08)
	struct UWidgetAnimation* RefreshData; // 0x6d0(0x08)
	struct UWidgetAnimation* RefreshTime; // 0x6d8(0x08)
	struct UWidgetAnimation* RefreshDate; // 0x6e0(0x08)
	struct UBorder* Border_SubheaderBG; // 0x6e8(0x08)
	struct UEventsSimpleButton_C* Button_Leaderboard; // 0x6f0(0x08)
	struct UEventsSimpleButton_C* Button_Payout; // 0x6f8(0x08)
	struct UCommonBorder* CommonBorder_LeaderboardButtonBG; // 0x700(0x08)
	struct UCommonBorder* CommonBorder_PayoutButtonBG; // 0x708(0x08)
	struct UCommonBorder* CommonBorder_StartingScore; // 0x710(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_isFuture; // 0x718(0x08)
	struct UEventScoreRow_C* EliminationsInfo; // 0x720(0x08)
	struct UCommonTextBlock* EventDateText; // 0x728(0x08)
	struct UHorizontalBox* HorizontalBox_SquadInfoContainer; // 0x730(0x08)
	struct UEventScoreBigStat_C* MatchesPlayedInfo; // 0x738(0x08)
	struct UCommonTextBlock* MatchTypeText; // 0x740(0x08)
	struct UOverlay* Overlay_LeaderboardButton; // 0x748(0x08)
	struct UOverlay* Overlay_PayoutButton; // 0x750(0x08)
	struct UEventScoreRow_C* PlacementInfo; // 0x758(0x08)
	struct UEventScoreBigStat_C* PointsScoredInfo; // 0x760(0x08)
	struct URichTextBlock* RichTextBlock_OtherReason; // 0x768(0x08)
	struct UCommonTextBlock* Text_BusFare; // 0x770(0x08)
	struct UCommonTextBlock* TournamentContextText; // 0x778(0x08)
	struct UEventScoreRow_C* VictoryRoyaleInfo; // 0x780(0x08)
	struct FMulticastInlineDelegate ViewLeaderboard; // 0x788(0x10)
	bool AllowLeaderboardAccess; // 0x798(0x01)
	char pad_799[0x7]; // 0x799(0x07)
	struct FMulticastInlineDelegate ViewPayouts; // 0x7a0(0x10)

	void RefreshDataBP(); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Payout_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Payout_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Payout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.BndEvt__Button_Payout_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TournamentEventWindowDetails(int32_t EntryPoint); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ExecuteUbergraph_TournamentEventWindowDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void ViewPayouts__DelegateSignature(struct FString EventWindowId, struct FString EventId); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ViewPayouts__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ViewLeaderboard__DelegateSignature(struct FString TournamentId, struct FString EventId); // Function TournamentEventWindowDetails.TournamentEventWindowDetails_C.ViewLeaderboard__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

