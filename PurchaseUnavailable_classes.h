// WidgetBlueprintGeneratedClass PurchaseUnavailable.PurchaseUnavailable_C
// Size: 0x4c0 (Inherited: 0x4a0)
struct UPurchaseUnavailable_C : UFortPurchaseUnavailableModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UWidgetAnimation* Intro; // 0x4a8(0x08)
	struct UCommonRichTextBlock* RichText_Details; // 0x4b0(0x08)
	struct UCommonRichTextBlock* RichText_HeaderText; // 0x4b8(0x08)

	void OnUpdateTextStyle(struct FText OfferDisplayName); // Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PurchaseUnavailable(int32_t EntryPoint); // Function PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

