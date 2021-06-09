// Class LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULiveLinkDebuggerBlueprintLibrary : UBlueprintFunctionLibrary {

	void HideLiveLinkDebugger(); // Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.HideLiveLinkDebugger // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3fd2df8
	void DisplayLiveLinkDebugger(struct FString SubjectName); // Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3fd2bc0
};

// Class LiveLinkCurveDebugUI.LiveLinkDebuggerSettings
// Size: 0x80 (Inherited: 0x28)
struct ULiveLinkDebuggerSettings : UObject {
	struct FSlateColor MinBarColor; // 0x28(0x28)
	struct FSlateColor MaxBarColor; // 0x50(0x28)
	float DPIScaleMultiplier; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)

	float GetDPIScaleBasedOnSize(struct FIntPoint Size); // Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd2d48
	struct FSlateColor GetBarColorForCurveValue(float CurveValue); // Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fd2c84
};

