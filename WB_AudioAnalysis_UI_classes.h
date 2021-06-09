// WidgetBlueprintGeneratedClass WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
// Size: 0x280 (Inherited: 0x260)
struct UWB_AudioAnalysis_UI_C : UFortAudioAnalysisDebugWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* GraphBox; // 0x268(0x08)
	struct TArray<struct UWB_AudioAnalysis_FloatGraph_C*> Widgets; // 0x270(0x10)

	void AddMPCParameter(struct FName ParamName, struct UMaterialParameterCollection* Collection, int32_t Vec4Index); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddMPCParameter // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_WB_AudioAnalysis_UI(int32_t EntryPoint); // Function WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI // (Final|UbergraphFunction) // @ game+0xda7c34
};

