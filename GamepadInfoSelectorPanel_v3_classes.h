// WidgetBlueprintGeneratedClass GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C
// Size: 0x558 (Inherited: 0x490)
struct UGamepadInfoSelectorPanel_v3_C : UFortGamePadInfoSelectorPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UCommonBorder* CommonBorder_Reset; // 0x498(0x08)
	struct UFortRadioButtonGroup_C* FortRadioButtonGroup_Configs; // 0x4a0(0x08)
	struct UFortRadioButtonGroup_C* FortRadioButtonGroup_Platforms; // 0x4a8(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Reset1; // 0x4b0(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Reset2; // 0x4b8(0x08)
	struct UKeybindWidget_C* KeybindWidget_Reset; // 0x4c0(0x08)
	struct UOptionsMenuHeader_C* OptionsMenuHeader_Configs; // 0x4c8(0x08)
	struct UOptionsMenuHeader_C* OptionsMenuHeader_Platforms; // 0x4d0(0x08)
	struct UButton* ResetButton; // 0x4d8(0x08)
	struct UVerticalBox* VerticalBox_Platforms; // 0x4e0(0x08)
	struct FDataTableRowHandle Back; // 0x4e8(0x10)
	struct FMulticastInlineDelegate GamepadInfoSelectorBack; // 0x4f8(0x10)
	struct FDataTableRowHandle Apply; // 0x508(0x10)
	struct FMulticastInlineDelegate GamepadInfoSelectorApply; // 0x518(0x10)
	struct FDataTableRowHandle Reset; // 0x528(0x10)
	struct FMulticastInlineDelegate GamepadInfoSelectorReset; // 0x538(0x10)
	struct FMulticastInlineDelegate GamepadInfoSelectorFocus; // 0x548(0x10)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void HandleReset(bool PassThrough); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleReset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleApply(bool PassThrough); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleApply // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBack(bool PassThrough); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GamepadInfoSelectorPanel_v3(int32_t EntryPoint); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.ExecuteUbergraph_GamepadInfoSelectorPanel_v3 // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void GamepadInfoSelectorFocus__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorFocus__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GamepadInfoSelectorReset__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GamepadInfoSelectorApply__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorApply__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GamepadInfoSelectorBack__DelegateSignature(); // Function GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

