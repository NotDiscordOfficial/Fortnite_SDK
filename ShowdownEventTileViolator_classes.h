// WidgetBlueprintGeneratedClass ShowdownEventTileViolator.ShowdownEventTileViolator_C
// Size: 0x6f1 (Inherited: 0x6b8)
struct UShowdownEventTileViolator_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UWidgetAnimation* Focus; // 0x6c0(0x08)
	struct UCommonTextBlock* CommonTextBlock_1; // 0x6c8(0x08)
	struct UCommonTextBlock* CommonTextBlock_RoundNumber; // 0x6d0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EventState; // 0x6d8(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Proximity; // 0x6e0(0x08)
	struct ULiveViolator_C* LiveViolator; // 0x6e8(0x08)
	bool OverrideDoNotShowRound; // 0x6f0(0x01)

	void Construct(); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void RefreshDataBP(); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void RefreshViolatorData(); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.RefreshViolatorData // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ShowdownEventTileViolator(int32_t EntryPoint); // Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.ExecuteUbergraph_ShowdownEventTileViolator // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

