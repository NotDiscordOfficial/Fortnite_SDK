// Class BattlePassS17UI.BattlePassLandingPageS17
// Size: 0x468 (Inherited: 0x418)
struct UBattlePassLandingPageS17 : UBattlePassLandingPageBase {
	struct UBattlePassLandingPageButton* Button_Rewards; // 0x418(0x08)
	struct UBattlePassLandingPageButton* Button_CharacterCustomizer; // 0x420(0x08)
	struct UBattlePassLandingPageButton* Button_BonusRewards; // 0x428(0x08)
	struct UBattlePassLandingPageButton* Button_Quests; // 0x430(0x08)
	struct UBattlePassLandingPageButton* Button_BuyBattlePass; // 0x438(0x08)
	struct UBattlePassLandingPageButton* Button_JoinSubscription; // 0x440(0x08)
	struct UBattlePassLandingPageButton* Button_BuyResources; // 0x448(0x08)
	struct UBattlePassLandingPageButton* Button_GiftBattlePass; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x460(0x08)

	void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed); // Function BattlePassS17UI.BattlePassLandingPageS17.OnBattlePassSubscriptionAllowed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBattlePassOwned(); // Function BattlePassS17UI.BattlePassLandingPageS17.OnBattlePassOwned // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBattlePassGiftingAllowed(bool bGiftingAllowed); // Function BattlePassS17UI.BattlePassLandingPageS17.OnBattlePassGiftingAllowed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class BattlePassS17UI.BattlePassMysteryRewardPageS17
// Size: 0x3f8 (Inherited: 0x3f8)
struct UBattlePassMysteryRewardPageS17 : UBattlePassRewardPageBase {
};

// Class BattlePassS17UI.BattlePassRewardPageS17
// Size: 0x460 (Inherited: 0x3f8)
struct UBattlePassRewardPageS17 : UBattlePassRewardPageBase {
	struct UFortBattlePassRewardGrid* RewardsGridClass; // 0x3f8(0x08)
	struct UFortPageNavigator* PageNavigator; // 0x400(0x08)
	struct UFortBattlePassTile* FocusedReward; // 0x408(0x08)
	struct TArray<struct UFortBattlePassRewardGrid*> GridPages; // 0x410(0x10)
	char pad_420[0x4]; // 0x420(0x04)
	enum class ERewardPageType RewardPageType; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	int32_t HoldTileTooltip_ClaimedRewardsToHide; // 0x428(0x04)
	int32_t HoldTileTooltip_RequiredBattleStarsToShow; // 0x42c(0x04)
	struct UFortBattlePassTutorialTooltipS17* TutorialTooltip_SecondPageUnlock; // 0x430(0x08)
	struct UFortBattlePassTutorialTooltipS17* TutorialTooltip_ClaimAllRewards; // 0x438(0x08)
	struct UFortBattlePassTutorialTooltipS17* TutorialTooltip_HoldTile; // 0x440(0x08)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x448(0x08)
	struct UBattlePassBulkBuyInputData* BulkBuyInputData; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)

	void OnPageChanged(int32_t PageNumber); // Function BattlePassS17UI.BattlePassRewardPageS17.OnPageChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function BattlePassS17UI.BattlePassRewardPageS17.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitForPageType(enum class ERewardPageType InRewardPageType); // Function BattlePassS17UI.BattlePassRewardPageS17.OnInitForPageType // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class BattlePassS17UI.BattlePassScreenS17
