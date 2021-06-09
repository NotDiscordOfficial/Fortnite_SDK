// WidgetBlueprintGeneratedClass AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C
// Size: 0x8bc (Inherited: 0x7e0)
struct UAthenaItemCustomizationSelector_C : UAthenaItemSelectorScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UWidgetAnimation* PulseAnim; // 0x7e8(0x08)
	struct UWidgetAnimation* CannotSlide; // 0x7f0(0x08)
	struct UWidgetAnimation* NormalState; // 0x7f8(0x08)
	struct UWidgetAnimation* SlideRight; // 0x800(0x08)
	struct UWidgetAnimation* SlideLeft; // 0x808(0x08)
	struct UWidgetAnimation* HideTextSearch; // 0x810(0x08)
	struct UWidgetAnimation* ShowTextSearch; // 0x818(0x08)
	struct UWidgetAnimation* ItemInfoIntroOutro; // 0x820(0x08)
	struct UWidgetAnimation* Intro; // 0x828(0x08)
	struct UOverlay* CameraFrameContainer; // 0x830(0x08)
	struct UCloseButton_C* CloseButton; // 0x838(0x08)
	struct UHorizontalBox* ExclusiveCalloutBox; // 0x840(0x08)
	struct UCommonRichTextBlock* ExclusiveCalloutText; // 0x848(0x08)
	struct USafeZone* MainSafeZone; // 0x850(0x08)
	struct USizeBox* SB_MainContent; // 0x858(0x08)
	struct USizeBox* SB_SaveAndExit; // 0x860(0x08)
	struct UCommonTextBlock* ShortDescriptionText; // 0x868(0x08)
	struct UImage* SlotImage; // 0x870(0x08)
	struct UCommonTextBlock* TextBox_LockerRoomMode; // 0x878(0x08)
	struct UCommonWidgetSwitcherLegacy* WidgetSwitcher_InteractionMethod; // 0x880(0x08)
	struct UCommonWidgetSwitcherLegacy* WidgetSwitcher_ItemEditor; // 0x888(0x08)
	struct UProgressModalWidget_C* ProgressModal; // 0x890(0x08)
	bool bPickingStyle; // 0x898(0x01)
	bool bHandledBackRequest; // 0x899(0x01)
	char pad_89A[0x6]; // 0x89a(0x06)
	struct FTimerHandle AutoHideInfoPanelEventTimer; // 0x8a0(0x08)
	struct FTimerHandle TextEntryTimer; // 0x8a8(0x08)
	int32_t SeasonFilter; // 0x8b0(0x04)
	int32_t MaxSeason; // 0x8b4(0x04)
	float ItemInfoHideDelayTime; // 0x8b8(0x04)

	void UpdateSeasonButtonEnabledState(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateSeasonButtonEnabledState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UMaterialInstance* GetCategoryImage(enum class EAthenaCustomizationCategory Index, struct UMaterialInstance* OverrideImage); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCategoryImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HandleItemSetupFinished(struct FText InText, enum class EAthenaCustomizationCategory Category, struct UMaterialInstance* OverrideImage); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleItemSetupFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetCurrentItemCosmeticDefinition(struct UAthenaCosmeticItemDefinition* Cosmetic Item Definition); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCurrentItemCosmeticDefinition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowSavingModal(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ShowSavingModal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFinsihedItemSave(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinsihedItemSave // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSavingItemStarted(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnSavingItemStarted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTabSelectionChanged(bool bShowingVariants); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnTabSelectionChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCurrentItemChanged(struct UFortItem* SelectedItem); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnCurrentItemChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_1_OnUpdateSaveButtonVisuals__DelegateSignature(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_1_OnUpdateSaveButtonVisuals__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_2_OnUpdateSaveButtonVisuals__DelegateSignature(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_2_OnUpdateSaveButtonVisuals__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnFinishedItemSetup(struct FText CategoryDisplayName, struct FText ItemDisplayTypeName, enum class EAthenaCustomizationCategory SelectedCategory, struct UMaterialInstance* OverrideSlotImage); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinishedItemSetup // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HandleTextSearchSelectedChanged(bool bIsSelected); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleTextSearchSelectedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleTextChanged(struct FText NewText); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleTextChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnHideItemInfoHeader(bool bShouldHide); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnHideItemInfoHeader // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateExclusiveItemCallout(bool bShouldShow, struct FText CalloutText); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnUpdateExclusiveItemCallout // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnVariantSelectionChangedBP(struct FMcpVariantChannelInfo InVariant); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnVariantSelectionChangedBP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HandleShowInfoPanel(struct UFortItem* SelectedItem); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleShowInfoPanel // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleHideInfoPanel(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleHideInfoPanel // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_HandleBack(); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BP_HandleBack // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaItemCustomizationSelector(int32_t EntryPoint); // Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

