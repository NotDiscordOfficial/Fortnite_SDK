// WidgetBlueprintGeneratedClass FIlteredTextEntryWidget.FilteredTextEntryWidget_C
// Size: 0xc70 (Inherited: 0x390)
struct UFilteredTextEntryWidget_C : UFortEditableFilteredCountedTextBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UWidgetAnimation* Error; // 0x398(0x08)
	struct UCommonTextBlock* CommonTextBlock_Prompt; // 0x3a0(0x08)
	struct UCommonTextBlock* ErrorText; // 0x3a8(0x08)
	struct UHorizontalBox* HorizontalBox_Info; // 0x3b0(0x08)
	struct UImage* Image_120; // 0x3b8(0x08)
	struct UImage* Image_Selected; // 0x3c0(0x08)
	struct UCommonActionWidget* InputActionWidget; // 0x3c8(0x08)
	struct UOverlay* Overlay_InputAction; // 0x3d0(0x08)
	struct UOverlay* WarningImage; // 0x3d8(0x08)
	bool bUseOverrideStyle; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FEditableTextBoxStyle OverrideStyle; // 0x3e8(0x7f8)
	bool bHideValidationInfo; // 0xbe0(0x01)
	enum class ETextJustify Justification; // 0xbe1(0x01)
	bool ShowTextPrompt; // 0xbe2(0x01)
	char pad_BE3[0x5]; // 0xbe3(0x05)
	struct UCommonTextStyle* PromptTextStyle; // 0xbe8(0x08)
	struct FText PromptText; // 0xbf0(0x18)
	struct FMulticastInlineDelegate OnTextChanged; // 0xc08(0x10)
	bool bUseHintText; // 0xc18(0x01)
	char pad_C19[0x7]; // 0xc19(0x07)
	struct FText HintText; // 0xc20(0x18)
	struct FMulticastInlineDelegate OnSanitizedTextReady; // 0xc38(0x10)
	struct FMulticastInlineDelegate OnTextCommitByEnter; // 0xc48(0x10)
	bool SanitizedTextReady; // 0xc58(0x01)
	char pad_C59[0x7]; // 0xc59(0x07)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xc60(0x10)

	void GetErrorText(bool Additional Validator Failed, struct FText Appropriate Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetErrorText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetCurrentText(struct FText Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetCurrentText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleShowPrompt(struct FText CurrentText); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.HandleShowPrompt // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextFocus(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.SetTextFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateConfiguration(bool bOverrideStyle, bool bHideValidation, enum class ETextJustify TextJustification, bool bShouldShowTextPrompt, struct FText PromptDisplayText, struct UCommonTextStyle* TextStyle); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.UpdateConfiguration // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FilteredTextEntryWidget(int32_t EntryPoint); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnTextCommitted__DelegateSignature(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextCommitted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTextCommitByEnter__DelegateSignature(); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextCommitByEnter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSanitizedTextReady__DelegateSignature(struct FText Text, bool BadText); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnSanitizedTextReady__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTextChanged__DelegateSignature(struct FText Text); // Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

