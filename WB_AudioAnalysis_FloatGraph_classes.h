// WidgetBlueprintGeneratedClass WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
// Size: 0x2d0 (Inherited: 0x260)
struct UWB_AudioAnalysis_FloatGraph_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x268(0x08)
	struct UTextBlock* Label_; // 0x270(0x08)
	struct UProgressBar* ProgressBar; // 0x278(0x08)
	struct UTextBlock* Value; // 0x280(0x08)
	struct FVector2D Position; // 0x288(0x08)
	struct FVector2D Size; // 0x290(0x08)
	bool calculated; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	struct FName Parameter; // 0x29c(0x08)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct TArray<struct FVector2D> Points; // 0x2a8(0x10)
	int32_t numPoints; // 0x2b8(0x04)
	struct FLinearColor Color; // 0x2bc(0x10)
	int32_t VectorIndex; // 0x2cc(0x04)

	void OnPaint(struct FPaintContext Context); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void calcWidgetSize(struct FGeometry geom); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.calcWidgetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Value(float Value); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Set Value // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Initialize MPC(struct FName Parameter, struct UMaterialParameterCollection* Collection, int32_t VectorIndex); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Initialize MPC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int32_t EntryPoint); // Function WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.ExecuteUbergraph_WB_AudioAnalysis_FloatGraph // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

