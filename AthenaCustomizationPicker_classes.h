// WidgetBlueprintGeneratedClass AthenaCustomizationPicker.AthenaCustomizationPicker_C
// Size: 0x518 (Inherited: 0x478)
struct UAthenaCustomizationPicker_C : UAthenaCustomizationPicker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UWidgetAnimation* Contract; // 0x480(0x08)
	struct UWidgetAnimation* Expand; // 0x488(0x08)
	struct UPanelButton_C* Button_TextSearch; // 0x490(0x08)
	struct UFilteredTextEntryWidget_C* EditableText_Search; // 0x498(0x08)
	struct USizeBox* SizeBox_TextSearch; // 0x4a0(0x08)
	struct UCommonTextBlock* Text_FilterName; // 0x4a8(0x08)
	struct UCommonRichTextBlock* TextBlock_NoItemAvailable; // 0x4b0(0x08)
	struct UVerticalBox* VerticalBox_SearchBar; // 0x4b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_DisplayItemAvailability; // 0x4c0(0x08)
	struct FMulticastInlineDelegate OnDisableSaveButton; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnEnableSaveButton; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnTextSearchSelectedChanged; // 0x4e8(0x10)
	struct UAthenaCustomizationPickerTileButton_C* TileButton; // 0x4f8(0x08)
	struct FTimerHandle TextEntryTimer; // 0x500(0x08)
	struct FMulticastInlineDelegate OnTextChanged; // 0x508(0x10)

	void NavigateDownFromSearch(enum class EUINavigation Navigation, struct UWidget* NewParam); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.NavigateDownFromSearch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetTextSearchFilter(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ResetTextSearchFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleTextEntryTimer(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleTextEntryTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleSearchTextFilterChanged(struct FText Text); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleSearchTextFilterChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetTextFilterSelectedState(bool bIsSelected); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.GetTextFilterSelectedState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextFilterSelectedState(bool bIsSelected); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.SetTextFilterSelectedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextFilter(struct FText InText, bool Clear); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.SetTextFilter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNoItemsAvailableInFilter(struct FText EmptyDisplayText); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnNoItemsAvailableInFilter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnItemsAvailableInFilter(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnItemsAvailableInFilter // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSearchEnabled(bool bEnabled); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnSearchEnabled // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleTextChanged(struct FText Text); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleTextChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleDifferentFilterSetBP(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleDifferentFilterSetBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void On Text Committed(struct FText Text, enum class ETextCommit CommitMethod); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.On Text Committed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaCustomizationPicker(int32_t EntryPoint); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ExecuteUbergraph_AthenaCustomizationPicker // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnTextChanged__DelegateSignature(struct FText NewText); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTextSearchSelectedChanged__DelegateSignature(bool bIsSelected); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnTextSearchSelectedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnableSaveButton__DelegateSignature(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnEnableSaveButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDisableSaveButton__DelegateSignature(); // Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnDisableSaveButton__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

