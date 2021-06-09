// WidgetBlueprintGeneratedClass AlterationWidget.AlterationWidget_C
// Size: 0x388 (Inherited: 0x298)
struct UAlterationWidget_C : UFortAlterationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* TextFade; // 0x2a0(0x08)
	struct UCommonTextBlock* AlterationDescription; // 0x2a8(0x08)
	struct UCommonTextBlock* AlterationName; // 0x2b0(0x08)
	struct UCommonTextBlock* AlterationShortDescription; // 0x2b8(0x08)
	struct UHorizontalBox* ContentHBox; // 0x2c0(0x08)
	struct UCommonBorder* EvolutionBorder; // 0x2c8(0x08)
	struct UNamedSlot* ExtraContentSlot; // 0x2d0(0x08)
	struct UImage* ImageBackground; // 0x2d8(0x08)
	struct UImage* ImageLocked; // 0x2e0(0x08)
	struct UImage* ImageLockPerk; // 0x2e8(0x08)
	struct UCommonWidgetSwitcherLegacy* InfoSwitcher; // 0x2f0(0x08)
	struct UCommonTextBlock* LargeInfo; // 0x2f8(0x08)
	struct UCommonLazyImage* LazyImageAlteration; // 0x300(0x08)
	struct UCommonTextBlock* LevelRequired; // 0x308(0x08)
	struct UHorizontalBox* LockedBox; // 0x310(0x08)
	struct UCommonWidgetSwitcherLegacy* PerkModeSwitcher; // 0x318(0x08)
	struct USizeBox* PipSizeBox; // 0x320(0x08)
	struct UScaleBox* ScaleBoxIcon; // 0x328(0x08)
	struct UVerticalBox* SmallInfo; // 0x330(0x08)
	struct UImage* UpgradePips; // 0x338(0x08)
	bool bIncludeName; // 0x340(0x01)
	bool bIncludeShortDescription; // 0x341(0x01)
	bool bIncludeDescription; // 0x342(0x01)
	enum class EFortBrushSize IconSize; // 0x343(0x01)
	bool bUseLargeFormatName; // 0x344(0x01)
	bool ShouldShowRarity; // 0x345(0x01)
	char pad_346[0x2]; // 0x346(0x02)
	struct UCommonBorderStyle* EvolutionHighlightStyle; // 0x348(0x08)
	struct UCommonBorderStyle* StandardStyle; // 0x350(0x08)
	struct FLinearColor UnlockedColor; // 0x358(0x10)
	struct FLinearColor LockedColor; // 0x368(0x10)
	struct FLinearColor NewVar_1; // 0x378(0x10)

	struct TSoftObjectPtr<struct UTexture2D> GetValidLazyTexture(); // Function AlterationWidget.AlterationWidget_C.GetValidLazyTexture // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HasValidTexture(bool ValidBrush); // Function AlterationWidget.AlterationWidget_C.HasValidTexture // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void IsGamplaySlot(struct UFortAlterationItemDefinition* Alteration, bool Result); // Function AlterationWidget.AlterationWidget_C.IsGamplaySlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void TriggerTextAnimation(); // Function AlterationWidget.AlterationWidget_C.TriggerTextAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetWidgetSettings(bool bInIncludeName, bool bInIncludeShortDescription, bool bInIncludeDescription, enum class EFortBrushSize InIconSize, bool bInUseLargeFormatName, bool InShouldShowRarity); // Function AlterationWidget.AlterationWidget_C.SetWidgetSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitLockedLayout(); // Function AlterationWidget.AlterationWidget_C.InitLockedLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetEvolutionDetails(); // Function AlterationWidget.AlterationWidget_C.SetEvolutionDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePips(); // Function AlterationWidget.AlterationWidget_C.UpdatePips // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitDescriptiveText(); // Function AlterationWidget.AlterationWidget_C.InitDescriptiveText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitIcon(); // Function AlterationWidget.AlterationWidget_C.InitIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool ShouldFadeAlteration(); // Function AlterationWidget.AlterationWidget_C.ShouldFadeAlteration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct FLinearColor GetHighlightColor(); // Function AlterationWidget.AlterationWidget_C.GetHighlightColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnSetup(); // Function AlterationWidget.AlterationWidget_C.OnSetup // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AlterationWidget(int32_t EntryPoint); // Function AlterationWidget.AlterationWidget_C.ExecuteUbergraph_AlterationWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

