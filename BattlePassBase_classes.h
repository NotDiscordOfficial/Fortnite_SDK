// Class BattlePassBase.BattlePassLandingPageBase
// Size: 0x418 (Inherited: 0x320)
struct UBattlePassLandingPageBase : UCommonActivatableWidget {
	char pad_320[0xe0]; // 0x320(0xe0)
	struct UBattlePassLandingPageButton* LastHoveredPageButton; // 0x400(0x08)
	char pad_408[0x10]; // 0x408(0x10)
};

// Class BattlePassBase.BattlePassLandingPageButton
// Size: 0xc68 (Inherited: 0xbd0)
struct UBattlePassLandingPageButton : UCommonButtonBase {
	enum class EBattlePassView SubPageType; // 0xbd0(0x01)
	enum class EBattlePassFeatures FeatureType; // 0xbd1(0x01)
	char pad_BD2[0x6]; // 0xbd2(0x06)
	struct FBattlePassLandingPageEntryPreviewInfo PreviewInfo; // 0xbd8(0x40)
	struct UFortBangWrapper_NUI* BangWrapper; // 0xc18(0x08)
	bool bUsesTelemetry; // 0xc20(0x01)
	char pad_C21[0x3]; // 0xc21(0x03)
	struct FIntPoint Telemetry_Size; // 0xc24(0x08)
	struct FIntPoint Telemetry_Position; // 0xc2c(0x08)
	char pad_C34[0x34]; // 0xc34(0x34)

	void OnSubscriptionTextureLoaded(struct UTexture2D* Texture); // Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption); // Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class BattlePassBase.BattlePassRewardPageBase
// Size: 0x3f8 (Inherited: 0x320)
struct UBattlePassRewardPageBase : UCommonActivatableWidget {
	char pad_320[0xd8]; // 0x320(0xd8)
};

// Class BattlePassBase.BattlePassSubPageInterface
// Size: 0x28 (Inherited: 0x28)
struct UBattlePassSubPageInterface : UInterface {

	void OnEnterSubPage(); // Function BattlePassBase.BattlePassSubPageInterface.OnEnterSubPage // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class BattlePassBase.BattlePassUIGameFeatureAction
// Size: 0x78 (Inherited: 0x28)
struct UBattlePassUIGameFeatureAction : UFortUIGameFeatureAction {
	SoftClassProperty BattlePassScreenClass; // 0x28(0x28)
	SoftClassProperty BatlePassInformationModalClass; // 0x50(0x28)
};

// Class BattlePassBase.FortBattlePassBulkBuyPageBase
// Size: 0x3f8 (Inherited: 0x320)
struct UFortBattlePassBulkBuyPageBase : UCommonActivatableWidget {
	char pad_320[0xd8]; // 0x320(0xd8)
};

// Class BattlePassBase.FortBattlePassCheckBoxButton
// Size: 0xbd8 (Inherited: 0xbd0)
struct UFortBattlePassCheckBoxButton : UCommonButtonBase {
	char pad_BD0[0x8]; // 0xbd0(0x08)

	void OnStateChanged(bool bNewIsChecked); // Function BattlePassBase.FortBattlePassCheckBoxButton.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class BattlePassBase.FortBattlePassCurrencyPanel
// Size: 0x2a0 (Inherited: 0x260)
struct UFortBattlePassCurrencyPanel : UUserWidget {
	struct UHorizontalBox* HBox_BattleStarContainer; // 0x260(0x08)
	struct UCommonTextBlock* Text_BattleStar; // 0x268(0x08)
	struct UHorizontalBox* HBox_CustomSkinContainer; // 0x270(0x08)
	struct UCommonTextBlock* Text_CustomSkin; // 0x278(0x08)
	char pad_280[0x20]; // 0x280(0x20)
};

// Class BattlePassBase.FortBattlePassCustomSkinCategoryTile
// Size: 0x300 (Inherited: 0x260)
struct UFortBattlePassCustomSkinCategoryTile : UUserWidget {
	char pad_260[0x20]; // 0x260(0x20)
	struct UProgressBar* ProgressBar; // 0x280(0x08)
	struct UFortDynamicEntryBox* FortDynamicEntryBox_Items; // 0x288(0x08)
	struct URichTextBlock* Text_CategoryTitle; // 0x290(0x08)
	struct UFortBattlePassTile* PreviewedTile; // 0x298(0x08)
	int32_t OwnedRewards; // 0x2a0(0x04)
	char pad_2A4[0x5c]; // 0x2a4(0x5c)

