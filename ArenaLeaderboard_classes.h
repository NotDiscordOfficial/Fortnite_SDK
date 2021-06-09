// WidgetBlueprintGeneratedClass ArenaLeaderboard.ArenaLeaderboard_C
// Size: 0x450 (Inherited: 0x418)
struct UArenaLeaderboard_C : UFortPersistentLeaderboardScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UBackgroundBlur* BackgroundBlur_PosterLayer_2; // 0x420(0x08)
	struct UEventLeaderboardEntryDetails_C* Details_EntryDisplay; // 0x428(0x08)
	struct UImage* Image_Bg; // 0x430(0x08)
	struct UImage* Image_PosterFade_3; // 0x438(0x08)
	struct USafeZone* SafeZone_1; // 0x440(0x08)
	struct UCommonTextBlock* Text_EventName; // 0x448(0x08)

	void Initialize Children For Event(struct FString Event Id, struct FString Event Window Id); // Function ArenaLeaderboard.ArenaLeaderboard_C.Initialize Children For Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLeaderboardEntrySelected(struct UFortEventLeaderboardEntryData* EntryData); // Function ArenaLeaderboard.ArenaLeaderboard_C.OnLeaderboardEntrySelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function ArenaLeaderboard.ArenaLeaderboard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ShowMyStats(struct UCommonButtonLegacy* Button); // Function ArenaLeaderboard.ArenaLeaderboard_C.ShowMyStats // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupForEvent(struct FString EventId, struct FString EventWindowId); // Function ArenaLeaderboard.ArenaLeaderboard_C.SetupForEvent // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnColorize(struct FFortTournamentDisplayInfo ColorInfo); // Function ArenaLeaderboard.ArenaLeaderboard_C.OnColorize // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function ArenaLeaderboard.ArenaLeaderboard_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Item Double-Clicked(struct UObject* Item); // Function ArenaLeaderboard.ArenaLeaderboard_C.Item Double-Clicked // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ArenaLeaderboard.ArenaLeaderboard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ArenaLeaderboard(int32_t EntryPoint); // Function ArenaLeaderboard.ArenaLeaderboard_C.ExecuteUbergraph_ArenaLeaderboard // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

