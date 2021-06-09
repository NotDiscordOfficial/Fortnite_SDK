// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C
// Size: 0x3b0 (Inherited: 0x368)
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C : UFortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UDynamicEntryBox* ChoicesEntryBox; // 0x370(0x08)
	struct UCommonHierarchicalScrollBox* ChoicesScrollBox; // 0x378(0x08)
	struct UButton* DummyButton; // 0x380(0x08)
	struct TArray<struct UCommonButtonLegacy*> ChoiceButtons; // 0x388(0x10)
	struct FText Text_Subtitle; // 0x398(0x18)

	void ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ScrollSelectedItemIntoView // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateEntryBoxContents(); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.UpdateEntryBoxContents // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetDefaultInitialChoiceIndex(int32_t Index); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultInitialChoiceIndex // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation, struct UWidget* Widget); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidgetPostDummy // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct FText GetSubtitleText(); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetSubtitleText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void HandlePlayerRequestAnswer(int32_t AnswerIndex); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandlePlayerRequestAnswer // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* GetDefaultFocusedWidget(); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Construct(); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleCommitCurrentAnswer(); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleCommitCurrentAnswer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleAnswerChanged // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleQuestionChanged(); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleQuestionChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleButtonClicked(int32_t ButtonIndex); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleButtonFocused(int32_t ButtonIndex); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonFocused // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget(int32_t EntryPoint); // Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

