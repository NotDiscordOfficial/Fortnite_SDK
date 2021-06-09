// WidgetBlueprintGeneratedClass LeaderboardListViewWrapper.LeaderboardListViewWrapper_C
// Size: 0x518 (Inherited: 0x330)
struct ULeaderboardListViewWrapper_C : UFortLeaderboardListViewWrapper {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UEventsSimpleButton_C* Button_Filter; // 0x338(0x08)
	struct UEventsSimpleButton_C* Button_Position; // 0x340(0x08)
	struct UCommonBorder* CommonBorder_OptionsBarBG; // 0x348(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_FliterOptions; // 0x350(0x08)
	struct UEventLeaderboardPlayerPerformance_C* EventLeaderboardPlayerPerformance; // 0x358(0x08)
	struct UImage* Image_1; // 0x360(0x08)
	struct UVerticalBox* VerticalBox; // 0x368(0x08)
	struct FFortTournamentDisplayInfo DisplayInfo; // 0x370(0x1a8)

	void Set Display Info(struct FFortTournamentDisplayInfo DisplayInfo); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Display Info // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Event(struct FString EventId, struct FString EventWindowId); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLeaderboardDisplayTypeChanged(enum class ELeaderboardDisplayType NewDisplayType); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.OnLeaderboardDisplayTypeChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LeaderboardListViewWrapper(int32_t EntryPoint); // Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.ExecuteUbergraph_LeaderboardListViewWrapper // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

