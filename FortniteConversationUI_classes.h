// Class FortniteConversationUI.FortItemTransactionBrief
// Size: 0x2a0 (Inherited: 0x288)
struct UFortItemTransactionBrief : UCommonUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x290(0x08)
	struct UFortItem* DisplayItem; // 0x298(0x08)

	void OnTransactionInfoReceived(struct UFortItem* Item); // Function FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortApplyAbilityBrief
// Size: 0x2c0 (Inherited: 0x2a0)
struct UFortApplyAbilityBrief : UFortItemTransactionBrief {
	struct FText PurchaseServiceText; // 0x2a0(0x18)
	struct UCommonRichTextBlock* Text_Display; // 0x2b8(0x08)

	void OnUnableToPurchase(enum class EPreventAbilityUseReason Reason); // Function FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAbleToPurchase(); // Function FortniteConversationUI.FortApplyAbilityBrief.OnAbleToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortBasicBrief
// Size: 0x288 (Inherited: 0x288)
struct UFortBasicBrief : UCommonUserWidget {

	void OnChoiceTextReceived(struct FText Text); // Function FortniteConversationUI.FortBasicBrief.OnChoiceTextReceived // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortBuyBrief
// Size: 0x2a0 (Inherited: 0x2a0)
struct UFortBuyBrief : UFortItemTransactionBrief {

	void OnPurchaseDataReceived(int32_t StackSize, int32_t RemainingForSale); // Function FortniteConversationUI.FortBuyBrief.OnPurchaseDataReceived // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDisplayUnavailability(enum class ECannotBuyReason CannotBuyReason); // Function FortniteConversationUI.FortBuyBrief.OnDisplayUnavailability // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortConversationMarker
// Size: 0x3a0 (Inherited: 0x300)
struct UFortConversationMarker : UFortActorIndicatorWidget {
	char pad_300[0x38]; // 0x300(0x38)
	float InitialZOffset; // 0x338(0x04)
	float ManualMarkerZOffset; // 0x33c(0x04)
	float MessageBubbleDuration; // 0x340(0x04)
	float LastTextBubbleDuration; // 0x344(0x04)
	struct UCommonVisibilitySwitcher* Switcher_States; // 0x348(0x08)
	struct UWidget* Overlay_PreviewState; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)
	struct UFortConversationMessageWidget* ConversationMessage_Main; // 0x360(0x08)
	char pad_368[0x8]; // 0x368(0x08)
	struct UCommonTextBlock* Text_ParticipantName; // 0x370(0x08)
	char pad_378[0x8]; // 0x378(0x08)
	struct UFortKeybindWidget* Keybind_Nameplate; // 0x380(0x08)
	struct UImage* NPCIcon; // 0x388(0x08)
	struct UTexture2D* CustomDialogMarkerIndicatorIcon; // 0x390(0x08)
	struct UTexture2D* DefaultDialogMarkerIndicatorIcon; // 0x398(0x08)

	void OnSetIndicatedActor(struct AActor* NewIndicatorActor); // Function FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnMessageShownOverActor(struct AActor* OverActor); // Function FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInteractionRangeChanged(enum class EInteractionRange TargetInteractionRange); // Function FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCanInteract(bool bCanInteract); // Function FortniteConversationUI.FortConversationMarker.OnCanInteract // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortConversationMessageWidget
// Size: 0x260 (Inherited: 0x260)
struct UFortConversationMessageWidget : UUserWidget {

	void SetPreviewMessage(struct FText MessageToSet); // Function FortniteConversationUI.FortConversationMessageWidget.SetPreviewMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b16140
	void OnPreviewMessageSet(struct FText PreviewText); // Function FortniteConversationUI.FortConversationMessageWidget.OnPreviewMessageSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMessageShown(); // Function FortniteConversationUI.FortConversationMessageWidget.OnMessageShown // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnMessageHidden(); // Function FortniteConversationUI.FortConversationMessageWidget.OnMessageHidden // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnMainMessageSet(struct FText NPCName, struct FText MessageBody); // Function FortniteConversationUI.FortConversationMessageWidget.OnMainMessageSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortConversationOption
// Size: 0xd08 (Inherited: 0xc70)
struct UFortConversationOption : UFortRadialPickerEntry {
	char pad_C70[0x8]; // 0xc70(0x08)
	struct USoundBase* OnOptionConfirmedSound; // 0xc78(0x08)
	struct USoundBase* OnOptionHoveredSound; // 0xc80(0x08)
	struct UCommonVisibilitySwitcher* Switcher_DisplayAsset; // 0xc88(0x08)
	struct TSoftObjectPtr<struct UObject> DefaultSoftTaskIcon; // 0xc90(0x28)
	struct TSoftObjectPtr<struct USoundBase> DefaultConfirmChoiceSound; // 0xcb8(0x28)
	struct TSoftObjectPtr<struct USoundBase> DefaultHoverChoiceSound; // 0xce0(0x28)