	void SetPreviewedTile(int32_t Index); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile // (Final|Native|Public|BlueprintCallable) // @ game+0x37fa600
	void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLockedStateChanged(bool bCategoryLocked); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void FocusTile(int32_t Index); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile // (Final|Native|Public|BlueprintCallable) // @ game+0x37fa164
};

// Class BattlePassBase.FortBattlePassCustomSkinPageBase
// Size: 0x488 (Inherited: 0x320)
struct UFortBattlePassCustomSkinPageBase : UCommonActivatableWidget {
	char pad_320[0x150]; // 0x320(0x150)
	struct UScrollBox* ScrollBox_Categories; // 0x470(0x08)
	struct UFortDynamicEntryBox* FortDynamicEntryBox_Categories; // 0x478(0x08)
	char pad_480[0x8]; // 0x480(0x08)
};

// Class BattlePassBase.FortBattlePassPurchaseResourcesWidget
// Size: 0x3c0 (Inherited: 0x320)
struct UFortBattlePassPurchaseResourcesWidget : UCommonActivatableWidget {
	char pad_320[0x8]; // 0x320(0x08)
	struct UCommonButtonBase* Button_Addition; // 0x328(0x08)
	struct UCommonButtonBase* Button_BatchAddition; // 0x330(0x08)
	struct UCommonButtonBase* Button_Subtraction; // 0x338(0x08)
	struct UCommonButtonBase* Button_BatchSubtraction; // 0x340(0x08)
	struct UFortHoldableButton* Button_Purchase; // 0x348(0x08)
	struct UCommonButtonBase* Button_GetVBucks; // 0x350(0x08)
	struct UCommonButtonBase* Button_Back; // 0x358(0x08)
	struct UFortBattlePassCheckBoxButton* CheckBox_Bundle; // 0x360(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x368(0x08)
	int32_t CurrentLevel; // 0x370(0x04)
	bool bIsOfferActive; // 0x374(0x01)
	char pad_375[0x3]; // 0x375(0x03)
	int32_t CurrentVBucks; // 0x378(0x04)
	int32_t CurrentBattleStars; // 0x37c(0x04)
	int32_t BatchNum; // 0x380(0x04)
	int32_t CurrentPage; // 0x384(0x04)
	bool bOfferUnavailable; // 0x388(0x01)
	char pad_389[0x37]; // 0x389(0x37)

	void OnTotalPriceChanged(int32_t NewPrice); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPurchaseAmountChanged(int32_t NewAmount); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOfferUnavailable(); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePurchaseMultiComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo> PurchasedItems, struct TArray<struct FString> OfferIdList); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete // (Final|Native|Private|HasOutParms) // @ game+0x37fa404
	void HandlePurchaseComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo> PurchasedItems, struct FString OfferId); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete // (Final|Native|Private|HasOutParms) // @ game+0x37fa274
};

// Class BattlePassBase.FortBattlePassRewardGrid
// Size: 0x3d8 (Inherited: 0x320)
struct UFortBattlePassRewardGrid : UCommonActivatableWidget {
	char pad_320[0x58]; // 0x320(0x58)
	struct UFortBattlePassTileBase* GridTileClass; // 0x378(0x08)
	struct UFortBattlePassTileBase* GridEmptyTileClass; // 0x380(0x08)
	struct FVector2D GridCellPadding; // 0x388(0x08)
	struct UFortBattlePassRewardGridHeader* PageHeader; // 0x390(0x08)
	struct UGridPanel* GridPanel_Rewards; // 0x398(0x08)
	struct UFortBattlePassTileBase* TopLeftTile; // 0x3a0(0x08)
	struct TWeakObjectPtr<struct UCommonButtonBase> LastFocusedTile; // 0x3a8(0x08)
	char pad_3B0[0x28]; // 0x3b0(0x28)

