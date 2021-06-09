// WidgetBlueprintGeneratedClass PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C
// Size: 0xc60 (Inherited: 0xc20)
struct UPlayerSurveyMultipleChoiceStandardListItem_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UFortCheckbox_C* CheckBox; // 0xc28(0x08)
	struct UCommonTextBlock* Text_Choice; // 0xc30(0x08)
	struct UCommonTextBlock* Text_Number; // 0xc38(0x08)
	int32_t ChoiceIndex; // 0xc40(0x04)
	char pad_C44[0x4]; // 0xc44(0x04)
	struct FFortPlayerSurveyQuestionChoice ChoiceData; // 0xc48(0x18)

	void UpdateTextStyle(); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateTextStyle // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCheckBox(); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateCheckBox // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MakeChoiceIndexText(int32_t Index, struct FText Text); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.MakeChoiceIndexText // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void UpdateChoiceIndexText(); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceIndexText // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateChoiceText(); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetChoiceData(struct FFortPlayerSurveyQuestionChoice Value); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetChoiceData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetIndex(int32_t Value); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurrentTextStyleChanged(); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem(int32_t EntryPoint); // Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

