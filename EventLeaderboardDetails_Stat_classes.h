// WidgetBlueprintGeneratedClass EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C
// Size: 0x284 (Inherited: 0x260)
struct UEventLeaderboardDetails_Stat_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* UpdateStat; // 0x268(0x08)
	struct UCommonTextBlock* Text_StatName; // 0x270(0x08)
	struct UCommonTextBlock* Text_StatValue; // 0x278(0x08)
	int32_t StatItemIndex; // 0x280(0x04)

	void SetStatData(struct FText Name, float Value, int32_t NumFractionalDigits); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.SetStatData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EventStatAnim(); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.EventStatAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventLeaderboardDetails_Stat(int32_t EntryPoint); // Function EventLeaderboardDetails_Stat.EventLeaderboardDetails_Stat_C.ExecuteUbergraph_EventLeaderboardDetails_Stat // (Final|UbergraphFunction) // @ game+0xda7c34
};

