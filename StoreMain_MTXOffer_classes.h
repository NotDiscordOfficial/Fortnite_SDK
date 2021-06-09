// WidgetBlueprintGeneratedClass StoreMain_MTXOffer.StoreMain_MTXOffer_C
// Size: 0xdf8 (Inherited: 0xcc8)
struct UStoreMain_MTXOffer_C : UFortRealMoneyOffer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xcc8(0x08)
	struct UWidgetAnimation* Hover_Linear; // 0xcd0(0x08)
	struct UWidgetAnimation* UnhoverNew; // 0xcd8(0x08)
	struct UWidgetAnimation* HoverNew; // 0xce0(0x08)
	struct UWidgetAnimation* Intro; // 0xce8(0x08)
	struct UWidgetAnimation* OnHover; // 0xcf0(0x08)
	struct UAthenaDirectAcquisitionOffer_SpecialBanner_C* AthenaDirectAcquisitionOffer_SpecialBanner; // 0xcf8(0x08)
	struct UImage* BaseColor; // 0xd00(0x08)
	struct UBorder* BonusTag; // 0xd08(0x08)
	struct UCommonTextBlock* BonusText; // 0xd10(0x08)
	struct UBorder* Border_Footer; // 0xd18(0x08)
	struct UBorder* BorderAll; // 0xd20(0x08)
	struct UCommonTextBlock* BundleTotalQuantity; // 0xd28(0x08)
	struct UCommonTextBlock* BundleVBucksText; // 0xd30(0x08)
	struct UCommonTextBlock* CurrencyTotalQuantity; // 0xd38(0x08)
	struct UHorizontalBox* HBox_Price; // 0xd40(0x08)
	struct UImage* HoverBorder; // 0xd48(0x08)
	struct UImage* KeyArt; // 0xd50(0x08)
	struct UImage* OverlayGradient; // 0xd58(0x08)
	struct UOverlay* OverlaySalePrice; // 0xd60(0x08)
	struct UImage* PlayStationStoreLogo; // 0xd68(0x08)
	struct UCommonTextBlock* Plus; // 0xd70(0x08)
	struct UVerticalBox* RMTBundle; // 0xd78(0x08)
	struct UVerticalBox* RMTCurrency; // 0xd80(0x08)
	struct UWidgetSwitcher* RMTTypeSwitcher; // 0xd88(0x08)
	struct UHorizontalBox* RMTVBucksHB; // 0xd90(0x08)
	struct UScaleBox* ScaleBoxKeyArt; // 0xd98(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Price; // 0xda0(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice; // 0xda8(0x08)
	struct UCommonTextBlock* TextOfferName; // 0xdb0(0x08)
	struct UCommonTextBlock* TextOfferPurchaseUnvailable; // 0xdb8(0x08)
	struct UCommonTextBlock* TextOriginalPrice; // 0xdc0(0x08)
	struct USizeBox* TileSize; // 0xdc8(0x08)
	struct UCommonTextBlock* VBucksText; // 0xdd0(0x08)
	struct FMulticastInlineDelegate AboutToShowDetails; // 0xdd8(0x10)
	bool bCanSetPrice; // 0xde8(0x01)
	char pad_DE9[0x7]; // 0xde9(0x07)
	struct UCatalogMessaging* CatalogMessaging; // 0xdf0(0x08)

	void GetBonusText(struct UFortStoreFrontOfferInfo* OfferInfo, struct FText BonusText); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetTextOutlineColor(struct UTextBlock* Text, struct FFortMtxGradient Gradient); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTileSize(enum class EFortMtxOfferDisplaySize DisplaySize); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerReset(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitialReset(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerIntro(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowDetails(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ShowDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitOffer(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnOfferSet(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateStorePrice(struct FText InStorePrice); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnStoreSelectionOfferSet(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOfferTileBrushLoaded(struct FSlateBrush OfferBrush); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_StoreMain_MTXOffer(int32_t EntryPoint); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void AboutToShowDetails__DelegateSignature(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

