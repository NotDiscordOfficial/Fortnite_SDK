// WidgetBlueprintGeneratedClass Athena_ConfirmationWindow.Athena_ConfirmationWindow_C
// Size: 0x3a8 (Inherited: 0x370)
struct UAthena_ConfirmationWindow_C : UAthenaConfirmationWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UWidgetAnimation* Intro; // 0x378(0x08)
	struct UImage* Image_67; // 0x380(0x08)
	struct UImage* Image_Separator_Down; // 0x388(0x08)
	struct UImage* Image_Separator_Up; // 0x390(0x08)
	struct USafeZone* SafeZone_146; // 0x398(0x08)
	struct UScrollBox* ScrollBox_Description; // 0x3a0(0x08)

	void OnSetButtonText(struct UCommonButtonLegacy* Button, struct FText Text); // Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.OnSetButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Athena_ConfirmationWindow(int32_t EntryPoint); // Function Athena_ConfirmationWindow.Athena_ConfirmationWindow_C.ExecuteUbergraph_Athena_ConfirmationWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

