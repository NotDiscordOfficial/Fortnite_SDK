// WidgetBlueprintGeneratedClass EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C
// Size: 0x6f0 (Inherited: 0x6b8)
struct UEventLeaderboardPlayerPerformance_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UEventsSimpleButton_C* Button_MyPosition; // 0x6c0(0x08)
	struct UCommonTextBlock* CommonTextBlock_1; // 0x6c8(0x08)
	struct UCommonTextBlock* CommonTextBlock_2; // 0x6d0(0x08)
	struct UHorizontalBox* HorizontalBox_Container; // 0x6d8(0x08)
	struct UCommonTextBlock* Text_PlayerPerformance; // 0x6e0(0x08)
	struct UCommonTextBlock* Text_PlayerScore; // 0x6e8(0x08)

	void RefreshDataBP(); // Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventLeaderboardPlayerPerformance(int32_t EntryPoint); // Function EventLeaderboardPlayerPerformance.EventLeaderboardPlayerPerformance_C.ExecuteUbergraph_EventLeaderboardPlayerPerformance // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

