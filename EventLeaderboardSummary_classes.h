// WidgetBlueprintGeneratedClass EventLeaderboardSummary.EventLeaderboardSummary_C
// Size: 0x760 (Inherited: 0x6b8)
struct UEventLeaderboardSummary_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UWidgetAnimation* ViewAllHover; // 0x6c0(0x08)
	struct UIconTextButton_C* Button_ViewAll; // 0x6c8(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x6d0(0x08)
	struct UCommonBorder* CommonBorder_ScoringTitleBG; // 0x6d8(0x08)
	struct UCommonBorder* CommonBorder_ViewAllBG; // 0x6e0(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x6e8(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry; // 0x6f0(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry_1; // 0x6f8(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry_2; // 0x700(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry_3; // 0x708(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry_4; // 0x710(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry_5; // 0x718(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry_6; // 0x720(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry_7; // 0x728(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry_8; // 0x730(0x08)
	struct UEventLeaderboardEntry_C* EventLeaderboardEntry_9; // 0x738(0x08)
	struct UOverlay* Overlay_SummaryContent; // 0x740(0x08)
	struct UCommonTextBlock* Text_ViewFullLeaderboard; // 0x748(0x08)
	struct FMulticastInlineDelegate EventViewFullLeaderboard; // 0x750(0x10)

	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void RefreshDataBP(); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventLeaderboardSummary(int32_t EntryPoint); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.ExecuteUbergraph_EventLeaderboardSummary // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void EventViewFullLeaderboard__DelegateSignature(struct FString TournamentId, struct FString EventId); // Function EventLeaderboardSummary.EventLeaderboardSummary_C.EventViewFullLeaderboard__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

