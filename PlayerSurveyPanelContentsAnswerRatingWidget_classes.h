// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C
// Size: 0x3d0 (Inherited: 0x380)
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C : UFortSurveyNumericalChoiceWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UCommonActionWidget* CommonActionWidget_1; // 0x388(0x08)
	struct UIconTextButton_C* RatingButton_2; // 0x390(0x08)
	struct UIconTextButton_C* RatingButton_3; // 0x398(0x08)
	struct UIconTextButton_C* RatingButton_4; // 0x3a0(0x08)
	struct UIconTextButton_C* RatingButton_5; // 0x3a8(0x08)
	struct UIconTextButton_C* RatingButton_6; // 0x3b0(0x08)
	struct FText Text_Subtitle; // 0x3b8(0x18)

	struct FText GetSubtitleText(); // Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetSubtitleText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct UWidget* GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation); // Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidgetPostDummy // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* GetDefaultFocusedWidget(); // Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnInitialized(); // Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleButtonClicked(int32_t ButtonIndex); // Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleButtonFocused(int32_t ButtonIndex); // Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonFocused // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleCommitCurrentAnswer(); // Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleQuestionChanged(); // Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQuestionChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget(int32_t EntryPoint); // Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

