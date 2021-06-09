// BlueprintGeneratedClass WrapPreview.WrapPreview_C
// Size: 0x4fc (Inherited: 0x450)
struct AWrapPreview_C : AAthenaWrapPreviewActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct USkyLightComponent* SkyLightPC; // 0x458(0x08)
	struct USkeletalMeshComponent* AssaultRiflePreview; // 0x460(0x08)
	struct USkeletalMeshComponent* MechPreview; // 0x468(0x08)
	struct USkyLightComponent* SkyLightLowMobile; // 0x470(0x08)
	struct UArrowComponent* Arrow; // 0x478(0x08)
	struct UDirectionalLightComponent* DirectionalLightMobile; // 0x480(0x08)
	struct USpotLightComponent* KeyLight_StandaloneForSwitch; // 0x488(0x08)
	struct USpotLightComponent* KeyLigh4; // 0x490(0x08)
	struct USpotLightComponent* KeyLight7; // 0x498(0x08)
	struct USpotLightComponent* KeyLight8; // 0x4a0(0x08)
	struct USpotLightComponent* KeyLight3; // 0x4a8(0x08)
	struct USpotLightComponent* RimLowerRight2; // 0x4b0(0x08)
	struct USpotLightComponent* RimLeft2; // 0x4b8(0x08)
	struct USpotLightComponent* Bounce2; // 0x4c0(0x08)
	struct USpotLightComponent* BounceRear2; // 0x4c8(0x08)
	struct USpotLightComponent* RimTopRight2; // 0x4d0(0x08)
	struct USpotLightComponent* RimBottomLeft2; // 0x4d8(0x08)
	struct USceneComponent* LightingPivot; // 0x4e0(0x08)
	struct UStaticMeshComponent* Plane; // 0x4e8(0x08)
	bool bLightsScaledForVehicle; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	float DeltaScale; // 0x4f4(0x04)
	bool IsActive; // 0x4f8(0x01)
	bool AlwaysOn; // 0x4f9(0x01)
	bool FloorEverAllowed; // 0x4fa(0x01)
	bool debugConstructionLighting; // 0x4fb(0x01)

	void UpdateFloorVisibility(); // Function WrapPreview.WrapPreview_C.UpdateFloorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchErebusLighting(bool Visibility); // Function WrapPreview.WrapPreview_C.SwitchErebusLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateLightingScale(); // Function WrapPreview.WrapPreview_C.UpdateLightingScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetFloorEnabled(bool Floor Enabled); // Function WrapPreview.WrapPreview_C.SetFloorEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LightControl(bool Active); // Function WrapPreview.WrapPreview_C.LightControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchPCLighting(bool Visibility); // Function WrapPreview.WrapPreview_C.SwitchPCLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchMobileLighting(bool NewParam); // Function WrapPreview.WrapPreview_C.SwitchMobileLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleLightingScale(); // Function WrapPreview.WrapPreview_C.HandleLightingScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSettings(); // Function WrapPreview.WrapPreview_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSetFloorMaterial(struct UMaterialInterface* InMaterialInstance); // Function WrapPreview.WrapPreview_C.OnSetFloorMaterial // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor); // Function WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateFloorMaterial(bool bEnableAutotestBackground); // Function WrapPreview.WrapPreview_C.OnUpdateFloorMaterial // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_WrapPreview(int32_t EntryPoint); // Function WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview // (Final|UbergraphFunction) // @ game+0xda7c34
};