	void OnSetupPivotFromRadialInformation(int32_t NumElements, int32_t ItemIndex); // Function FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetupFromItemDef(struct UFortItem* Item); // Function FortniteConversationUI.FortConversationOption.OnSetupFromItemDef // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetupFromDisplayAsset(struct UObject* DisplayAsset); // Function FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOptionConfirmed(); // Function FortniteConversationUI.FortConversationOption.OnOptionConfirmed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	bool IsAvailable(); // Function FortniteConversationUI.FortConversationOption.IsAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b16108
};

// Class FortniteConversationUI.FortConversationOptionsPanel
// Size: 0x138 (Inherited: 0x120)
struct UFortConversationOptionsPanel : UPanelWidget {
	char pad_120[0x10]; // 0x120(0x10)
	int32_t MaxRows; // 0x130(0x04)
	int32_t MiddleColumnWidth; // 0x134(0x04)

	struct UPanelSlot* AddChildToDynamicPanel(struct UWidget* Content); // Function FortniteConversationUI.FortConversationOptionsPanel.AddChildToDynamicPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x3b15e5c
};

// Class FortniteConversationUI.FortConversationScreen
// Size: 0x4b8 (Inherited: 0x320)
struct UFortConversationScreen : UCommonActivatableWidget {
	char pad_320[0x30]; // 0x320(0x30)
	struct UInputComponent* ConversationInputComp; // 0x350(0x08)
	int32_t CurrentlySelectedIndex; // 0x358(0x04)
	struct FName RadialSelectionMaterialParameterName; // 0x35c(0x08)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct FGameplayTag> TagPriorities; // 0x368(0x10)
	struct FName InteractActionNameKBM; // 0x378(0x08)
	struct FName ADSInputAction; // 0x380(0x08)
	struct FName InteractActionNameGamepad; // 0x388(0x08)
	struct FDataTableRowHandle ConfirmBinding; // 0x390(0x10)
	struct FDataTableRowHandle MakeSelectionBinding; // 0x3a0(0x10)
	struct FDataTableRowHandle ADSMouseBinding; // 0x3b0(0x10)
	struct FDataTableRowHandle CancelActionBinding; // 0x3c0(0x10)
	struct FDataTableRowHandle RightTriggerBinding; // 0x3d0(0x10)
	float MobileRadialMenuSizeOverride; // 0x3e0(0x04)
	struct FMargin MobileRadialMenuPaddingOverride; // 0x3e4(0x10)
	struct FMargin MobileDetailsPaddingOverride; // 0x3f4(0x10)
	char pad_404[0x4]; // 0x404(0x04)
	struct UFortSlottedRadialMenu* RadialMenu_DialogOptions; // 0x408(0x08)
	struct UImage* Image_RadialHighlight; // 0x410(0x08)
	struct UFortKeybindWidget* Keybind_Confirm; // 0x418(0x08)
	struct UFortQuestBrief* QuestBrief_Main; // 0x420(0x08)
	struct UFortBuyBrief* BuyBrief_Main; // 0x428(0x08)
	struct UFortUpgradeBrief* UpgradeBrief_Main; // 0x430(0x08)
	struct UFortHireBrief* HireBrief_Main; // 0x438(0x08)
	struct UFortDuelBrief* DuelBrief_Main; // 0x440(0x08)
	struct UFortIntelBrief* IntelBrief_Main; // 0x448(0x08)
	struct UFortShowFutureStormCircleBrief* ShowFutureStormCircleBrief_Main; // 0x450(0x08)
	struct UFortApplyAbilityBrief* RiftToGoBrief_Main; // 0x458(0x08)
	struct UFortApplyAbilityBrief* PropDisguiseBrief_Main; // 0x460(0x08)
	struct UFortBasicBrief* ChatBrief_Main; // 0x468(0x08)
	struct UFortBasicBrief* BasicBrief_Main; // 0x470(0x08)
	struct UFortDataDrivenServiceBrief* DataDrivenServiceBrief_Main; // 0x478(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Details; // 0x480(0x08)
	struct USizeBox* SizeBox_RadialMenu; // 0x488(0x08)
	struct UWidget* Overlay_Details; // 0x490(0x08)
	struct UWidget* Overlay_WheelContainer; // 0x498(0x08)
	struct UImage* Image_Background; // 0x4a0(0x08)
	struct UImage* Image_LoadingSpinner; // 0x4a8(0x08)
	char pad_4B0[0x8]; // 0x4b0(0x08)

	void OnSelectedItemAvailabilityChanged(bool bIsAvailable); // Function FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOptionsPopulated(); // Function FortniteConversationUI.FortConversationScreen.OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnItemSelected(int32_t OriginalIndex); // Function FortniteConversationUI.FortConversationScreen.OnItemSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnConversationStarted(); // Function FortniteConversationUI.FortConversationScreen.OnConversationStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnConversationOptionUnavailable(struct UFortRadialSlot* SelectedEntry); // Function FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EndConversation(); // Function FortniteConversationUI.FortConversationScreen.EndConversation // (Final|Native|Protected) // @ game+0x3b15f9c
};

// Class FortniteConversationUI.FortDataDrivenServiceBrief
// Size: 0x2f8 (Inherited: 0x288)
struct UFortDataDrivenServiceBrief : UCommonUserWidget {
	struct UCommonTextBlock* Text_TitleBar; // 0x288(0x08)
	struct UCommonRichTextBlock* RichText_Description; // 0x290(0x08)
	struct UCommonTextBlock* Text_StockRemaining; // 0x298(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x2a0(0x08)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x2a8(0x50)