// Size: 0xb50 (Inherited: 0x7c8)
struct UBattlePassScreenS17 : UBattlePassScreenBase {
	struct UFortBattlePassPurchaseResourcesWidget* ResourcePurchaseScreenClass; // 0x7c8(0x08)
	struct UCommonButtonLegacy* Button_Close; // 0x7d0(0x08)
	struct UCommonButtonLegacy* Button_CloseMobile; // 0x7d8(0x08)
	struct UCommonButtonBase* Button_BulkBuyRewards; // 0x7e0(0x08)
	struct UCommonButtonLegacy* Button_ToggleViewDetails; // 0x7e8(0x08)
	struct UCommonButtonBase* Button_ToggleViewDetails_Mobile; // 0x7f0(0x08)
	struct UCommonButtonLegacy* Button_ReplayTrailer; // 0x7f8(0x08)
	struct UCommonButtonBase* Button_ReplayTrailer_Mobile; // 0x800(0x08)
	struct UCommonButtonLegacy* Button_ShowAbout; // 0x808(0x08)
	struct UCommonButtonBase* Button_ShowAbout_Mobile; // 0x810(0x08)
	struct UCommonButtonLegacy* Button_ShowAboutCustomization; // 0x818(0x08)
	struct UCommonButtonBase* Button_ShowAboutCustomization_Mobile; // 0x820(0x08)
	struct UCommonVisibilitySwitcher* MobileVisibilitySwitcher; // 0x828(0x08)
	struct UFortBattlePassCurrencyPanel* BattlePassCurrencyPanel; // 0x830(0x08)
	struct UAthenaExclusiveRewardBanner* AthenaExclusiveRewardBanner; // 0x838(0x08)
	struct UCommonTextBlock* Text_Description; // 0x840(0x08)
	struct UCommonTextBlock* Text_ItemName; // 0x848(0x08)
	struct UAthenaRewardItemTypeRarityTag* ItemRewardTag; // 0x850(0x08)
	struct UCommonTextBlock* Text_SetDetails; // 0x858(0x08)
	struct UCommonVisibilitySwitcher* Switcher_ContextualButtons; // 0x860(0x08)
	struct UFortHoldableButton* Button_BuyLevels; // 0x868(0x08)
	struct UFortHoldableButton* Button_BuyBattlePass; // 0x870(0x08)
	struct UFortHoldableButton* Button_ClaimReward; // 0x878(0x08)
	struct UBorder* Tag_RequiresBP; // 0x880(0x08)
	struct UBorder* Tag_PageLocked; // 0x888(0x08)
	struct UBorder* Tag_BaseItem; // 0x890(0x08)
	struct UBorder* Tag_Prerequisite; // 0x898(0x08)
	struct UBorder* Tag_NotEnough_Currency; // 0x8a0(0x08)
	struct UBorder* Tag_Cost; // 0x8a8(0x08)
	struct UBorder* Tag_Owned; // 0x8b0(0x08)
	struct UBorder* Tag_Delayed; // 0x8b8(0x08)
	char pad_8C0[0x48]; // 0x8c0(0x48)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x908(0x08)
	struct UAthenaSeasonItemEntryBase* CurrentSelectedEntry; // 0x910(0x08)
	struct TArray<enum class EBattlePassView> SwitcherSubPageTypes; // 0x918(0x10)
	struct UCommonVisibilitySwitcher* SubPageSwitcher; // 0x928(0x08)
	char pad_930[0xc0]; // 0x930(0xc0)
	int32_t BattleStarsTooltipHideLevel; // 0x9f0(0x04)
	char pad_9F4[0x4]; // 0x9f4(0x04)
	struct UFortBattlePassTutorialTooltipS17* TutorialTooltip_BattleStars; // 0x9f8(0x08)
	struct UFortBattlePassTutorialTooltipS17* TutorialTooltip_AlienArtifacts; // 0xa00(0x08)
	char pad_A08[0x148]; // 0xa08(0x148)

