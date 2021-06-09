// BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C
// Size: 0x7f0 (Inherited: 0x7e0)
struct AFrontendCamera_Inspect_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UCameraComponent* LoginCamera_1; // 0x7e8(0x08)

	void OnActivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeactivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FrontendCamera_Inspect(int32_t EntryPoint); // Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.ExecuteUbergraph_FrontendCamera_Inspect // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

