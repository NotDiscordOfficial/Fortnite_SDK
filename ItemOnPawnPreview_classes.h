// BlueprintGeneratedClass ItemOnPawnPreview.ItemOnPawnPreview_C
// Size: 0x5c5 (Inherited: 0x510)
struct AItemOnPawnPreview_C : AFortItemPreviewOnPawnActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct USkyLightComponent* SkyLightPC; // 0x518(0x08)
	struct UArrowComponent* Arrow; // 0x520(0x08)
	struct USkyLightComponent* SkyLightLowMobile; // 0x528(0x08)
	struct UDirectionalLightComponent* DirectionalLightMobile; // 0x530(0x08)
	struct USpotLightComponent* KeyLight_StandaloneForSwitch; // 0x538(0x08)
	struct USpotLightComponent* KeyLight5; // 0x540(0x08)
	struct USpotLightComponent* KeyLight6; // 0x548(0x08)
	struct USpotLightComponent* KeyLigh3; // 0x550(0x08)
	struct USpotLightComponent* KeyLight2; // 0x558(0x08)
	struct USpotLightComponent* BounceRear1; // 0x560(0x08)
	struct USpotLightComponent* RimLowerRight1; // 0x568(0x08)
	struct USpotLightComponent* RimLeft1; // 0x570(0x08)
	struct USpotLightComponent* RimTopRight1; // 0x578(0x08)
	struct USpotLightComponent* RimBottomLeft1; // 0x580(0x08)
	struct USpotLightComponent* Bounce1; // 0x588(0x08)
	struct USceneComponent* LightTransform; // 0x590(0x08)
	struct UStaticMeshComponent* Plane; // 0x598(0x08)
	struct USkeletalMeshComponent* Sample Mesh; // 0x5a0(0x08)
	bool AlwaysOn; // 0x5a8(0x01)
	bool IsActive; // 0x5a9(0x01)
	bool debugConstructionLighting; // 0x5aa(0x01)
	char pad_5AB[0x5]; // 0x5ab(0x05)
	struct UParticleSystemComponent* ObscuringLoopEmitter; // 0x5b0(0x08)
	struct FRotator ToonLightRotatio; // 0x5b8(0x0c)
	bool bIsBattlePassReward; // 0x5c4(0x01)

	void SwitchErebusLighting(bool Visibility); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetFloorEnabled(bool Show Floor); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LightControl(bool Active); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchPCLighting(bool Visibility); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchMobileLighting(bool NewParam); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateSettings(); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSetFloorMaterial(struct UMaterialInterface* InMaterialInstance); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnAllLODStreamingComplete(); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnAllLODStreamingComplete // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCurrentVisualsCleanedUp(); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnCurrentVisualsCleanedUp // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateFloorMaterial(bool bEnableAutotestBackground); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.OnUpdateFloorMaterial // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemOnPawnPreview(int32_t EntryPoint); // Function ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview // (Final|UbergraphFunction) // @ game+0xda7c34
};

