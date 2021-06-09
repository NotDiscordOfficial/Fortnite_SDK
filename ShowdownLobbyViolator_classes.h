// WidgetBlueprintGeneratedClass ShowdownLobbyViolator.ShowdownLobbyViolator_C
// Size: 0x711 (Inherited: 0x6b8)
struct UShowdownLobbyViolator_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UWidgetAnimation* Intro; // 0x6c0(0x08)
	struct UCommonBorder* CommonBorder_DetailsBG; // 0x6c8(0x08)
	struct UCommonBorder* CommonBorder_HighlightBorder; // 0x6d0(0x08)
	struct UCommonBorder* CommonBorder_TopContainer; // 0x6d8(0x08)
	struct UCommonTextBlock* CommonTextBlock_TimeRemainingDesc; // 0x6e0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Status; // 0x6e8(0x08)
	struct UImage* Image_BGFillColor; // 0x6f0(0x08)
	struct UImage* Image_InnerTriangle; // 0x6f8(0x08)
	struct UImage* Image_OuterTriangle; // 0x700(0x08)
	struct UCommonTextBlock* Text_ShowdownTitle; // 0x708(0x08)
	bool runOnce; // 0x710(0x01)

	void RefreshDataBP(); // Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ShowdownLobbyViolator(int32_t EntryPoint); // Function ShowdownLobbyViolator.ShowdownLobbyViolator_C.ExecuteUbergraph_ShowdownLobbyViolator // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

