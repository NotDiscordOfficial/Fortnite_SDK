// WidgetBlueprintGeneratedClass AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C
// Size: 0x6a0 (Inherited: 0x4f8)
struct UAthenaItemShopOfferDetailsPreviewWidget_C : UAthenaItemShopOfferDetailsPreviewWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UWidgetAnimation* DetailsIntro; // 0x500(0x08)
	struct UWidgetAnimation* Outro; // 0x508(0x08)
	struct UWidgetAnimation* Intro; // 0x510(0x08)
	struct USafeZone* AddsTopSafezone; // 0x518(0x08)
	struct UHorizontalBox* AffilateInfo; // 0x520(0x08)
	struct UCommonTextBlock* AffiliateName; // 0x528(0x08)
	struct UAthenaDirectAcquisitionOffer_SalesTextBanner_C* AthenaDirectAcquisitionOffer_PercentageOffBanner; // 0x530(0x08)
	struct UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* AthenaDirectAcquisitonDetails_BattlePassStarDetails; // 0x538(0x08)
	struct UCommonTextBlock* CatalogOfferName; // 0x540(0x08)
	struct USizeBox* CatalogOfferSB; // 0x548(0x08)
	struct UImage* Check; // 0x550(0x08)
	struct UCloseButton_C* CloseButton; // 0x558(0x08)
	struct UCommonBorder* CommonBorder_1; // 0x560(0x08)
	struct UCommonTextBlock* CommonTextBlockAlreadyOwnedItems; // 0x568(0x08)
	struct UCommonTextBlock* CommonTextBlockRemainingItems; // 0x570(0x08)
	struct UImage* Currency1ItemImage2; // 0x578(0x08)
	struct UVerticalBox* Currency1VB; // 0x580(0x08)
	struct UHorizontalBox* HorizontalBox_PurchasePrice; // 0x588(0x08)
	struct USizeBox* LeftPanelSB; // 0x590(0x08)
	struct UTileView* ListView_ItemRewards; // 0x598(0x08)
	struct UMTXButton_C* MTXButton; // 0x5a0(0x08)
	struct USizeBox* MTXButtonBox; // 0x5a8(0x08)
	struct UCommonBorder* MultipleItemCB; // 0x5b0(0x08)
	struct UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* NonrefundableText; // 0x5b8(0x08)
	struct UOverlay* O_Sale_PreviousPrice; // 0x5c0(0x08)
	struct UHorizontalBox* OfferDetailsHB; // 0x5c8(0x08)
	struct UWidgetSwitcher* OwnedSwitcher; // 0x5d0(0x08)
	struct UCommonTextBlock* OwnedText; // 0x5d8(0x08)
	struct UPanelButton_C* PageLeftBtn; // 0x5e0(0x08)
	struct UPanelButton_C* PageRightBtn; // 0x5e8(0x08)
	struct UIconTextButton_C* PreviewStylesButton; // 0x5f0(0x08)
	struct UIconTextButton_C* PurchaseButton; // 0x5f8(0x08)
	struct UHorizontalBox* RestrictionCalloutBox; // 0x600(0x08)
	struct UCommonRichTextBlock* RestrictionCalloutText; // 0x608(0x08)
	struct USafeZone* SafeZone_1; // 0x610(0x08)
	struct USizeBox* SB_MainContent; // 0x618(0x08)
	struct UCommonTextBlock* SeasonVariantUnlockCondition; // 0x620(0x08)
	struct UFortSwipePanel* SwipePanel; // 0x628(0x08)
	struct UCommonTextBlock* Text_2FA; // 0x630(0x08)
	struct UCommonTextBlock* Text_NonGiftable; // 0x638(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice1; // 0x640(0x08)
	struct UCommonTextBlock* TextOriginalPrice1; // 0x648(0x08)
	struct UVerticalBox* VariantSetInfoBlock; // 0x650(0x08)
	struct UCommonTextBlock* VariantUnlockPreviewSet; // 0x658(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x660(0x08)
	struct UVerticalBox* VerticalBoxItemDetails; // 0x668(0x08)
	bool CanPurchase; // 0x670(0x01)
	char pad_671[0x3]; // 0x671(0x03)
	int32_t NumberToPurchase; // 0x674(0x04)
	bool CanPurchaseLeft; // 0x678(0x01)
	bool CanPurchaseRight; // 0x679(0x01)
	bool CanChangeQuantity; // 0x67a(0x01)
	char pad_67B[0x5]; // 0x67b(0x05)
	struct FTimerHandle DelayGiftingHandle; // 0x680(0x08)
	struct UFortItemDefinition* SelectedItemDefinition; // 0x688(0x08)
	struct TArray<struct FFortItemQuantityPair> SortedItemQuantities; // 0x690(0x10)

	void RegenerateListViewEntries(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.RegenerateListViewEntries // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetGiftButtonText(struct FText GiftButtonText); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetGiftButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowIconForButton(struct UCommonButtonLegacy* Button, bool ShouldShow); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.ShowIconForButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupBacchusSpecificLayout(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetupBacchusSpecificLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTileViewSize(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.UpdateTileViewSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupAffiliate(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetupAffiliate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideDetailsFrame(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.HideDetailsFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowDetailsFrame(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.ShowDetailsFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Create2FAWidget(struct UEnableMultiFactorAuthModalBP_C* Instance); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.Create2FAWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateGiftingScreenWidget(struct UGiftingScreen_C* Instance); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.CreateGiftingScreenWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateStyleScreenWidget(struct UAthenaItemShopOfferStyleScreen_C* Instance); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.CreateStyleScreenWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleRewardItemGenerated(struct UUserWidget* RewardItem); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.HandleRewardItemGenerated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupRewardItem(struct UAthenaStoreReward_C* RewardItem, struct UFortItemDefinition* ItemDefinition, struct TArray<struct FFortItemQuantityPair> SortedItemQuantity, bool PreviewPlaceholder, struct FFortItemQuantityPair ItemQuantity); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetupRewardItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleVariantPreviewInfoUpdated(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.HandleVariantPreviewInfoUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupPurchaseButtonForQuantity(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetupPurchaseButtonForQuantity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	int32_t GetNumBattlepassStars(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetNumBattlepassStars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool GetHasBattlepassStars(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetHasBattlepassStars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ShowHideGiftingButton(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.ShowHideGiftingButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	int32_t GetOwnedIndex(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetOwnedIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool IsNonRefundable(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.IsNonRefundable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void DisableGiftButton(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.DisableGiftButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnableGiftButton(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.EnableGiftButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsDynamicBundle(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.IsDynamicBundle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool DoesOfferAllowQuantity(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.DoesOfferAllowQuantity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetupPurchaseButtonStateAndText(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetupPurchaseButtonStateAndText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDynamicBundle(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetupDynamicBundle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetSalesText(struct FText NewParam); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetSalesText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetupPrerollItemHeaderInfo(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetupPrerollItemHeaderInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText GetDisplayName(struct FFortItemQuantityPair ItemQuantityPair); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetSortedItems(struct TArray<struct FFortItemQuantityPair> ItemQuantityPairs); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetSortedItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool IsItemDefOwned(struct UFortItemDefinition* ItemDef); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.IsItemDefOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	enum class ESlateVisibility GetPagingVisibility(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetPagingVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void CreateAndAddRewardItem(struct FFortItemQuantityPair ItemQuantity, int32_t ItemIndex, bool PreviewPlaceholder); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.CreateAndAddRewardItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool GetShowDescription(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetShowDescription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool GetShowDetails(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetShowDetails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetShowCard(bool Result); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetShowCard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	enum class EFortItemCardSize GetCardSize(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.GetCardSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void IsSingleGrantedItem(bool Result); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.IsSingleGrantedItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Owned Bundle Item Count(int32_t Owned Items, int32_t UnOwned Items, bool bNoneOwned, bool bAllOwned); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.Owned Bundle Item Count // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromOffer_RefreshButtons(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.UpdateFromOffer_RefreshButtons // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CanGiftOffer(enum class EOfferPurchaseError Result); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.CanGiftOffer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCamera(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.UpdateCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePreviewButton(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.UpdatePreviewButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeclinePurchase(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.DeclinePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecutePurchase(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.ExecutePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCatalogOfferName(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.UpdateCatalogOfferName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateItemList(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.UpdateItemList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupSaleInfo(bool bHasSale, struct FString BannerOverrideTag, struct FText NormalPrice, bool bHasBattlePassStars, int32_t NumOfBattlePassStars); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetupSaleInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSaleStatus(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.UpdateSaleStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePurchaseQuantity(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.UpdatePurchaseQuantity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateAvailability(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.UpdateAvailability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Locked Information(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.Update Locked Information // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttemptPurchase(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.AttemptPurchase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePurchaseOfferComplete(bool Success, struct TArray<struct FPurchasedItemInfo> PurchasedItems, struct FString OfferId); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.HandlePurchaseOfferComplete // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupPrice(struct UWidget* PriceContainer, struct UTextBlock* NormalPriceText, struct UWidget* SalePriceContainer, struct UTextBlock* SalePriceText, struct UImage* CurrencyImage); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.SetupPrice // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update From Offer BP(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.Update From Offer BP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__UndoButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BndEvt__UndoButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ItemRewardsTIleView2_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BndEvt__ItemRewardsTIleView2_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnPurchasingStarted(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.OnPurchasingStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateItemRestrictionCallout(bool bShouldShow, struct FText RestrictionText); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.OnUpdateItemRestrictionCallout // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HandleBackAction(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.HandleBackAction // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateStatus(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.OnUpdateStatus // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSetOffer(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.BP_OnSetOffer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PurchaseAmountLeft(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.PurchaseAmountLeft // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PurchaseAmountRight(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.PurchaseAmountRight // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnVariantPreviewInfoUpdated(); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.OnVariantPreviewInfoUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaItemShopOfferDetailsPreviewWidget(int32_t EntryPoint); // Function AthenaItemShopOfferDetailsPreviewWidget.AthenaItemShopOfferDetailsPreviewWidget_C.ExecuteUbergraph_AthenaItemShopOfferDetailsPreviewWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

