// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C
// Size: 0x380 (Inherited: 0x338)
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C : UFortPlayerSurveyFreeFormTextAnswerWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UMultiLineEditableTextBox* EntryTextBox; // 0x340(0x08)
	struct UCommonTextBlock* LimitsTextBlock; // 0x348(0x08)
	bool bIgnoreAnswerChange; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FText Text_Subtitle; // 0x358(0x18)
	struct UCommonTextStyle* LimitsStyle_Normal; // 0x370(0x08)
	struct UCommonTextStyle* LimitsStyle_Overflow; // 0x378(0x08)

	struct FText GetSubtitleText(); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetSubtitleText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void UpdateLimitsText(); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateLimitsText // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* GetDefaultFocusedWidget(); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetDefaultFocusedWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void HandlePlayerEnterAnswer(struct FString AnswerString); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandlePlayerEnterAnswer // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateHintText(); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateHintText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateEntryText(); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateEntryText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleAnswerChanged // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleCommitCurrentAnswer(); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleCommitCurrentAnswer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleQuestionChanged(); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleQuestionChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget(int32_t EntryPoint); // Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

