// WidgetBlueprintGeneratedClass AthenaLockerTab.AthenaLockerTab_C
// Size: 0xe68 (Inherited: 0xcb0)
struct UAthenaLockerTab_C : UAthenaCustomizationScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xcb0(0x08)
	struct UWidgetAnimation* LoopingRandomEnabled_2; // 0xcb8(0x08)
	struct UWidgetAnimation* LoopingRandomEnabled; // 0xcc0(0x08)
	struct UWidgetAnimation* PresetAppliedToast_2; // 0xcc8(0x08)
	struct UWidgetAnimation* PresetAppliedToast_3; // 0xcd0(0x08)
	struct UWidgetAnimation* PresetAppliedToast; // 0xcd8(0x08)
	struct UWidgetAnimation* RandomDisabledDisclaimer; // 0xce0(0x08)
	struct UWidgetAnimation* RandomEnabledDisclaimer; // 0xce8(0x08)
	struct UWidgetAnimation* ItemInfoIntroOutro; // 0xcf0(0x08)
	struct UAthenaCustomizationSlotButton_C* BackpackButton; // 0xcf8(0x08)
	struct USoloButton_C* Button_ChangeName; // 0xd00(0x08)
	struct UAthenaCustomizationSlotButton_C* CharacterButton; // 0xd08(0x08)
	struct ULoadoutSaveConfirmation_C* Confirmation_Save; // 0xd10(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton1; // 0xd18(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton2; // 0xd20(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton3; // 0xd28(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton4; // 0xd30(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton5; // 0xd38(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton6; // 0xd40(0x08)
	struct UImage* Image; // 0xd48(0x08)
	struct UImage* Image_74; // 0xd50(0x08)
	struct UImage* Image_94; // 0xd58(0x08)
	struct UImage* Image_132; // 0xd60(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton1; // 0xd68(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton2; // 0xd70(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton3; // 0xd78(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton4; // 0xd80(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton5; // 0xd88(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton6; // 0xd90(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton7; // 0xd98(0x08)
	struct ULockerBuiltInEmoteWidget_C* LockerBuiltInEmoteWidget; // 0xda0(0x08)
	struct ULockerBuiltInEmoteWidget_C* LockerBuiltInEmoteWidget_3; // 0xda8(0x08)
	struct UAthenaCustomizationSlotButton_C* MusicPackButton; // 0xdb0(0x08)
	struct UCommonTextBlock* NextRandom; // 0xdb8(0x08)
	struct USizeBox* Random_Disclaimer; // 0xdc0(0x08)
	struct UCommonRichTextBlock* RandomDisclaimerText_Enabled; // 0xdc8(0x08)
	struct USafeZone* SafeZone_3; // 0xdd0(0x08)
	struct USafeZone* SafeZone_iteminfo; // 0xdd8(0x08)
	struct USizeBox* SizeBox_nextrando; // 0xde0(0x08)
	struct UCommonTextBlock* Text_HoldForRandom; // 0xde8(0x08)
	struct UCommonTextBlock* UnsavedText_2; // 0xdf0(0x08)
	struct UVerticalBox* VerticalBox_Buttons; // 0xdf8(0x08)
	struct USoloButton_C* xButton_Loadouts; // 0xe00(0x08)
	struct USoloButton_C* xButton_RandomPresets; // 0xe08(0x08)
	struct USoloButton_C* xButton_SavePreset; // 0xe10(0x08)
	struct TArray<struct UAthenaCustomizationSlotButtonWrapper_C*> AllSlots; // 0xe18(0x10)
	enum class EAthenaCustomizationCategory CurrentCustomizationType; // 0xe28(0x01)
	char pad_E29[0x3]; // 0xe29(0x03)
	int32_t CurrentSubslotIndex; // 0xe2c(0x04)
	struct UAthenaItemCustomizationSelector_C* ItemCustomizationSelector; // 0xe30(0x08)
	struct UAthenaCustomizationSlotButton_C* CustomizationSlotButtonToPlayConfirmationOn; // 0xe38(0x08)
	struct FTimerHandle AutoHideDetailsForDances; // 0xe40(0x08)
	struct UAthenaCustomizationSlotButtonWrapper_C* FirstSlotInMenu; // 0xe48(0x08)
	struct UWidget* LastHoveredSlot_1; // 0xe50(0x08)
	struct TArray<struct UAthenaCustomizationSlotButtonWrapper_C*> AnimBoundSlotArray; // 0xe58(0x10)

	void AnimShowRandomDisclaimerEnabled(bool Show); // Function AthenaLockerTab.AthenaLockerTab_C.AnimShowRandomDisclaimerEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePresetButtonStyles(enum class ECommonInputType InputPin); // Function AthenaLockerTab.AthenaLockerTab_C.UpdatePresetButtonStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlaySlotAnimationAndCenterSlot(); // Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotAnimationAndCenterSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayEquippedLockerMusic_STW(); // Function AthenaLockerTab.AthenaLockerTab_C.PlayEquippedLockerMusic_STW // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlaySlotClickedAnimation(struct UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn); // Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotClickedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BeginPickingCustomization(struct UCommonButtonLegacy* WidgetToReturnFocusTo, struct FAthenaCustomizationParams CustomizationParams); // Function AthenaLockerTab.AthenaLockerTab_C.BeginPickingCustomization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRefreshForNewLoadout(struct FString LoadoutName, bool bIsShuffleTile); // Function AthenaLockerTab.AthenaLockerTab_C.OnRefreshForNewLoadout // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBeginPickingCustomizationSlot(struct UAthenaCustomizationSlotSelectorButton* SlotButton); // Function AthenaLockerTab.AthenaLockerTab_C.OnBeginPickingCustomizationSlot // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBeginSavingLoadouts(); // Function AthenaLockerTab.AthenaLockerTab_C.OnBeginSavingLoadouts // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBeginPickingLoadouts(); // Function AthenaLockerTab.AthenaLockerTab_C.OnBeginPickingLoadouts // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaLockerTab.AthenaLockerTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaLockerTab.AthenaLockerTab_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function AthenaLockerTab.AthenaLockerTab_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void TriggerRandomLoopingAnim(); // Function AthenaLockerTab.AthenaLockerTab_C.TriggerRandomLoopingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaLockerTab(int32_t EntryPoint); // Function AthenaLockerTab.AthenaLockerTab_C.ExecuteUbergraph_AthenaLockerTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