	void OnPageUnselected(); // Function BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPageSelected(); // Function BattlePassBase.FortBattlePassRewardGrid.OnPageSelected // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class BattlePassBase.FortBattlePassRewardGridHeader
// Size: 0x268 (Inherited: 0x260)
struct UFortBattlePassRewardGridHeader : UUserWidget {
	char pad_260[0x8]; // 0x260(0x08)

	void OnSetPageType(enum class ERewardPageType PageType); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageType // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPageUnlocked(int32_t PurchasedRewards, int32_t TotalRewards); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageUnlocked // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPageNumberSet(int32_t InPageNumber); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageNumberSet // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPageLocked(int32_t RequiredLevel, int32_t RequiredRewards); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageLocked // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBattlePassLevelSet(int32_t BattlePassLevel); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnBattlePassLevelSet // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	int32_t GetPageNumber(); // Function BattlePassBase.FortBattlePassRewardGridHeader.GetPageNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37fa244
};

// Class BattlePassBase.FortBattlePassTileBase
// Size: 0xca0 (Inherited: 0xc50)
struct UFortBattlePassTileBase : UFortHoldableButton {
	char pad_C50[0x8]; // 0xc50(0x08)
	struct USizeBox* SizeBox_Content; // 0xc58(0x08)
	float UnitHeight; // 0xc60(0x04)
	float UnitWidth; // 0xc64(0x04)
	char pad_C68[0x38]; // 0xc68(0x38)

	void SetState(enum class BattlePassTileAvailabilityStates NewState); // Function BattlePassBase.FortBattlePassTileBase.SetState // (Final|Native|Protected|BlueprintCallable) // @ game+0x37fa7c4
	void SetSize(enum class EPageItemTileSize TileSize, struct FVector2D CellSpacing); // Function BattlePassBase.FortBattlePassTileBase.SetSize // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x37fa6d4
	void OnStateChanged(enum class BattlePassTileAvailabilityStates NewState); // Function BattlePassBase.FortBattlePassTileBase.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSizeChanged(struct FVector2D NewSize); // Function BattlePassBase.FortBattlePassTileBase.OnSizeChanged // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xda7c34
	void OnSetRequiresBattlePass(bool bRequiresBP); // Function BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRevealed(); // Function BattlePassBase.FortBattlePassTileBase.OnRevealed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPeeked(); // Function BattlePassBase.FortBattlePassTileBase.OnPeeked // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	bool IsOwned(); // Function BattlePassBase.FortBattlePassTileBase.IsOwned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37fa5e4
	bool IsLocked(); // Function BattlePassBase.FortBattlePassTileBase.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37fa5c8
	bool IsAvailable(); // Function BattlePassBase.FortBattlePassTileBase.IsAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37fa5ac
	enum class BattlePassTileAvailabilityStates GetState(); // Function BattlePassBase.FortBattlePassTileBase.GetState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x37fa25c
};

// Class BattlePassBase.FortBattlePassTile
// Size: 0xcb8 (Inherited: 0xca0)
struct UFortBattlePassTile : UFortBattlePassTileBase {
	struct UFortLazyImage* Image_RewardItem; // 0xca0(0x08)
	struct UImage* Image_Currency; // 0xca8(0x08)
	char pad_CB0[0x8]; // 0xcb0(0x08)

	void OnUnpreviewed(); // Function BattlePassBase.FortBattlePassTile.OnUnpreviewed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnUnhighlighted(); // Function BattlePassBase.FortBattlePassTile.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass); // Function BattlePassBase.FortBattlePassTile.OnSetTrack // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetCurrencyAndPrice(enum class EBattlePassCurrencyType Currency, int32_t Price); // Function BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPreviewed(); // Function BattlePassBase.FortBattlePassTile.OnPreviewed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed); // Function BattlePassBase.FortBattlePassTile.OnLockedStateUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards); // Function BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnHighlighted(); // Function BattlePassBase.FortBattlePassTile.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAffordabilityChanged(bool bHasEnougCurrency); // Function BattlePassBase.FortBattlePassTile.OnAffordabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	bool IsAffordable(); // Function BattlePassBase.FortBattlePassTile.IsAffordable // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x37fa588
	bool HasPrerequisites(); // Function BattlePassBase.FortBattlePassTile.HasPrerequisites // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37fa564
};

