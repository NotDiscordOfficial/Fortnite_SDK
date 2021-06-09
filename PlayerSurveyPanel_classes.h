// WidgetBlueprintGeneratedClass PlayerSurveyPanel.PlayerSurveyPanel_C
// Size: 0x4d0 (Inherited: 0x4b0)
struct UPlayerSurveyPanel_C : UFortPlayerSurveyPanelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UWidgetAnimation* Outro; // 0x4b8(0x08)
	struct UWidgetAnimation* Intro; // 0x4c0(0x08)
	struct UScaleBox* PanelScale; // 0x4c8(0x08)

	void Construct(); // Function PlayerSurveyPanel.PlayerSurveyPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OutroDone(); // Function PlayerSurveyPanel.PlayerSurveyPanel_C.OutroDone // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartIntro(); // Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartIntro_BP(); // Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro_BP // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPlayerSurveyEnded(); // Function PlayerSurveyPanel.PlayerSurveyPanel_C.OnPlayerSurveyEnded // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerSurveyPanel(int32_t EntryPoint); // Function PlayerSurveyPanel.PlayerSurveyPanel_C.ExecuteUbergraph_PlayerSurveyPanel // (Final|UbergraphFunction) // @ game+0xda7c34
};

