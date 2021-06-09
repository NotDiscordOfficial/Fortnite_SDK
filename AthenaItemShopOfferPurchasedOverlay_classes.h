// WidgetBlueprintGeneratedClass AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C
// Size: 0x5e1 (Inherited: 0x458)
struct UAthenaItemShopOfferPurchasedOverlay_C : UAthenaItemShopPurchaseOverlayModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UWidgetAnimation* SuccessfullyRefundedBundleItem; // 0x460(0x08)
	struct UWidgetAnimation* Refunded; // 0x468(0x08)
	struct UWidgetAnimation* Purchased! (Bundle Item) - FAST; // 0x470(0x08)
	struct UWidgetAnimation* Successfully Purchased! (Bundle Item); // 0x478(0x08)
	struct UWidgetAnimation* Bundle Blur (out); // 0x480(0x08)
	struct UWidgetAnimation* Bundle Blur (loop); // 0x488(0x08)
	struct UWidgetAnimation* Purchased! (Bundle Item); // 0x490(0x08)
	struct UWidgetAnimation* Purchased!; // 0x498(0x08)
	struct UBorder* BorderItemNAme; // 0x4a0(0x08)
	struct UHorizontalBox* HBoxMiniCards1; // 0x4a8(0x08)
	struct UHorizontalBox* HBoxMiniCards2; // 0x4b0(0x08)
	struct UHorizontalBox* HBoxMiniCards3; // 0x4b8(0x08)
	struct UHorizontalBox* HBoxMiniCards4; // 0x4c0(0x08)
	struct UImage* ImageRarityFlare; // 0x4c8(0x08)
	struct UFortCosmeticItemCard_C* ItemCard; // 0x4d0(0x08)
	struct UOverlay* OverlayMainItem; // 0x4d8(0x08)
	struct UImage* RarityGlow; // 0x4e0(0x08)
	struct USizeBox* SizeBoxMiniBundleItems; // 0x4e8(0x08)
	struct UCommonTextBlock* TextName; // 0x4f0(0x08)
	int32_t Bundle Item Index; // 0x4f8(0x04)
	int32_t BundleMiniGrid - Column; // 0x4fc(0x04)
	int32_t BundleMiniGrid - Row; // 0x500(0x04)
	char pad_504[0x4]; // 0x504(0x04)
	struct FFortReceivedItemLootInfo Fort Received Loot Info Struct; // 0x508(0xc8)
	struct TArray<struct UBundleItemMiniCardWidget_C*> Bundle Mini Item Cards; // 0x5d0(0x10)
	bool BundleBlurPlayed; // 0x5e0(0x01)

	void Mini Bundle Item Location(int32_t Bundle Item Index, struct UHorizontalBox* HBox Row); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.Mini Bundle Item Location // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bundle Item Anim Speed(float Speed); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.Bundle Item Anim Speed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Get Bundle Info from Item Def(struct UFortAccountItemDefinition* Item Definition, struct FBundledItemInfo Bundled Item Info, bool bFoundItem); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.Get Bundle Info from Item Def // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromOffer(struct UFortAccountItemDefinition* Item Definition); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.UpdateFromOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Purchased!_K2Node_WidgetAnimationEvent_1(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased!_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xda7c34
	void Show Next Item(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.Show Next Item // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BundleBlurOut(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.BundleBlurOut // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Purchased! (Bundle Item)_K2Node_WidgetAnimationEvent_3(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item)_K2Node_WidgetAnimationEvent_3 // (BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Purchased! (Bundle Item) - FAST_K2Node_WidgetAnimationEvent_2(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.WidgetAnimationEvt_Purchased! (Bundle Item) - FAST_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0xda7c34
	void Populate Bundle Mini-Cards(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.Populate Bundle Mini-Cards // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Show Bundle Mini Item Card(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.Show Bundle Mini Item Card // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_4(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0xda7c34
	void InitBundleLayout(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.InitBundleLayout // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSetOffer(); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.BP_OnSetOffer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaItemShopOfferPurchasedOverlay(int32_t EntryPoint); // Function AthenaItemShopOfferPurchasedOverlay.AthenaItemShopOfferPurchasedOverlay_C.ExecuteUbergraph_AthenaItemShopOfferPurchasedOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

