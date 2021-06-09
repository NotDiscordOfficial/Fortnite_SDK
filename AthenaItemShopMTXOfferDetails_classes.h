// WidgetBlueprintGeneratedClass AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C
// Size: 0x5f0 (Inherited: 0x4d8)
struct UAthenaItemShopMTXOfferDetails_C : UAthenaItemShopRealMoneyOfferDetails {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	struct UImage* BaseColor; // 0x4e0(0x08)
	struct UImage* BaseColorDetails; // 0x4e8(0x08)
	struct UHorizontalBox* BonusMTXArea; // 0x4f0(0x08)
	struct UCommonBorder* BorderDisclaimer; // 0x4f8(0x08)
	struct UCommonTextBlock* CommonText_BaseQuantity; // 0x500(0x08)
	struct UCommonTextBlock* CommonText_BonusQuantity; // 0x508(0x08)
	struct UImage* Highlight; // 0x510(0x08)
	struct UFortLazyImage* Image_CurrencyIcon; // 0x518(0x08)
	struct UCommonLazyImage* KeyArt; // 0x520(0x08)
	struct USizeBox* MTXArea; // 0x528(0x08)
	struct USizeBox* MTXButtonBox; // 0x530(0x08)
	struct UImage* OverlayGradient; // 0x538(0x08)
	struct UImage* OverlayGradientDetails; // 0x540(0x08)
	struct UOverlay* OverlaySalePrice; // 0x548(0x08)
	struct USafeZone* SafeZoneCloseButton; // 0x550(0x08)
	struct USafeZone* SafeZoneMTX; // 0x558(0x08)
	struct UStoreMain_OfferDetailsAttribute_C* StoreMain_OfferDetailsAttribute1; // 0x560(0x08)
	struct UStoreMain_OfferDetailsAttribute_C* StoreMain_OfferDetailsAttribute2; // 0x568(0x08)
	struct UCommonTextBlock* TextDescription; // 0x570(0x08)
	struct UCommonTextBlock* TextName; // 0x578(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice; // 0x580(0x08)
	struct UCommonTextBlock* TextOriginalPrice; // 0x588(0x08)
	struct UVerticalBox* VBoxOfferInfo; // 0x590(0x08)
	struct UImage* VBuckHighlight; // 0x598(0x08)
	struct TMap<int32_t, struct UFortMtxOfferData*> ABAssetCollection; // 0x5a0(0x50)

	void SetupCurrencyImage(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.SetupCurrencyImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePurchaseButton(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.UpdatePurchaseButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitDetailAttributes(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.InitDetailAttributes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPurchaseButtonText(struct FText ButtonText); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.SetPurchaseButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsGiftingStorefrontOffer(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.IsGiftingStorefrontOffer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetCurrencyABAssetFromQuantity(int32_t Quantity, struct UFortMtxOfferData* DataAsset); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.GetCurrencyABAssetFromQuantity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitCurrency(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.InitCurrency // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitStoreTypeVisuals(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.InitStoreTypeVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PopDetails(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.PopDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Init(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetPurchaseButtonText(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.ResetPurchaseButtonText // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPurchasingStarted(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.OnPurchasingStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSetOffer(); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.BP_OnSetOffer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaItemShopMTXOfferDetails(int32_t EntryPoint); // Function AthenaItemShopMTXOfferDetails.AthenaItemShopMTXOfferDetails_C.ExecuteUbergraph_AthenaItemShopMTXOfferDetails // (Final|UbergraphFunction) // @ game+0xda7c34
};

