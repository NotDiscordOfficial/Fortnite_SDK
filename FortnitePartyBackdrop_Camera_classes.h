// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// Size: 0x821 (Inherited: 0x7e0)
struct AFortnitePartyBackdrop_Camera_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UArrowComponent* Arrow; // 0x7e8(0x08)
	struct FTransform SavedTransform; // 0x7f0(0x30)
	bool Active; // 0x820(0x01)

	void OnActivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeactivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Reset Location(); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ManualActivate(); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32_t EntryPoint); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