	void OverviewShowAnimationFinished(); // Function BattlePassS17UI.BattlePassScreenS17.OverviewShowAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x203d3e0
	void OnTransitionItemDetails(bool bTransitionForward); // Function BattlePassS17UI.BattlePassScreenS17.OnTransitionItemDetails // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetPrerequisiteInfo(struct FText Description, int32_t OwnedRewards, int32_t NeededRewards); // Function BattlePassS17UI.BattlePassScreenS17.OnSetPrerequisiteInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnSetItemPrice(int32_t Cost, enum class EBattlePassCurrencyType CurrencyType); // Function BattlePassS17UI.BattlePassScreenS17.OnSetItemPrice // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetDynamicInput(enum class EBattlePassInputs InputType, struct UBattlePassInputData* InputData); // Function BattlePassS17UI.BattlePassScreenS17.OnSetDynamicInput // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetClaimedRewardInfo(int32_t OwnedRewards, int32_t TotalRewards); // Function BattlePassS17UI.BattlePassScreenS17.OnSetClaimedRewardInfo // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLevelChanged(int32_t Level); // Function BattlePassS17UI.BattlePassScreenS17.OnLevelChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnItemDelayed(struct FTimespan Delay); // Function BattlePassS17UI.BattlePassScreenS17.OnItemDelayed // (Event|Protected|HasDefaults|BlueprintEvent) // @ game+0xda7c34
	void OnInsufficientFunds(enum class EBattlePassCurrencyType CurrencyType); // Function BattlePassS17UI.BattlePassScreenS17.OnInsufficientFunds // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBattlePassOwned(); // Function BattlePassS17UI.BattlePassScreenS17.OnBattlePassOwned // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleSwitcherVisibilityShown(); // Function BattlePassS17UI.BattlePassScreenS17.HandleSwitcherVisibilityShown // (Final|Native|Public|BlueprintCallable) // @ game+0x2e884e0
	void HandleClaimRewardComplete(bool bSuccess, struct TArray<struct FString> OfferTemplateIdList); // Function BattlePassS17UI.BattlePassScreenS17.HandleClaimRewardComplete // (Final|Native|Private|HasOutParms) // @ game+0x3b05eac
	struct FTimespan GetQuestPageDelay(); // Function BattlePassS17UI.BattlePassScreenS17.GetQuestPageDelay // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e884a0
};

// Class BattlePassS17UI.FortBattlePassBulkBuyPageS17
// Size: 0x478 (Inherited: 0x3f8)
struct UFortBattlePassBulkBuyPageS17 : UFortBattlePassBulkBuyPageBase {
	struct UCommonButtonBase* Button_Addition; // 0x3f8(0x08)
	struct UCommonButtonBase* Button_Subtraction; // 0x400(0x08)
	struct UDynamicEntryBox* DynamicEntryBox_TilesEntries; // 0x408(0x08)
	struct UCommonVisibilitySwitcher* Switcher_BottomButtons; // 0x410(0x08)
	struct UFortHoldableButton* Button_BuyLevels; // 0x418(0x08)
	struct UFortHoldableButton* Button_ClaimReward; // 0x420(0x08)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x428(0x08)
	struct UAthenaSeasonItemDefinition* SeasonItemDefinition; // 0x430(0x08)
	struct UFortBattlePassTile* FocusedReward; // 0x438(0x08)
	char pad_440[0x30]; // 0x440(0x30)
	struct UScrollBox* ScrollBox_Pages; // 0x470(0x08)

	void OnRewardCountChanged(int32_t Count); // Function BattlePassS17UI.FortBattlePassBulkBuyPageS17.OnRewardCountChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPageRangeChanged(int32_t FromPage, int32_t ToPage); // Function BattlePassS17UI.FortBattlePassBulkBuyPageS17.OnPageRangeChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCostChanged(int32_t Cost); // Function BattlePassS17UI.FortBattlePassBulkBuyPageS17.OnCostChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleUserScrolled(float ScrollAmount); // Function BattlePassS17UI.FortBattlePassBulkBuyPageS17.HandleUserScrolled // (Final|Native|Protected) // @ game+0x2e88510
};

// Class BattlePassS17UI.FortBattlePassCustomSkinPageS17
// Size: 0x490 (Inherited: 0x488)
struct UFortBattlePassCustomSkinPageS17 : UFortBattlePassCustomSkinPageBase {
	struct UFortBattlePassTutorialTooltipS17* TutorialTooltip_PurchaseStyle; // 0x488(0x08)
};

// Class BattlePassS17UI.FortBattlePassTutorialTooltipS17
// Size: 0x298 (Inherited: 0x288)
struct UFortBattlePassTutorialTooltipS17 : UCommonUserWidget {
	struct UCommonRichTextBlock* Text_Tooltip; // 0x288(0x08)
	char pad_290[0x8]; // 0x290(0x08)

	void ShowTooltip(); // Function BattlePassS17UI.FortBattlePassTutorialTooltipS17.ShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetText(struct FText Text); // Function BattlePassS17UI.FortBattlePassTutorialTooltipS17.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x20ee970
	void HideTooltip(); // Function BattlePassS17UI.FortBattlePassTutorialTooltipS17.HideTooltip // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

