// WidgetBlueprintGeneratedClass EventLeaderboardScreen.EventLeaderboardScreen_C
// Size: 0x670 (Inherited: 0x438)
struct UEventLeaderboardScreen_C : UFortEventLeaderboardScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct UEventsSimpleButton_C* Button_Back; // 0x440(0x08)
	struct UCloseButton_C* CloseButton; // 0x448(0x08)
	struct UEventLeaderboardEntryDetails_C* EntryDetails; // 0x450(0x08)
	struct UEventLeaderboardEventDetails_C* EventLeaderboardEventDetails; // 0x458(0x08)
	struct UHorizontalBox* HorizontalBox_Tab; // 0x460(0x08)
	struct UOverlay* Overlay_EntryDetailsVisibility; // 0x468(0x08)
	struct USafeZone* SafeZone_1; // 0x470(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry1; // 0x478(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry2; // 0x480(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry3; // 0x488(0x08)
	struct UFortEventLeaderboardEntryData* DebugLeaderboardEntry4; // 0x490(0x08)
	struct TArray<struct UFortEventLeaderboardEntryData*> DebugLeaderboardEntries; // 0x498(0x10)
	struct FMulticastInlineDelegate EventCloseButton; // 0x4a8(0x10)
	struct FMulticastInlineDelegate EventViewLiveGames; // 0x4b8(0x10)
	struct FFortTournamentDisplayInfo CurrentDisplayInfo; // 0x4c8(0x1a8)

	void Init(struct FString EventWindowId, struct FString TournamentSeriesId); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventIntro(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLeaderboardEntrySelected(struct UFortEventLeaderboardEntryData* EntryData); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Event Leaderboard Screen On Activated(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Event Leaderboard Screen On Activated // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ShowMyStats(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.ShowMyStats // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Item Double-Clicked(struct UObject* Item); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.Item Double-Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTabVisibilityChange(bool bIsVisible); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnTabVisibilityChange // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void InitializeTabButton(struct UCommonButtonLegacy* TabButton, struct FText TabText); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.InitializeTabButton // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(struct FFortTournamentDisplayInfo TournamentDisplayInfo); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDetailsPanelUpdate(bool bShowDetailsPanel); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnDetailsPanelUpdate // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventLeaderboardScreen(int32_t EntryPoint); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void EventViewLiveGames__DelegateSignature(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventViewLiveGames__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventCloseButton__DelegateSignature(); // Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

