// WidgetBlueprintGeneratedClass LeaderboardTab.LeaderboardTab_C
// Size: 0x358 (Inherited: 0x338)
struct ULeaderboardTab_C : UFortLeaderboardViewTab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x340(0x08)
	struct UEventLeaderboardHeader_C* EventLeaderboardHeaderDetails; // 0x348(0x08)
	struct UCommonTextBlock* Text_NoLeaderboardEntries; // 0x350(0x08)

	void Colorize(struct FFortTournamentDisplayInfo Color Info); // Function LeaderboardTab.LeaderboardTab_C.Colorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Event(struct FString EventId, struct FString EventWindowId); // Function LeaderboardTab.LeaderboardTab_C.Set Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LeaderboardTab(int32_t EntryPoint); // Function LeaderboardTab.LeaderboardTab_C.ExecuteUbergraph_LeaderboardTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

