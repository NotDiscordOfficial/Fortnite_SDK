// WidgetBlueprintGeneratedClass AthenaItemShopOfferStyleScreen.AthenaItemShopOfferStyleScreen_C
// Size: 0x4e8 (Inherited: 0x4b0)
struct UAthenaItemShopOfferStyleScreen_C : UAthenaItemShopOfferStyleScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UCloseButton_C* CloseButton; // 0x4b8(0x08)
	bool OfferSet; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	int32_t IndexIntoOffersWithVariantsList; // 0x4c4(0x04)
	struct TArray<int32_t> OfferSubIndicesWithVariants; // 0x4c8(0x10)
	struct UFortItemDefinition* InitialTriggeringItemDef; // 0x4d8(0x08)
	struct UFortItem* CharacterItem_1; // 0x4e0(0x08)

	void HandleBack(bool bPassThrough); // Function AthenaItemShopOfferStyleScreen.AthenaItemShopOfferStyleScreen_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaItemShopOfferStyleScreen.AthenaItemShopOfferStyleScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HandleBackAction(); // Function AthenaItemShopOfferStyleScreen.AthenaItemShopOfferStyleScreen_C.HandleBackAction // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaItemShopOfferStyleScreen(int32_t EntryPoint); // Function AthenaItemShopOfferStyleScreen.AthenaItemShopOfferStyleScreen_C.ExecuteUbergraph_AthenaItemShopOfferStyleScreen // (Final|UbergraphFunction) // @ game+0xda7c34
};

