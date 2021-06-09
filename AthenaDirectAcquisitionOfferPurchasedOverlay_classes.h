// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C
// Size: 0x8f9 (Inherited: 0x770)
struct UAthenaDirectAcquisitionOfferPurchasedOverlay_C : UFortPurchaseOverlayModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x770(0x08)
	struct UWidgetAnimation* SuccessfullyRefundedBundleItem; // 0x778(0x08)
	struct UWidgetAnimation* Refunded; // 0x780(0x08)
	struct UWidgetAnimation* Purchased! (Bundle Item) - FAST; // 0x788(0x08)
	struct UWidgetAnimation* Successfully Purchased! (Bundle Item); // 0x790(0x08)
	struct UWidgetAnimation* Bundle Blur (out); // 0x798(0x08)
	struct UWidgetAnimation* Bundle Blur (loop); // 0x7a0(0x08)
	struct UWidgetAnimation* Purchased! (Bundle Item); // 0x7a8(0x08)
	struct UWidgetAnimation* Purchased!; // 0x7b0(0x08)
	struct UBorder* BorderItemNAme; // 0x7b8(0x08)
	struct UHorizontalBox* HBoxMiniCards1; // 0x7c0(0x08)
	struct UHorizontalBox* HBoxMiniCards2; // 0x7c8(0x08)
	struct UHorizontalBox* HBoxMiniCards3; // 0x7d0(0x08)
	struct UHorizontalBox* HBoxMiniCards4; // 0x7d8(0x08)
	struct UImage* ImageRarityFlare; // 0x7e0(0x08)
	struct UFortCosmeticItemCard_C* ItemCard; // 0x7e8(0x08)
	struct UOverlay* OverlayMainItem; // 0x7f0(0x08)
	struct UImage* RarityGlow; // 0x7f8(0x08)
	struct USizeBox* SizeBoxMiniBundleItems; // 0x800(0x08)
	struct UCommonTextBlock* TextName; // 0x808(0x08)
	int32_t Bundle Item Index; // 0x810(0x04)
	int32_t BundleMiniGrid - Column; // 0x814(0x04)
	int32_t BundleMiniGrid - Row; // 0x818(0x04)
	char pad_81C[0x4]; // 0x81c(0x04)
	struct FFortReceivedItemLootInfo Fort Received Loot Info Struct; // 0x820(0xc8)
	struct TArray<struct UBundleItemMiniCardWidget_C*> Bundle Mini Item Cards; // 0x8e8(0x10)
	bool BundleBlurPlayed; // 0x8f8(0x01)

	void Mini Bundle Item Location(int32_t Bundle Item Index, struct UHorizontalBox* HBox Row); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Mini Bundle Item Location // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bundle Item Anim Speed(float Speed); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Bundle Item Anim Speed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Get Bundle Info from Item Def(struct UFortAccountItemDefinition* Item Definition, struct FBundledItemInfo Bundled Item Info, bool bFoundItem); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Get Bundle Info from Item Def // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromOffer(struct UFortAccountItemDefinition* Item Definition); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.UpdateFromOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Purchased!_K2Node_WidgetAnimationEvent_1(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased!_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xda7c34
	void Show Next Item(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Next Item // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BundleBlurOut(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.BundleBlurOut // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Purchased! (Bundle Item)_K2Node_WidgetAnimationEvent_3(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item)_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Purchased! (Bundle Item) - FAST_K2Node_WidgetAnimationEvent_2(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item) - FAST_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0xda7c34
	void Populate Bundle Mini-Cards(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Populate Bundle Mini-Cards // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Show Bundle Mini Item Card(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Show Bundle Mini Item Card // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_4(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0xda7c34
	void InitBundleLayout(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.InitBundleLayout // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnOfferSet(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.BP_OnOfferSet // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay(int32_t EntryPoint); // Function AthenaDirectAcquisitionOfferPurchasedOverlay.AthenaDirectAcquisitionOfferPurchasedOverlay_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferPurchasedOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

