// WidgetBlueprintGeneratedClass LoadoutSaveConfirmation.LoadoutSaveConfirmation_C
// Size: 0x550 (Inherited: 0x4e0)
struct ULoadoutSaveConfirmation_C : UFortLoadoutSaveConfirmation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Image_67; // 0x4e8(0x08)
	struct UImage* Image_Separator_Down; // 0x4f0(0x08)
	struct UImage* Image_Separator_Up; // 0x4f8(0x08)
	struct ULightbox_C* Lightbox; // 0x500(0x08)
	struct USafeZone* SafeZone_146; // 0x508(0x08)
	struct UWidgetSwitcher* SwitcherExplanation; // 0x510(0x08)
	struct UWidgetSwitcher* SwitcherTitle; // 0x518(0x08)
	struct UCommonTextBlock* TextBlockCREATE; // 0x520(0x08)
	struct UCommonRichTextBlock* TextBlockExplanation; // 0x528(0x08)
	struct UCommonRichTextBlock* TextBlockExplanation_SaveOnly; // 0x530(0x08)
	struct UCommonTextBlock* TextBlockOR; // 0x538(0x08)
	struct UCommonTextBlock* TextBlockTitle; // 0x540(0x08)
	struct UCommonTextBlock* TextBlockTitle_SaveOnly; // 0x548(0x08)

	void Toggle Save as New Visibility(bool CanSaveAsNew); // Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.Toggle Save as New Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCanSaveAsNew(bool bCanSaveAsNew); // Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.OnCanSaveAsNew // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LoadoutSaveConfirmation(int32_t EntryPoint); // Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.ExecuteUbergraph_LoadoutSaveConfirmation // (Final|UbergraphFunction) // @ game+0xda7c34
};

