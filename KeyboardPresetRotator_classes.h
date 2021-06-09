// WidgetBlueprintGeneratedClass KeyboardPresetRotator.KeyboardPresetRotator_C
// Size: 0x2c8 (Inherited: 0x288)
struct UKeyboardPresetRotator_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UIconTextButton_C* ButtonLeft; // 0x290(0x08)
	struct UIconTextButton_C* ButtonRight; // 0x298(0x08)
	struct UCommonTextBlock* Description; // 0x2a0(0x08)
	struct USpacer* Spacer_1; // 0x2a8(0x08)
	struct UCommonTextBlock* SubDescription; // 0x2b0(0x08)
	struct UTextRotator_C* TextRotator; // 0x2b8(0x08)
	int32_t SelectedIndex; // 0x2c0(0x04)
	float Spacer Width; // 0x2c4(0x04)

	void Show Param Name(bool Show); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Show Param Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Size(); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Size // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Options(struct TArray<struct FText> NewParam); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Options // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Center On Widget(); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Center On Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Initialize(); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Row Selector(int32_t Currently Selected); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Row Selector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32_t Value); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_KeyboardPresetRotator(int32_t EntryPoint); // Function KeyboardPresetRotator.KeyboardPresetRotator_C.ExecuteUbergraph_KeyboardPresetRotator // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

