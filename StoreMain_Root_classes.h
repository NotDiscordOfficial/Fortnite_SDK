// WidgetBlueprintGeneratedClass StoreMain_Root.StoreMain_Root_C
// Size: 0x5d9 (Inherited: 0x518)
struct UStoreMain_Root_C : UFortMtxStoreRootBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x518(0x08)
	struct UWidgetAnimation* Intro; // 0x520(0x08)
	struct UCommonBorder* CommonBorder_1; // 0x528(0x08)
	struct UCommonTextBlock* CommonTextBlock_4; // 0x530(0x08)
	struct UCommonBorder* Container_AvailableAmount; // 0x538(0x08)
	struct UCommonBorder* CurrencyNotificationBorder; // 0x540(0x08)
	struct UCommonTextBlock* CurrencyNotificationText; // 0x548(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x550(0x08)
	struct UImage* Image_143; // 0x558(0x08)
	struct UGridPanel* NewLTMGrid; // 0x560(0x08)
	struct UVerticalBox* NEWLTMOfferSection; // 0x568(0x08)
	struct UCommonBorder* NewNoOffersBox; // 0x570(0x08)
	struct UCommonBorder* NewPurchasingDisabledBox; // 0x578(0x08)
	struct UImage* NewSpinner; // 0x580(0x08)
	struct UCommonWidgetSwitcherLegacy* NewSwitcherItemsProgress; // 0x588(0x08)
	struct UGridPanel* NewVBuckGrid; // 0x590(0x08)
	struct UVerticalBox* NewVbuckOffers; // 0x598(0x08)
	struct UVerticalBox* NewVBuckSection; // 0x5a0(0x08)
	struct UScaleBox* OfferScaleBoxRoot; // 0x5a8(0x08)
	struct UOverlay* Overlay_1; // 0x5b0(0x08)
	struct USimpleMTXDisplay_C* SimpleMTXDisplay; // 0x5b8(0x08)
	struct UStore_BannerMessage_C* StoreBannerMessage; // 0x5c0(0x08)
	struct UAudioComponent* Ambient Sound; // 0x5c8(0x08)
	struct UWidget* InitiallyFocusedOffer; // 0x5d0(0x08)
	bool bShowingCampaignUpsell; // 0x5d8(0x01)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function StoreMain_Root.StoreMain_Root_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void GetVisibilityByChildrenPresence(struct UPanelWidget* Panel, enum class ESlateVisibility NewParam); // Function StoreMain_Root.StoreMain_Root_C.GetVisibilityByChildrenPresence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HandleAllOffersGenerated(); // Function StoreMain_Root.StoreMain_Root_C.HandleAllOffersGenerated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleGenerateOffer(struct UFortStoreFrontOfferInfo* OfferInfo); // Function StoreMain_Root.StoreMain_Root_C.HandleGenerateOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayEquippedLockerMusic(); // Function StoreMain_Root.StoreMain_Root_C.PlayEquippedLockerMusic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function StoreMain_Root.StoreMain_Root_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleRedeem(bool bPassThrough); // Function StoreMain_Root.StoreMain_Root_C.HandleRedeem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupForCampaignUpsell(); // Function StoreMain_Root.StoreMain_Root_C.SetupForCampaignUpsell // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupFirstFocusableTile(); // Function StoreMain_Root.StoreMain_Root_C.SetupFirstFocusableTile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LayoutVBuckTiles(); // Function StoreMain_Root.StoreMain_Root_C.LayoutVBuckTiles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Start Ambient Sound(bool Condition); // Function StoreMain_Root.StoreMain_Root_C.Start Ambient Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCurrencyNotification(); // Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Focus(); // Function StoreMain_Root.StoreMain_Root_C.Focus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NoOffersAvailable(); // Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOffersGenerated(); // Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function StoreMain_Root.StoreMain_Root_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ClearOfferWidgets(); // Function StoreMain_Root.StoreMain_Root_C.ClearOfferWidgets // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, struct FText CurrencyMessageLocText); // Function StoreMain_Root.StoreMain_Root_C.OnUpdateOtherPlatformMTXMessage // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void GenerateOfferWidget(struct UFortStoreFrontOfferInfo* OfferData); // Function StoreMain_Root.StoreMain_Root_C.GenerateOfferWidget // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPurchasingDisabled(); // Function StoreMain_Root.StoreMain_Root_C.OnPurchasingDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTransitionedBySwitcher(); // Function StoreMain_Root.StoreMain_Root_C.OnTransitionedBySwitcher // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartReadingOffers(); // Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function StoreMain_Root.StoreMain_Root_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnMainTabSelected(struct FName TabName); // Function StoreMain_Root.StoreMain_Root_C.OnMainTabSelected // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function StoreMain_Root.StoreMain_Root_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_StoreMain_Root(int32_t EntryPoint); // Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

