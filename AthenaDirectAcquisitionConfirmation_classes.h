// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C
// Size: 0x7e8 (Inherited: 0x740)
struct UAthenaDirectAcquisitionConfirmation_C : UFortStoreFrontOfferDetailsWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x740(0x08)
	struct UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* AthenaDirectAcquisitonDetails_BattlePassStarDetails; // 0x748(0x08)
	struct UIconTextButton_C* CancelButton; // 0x750(0x08)
	struct UCommonTextBlock* CommonTextBlock_1; // 0x758(0x08)
	struct UImage* Currency1ItemImage2; // 0x760(0x08)
	struct UVerticalBox* CurrencyVB; // 0x768(0x08)
	struct UScrollBox* ItemRewardsSB; // 0x770(0x08)
	struct ULightbox_C* Lightbox; // 0x778(0x08)
	struct UMTXButton_C* MTXButton; // 0x780(0x08)
	struct UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* NonrefundableText; // 0x788(0x08)
	struct UOverlay* O_Sale_PreviousPrice; // 0x790(0x08)
	struct UCommonTextBlock* OfferName; // 0x798(0x08)
	struct UIconTextButton_C* PurchaseButton; // 0x7a0(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice1; // 0x7a8(0x08)
	struct UCommonTextBlock* TextOriginalPrice1; // 0x7b0(0x08)
	bool CanPurchase; // 0x7b8(0x01)
	bool IsPurchasing; // 0x7b9(0x01)
	char pad_7BA[0x2]; // 0x7ba(0x02)
	int32_t NumberToPurchase; // 0x7bc(0x04)
	bool CanPurchaseLeft; // 0x7c0(0x01)
	bool CanPurchaseRight; // 0x7c1(0x01)
	bool CanChangeQuantity; // 0x7c2(0x01)
	char pad_7C3[0x5]; // 0x7c3(0x05)
	struct FMulticastInlineDelegate Confirm; // 0x7c8(0x10)
	struct FMulticastInlineDelegate Decline; // 0x7d8(0x10)

	void SetPurchaseNumber(int32_t InNumToPurchse); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetPurchaseNumber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCatalogOfferName(); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateCatalogOfferName // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateItemList(); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateItemList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupPrice(struct UWidget* PriceContainer, struct UTextBlock* NormalPriceText, struct UWidget* SalePriceContainer, struct UTextBlock* SalePriceText, struct UImage* CurrencyImage); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetupPrice // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromOffer(); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateFromOffer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnOfferSet(); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BP_OnOfferSet // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaDirectAcquisitionConfirmation(int32_t EntryPoint); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.ExecuteUbergraph_AthenaDirectAcquisitionConfirmation // (Final|UbergraphFunction) // @ game+0xda7c34
	void Decline__DelegateSignature(); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Decline__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Confirm__DelegateSignature(); // Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Confirm__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

