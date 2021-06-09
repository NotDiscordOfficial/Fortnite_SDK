// WidgetBlueprintGeneratedClass EventLeaderboardHeader.EventLeaderboardHeader_C
// Size: 0x6d0 (Inherited: 0x6b8)
struct UEventLeaderboardHeader_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UCommonBorder* CommonBorder_ScoringTitleBG; // 0x6c0(0x08)
	struct UCommonTextBlock* Text_RoundTitle; // 0x6c8(0x08)

	void RefreshDataBP(); // Function EventLeaderboardHeader.EventLeaderboardHeader_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventLeaderboardHeader(int32_t EntryPoint); // Function EventLeaderboardHeader.EventLeaderboardHeader_C.ExecuteUbergraph_EventLeaderboardHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

