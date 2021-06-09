// WidgetBlueprintGeneratedClass ShowdownPin.ShowdownPin_C
// Size: 0x74a (Inherited: 0x6b8)
struct UShowdownPin_C : UFortShowdownPin {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UWidgetAnimation* Hover; // 0x6c0(0x08)
	struct UWidgetAnimation* Focus; // 0x6c8(0x08)
	struct UWidgetAnimation* Reveal; // 0x6d0(0x08)
	struct UCommonTextBlock* CommonTextBlock_NoPinPts; // 0x6d8(0x08)
	struct UCommonTextBlock* CommonTextBlock_PinPts; // 0x6e0(0x08)
	struct UImage* Image_PinShadow; // 0x6e8(0x08)
	struct UOverlay* NoPinContent; // 0x6f0(0x08)
	struct UCommonLazyImage* NoPinIcon; // 0x6f8(0x08)
	struct UCommonNumericTextBlock* NoPinScoreText; // 0x700(0x08)
	struct UCommonLazyImage* NoPinShadow; // 0x708(0x08)
	struct UOverlay* PinContent; // 0x710(0x08)
	struct UImage* PinIcon; // 0x718(0x08)
	struct UCommonWidgetSwitcherLegacy* PinInfoSwitcher; // 0x720(0x08)
	struct UCommonTextBlock* PinScoreText; // 0x728(0x08)
	struct UVerticalBox* VerticalBox_PointValuesProgress; // 0x730(0x08)
	struct UVerticalBox* VerticalBoxPointValues; // 0x738(0x08)
	bool bRepresentsTournamentBestPin; // 0x740(0x01)
	bool DEVShowPin; // 0x741(0x01)
	bool HidePoints; // 0x742(0x01)
	char pad_743[0x1]; // 0x743(0x01)
	int32_t DEVPinScore; // 0x744(0x04)
	bool colorSilhouette; // 0x748(0x01)
	bool hideBackplate; // 0x749(0x01)

	void Refresh(); // Function ShowdownPin.ShowdownPin_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshDataBP(); // Function ShowdownPin.ShowdownPin_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function ShowdownPin.ShowdownPin_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EventSetTier(int32_t Score); // Function ShowdownPin.ShowdownPin_C.EventSetTier // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventFixPts(int32_t Points); // Function ShowdownPin.ShowdownPin_C.EventFixPts // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(); // Function ShowdownPin.ShowdownPin_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventRevealAnim(); // Function ShowdownPin.ShowdownPin_C.EventRevealAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ShowdownPin(int32_t EntryPoint); // Function ShowdownPin.ShowdownPin_C.ExecuteUbergraph_ShowdownPin // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

