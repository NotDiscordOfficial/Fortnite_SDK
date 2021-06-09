// WidgetBlueprintGeneratedClass PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C
// Size: 0x3a8 (Inherited: 0x370)
struct UPlayerSurveySingleChoiceResponse_C : UFortPlayerSurveySingleChoiceResponseBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UOverlay* Overlay_OrthogonalIndicator; // 0x378(0x08)
	struct UOverlay* Overlay_VerticalIndicator; // 0x380(0x08)
	struct UPlayerSurveyOrthogonalIndicator_C* PlayerSurveyOrthogonalIndicator; // 0x388(0x08)
	struct UPlayerSurveyVerticalIndicator_C* PlayerSurveyVerticalIndicator; // 0x390(0x08)
	struct USizeBox* SizeBox_Responses; // 0x398(0x08)
	float BaseColumnWidth; // 0x3a0(0x04)
	float AdditionalColumnWidth; // 0x3a4(0x04)

	void SetNumberOfResponses(int32_t NumberOfResponses); // Function PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.SetNumberOfResponses // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerSurveySingleChoiceResponse(int32_t EntryPoint); // Function PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.ExecuteUbergraph_PlayerSurveySingleChoiceResponse // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

