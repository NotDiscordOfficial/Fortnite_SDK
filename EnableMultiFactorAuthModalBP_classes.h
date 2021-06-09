// WidgetBlueprintGeneratedClass EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C
// Size: 0x578 (Inherited: 0x500)
struct UEnableMultiFactorAuthModalBP_C : UEnableMultiFactorModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UWidgetAnimation* Intro_V2; // 0x508(0x08)
	struct UWidgetAnimation* ArrowPulse; // 0x510(0x08)
	struct UWidgetAnimation* Intro; // 0x518(0x08)
	struct UCommonTextBlock* ConsoleTextBlock; // 0x520(0x08)
	struct UCommonTextBlock* CT_LimitedTimeHeader; // 0x528(0x08)
	struct UCommonTextBlock* CT_TakenToWebsite; // 0x530(0x08)
	struct UWidgetSwitcher* EnableButtonSwitcher; // 0x538(0x08)
	struct UImage* Image_GoToWebsite; // 0x540(0x08)
	struct UItemInfoWidget_C* ItemInfoWidget_FromSocialImport; // 0x548(0x08)
	struct UFortLazyImage* lazyImage; // 0x550(0x08)
	struct USafeZone* SafeZone; // 0x558(0x08)
	struct UScaleBox* ScaleBox_TitleHeader; // 0x560(0x08)
	float HeartbeatDelayIntroAnimation; // 0x568(0x04)
	bool bHasReward; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct UCommonTextStyle* MobileLimitedTimeHeaderStyle; // 0x570(0x08)

	void ScaleTitleForCulture(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ScaleTitleForCulture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimationFullyCompleteBP(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.AnimationFullyCompleteBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleSetScreenMode(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleSetScreenMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NavUp(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NavRight(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleHeaderText(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleHeaderText // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnIncentivizedSet(bool bIncentivized); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnIncentivizedSet // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSetExitButtonText(struct FText NewButtonText); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetExitButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnConsoleDisplayURLProvided(struct FText UniquePlayerURLText); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnConsoleDisplayURLProvided // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnSetScreenConfiguration(bool bIsConsole); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetScreenConfiguration // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInputModeChanged(bool bUsingGamepad); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EnableMultiFactorAuthModalBP(int32_t EntryPoint); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ExecuteUbergraph_EnableMultiFactorAuthModalBP // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

