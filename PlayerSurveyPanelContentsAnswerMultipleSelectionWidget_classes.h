// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C
// Size: 0x470 (Inherited: 0x378)
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C : UFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UCommonActionWidget* Action_ActionDisplay; // 0x380(0x08)
	struct UDynamicEntryBox* ChoicesEntryBox; // 0x388(0x08)
	struct UCommonHierarchicalScrollBox* ChoicesScrollBox; // 0x390(0x08)
	struct UButton* DummyButton; // 0x398(0x08)
	struct UCommonTextBlock* SelectionCountTextBlock; // 0x3a0(0x08)
	struct UCommonTextBlock* Text_ActionDisplay; // 0x3a8(0x08)
	struct TArray<struct UCommonButtonLegacy*> ChoiceButtons; // 0x3b0(0x10)
	struct FText Text_Subtitle; // 0x3c0(0x18)
	struct FText Text_SelectionCount_NoLimit; // 0x3d8(0x18)
	struct FText Text_SelectionCount_MinLimit; // 0x3f0(0x18)
	struct FText Text_SelectionCount_MaxLimit; // 0x408(0x18)
	struct UCommonTextStyle* SelectionCountStyle_Valid; // 0x420(0x08)
	struct UCommonTextStyle* SelectionCountStyle_Invalid; // 0x428(0x08)
	struct FText Text_ActionDisplay_ToggleOff; // 0x430(0x18)
	struct FText Text_ActionDisplay_ToggleOn; // 0x448(0x18)
	struct UCommonTextStyle* ActionDisplayStyle_CannotToggle; // 0x460(0x08)
	struct UCommonTextStyle* ActionDisplayStyle_CanToggle; // 0x468(0x08)

	void UpdateActionDisplay(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateActionDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateQuestionAnswerDisplay(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateQuestionAnswerDisplay // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateValidDisplay(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateValidDisplay // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSelectionCountText(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateSelectionCountText // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePlayerRequestToggleChoice(int32_t Index); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandlePlayerRequestToggleChoice // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.ScrollSelectedItemIntoView // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateEntryBoxContents(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateEntryBoxContents // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetDefaultInitialChoiceIndex(int32_t Index); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetDefaultInitialChoiceIndex // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation, struct UWidget* Widget); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetDefaultFocusedWidgetPostDummy // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct FText GetSubtitleText(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetSubtitleText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void HandlePlayerRequestAnswer(struct TArray<struct FFortPlayerSurveyAnswerMultipleSelectionSingleAnswer> AnswerChoices); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandlePlayerRequestAnswer // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* GetDefaultFocusedWidget(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetDefaultFocusedWidget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Construct(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleCommitCurrentAnswer(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleCommitCurrentAnswer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleAnswerChanged // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleQuestionChanged(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleQuestionChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleButtonClicked(int32_t ButtonIndex); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleFocusChanged(); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleFocusChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget(int32_t EntryPoint); // Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

