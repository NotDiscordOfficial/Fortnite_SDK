// Class GiftingUI.AthenaGiftConfirmedPanel
// Size: 0x348 (Inherited: 0x320)
struct UAthenaGiftConfirmedPanel : UCommonActivatableWidget {
	char pad_320[0x18]; // 0x320(0x18)
	struct URichTextBlock* Text_RecipientInfo; // 0x338(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x340(0x08)
};

// Class GiftingUI.AthenaGiftingConfirmationScreen
// Size: 0x480 (Inherited: 0x320)
struct UAthenaGiftingConfirmationScreen : UCommonActivatableWidget {
	char pad_320[0x38]; // 0x320(0x38)
	struct UFortStoreFrontOfferInfo* PresentedGiftableOfferInfo; // 0x358(0x08)
	struct UFortStoreFrontOfferInfo* PresentedOptionalTokenOfferInfo; // 0x360(0x08)
	char pad_368[0xbc]; // 0x368(0xbc)
	float MinGiftSubmissionDelay; // 0x424(0x04)
	float MaxGiftSubmissionDelay; // 0x428(0x04)
	char pad_42C[0x14]; // 0x42c(0x14)
	struct UCommonButtonLegacy* Button_WrapOptions; // 0x440(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x448(0x08)
	struct UCommonButtonLegacy* Button_MobileClose; // 0x450(0x08)
	struct UCommonButtonLegacy* Button_MtxWallet; // 0x458(0x08)
	struct UAthenaGiftingPurchasePanel* Panel_GiftingPurchase; // 0x460(0x08)
	struct UAthenaGiftingWrapOptionsPanel* Panel_WrapOptions; // 0x468(0x08)
	struct UAthenaGiftConfirmedPanel* Panel_GiftConfirmed; // 0x470(0x08)
	struct UAthenaGiftingErrorsPanel* Panel_GiftingErrors; // 0x478(0x08)

	void OnPresentationModeChanged(enum class EGiftingPresentationMode NewMode); // Function GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleGiftSent(bool bSuccess, struct TArray<struct FString> IneligibleAccounts, struct TArray<struct FString> ErrorCodes); // Function GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent // (Final|Native|Private|HasOutParms) // @ game+0x3d8288c
	void Dismiss(); // Function GiftingUI.AthenaGiftingConfirmationScreen.Dismiss // (Final|Native|Private|BlueprintCallable) // @ game+0x3d82878
};

// Class GiftingUI.AthenaGiftingErrorsPanel
// Size: 0x380 (Inherited: 0x320)
struct UAthenaGiftingErrorsPanel : UCommonActivatableWidget {
	char pad_320[0x30]; // 0x320(0x30)
	struct URichTextBlock* Text_RecipientInfo; // 0x350(0x08)
	struct URichTextBlock* Text_Title; // 0x358(0x08)
	struct UCommonButtonLegacy* Button_MobileClose; // 0x360(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x368(0x08)
	struct UCommonButtonLegacy* Button_Continue; // 0x370(0x08)
	struct UTileView* TileView_Items; // 0x378(0x08)

	void UpdateGiftEligibility(bool bStillGiftable); // Function GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class GiftingUI.AthenaGiftingPriceWidget
// Size: 0x2a8 (Inherited: 0x288)
struct UAthenaGiftingPriceWidget : UCommonUserWidget {
	struct UCommonTextBlock* Text_RealMoneyPrice; // 0x288(0x08)
	struct UCommonTextBlock* Text_FinalPrice; // 0x290(0x08)
	struct UCommonTextBlock* Text_RegularPrice; // 0x298(0x08)
	struct UWidget* Overlay_SalePrice; // 0x2a0(0x08)

