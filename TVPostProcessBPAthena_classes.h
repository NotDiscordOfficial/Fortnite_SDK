// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
// Size: 0x268 (Inherited: 0x239)
struct ATVPostProcessBPAthena_C : ATVPostProcessBP_C {
	char pad_239[0x7]; // 0x239(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UPostProcessComponent* FullScreenTVPP-OnlyMaterialModified; // 0x248(0x08)
	float FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7; // 0x250(0x04)
	float FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7; // 0x254(0x04)
	enum class ETimelineDirection FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UTimelineComponent* FrontEndCameraSwitchFadeAthena; // 0x260(0x08)

	void IsEnabledForCurrentSubgame(bool bEnabled); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void FrontEndCameraSwitchFadeAthena__FinishedFunc(); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void FrontEndCameraSwitchFadeAthena__UpdateFunc(); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteCameraSwitch(); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Camera_DisableEffects(); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TVPostProcessBPAthena(int32_t EntryPoint); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena // (Final|UbergraphFunction) // @ game+0xda7c34
};

