// WidgetBlueprintGeneratedClass FortCheckbox.FortCheckbox_C
// Size: 0x2c8 (Inherited: 0x288)
struct UFortCheckbox_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UButton* CheckButton; // 0x290(0x08)
	struct UImage* Image_Checked; // 0x298(0x08)
	struct UImage* Image_Unchecked; // 0x2a0(0x08)
	struct UWidgetSwitcher* Switcher_CheckBox; // 0x2a8(0x08)
	bool Selected; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x2b8(0x10)

	void Refresh(); // Function FortCheckbox.FortCheckbox_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSelected(bool NewSelected); // Function FortCheckbox.FortCheckbox_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleCheckbox(); // Function FortCheckbox.FortCheckbox_C.ToggleCheckbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function FortCheckbox.FortCheckbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function FortCheckbox.FortCheckbox_C.BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FortCheckbox(int32_t EntryPoint); // Function FortCheckbox.FortCheckbox_C.ExecuteUbergraph_FortCheckbox // (Final|UbergraphFunction) // @ game+0xda7c34
	void OnClicked__DelegateSignature(); // Function FortCheckbox.FortCheckbox_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

