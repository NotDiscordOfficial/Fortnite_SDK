// WidgetBlueprintGeneratedClass FortRadioButtonGroup.FortRadioButtonGroup_C
// Size: 0x2c4 (Inherited: 0x260)
struct UFortRadioButtonGroup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USizeBox* SizeBox_Buttons; // 0x268(0x08)
	struct UVerticalBox* VerticalBox_Buttons; // 0x270(0x08)
	struct TArray<struct FFortRadioButtonItemStruct> Buttons; // 0x278(0x10)
	struct TArray<struct UIconTextButton_C*> CreatedButtons; // 0x288(0x10)
	struct FMulticastInlineDelegate RadioButtonClicked_Event; // 0x298(0x10)
	float WidthOverride; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UCommonButtonGroupLegacy* CreatedButtonsGroup; // 0x2b0(0x08)
	struct UCommonButtonGroupLegacy* CommonButtonGroup; // 0x2b8(0x08)
	float HeightOverride; // 0x2c0(0x04)

	void CenterOnWidget(); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.CenterOnWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnButtonClicked_Bind(struct UCommonButtonLegacy* AssociatedButton, int32_t ButtonIndex); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.OnButtonClicked_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void UpdateButtons(); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.UpdateButtons // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FortRadioButtonGroup(int32_t EntryPoint); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.ExecuteUbergraph_FortRadioButtonGroup // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void RadioButtonClicked_Event__DelegateSignature(int32_t SelectedIndex); // Function FortRadioButtonGroup.FortRadioButtonGroup_C.RadioButtonClicked_Event__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