	void SetPresentationMode(enum class EGiftingPricePresentationMode Mode); // Function GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class GiftingUI.AthenaGiftingPurchaseButton
// Size: 0xc30 (Inherited: 0xc20)
struct UAthenaGiftingPurchaseButton : UCommonButtonLegacy {
	struct UAthenaGiftingPriceWidget* Widget_Price; // 0xc20(0x08)
	struct UCommonTextBlock* Text_Title; // 0xc28(0x08)
};

// Class GiftingUI.AthenaGiftingPurchasePanel
// Size: 0x368 (Inherited: 0x320)
struct UAthenaGiftingPurchasePanel : UCommonActivatableWidget {
	char pad_320[0x18]; // 0x320(0x18)
	struct UAthenaGiftingPurchaseButton* Button_PurchaseGift; // 0x338(0x08)
	struct UFortSocialAvatarIcon* Avatar_MemberIcon; // 0x340(0x08)
	struct UCommonTextBlock* Text_SocialNameInfo; // 0x348(0x08)
	struct UCommonTextBlock* Text_ItemsCount; // 0x350(0x08)
	struct UCommonTextBlock* Text_OfferName; // 0x358(0x08)
	struct UTileView* TileView_Items; // 0x360(0x08)
};

// Class GiftingUI.AthenaGiftingScreen
// Size: 0x780 (Inherited: 0x5b0)
struct UAthenaGiftingScreen : UFortItemPreviewScreen {
	char pad_5B0[0x10]; // 0x5b0(0x10)
	struct UFortGiftingUserSearchWidget* SearchWidget_SocialSearchWidget; // 0x5c0(0x08)
	struct UFortGiftingSocialUserListView* ListView_Recipients; // 0x5c8(0x08)
	struct UTileView* TileView_Items; // 0x5d0(0x08)
	struct UCommonButtonLegacy* Button_Back; // 0x5d8(0x08)
	struct UCommonButtonLegacy* Button_MobileClose; // 0x5e0(0x08)
	struct UCommonButtonLegacy* Button_GiftingPolicy; // 0x5e8(0x08)
	struct UCommonTextBlock* Text_OfferName; // 0x5f0(0x08)
	struct UCommonTextBlock* Text_VBucksOffCount; // 0x5f8(0x08)
	struct UCommonTextBlock* Text_ShownItemIndex; // 0x600(0x08)
	struct UCommonRichTextBlock* Text_NoContent; // 0x608(0x08)
	struct UCommonRichTextBlock* RichText_OfferItemOwnedCount; // 0x610(0x08)
	struct UOverlay* Container_VBucksOffViolator; // 0x618(0x08)
	struct UCommonRichTextBlock* RichText_GiftCount; // 0x620(0x08)
	struct UAthenaGiftingPriceWidget* Widget_Price; // 0x628(0x08)
	struct UAthenaLockerItemInfo* Widget_ItemInfo; // 0x630(0x08)
	struct UDynamicEntryBox* EntryBox_FilterTabs; // 0x638(0x08)
	struct UCommonActionWidget* ActionWidget_FilterTabsPrevious; // 0x640(0x08)
	struct UCommonActionWidget* ActionWidget_FilterTabsNext; // 0x648(0x08)
	float ItemCyclingInterval; // 0x650(0x04)
	char pad_654[0x4]; // 0x654(0x04)
	struct FDataTableRowHandle FilterTabsPreviousAction; // 0x658(0x10)
	struct FDataTableRowHandle FilterTabsNextAction; // 0x668(0x10)
	struct FText RegularGiftingPolicy; // 0x678(0x18)
	struct FText BattlePassGiftingPolicy; // 0x690(0x18)
	char pad_6A8[0x48]; // 0x6a8(0x48)
	struct TMap<struct UCommonButtonLegacy*, enum class EFilterType> FilterMap; // 0x6f0(0x50)
	struct UCommonButtonGroupLegacy* FilterGroup; // 0x740(0x08)
	struct TArray<struct UFortItemDefinition*> ItemDefinitions; // 0x748(0x10)
	struct UFortItemDefinition* PresentedItemDefinition; // 0x758(0x08)
	struct UFortStoreFrontOfferInfo* GiftableOfferInfo; // 0x760(0x08)
	struct UFortStoreFrontOfferInfo* OptionalTokenOfferInfo; // 0x768(0x08)
	char pad_770[0x10]; // 0x770(0x10)

