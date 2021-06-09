// WidgetBlueprintGeneratedClass AthenaItemShopConfirmation.AthenaItemShopConfirmation_C
// Size: 0x4d0 (Inherited: 0x428)
struct UAthenaItemShopConfirmation_C : UAthenaItemShopOfferDetailsWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* AthenaDirectAcquisitonDetails_BattlePassStarDetails; // 0x430(0x08)
	struct UIconTextButton_C* CancelButton; // 0x438(0x08)
	struct UCommonTextBlock* CommonTextBlock_1; // 0x440(0x08)
	struct UImage* Currency1ItemImage2; // 0x448(0x08)
	struct UVerticalBox* CurrencyVB; // 0x450(0x08)
	struct UScrollBox* ItemRewardsSB; // 0x458(0x08)
	struct ULightbox_C* Lightbox; // 0x460(0x08)
	struct UMTXButton_C* MTXButton; // 0x468(0x08)
	struct UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* NonrefundableText; // 0x470(0x08)
	struct UOverlay* O_Sale_PreviousPrice; // 0x478(0x08)
	struct UCommonTextBlock* OfferName; // 0x480(0x08)
	struct UIconTextButton_C* PurchaseButton; // 0x488(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice1; // 0x490(0x08)
	struct UCommonTextBlock* TextOriginalPrice1; // 0x498(0x08)
	bool CanPurchase; // 0x4a0(0x01)
	bool IsPurchasing; // 0x4a1(0x01)
	char pad_4A2[0x2]; // 0x4a2(0x02)
	int32_t NumberToPurchase; // 0x4a4(0x04)
	bool CanPurchaseLeft; // 0x4a8(0x01)
	bool CanPurchaseRight; // 0x4a9(0x01)
	bool CanChangeQuantity; // 0x4aa(0x01)
	char pad_4AB[0x5]; // 0x4ab(0x05)
	struct FMulticastInlineDelegate Confirm; // 0x4b0(0x10)
	struct FMulticastInlineDelegate Decline; // 0x4c0(0x10)

	void SetPurchaseNumber(int32_t InNumToPurchse); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.SetPurchaseNumber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCatalogOfferName(); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.UpdateCatalogOfferName // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateItemList(); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.UpdateItemList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupPrice(struct UWidget* PriceContainer, struct UTextBlock* NormalPriceText, struct UWidget* SalePriceContainer, struct UTextBlock* SalePriceText, struct UImage* CurrencyImage); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.SetupPrice // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromOffer(); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.UpdateFromOffer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnSetOffer(); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.BP_OnSetOffer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaItemShopConfirmation(int32_t EntryPoint); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.ExecuteUbergraph_AthenaItemShopConfirmation // (Final|UbergraphFunction) // @ game+0xda7c34
	void Decline__DelegateSignature(); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.Decline__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Confirm__DelegateSignature(); // Function AthenaItemShopConfirmation.AthenaItemShopConfirmation_C.Confirm__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

