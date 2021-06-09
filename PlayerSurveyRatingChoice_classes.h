// WidgetBlueprintGeneratedClass PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C
// Size: 0xbf0 (Inherited: 0xbe0)
struct UPlayerSurveyRatingChoice_C : UFortPlayerSurveyRatingChoiceBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbe0(0x08)
	struct UCommonActionWidget* InputActionWidget_Select; // 0xbe8(0x08)

	void GetCurrentButtonBrush(struct FSlateBrush CurrentBrush); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.GetCurrentButtonBrush // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UpdateInputActionRenderOpacity(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateInputActionRenderOpacity // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTextStyle(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateTextStyle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSurveyResetChoice(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnSurveyResetChoice // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerSurveyRatingChoice(int32_t EntryPoint); // Function PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.ExecuteUbergraph_PlayerSurveyRatingChoice // (Final|UbergraphFunction) // @ game+0xda7c34
};

