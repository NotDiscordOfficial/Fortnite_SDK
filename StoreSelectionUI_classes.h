// Class StoreSelectionUI.FortStoreSelectionData
// Size: 0x4b0 (Inherited: 0x458)
struct UFortStoreSelectionData : UFortGameFeatureData {
	SoftClassProperty StoreSelectionScreenClass; // 0x458(0x28)
	struct FText RegularStoreSelectedText; // 0x480(0x18)
	struct FText NonRegularStoreSelectedText; // 0x498(0x18)
};

// Class StoreSelectionUI.FortStoreSelectionOptionEntry
// Size: 0xc40 (Inherited: 0xc20)
struct UFortStoreSelectionOptionEntry : UCommonButtonLegacy {
	struct UFortLazyImage* Image_Icon; // 0xc20(0x08)
	struct UCommonTextBlock* Text_Description; // 0xc28(0x08)
	struct UCommonTextBlock* Text_Price; // 0xc30(0x08)
	struct UCommonRichTextBlock* RichText_Label; // 0xc38(0x08)
};

// Class StoreSelectionUI.FortStoreSelectionScreen
// Size: 0x878 (Inherited: 0x458)
struct UFortStoreSelectionScreen : UCommonActivatablePanelLegacy {
	char pad_458[0x8]; // 0x458(0x08)
	struct UCommonButtonGroupLegacy* EntryBoxButtonGroup; // 0x460(0x08)
	struct UFortRealMoneyOffer* StoreOffer; // 0x468(0x08)
	struct UCommonLoadGuard* StoreOfferLoadGuard; // 0x470(0x08)
	struct UCommonTextBlock* Text_Header; // 0x478(0x08)
	struct UDynamicEntryBox* DynamicEntryBox_Options; // 0x480(0x08)
	struct UCommonButtonLegacy* Button_Continue; // 0x488(0x08)
	struct UCommonButtonLegacy* Button_Cancel; // 0x490(0x08)
	struct UCommonRichTextBlock* RichText_InitiallySelectedHint; // 0x498(0x08)
	struct TScriptInterface<None> PurchaseChoiceOwner; // 0x4a0(0x10)
	struct TArray<struct FItemData> StoreOptions; // 0x4b0(0x10)
	struct TSoftObjectPtr<struct UFortMtxOfferData> SoftDisplayAsset; // 0x4c0(0x28)
	struct FItemData ItemData[0xc]; // 0x4e8(0x360)
	struct FText OptionalLabels[0x2]; // 0x848(0x30)
};

