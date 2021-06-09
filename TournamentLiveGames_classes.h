// WidgetBlueprintGeneratedClass TournamentLiveGames.TournamentLiveGames_C
// Size: 0x460 (Inherited: 0x3c8)
struct UTournamentLiveGames_C : UFortTournamentLiveGames {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* Intro; // 0x3d0(0x08)
	struct UEventsSimpleButton_C* BackButton; // 0x3d8(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x3e0(0x08)
	struct UCommonBorder* CommonBorder_OptionsBarBG; // 0x3e8(0x08)
	struct UCommonBorder* CommonBorder_ScoringTitleBG; // 0x3f0(0x08)
	struct UVerticalBox* Content_LeaderboardEntries; // 0x3f8(0x08)
	struct UHorizontalBox* Content_LoadingEntries; // 0x400(0x08)
	struct UCommonBorder* Content_NoLeaderboardEntries; // 0x408(0x08)
	struct UEventLeaderboardEventDetails_C* EventLeaderboardEventDetails; // 0x410(0x08)
	struct UImage* Image_1; // 0x418(0x08)
	struct UImage* Image_OnlineStatus; // 0x420(0x08)
	struct UOverlay* Overlay_OnlineStatus; // 0x428(0x08)
	struct USafeZone* SafeZone_2; // 0x430(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_LeaderboardEntries; // 0x438(0x08)
	struct UCommonTextBlock* Text_NoLeaderboardEntries; // 0x440(0x08)
	struct UCommonTextBlock* Text_RoundTitle; // 0x448(0x08)
	struct FMulticastInlineDelegate CallEventLiveGamesBack; // 0x450(0x10)

	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TournamentLiveGames.TournamentLiveGames_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Init(struct FString TournamentId, struct FString EventId); // Function TournamentLiveGames.TournamentLiveGames_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function TournamentLiveGames.TournamentLiveGames_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NotifyNoLiveGames(); // Function TournamentLiveGames.TournamentLiveGames_C.NotifyNoLiveGames // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void NotifyLoadingMoreGames(bool bIsLoading); // Function TournamentLiveGames.TournamentLiveGames_C.NotifyLoadingMoreGames // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleViewLiveGames(); // Function TournamentLiveGames.TournamentLiveGames_C.HandleViewLiveGames // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TournamentLiveGames(int32_t EntryPoint); // Function TournamentLiveGames.TournamentLiveGames_C.ExecuteUbergraph_TournamentLiveGames // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void CallEventLiveGamesBack__DelegateSignature(); // Function TournamentLiveGames.TournamentLiveGames_C.CallEventLiveGamesBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

