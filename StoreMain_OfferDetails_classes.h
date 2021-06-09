// WidgetBlueprintGeneratedClass StoreMain_OfferDetails.StoreMain_OfferDetails_C
// Size: 0x8f8 (Inherited: 0x7e0)
struct UStoreMain_OfferDetails_C : UFortRealMoneyOfferDetails {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UImage* BaseColor; // 0x7e8(0x08)
	struct UImage* BaseColorDetails; // 0x7f0(0x08)
	struct UHorizontalBox* BonusMTXArea; // 0x7f8(0x08)
	struct UCommonBorder* BorderDisclaimer; // 0x800(0x08)
	struct UCommonTextBlock* CommonText_BaseQuantity; // 0x808(0x08)
	struct UCommonTextBlock* CommonText_BonusQuantity; // 0x810(0x08)
	struct UImage* Highlight; // 0x818(0x08)
	struct UFortLazyImage* Image_CurrencyIcon; // 0x820(0x08)
	struct UCommonLazyImage* KeyArt; // 0x828(0x08)
	struct USizeBox* MTXArea; // 0x830(0x08)
	struct USizeBox* MTXButtonBox; // 0x838(0x08)
	struct UImage* OverlayGradient; // 0x840(0x08)
	struct UImage* OverlayGradientDetails; // 0x848(0x08)
	struct UOverlay* OverlaySalePrice; // 0x850(0x08)
	struct USafeZone* SafeZoneCloseButton; // 0x858(0x08)
	struct USafeZone* SafeZoneMTX; // 0x860(0x08)
	struct UStoreMain_OfferDetailsAttribute_C* StoreMain_OfferDetailsAttribute1; // 0x868(0x08)
	struct UStoreMain_OfferDetailsAttribute_C* StoreMain_OfferDetailsAttribute2; // 0x870(0x08)
	struct UCommonTextBlock* TextDescription; // 0x878(0x08)
	struct UCommonTextBlock* TextName; // 0x880(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice; // 0x888(0x08)
	struct UCommonTextBlock* TextOriginalPrice; // 0x890(0x08)
	struct UVerticalBox* VBoxOfferInfo; // 0x898(0x08)
	struct UImage* VBuckHighlight; // 0x8a0(0x08)
	struct TMap<int32_t, struct UFortMtxOfferData*> ABAssetCollection; // 0x8a8(0x50)

	void SetupCurrencyImage(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetupCurrencyImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePurchaseButton(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitDetailAttributes(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitDetailAttributes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPurchaseButtonText(struct FText ButtonText); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetPurchaseButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsGiftingStorefrontOffer(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.IsGiftingStorefrontOffer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetCurrencyABAssetFromQuantity(int32_t Quantity, struct UFortMtxOfferData* DataAsset); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.GetCurrencyABAssetFromQuantity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitCurrency(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitStoreTypeVisuals(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnregisterInput(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RegisterInput(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PopDetails(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Init(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetPurchaseButtonText(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ResetPurchaseButtonText // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPurchasingStarted(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnPurchasingStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnOfferSet(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnOfferSet // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_StoreMain_OfferDetails(int32_t EntryPoint); // Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails // (Final|UbergraphFunction) // @ game+0xda7c34
};