	void OnUnableToPurchase(struct FText Reason); // Function FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnTransactionInfoReceived(struct UFortItem* Item); // Function FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAbleToPurchase(); // Function FortniteConversationUI.FortDataDrivenServiceBrief.OnAbleToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortDuelBrief
// Size: 0x2c8 (Inherited: 0x2a0)
struct UFortDuelBrief : UFortItemTransactionBrief {
	struct FText TextTemplate; // 0x2a0(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x2b8(0x08)
	struct UCommonTileView* TileView; // 0x2c0(0x08)

	void DisplayLootItems(struct TArray<struct UFortItem*> Items); // Function FortniteConversationUI.FortDuelBrief.DisplayLootItems // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortHireBrief
// Size: 0x2c0 (Inherited: 0x2a0)
struct UFortHireBrief : UFortItemTransactionBrief {
	struct FText TextTemplate; // 0x2a0(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x2b8(0x08)
};

// Class FortniteConversationUI.FortIntelBrief
// Size: 0x2c0 (Inherited: 0x2a0)
struct UFortIntelBrief : UFortItemTransactionBrief {
	struct FText TextTemplate; // 0x2a0(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x2b8(0x08)
};

// Class FortniteConversationUI.FortQuestBrief
// Size: 0x2d8 (Inherited: 0x288)
struct UFortQuestBrief : UCommonUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct FText ThisMatchOnlyQuestText; // 0x290(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x2a8(0x08)
	struct UCommonTextBlock* Text_MoneyReward; // 0x2b0(0x08)
	struct UCommonTextBlock* Text_XpReward; // 0x2b8(0x08)
	struct UCommonTextBlock* Text_ExpirationTime; // 0x2c0(0x08)
	struct UCommonLazyImage* LazyImage_QuestProviderImage; // 0x2c8(0x08)
	struct UOverlay* Overlay_QuestProvider; // 0x2d0(0x08)

	void OnQuestInformationRecieved(struct FText Objective, struct FFortRarityItemData RarityData, struct FGameplayTag CategoryTag, int32_t XPReward, int32_t MoneyReward); // Function FortniteConversationUI.FortQuestBrief.OnQuestInformationRecieved // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnQuestExpirationTimeSet(bool bDisplayExpirationTime); // Function FortniteConversationUI.FortQuestBrief.OnQuestExpirationTimeSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortShowFutureStormCircleBrief
// Size: 0x2c0 (Inherited: 0x2a0)
struct UFortShowFutureStormCircleBrief : UFortItemTransactionBrief {
	struct FText PurchaseServiceText; // 0x2a0(0x18)
	struct UCommonRichTextBlock* Text_Display; // 0x2b8(0x08)

	void OnUnableToPurchase(enum class EPreventUseStormCircleServiceReason Reason); // Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAbleToPurchase(); // Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnAbleToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.FortTransactionStrip
// Size: 0x278 (Inherited: 0x260)
struct UFortTransactionStrip : UUserWidget {
	struct UCommonTextBlock* Text_CostDescription; // 0x260(0x08)
	struct UFortWorldItemDefinition* ResourceCurrency; // 0x268(0x08)
	char pad_270[0x8]; // 0x270(0x08)

	void OnTransactionInfoReceived(int32_t TransactionCost, int32_t OwnedCurrency); // Function FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOnItemCountChanged(struct TScriptInterface<None> InventoryOwner, struct UFortItemDefinition* Definition, int32_t Delta); // Function FortniteConversationUI.FortTransactionStrip.HandleOnItemCountChanged // (Final|Native|Private) // @ game+0x3b15fb0
};

// Class FortniteConversationUI.FortUpgradeBrief
// Size: 0x2a0 (Inherited: 0x2a0)
struct UFortUpgradeBrief : UFortItemTransactionBrief {

	void OnUpgradeInfoReceived(struct UFortItem* CurrentWeapon); // Function FortniteConversationUI.FortUpgradeBrief.OnUpgradeInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUnableToUpgrade(enum class EFortWeaponUpgradeInteractionResult CannotUpgradeCause); // Function FortniteConversationUI.FortUpgradeBrief.OnUnableToUpgrade // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class FortniteConversationUI.MobileConversationScreen
// Size: 0x4d0 (Inherited: 0x4b8)
struct UMobileConversationScreen : UFortConversationScreen {
	struct UButton* MobileButtonConfirm; // 0x4b8(0x08)
	struct UButton* MobileButtonTouchInformation; // 0x4c0(0x08)
	char pad_4C8[0x8]; // 0x4c8(0x08)

	void OnHandleConfirmClicked(); // Function FortniteConversationUI.MobileConversationScreen.OnHandleConfirmClicked // (Final|Native|Protected) // @ game+0x3b1612c
};