	void OnShowSearchWarningText(bool bShow); // Function GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnShownItemChanged(); // Function GiftingUI.AthenaGiftingScreen.OnShownItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetupFilterTabButton(struct UCommonButtonLegacy* Button, enum class EFilterType FilterType); // Function GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPresentationModeChanged(enum class EGiftingScreenPresentationMode Mode); // Function GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPartyListUpdated(bool bEmpty); // Function GiftingUI.AthenaGiftingScreen.OnPartyListUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFriendSelectionChanged(); // Function GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFilterChanged(enum class EFilterType FilterType); // Function GiftingUI.AthenaGiftingScreen.OnFilterChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleTokenOfferPurchaseComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo> PurchasedItems); // Function GiftingUI.AthenaGiftingScreen.HandleTokenOfferPurchaseComplete // (Final|Native|Private|HasOutParms) // @ game+0x3d82c38
};

// Class GiftingUI.AthenaGiftingWrapOptionsPanel
// Size: 0x388 (Inherited: 0x320)
struct UAthenaGiftingWrapOptionsPanel : UCommonActivatableWidget {
	char pad_320[0x28]; // 0x320(0x28)
	struct TArray<struct TSoftObjectPtr<struct UFortGiftBoxItemDefinition>> GiftBoxes; // 0x348(0x10)
	struct TArray<struct UFortGiftBoxItemDefinition*> GiftBoxItemDefs; // 0x358(0x10)
	char pad_368[0x10]; // 0x368(0x10)
	struct UCommonButtonLegacy* Button_ConfirmWrap; // 0x378(0x08)
	struct UTileView* TileView_WrapOptions; // 0x380(0x08)
};

// Class GiftingUI.FortGiftingSocialUserListEntry
// Size: 0xd20 (Inherited: 0xc38)
struct UFortGiftingSocialUserListEntry : USocialListEntryBase {
	char pad_C38[0xc0]; // 0xc38(0xc0)
	struct UFortSocialAvatarIcon* Avatar_MemberIcon; // 0xcf8(0x08)
	struct USocialNameTextBlock* Text_SocialName; // 0xd00(0x08)
	struct UCommonRichTextBlock* RichText_EligibilityStatus; // 0xd08(0x08)
	struct UCommonRichTextBlock* RichText_OwnedItems; // 0xd10(0x08)
	struct UAthenaGiftingPriceWidget* Widget_Price; // 0xd18(0x08)

	void SetPresentationMode(enum class ERecipientPresentationMode Mode); // Function GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUserItemSet(); // Function GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRecipientStatusUpdated(); // Function GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnTouchSelectionConfirmed(); // Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation); // Function GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class GiftingUI.FortGiftingSocialUserListView
// Size: 0x400 (Inherited: 0x308)
struct UFortGiftingSocialUserListView : USocialUserListViewBase {
	float RefreshRecipientStatusDelay; // 0x308(0x04)
	char pad_30C[0xf4]; // 0x30c(0xf4)
};

// Class GiftingUI.FortGiftingUserSearchWidget
// Size: 0x2d0 (Inherited: 0x288)
struct UFortGiftingUserSearchWidget : UCommonUserWidget {
	struct UEditableText* EditableText_SearchFriends; // 0x288(0x08)
	struct UCommonButtonBase* Button_ClearQuery; // 0x290(0x08)
	struct UCommonButtonBase* Button_SubmitQuery; // 0x298(0x08)
	char pad_2A0[0x30]; // 0x2a0(0x30)

	void OnSearchCommit(bool bSearchStringShort); // Function GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleSearchFriendsTextEntered(struct FText Text, enum class ETextCommit CommitMethod); // Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered // (Final|Native|Private|HasOutParms) // @ game+0x3d82ac0
	void HandleSearchFriendsTextChanged(struct FText Text); // Function GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged // (Final|Native|Private|HasOutParms) // @ game+0x3d82a08
};

// Class GiftingUI.FortGiftingWrapOptionListEntry
// Size: 0xc38 (Inherited: 0xc20)
struct UFortGiftingWrapOptionListEntry : UCommonButtonLegacy {
	char pad_C20[0x8]; // 0xc20(0x08)
	struct UFortGiftBoxItemDefinition* GiftBoxDefinition; // 0xc28(0x08)
	struct UCommonLazyImage* Image_Gift; // 0xc30(0x08)
};

// Class GiftingUI.FortGiftingData
// Size: 0x4a8 (Inherited: 0x458)
struct UFortGiftingData : UFortGameFeatureData {
	SoftClassProperty GiftingScreenClass; // 0x458(0x28)
	SoftClassProperty GiftingConfirmationScreenClass; // 0x480(0x28)
};

