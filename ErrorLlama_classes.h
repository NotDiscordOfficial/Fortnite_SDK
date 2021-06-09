// WidgetBlueprintGeneratedClass ErrorLlama.ErrorLlama_C
// Size: 0x290 (Inherited: 0x260)
struct UErrorLlama_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_1; // 0x268(0x08)
	struct UMaterialInstanceDynamic* MID_Llama; // 0x270(0x08)
	bool bFlippedTexture; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	struct FVector2D CurLookAt2D; // 0x27c(0x08)
	enum class ECommonInputType CurInputType; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	float EyeInterpSpeed; // 0x288(0x04)
	float MaterialInputScale; // 0x28c(0x04)

	void HandleInputTypeChanged(enum class ECommonInputType NewInputType); // Function ErrorLlama.ErrorLlama_C.HandleInputTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ErrorLlama.ErrorLlama_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ErrorLlama.ErrorLlama_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void RandomizeColor(); // Function ErrorLlama.ErrorLlama_C.RandomizeColor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleNormalizedInputDirection(struct FVector2D 2DInputVec); // Function ErrorLlama.ErrorLlama_C.HandleNormalizedInputDirection // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ErrorLlama(int32_t EntryPoint); // Function ErrorLlama.ErrorLlama_C.ExecuteUbergraph_ErrorLlama // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

