// WidgetBlueprintGeneratedClass AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C
// Size: 0x7a8 (Inherited: 0x740)
struct UAthenaDirectAquisitionStyleScreen_C : UFortStoreFrontOfferDetailsWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x740(0x08)
	struct UPanelButton_C* Button_Next; // 0x748(0x08)
	struct UPanelButton_C* Button_Previous; // 0x750(0x08)
	struct USizeBox* CameraFramingWidget; // 0x758(0x08)
	struct UCloseButton_C* CloseButton; // 0x760(0x08)
	struct UItemInfoHeaderWidget_C* ItemInfoHeader; // 0x768(0x08)
	struct UAthenaLockedStyleNotification_C* LockedNotification; // 0x770(0x08)
	struct UCommonTextBlock* StyleDisclaimer; // 0x778(0x08)
	bool OfferSet; // 0x780(0x01)
	char pad_781[0x3]; // 0x781(0x03)
	int32_t IndexIntoOffersWithVariantsList; // 0x784(0x04)
	struct TArray<int32_t> OfferSubIndicesWithVariants; // 0x788(0x10)
	struct UFortItemDefinition* InitialTriggeringItemDef; // 0x798(0x08)
	struct UFortItem* CharacterItem; // 0x7a0(0x08)

	void ViewVaultItemWithBackpack(struct UFortItemDefinition* ItemToRepresent); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ViewVaultItemWithBackpack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupCharacterItem(); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SetupCharacterItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UFortAccountItemDefinition* GetOfferGrantedItemDef(); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetOfferGrantedItemDef // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RebuildStylesFromOffer(); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.RebuildStylesFromOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchToNextItemInOffer(int32_t Direction); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SwitchToNextItemInOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScanOfferForVariants(); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ScanOfferForVariants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromVariant(struct FGameplayTag VariantChannelTag, struct FGameplayTag VariantTag, struct FString Variant CustomData, bool IsOwned); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdateFromVariant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* GetWidgetForFramingViewedItem(); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetWidgetForFramingViewedItem // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool bPassThrough); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnOfferSet(); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnOfferSet // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnVariantChanged(struct FGameplayTag VariantChannel, struct FGameplayTag VariantTag, struct FString VariantCustomData, bool IsOwned); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnVariantChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int32_t EntryPoint); // Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

