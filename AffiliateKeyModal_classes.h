// WidgetBlueprintGeneratedClass AffiliateKeyModal.AffiliateKeyModal_C
// Size: 0x560 (Inherited: 0x4a8)
struct UAffiliateKeyModal_C : UFortAffilateModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* SuccessAnim; // 0x4b0(0x08)
	struct UWidgetAnimation* Shake; // 0x4b8(0x08)
	struct UImage* Check; // 0x4c0(0x08)
	struct UIconTextButton_C* CloseButton; // 0x4c8(0x08)
	struct UCloseButton_C* CloseButton_Mobile; // 0x4d0(0x08)
	struct UCommonTextBlock* CommonTextBlock_1; // 0x4d8(0x08)
	struct UCommonTextBlock* CommonTextBlock_3; // 0x4e0(0x08)
	struct UCommonTextBlock* ConnectionError; // 0x4e8(0x08)
	struct UCommonTextBlock* Description; // 0x4f0(0x08)
	struct UCommonActionWidget* EditTextActionWidget; // 0x4f8(0x08)
	struct UCommonTextBlock* EntryError; // 0x500(0x08)
	struct UCommonTextBlock* ErrorPart2; // 0x508(0x08)
	struct UIconTextButton_C* LaunchWebsite; // 0x510(0x08)
	struct ULightbox_C* Lightbox; // 0x518(0x08)
	struct UImage* McpWaitingSpinner; // 0x520(0x08)
	struct UCommonTextBlock* Warning; // 0x528(0x08)
	bool Found; // 0x530(0x01)
	bool ConnectionTimeout; // 0x531(0x01)
	char pad_532[0x6]; // 0x532(0x06)
	struct FMulticastInlineDelegate OnPopupClosed; // 0x538(0x10)
	bool bSkipAutoPopulate; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct FMulticastInlineDelegate OnSuccess; // 0x550(0x10)

	void SetupAffiliateField(struct FString AffilateName); // Function AffiliateKeyModal.AffiliateKeyModal_C.SetupAffiliateField // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMobileButtons(); // Function AffiliateKeyModal.AffiliateKeyModal_C.SetMobileButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AffiliateKeyModal.AffiliateKeyModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnSet(bool bSuccess); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnSet // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnCheckComplete(bool bSuccess, bool bWasValidAffiliateName, struct FString AffilateNameChecked); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnCheckComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInputModeChanged(bool bUsingGamepad); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AffiliateKeyModal.AffiliateKeyModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AffiliateKeyModal.AffiliateKeyModal_C.BndEvt__CloseButton_Mobile_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_SuccessAnim_K2Node_WidgetAnimationEvent_2(); // Function AffiliateKeyModal.AffiliateKeyModal_C.WidgetAnimationEvt_SuccessAnim_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AffiliateKeyModal(int32_t EntryPoint); // Function AffiliateKeyModal.AffiliateKeyModal_C.ExecuteUbergraph_AffiliateKeyModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnSuccess__DelegateSignature(); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPopupClosed__DelegateSignature(); // Function AffiliateKeyModal.AffiliateKeyModal_C.OnPopupClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

