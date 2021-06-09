// WidgetBlueprintGeneratedClass ErrorWindow.ErrorWindow_C
// Size: 0x5a8 (Inherited: 0x528)
struct UErrorWindow_C : UFortErrorWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWidgetAnimation* Llama_4; // 0x530(0x08)
	struct UWidgetAnimation* Llama_3; // 0x538(0x08)
	struct UWidgetAnimation* Intro_2; // 0x540(0x08)
	struct UWidgetAnimation* Llama_2; // 0x548(0x08)
	struct UErrorLlama_C* ErrorLlama_1; // 0x550(0x08)
	struct UErrorLlama_C* ErrorLlama_C_1; // 0x558(0x08)
	struct UErrorLlama_C* ErrorLlama_C_2; // 0x560(0x08)
	struct UImage* Image_Separator_Down; // 0x568(0x08)
	struct UImage* Image_Separator_Up; // 0x570(0x08)
	struct ULightbox_C* Lightbox; // 0x578(0x08)
	struct UWidgetAnimation* CurLlamaAnim; // 0x580(0x08)
	struct TArray<struct UErrorLlama_C*> LlamaArray; // 0x588(0x10)
	struct FTimerHandle LlamaReverseTimer; // 0x598(0x08)
	struct FTimerHandle AmbientLlamaPlayTimer; // 0x5a0(0x08)

	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Initialize Close Button(); // Function ErrorWindow.ErrorWindow_C.Initialize Close Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ErrorWindow.ErrorWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function ErrorWindow.ErrorWindow_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBeginOutro(); // Function ErrorWindow.ErrorWindow_C.OnBeginOutro // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBeginIntro(); // Function ErrorWindow.ErrorWindow_C.OnBeginIntro // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function ErrorWindow.ErrorWindow_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleLlamaAnimFinish(); // Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LlamaReverse(); // Function ErrorWindow.ErrorWindow_C.LlamaReverse // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleLlamaCycleFinished(); // Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayRandomAmbientLlama(); // Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartAmbientLlamaSequence(); // Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetLlamas(); // Function ErrorWindow.ErrorWindow_C.ResetLlamas // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnOverrideCloseButtonText(struct FText OverrideText); // Function ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ErrorWindow(int32_t EntryPoint); // Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

