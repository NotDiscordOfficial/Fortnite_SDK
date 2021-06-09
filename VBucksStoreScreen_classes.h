// WidgetBlueprintGeneratedClass VBucksStoreScreen.VBucksStoreScreen_C
// Size: 0x5c2 (Inherited: 0x540)
struct UVBucksStoreScreen_C : UFortVbucksStoreScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* Intro; // 0x548(0x08)
	struct UCommonBorder* CurrencyNotificationBorder; // 0x550(0x08)
	struct UCommonTextBlock* CurrencyNotificationText; // 0x558(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x560(0x08)
	struct UNamedSlot* NamedSlot_ExtraContentBottom; // 0x568(0x08)
	struct UCommonBorder* NewNoOffersBox; // 0x570(0x08)
	struct UCommonBorder* NewPurchasingDisabledBox; // 0x578(0x08)
	struct UImage* NewSpinner; // 0x580(0x08)
	struct UCommonWidgetSwitcherLegacy* NewSwitcherItemsProgress; // 0x588(0x08)
	struct UVerticalBox* NewVbuckOffers; // 0x590(0x08)
	struct UVerticalBox* NewVBuckSection; // 0x598(0x08)
	struct UScaleBox* OfferScaleBoxRoot; // 0x5a0(0x08)
	struct UOverlay* Overlay_1; // 0x5a8(0x08)
	struct UAudioComponent* Ambient Sound; // 0x5b0(0x08)
	struct UWidget* InitiallyFocusedOffer; // 0x5b8(0x08)
	bool bShowingCampaignUpsell; // 0x5c0(0x01)
	bool bUseMobileLayout; // 0x5c1(0x01)

	void ApplyMobileLayout(); // Function VBucksStoreScreen.VBucksStoreScreen_C.ApplyMobileLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* BP_GetDesiredFocusTarget(); // Function VBucksStoreScreen.VBucksStoreScreen_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void GetVisibilityByChildrenPresence(struct UPanelWidget* Panel, enum class ESlateVisibility NewParam); // Function VBucksStoreScreen.VBucksStoreScreen_C.GetVisibilityByChildrenPresence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HandleAllOffersGenerated(); // Function VBucksStoreScreen.VBucksStoreScreen_C.HandleAllOffersGenerated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayEquippedLockerMusic(); // Function VBucksStoreScreen.VBucksStoreScreen_C.PlayEquippedLockerMusic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function VBucksStoreScreen.VBucksStoreScreen_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleRedeem(bool bPassThrough); // Function VBucksStoreScreen.VBucksStoreScreen_C.HandleRedeem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCurrencyNotification(); // Function VBucksStoreScreen.VBucksStoreScreen_C.UpdateCurrencyNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NoOffersAvailable(); // Function VBucksStoreScreen.VBucksStoreScreen_C.NoOffersAvailable // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOffersGenerated(); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnOffersGenerated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function VBucksStoreScreen.VBucksStoreScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, struct FText CurrencyMessageLocText); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnUpdateOtherPlatformMTXMessage // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnPurchasingDisabled(); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnPurchasingDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTransitionedBySwitcher(); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnTransitionedBySwitcher // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartReadingOffers(); // Function VBucksStoreScreen.VBucksStoreScreen_C.OnStartReadingOffers // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function VBucksStoreScreen.VBucksStoreScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VBucksStoreScreen(int32_t EntryPoint); // Function VBucksStoreScreen.VBucksStoreScreen_C.ExecuteUbergraph_VBucksStoreScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

