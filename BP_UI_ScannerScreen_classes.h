// BlueprintGeneratedClass BP_UI_ScannerScreen.BP_UI_ScannerScreen_C
// Size: 0x8d0 (Inherited: 0x898)
struct ABP_UI_ScannerScreen_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UWidgetComponent* ScreenWidget; // 0x8a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8a8(0x08)
	float ErrorTimeline_Switch_EBBEA5504EC9CD2C274D38AA3BFC1EEF; // 0x8b0(0x04)
	enum class ETimelineDirection ErrorTimeline__Direction_EBBEA5504EC9CD2C274D38AA3BFC1EEF; // 0x8b4(0x01)
	char pad_8B5[0x3]; // 0x8b5(0x03)
	struct UTimelineComponent* ErrorTimeline; // 0x8b8(0x08)
	struct UUI_ScannerScreen_C* Widget_Screen; // 0x8c0(0x08)
	struct FTimerHandle TimeoutHandle; // 0x8c8(0x08)

	void ErrorTimeline__FinishedFunc(); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void ErrorTimeline__UpdateFunc(); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ScreenEventError(bool Reverse); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventError // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScreenEventSuccess(struct FText SuccessText); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScreenEventFailure(struct FText FailureText); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventFailure // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScreenEventScan(); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventScan // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScreenEventDismiss(); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventDismiss // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScreenEventTargetLost(struct FText LostText); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventTargetLost // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_UI_ScannerScreen(int32_t EntryPoint); // Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ExecuteUbergraph_BP_UI_ScannerScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

