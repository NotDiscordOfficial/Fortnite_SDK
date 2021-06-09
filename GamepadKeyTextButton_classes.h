// WidgetBlueprintGeneratedClass GamepadKeyTextButton.GamepadKeyTextButton_C
// Size: 0xce0 (Inherited: 0xc28)
struct UGamepadKeyTextButton_C : UFortGamepadCustomListItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UKeybindWidget_C* BoundKey; // 0xc30(0x08)
	struct UBorder* ContentBorder; // 0xc38(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Desc; // 0xc40(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_NoKey; // 0xc48(0x08)
	struct USizeBox* SizeBox_Nokey; // 0xc50(0x08)
	struct FText ButtonText; // 0xc58(0x18)
	struct UCommonButtonStyle* ControllerInputStyle; // 0xc70(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0xc78(0x01)
	char pad_C79[0x7]; // 0xc79(0x07)
	struct FMulticastInlineDelegate ChangeTheBinding_Button; // 0xc80(0x10)
	struct FName ActionNameData; // 0xc90(0x08)
	struct FKey KeyData; // 0xc98(0x18)
	struct FText TextData; // 0xcb0(0x18)
	struct FKey KeyNone; // 0xcc8(0x18)

	void SetNonInteractableStyle(); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateContentAlignment(); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetData(struct FKey Key, struct FText DescText, struct FName ActionName); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetDataAndUpdateButton(struct FKey Key, struct FText DescText, struct FName ActionName); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateButton(struct UGamepadKeyTextButton_C* Button); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GamepadKeyTextButton(int32_t EntryPoint); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void ChangeTheBinding_Button__DelegateSignature(struct FName ActionName, struct FKey Key); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

