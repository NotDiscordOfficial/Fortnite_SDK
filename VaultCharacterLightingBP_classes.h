// BlueprintGeneratedClass VaultCharacterLightingBP.VaultCharacterLightingBP_C
// Size: 0x2f0 (Inherited: 0x220)
struct AVaultCharacterLightingBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UArrowComponent* Arrow1; // 0x228(0x08)
	struct USpotLightComponent* KeyLight4; // 0x230(0x08)
	struct USpotLightComponent* KeyLight3; // 0x238(0x08)
	struct USpotLightComponent* KeyLight2; // 0x240(0x08)
	struct UPostProcessComponent* PostProcess_Mobile; // 0x248(0x08)
	struct UPostProcessComponent* PostProcess_LOWPC; // 0x250(0x08)
	struct USkyLightComponent* SkyLight_LOWPC; // 0x258(0x08)
	struct UDirectionalLightComponent* DirectionalLight_LOWPC; // 0x260(0x08)
	struct UArrowComponent* Arrow; // 0x268(0x08)
	struct UDirectionalLightComponent* DirectionalLightMobile; // 0x270(0x08)
	struct USkyLightComponent* SkyLightLowMobil; // 0x278(0x08)
	struct USkyLightComponent* SkyLight; // 0x280(0x08)
	struct USpotLightComponent* RimLowerRight; // 0x288(0x08)
	struct USpotLightComponent* RimLeft; // 0x290(0x08)
	struct USpotLightComponent* RimTopRight; // 0x298(0x08)
	struct USpotLightComponent* RimBottomLeft; // 0x2a0(0x08)
	struct USpotLightComponent* KeyLight; // 0x2a8(0x08)
	struct USpotLightComponent* Bounce; // 0x2b0(0x08)
	struct USpotLightComponent* BounceRear; // 0x2b8(0x08)
	struct USceneComponent* SharedRoot; // 0x2c0(0x08)
	bool DebugMobile Lighting; // 0x2c8(0x01)
	bool DebugLightingPC; // 0x2c9(0x01)
	bool IsActive; // 0x2ca(0x01)
	bool AlwaysOn; // 0x2cb(0x01)
	bool DebugLighting_LOWDetailPC; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct FLinearColor MPC-ManualSunlightVector; // 0x2d0(0x10)
	struct FLinearColor MPC-ManualSunlightColor; // 0x2e0(0x10)

	void SwitchPCLighting_LOWDetail(bool Visibility); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting_LOWDetail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchPCLighting(bool Visibility); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchMobileLighting(bool Visibilty); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchMobileLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSettings(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleLighting(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ToggleLighting // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OVERRIDELIGHTING(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.OVERRIDELIGHTING // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LightControl(bool NewParam); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VaultCharacterLightingBP(int32_t EntryPoint); // Function VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

