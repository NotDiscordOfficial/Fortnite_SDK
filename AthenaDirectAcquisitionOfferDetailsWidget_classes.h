// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C
// Size: 0x9e0 (Inherited: 0x7f0)
struct UAthenaDirectAcquisitionOfferDetailsWidget_C : UFortDirectAcquisitionOfferDetailsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7f0(0x08)
	struct UWidgetAnimation* ButtonsIntro; // 0x7f8(0x08)
	struct UWidgetAnimation* DetailsIntro; // 0x800(0x08)
	struct UWidgetAnimation* Idle; // 0x808(0x08)
	struct UWidgetAnimation* Outro; // 0x810(0x08)
	struct UWidgetAnimation* Intro; // 0x818(0x08)
	struct USafeZone* AddsTopSafezone; // 0x820(0x08)
	struct UHorizontalBox* AffilateInfo; // 0x828(0x08)
	struct UCommonTextBlock* AffiliateName; // 0x830(0x08)
	struct UAthenaDirectAcquisitionOffer_SalesTextBanner_C* AthenaDirectAcquisitionOffer_PercentageOffBanner; // 0x838(0x08)
	struct UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* AthenaDirectAcquisitonDetails_BattlePassStarDetails; // 0x840(0x08)
	struct USizeBox* CameraFramingWidget; // 0x848(0x08)
	struct UCommonTextBlock* CatalogOfferName; // 0x850(0x08)
	struct USizeBox* CatalogOfferSB; // 0x858(0x08)
	struct UImage* Check; // 0x860(0x08)
	struct UCloseButton_C* CloseButton; // 0x868(0x08)
	struct UCommonBorder* CommonBorder_1; // 0x870(0x08)
	struct UCommonTextBlock* CommonTextBlockAlreadyOwnedItems; // 0x878(0x08)
	struct UCommonTextBlock* CommonTextBlockRemainingItems; // 0x880(0x08)
	struct UImage* Currency1ItemImage2; // 0x888(0x08)
	struct UVerticalBox* Currency1VB; // 0x890(0x08)
	struct UEventStoreHostPanels_C* EventStoreHostPanels; // 0x898(0x08)
	struct UHorizontalBox* HorizontalBox_PurchasePrice; // 0x8a0(0x08)
	struct UItemPreviewViewport_C* ItemPreviewView; // 0x8a8(0x08)
	struct UTileView* ItemRewardsTIleView; // 0x8b0(0x08)
	struct USizeBox* LeftPanelSB; // 0x8b8(0x08)
	struct UMTXButton_C* MTXButton; // 0x8c0(0x08)
	struct USizeBox* MTXButtonBox; // 0x8c8(0x08)
	struct UCommonBorder* MultipleItemCB; // 0x8d0(0x08)
	struct UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* NonrefundableText; // 0x8d8(0x08)
	struct UOverlay* O_Sale_PreviousPrice; // 0x8e0(0x08)
	struct UHorizontalBox* OfferDetailsHB; // 0x8e8(0x08)
	struct UWidgetSwitcher* OwnedSwitcher; // 0x8f0(0x08)
	struct UCommonTextBlock* OwnedText; // 0x8f8(0x08)
	struct UPanelButton_C* PageLeftBtn; // 0x900(0x08)
	struct UPanelButton_C* PageRightBtn; // 0x908(0x08)
	struct UIconTextButton_C* PreviewStylesButton; // 0x910(0x08)
	struct UIconTextButton_C* PurchaseButton; // 0x918(0x08)
	struct UHorizontalBox* RestrictionCalloutBox; // 0x920(0x08)
	struct UCommonRichTextBlock* RestrictionCalloutText; // 0x928(0x08)
	struct USafeZone* SafeZone_1; // 0x930(0x08)
	struct USizeBox* SB_MainContent; // 0x938(0x08)
	struct UCommonTextBlock* SeasonVariantUnlockCondition; // 0x940(0x08)
	struct UFortSwipePanel* SwipePanel; // 0x948(0x08)
	struct UCommonTextBlock* Text_2FA; // 0x950(0x08)
	struct UCommonTextBlock* Text_NonGiftable; // 0x958(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice1; // 0x960(0x08)
	struct UCommonTextBlock* TextOriginalPrice1; // 0x968(0x08)
	struct UVerticalBox* VariantSetInfoBlock; // 0x970(0x08)
	struct UCommonTextBlock* VariantUnlockPreviewSet; // 0x978(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x980(0x08)
	struct UVerticalBox* VerticalBoxItemDetails; // 0x988(0x08)
	bool CanPurchase; // 0x990(0x01)
	bool IsPurchasing; // 0x991(0x01)
	char pad_992[0x2]; // 0x992(0x02)
	int32_t NumberToPurchase; // 0x994(0x04)
	bool CanPurchaseLeft; // 0x998(0x01)
	bool CanPurchaseRight; // 0x999(0x01)
	bool CanChangeQuantity; // 0x99a(0x01)
	char pad_99B[0x5]; // 0x99b(0x05)
	struct FTimerHandle DelayGiftingHandle; // 0x9a0(0x08)
	struct FDataTableRowHandle BackAction; // 0x9a8(0x10)
	struct FDataTableRowHandle UndoAction; // 0x9b8(0x10)
	struct UFortItemDefinition* SelectedItemDefinition; // 0x9c8(0x08)
	struct TArray<struct FFortItemQuantityPair> SortedItemQuantities; // 0x9d0(0x10)

	void SetupBacchusSpecificLayout(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupBacchusSpecificLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetGiftButtonText(struct FText GiftButtonText); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetGiftButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowIconForButton(struct UCommonButtonLegacy* Button, bool ShouldShow); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ShowIconForButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTileViewSize(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateTileViewSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupAffiliate(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupAffiliate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleButtonsIntroFinished(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleButtonsIntroFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowSwipeButtons(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ShowSwipeButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideDetailsFrame(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HideDetailsFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowDetailsFrame(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ShowDetailsFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Create2FAWidget(struct UEnableMultiFactorAuthModalBP_C* Instance); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Create2FAWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateGiftingScreenWidget(struct UGiftingScreen_C* Instance); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.CreateGiftingScreenWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateDirectAcquisitionStyleScreenWidget(struct UAthenaDirectAquisitionStyleScreen_C* Instance); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.CreateDirectAcquisitionStyleScreenWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* GetWidgetForFramingViewedItem(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetWidgetForFramingViewedItem // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleRewardItemGenerated(struct UUserWidget* RewardItem); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleRewardItemGenerated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupRewardItem(struct UAthenaStoreReward_C* RewardItem, struct UFortItemDefinition* ItemDefinition, struct TArray<struct FFortItemQuantityPair> SortedItemQuantity, bool PreviewPlaceholder, struct FFortItemQuantityPair ItemQuantity); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupRewardItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleUndoAction(bool PassThrough); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleUndoAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShopVariantPreviewInfoUpdated(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ShopVariantPreviewInfoUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupPurchaseButtonForQuantity(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPurchaseButtonForQuantity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	int32_t GetNumBattlepassStars(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetNumBattlepassStars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool GetHasBattlepassStars(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetHasBattlepassStars // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ShowHideGiftingButton(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ShowHideGiftingButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	int32_t GetOwnedIndex(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetOwnedIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool IsNonRefundable(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.IsNonRefundable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void DisableGiftButton(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DisableGiftButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnableGiftButton(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.EnableGiftButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsDynamicBundle(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.IsDynamicBundle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool DoesOfferAllowQuantity(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DoesOfferAllowQuantity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetupPurchaseButtonStateAndText(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPurchaseButtonStateAndText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDynamicBundle(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupDynamicBundle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetSalesText(struct FText NewParam); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetSalesText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetupPrerollItemHeaderInfo(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPrerollItemHeaderInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText GetDisplayName(struct FFortItemQuantityPair ItemQuantityPair); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetSortedItems(struct TArray<struct FFortItemQuantityPair> ItemQuantityPairs); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetSortedItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool IsItemDefOwned(struct UFortItemDefinition* ItemDef); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.IsItemDefOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UpdateDetails(struct UFortItem* Reward); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	enum class ESlateVisibility GetPagingVisibility(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetPagingVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetOfferDetailsSlotMargin(struct FMargin Margin); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetOfferDetailsSlotMargin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void CreateAndAddRewardItem(struct FFortItemQuantityPair ItemQuantity, int32_t ItemIndex, bool PreviewPlaceholder); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.CreateAndAddRewardItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool GetShowDescription(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetShowDescription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool GetShowDetails(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetShowDetails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetShowCard(bool Result); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetShowCard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	enum class EFortItemCardSize GetCardSize(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.GetCardSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void IsSingleGrantedItem(bool Result); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.IsSingleGrantedItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Owned Bundle Item Count(int32_t Owned Items, int32_t UnOwned Items, bool bNoneOwned, bool bAllOwned); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Owned Bundle Item Count // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromOffer_RefreshButtons(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateFromOffer_RefreshButtons // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CanGiftOffer(enum class EOfferPurchaseError Result); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.CanGiftOffer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCamera(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePreviewButton(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdatePreviewButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateViewedItem(struct UFortItem* ViewedItem); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateViewedItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeclinePurchase(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.DeclinePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecutePurchase(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecutePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCatalogOfferName(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCatalogOfferName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateItemList(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateItemList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupSaleInfo(bool bHasSale, struct FString BannerOverrideTag, struct FText NormalPrice, bool bHasBattlePassStars, int32_t NumOfBattlePassStars); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupSaleInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSaleStatus(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateSaleStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePurchaseQuantity(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdatePurchaseQuantity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateAvailability(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateAvailability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Locked Information(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Update Locked Information // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttemptPurchase(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.AttemptPurchase // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePurchaseOfferComplete(bool Success, struct TArray<struct FPurchasedItemInfo> PurchasedItems, struct FString OfferId); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandlePurchaseOfferComplete // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupPrice(struct UWidget* PriceContainer, struct UTextBlock* NormalPriceText, struct UWidget* SalePriceContainer, struct UTextBlock* SalePriceText, struct UImage* CurrencyImage); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.SetupPrice // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PopDetails(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PopDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromOffer(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateFromOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateStatus(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnUpdateStatus // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PurchaseAmountLeft(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountLeft // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PurchaseAmountRight(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.PurchaseAmountRight // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_11_OnFortSwipeEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__SwipePanel_K2Node_ComponentBoundEvent_29_OnFortSwipeEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnBeginIntro(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnBeginIntro // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleVaultViewItem(struct UFortItem* Item); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HandleVaultViewItem // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCenterandBinding(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateCenterandBinding // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PreviewStylesButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateItemViewModeBP(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.UpdateItemViewModeBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnOfferSet(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BP_OnOfferSet // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__UndoButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__UndoButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ShowUndoInBottomBar(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ShowUndoInBottomBar // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HideUndoInBottomBar(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.HideUndoInBottomBar // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ItemRewardsTIleView2_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature(struct UUserWidget* Widget); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__ItemRewardsTIleView2_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnPurchasingStarted(); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnPurchasingStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateItemRestrictionCallout(bool bShouldShow, struct FText RestrictionText); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.OnUpdateItemRestrictionCallout // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget(int32_t EntryPoint); // Function AthenaDirectAcquisitionOfferDetailsWidget.AthenaDirectAcquisitionOfferDetailsWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferDetailsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

