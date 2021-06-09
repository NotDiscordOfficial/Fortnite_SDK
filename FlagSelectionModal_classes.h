// WidgetBlueprintGeneratedClass FlagSelectionModal.FlagSelectionModal_C
// Size: 0x570 (Inherited: 0x548)
struct UFlagSelectionModal_C : UFortFlagSelectionModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UVerticalBox* FlagConfirmation; // 0x550(0x08)
	struct UVerticalBox* FlagSelection; // 0x558(0x08)
	struct USafeZone* SafeZone_1; // 0x560(0x08)
	struct UWidgetSwitcher* Switcher_Confirmation; // 0x568(0x08)

	void Handle Back(bool PassThrough); // Function FlagSelectionModal.FlagSelectionModal_C.Handle Back // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FlagSelectionModal.FlagSelectionModal_C.BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FlagSelectionModal.FlagSelectionModal_C.BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function FlagSelectionModal.FlagSelectionModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FlagSelectionModal(int32_t EntryPoint); // Function FlagSelectionModal.FlagSelectionModal_C.ExecuteUbergraph_FlagSelectionModal // (Final|UbergraphFunction) // @ game+0xda7c34
};

