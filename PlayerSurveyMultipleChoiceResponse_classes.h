// WidgetBlueprintGeneratedClass PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C
// Size: 0x3a8 (Inherited: 0x370)
struct UPlayerSurveyMultipleChoiceResponse_C : UFortPlayerSurveyMultipleChoiceResponseBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UOverlay* Overlay_OrthogonalIndicator; // 0x378(0x08)
	struct UOverlay* Overlay_VerticalIndicator; // 0x380(0x08)
	struct UPlayerSurveyOrthogonalIndicator_C* PlayerSurveyOrthogonalIndicator; // 0x388(0x08)
	struct UPlayerSurveyVerticalIndicator_C* PlayerSurveyVerticalIndicator; // 0x390(0x08)
	struct USizeBox* SizeBox_Responses; // 0x398(0x08)
	float BaseColumnWidth; // 0x3a0(0x04)
	float AdditionalColumnWidth; // 0x3a4(0x04)

	void SetNumberOfResponses(int32_t NumberOfResponses); // Function PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C.SetNumberOfResponses // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse(int32_t EntryPoint); // Function PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C.ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

