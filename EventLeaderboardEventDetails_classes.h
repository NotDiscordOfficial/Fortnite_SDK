// WidgetBlueprintGeneratedClass EventLeaderboardEventDetails.EventLeaderboardEventDetails_C
// Size: 0x6d8 (Inherited: 0x6b8)
struct UEventLeaderboardEventDetails_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UCommonTextBlock* Text_EventName; // 0x6c0(0x08)
	struct UCommonTextBlock* Text_RegionName; // 0x6c8(0x08)
	struct UCommonTextBlock* Text_SessionName; // 0x6d0(0x08)

	void RefreshDataBP(); // Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventLeaderboardEventDetails(int32_t EntryPoint); // Function EventLeaderboardEventDetails.EventLeaderboardEventDetails_C.ExecuteUbergraph_EventLeaderboardEventDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

