// WidgetBlueprintGeneratedClass TopBar.TopBar_C
// Size: 0x470 (Inherited: 0x430)
struct UTopBar_C : UAthenaTopBar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UWidgetAnimation* IntroTabLabel; // 0x438(0x08)
	struct UGameFeatureStatus_C* GameFeatureStatus_HighResTextureDownload; // 0x440(0x08)
	struct UHorizontalBox* HorizontalBox_TopContent; // 0x448(0x08)
	struct UHorizontalBox* MainNav; // 0x450(0x08)
	struct USizeBox* MobileTabTitle; // 0x458(0x08)
	struct USafeZone* SafeZone_8; // 0x460(0x08)
	struct Uwindowchromebuttons_C* windowchromebuttons; // 0x468(0x08)

	void SetMainNavVisibility(enum class ESlateVisibility NewVisibility); // Function TopBar.TopBar_C.SetMainNavVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTopTabsVisibility(enum class ESlateVisibility NewVisibility); // Function TopBar.TopBar_C.SetTopTabsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateMTXButton(); // Function TopBar.TopBar_C.UpdateMTXButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function TopBar.TopBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnMobileTabLabelChanged(); // Function TopBar.TopBar_C.OnMobileTabLabelChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TopBar(int32_t EntryPoint); // Function TopBar.TopBar_C.ExecuteUbergraph_TopBar // (Final|UbergraphFunction) // @ game+0xda7c34
};

