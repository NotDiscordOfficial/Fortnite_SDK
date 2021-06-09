// BlueprintGeneratedClass VaultRotator.VaultRotator_C
// Size: 0x42c (Inherited: 0x318)
struct AVaultRotator_C : AItemPreviewRotator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UDirectionalLightComponent* DirectionalLightMobile; // 0x320(0x08)
	struct UDirectionalLightComponent* DirectionalLight_LOWPC; // 0x328(0x08)
	struct USceneComponent* DirectionalLights; // 0x330(0x08)
	struct USkyLightComponent* SkyLightLowMobile; // 0x338(0x08)
	struct USkyLightComponent* SkyLight; // 0x340(0x08)
	struct USkyLightComponent* SkyLight_LOWPC; // 0x348(0x08)
	struct UArrowComponent* Arrow; // 0x350(0x08)
	struct UPostProcessComponent* PostProcess_Mobile; // 0x358(0x08)
	struct UPostProcessComponent* PostProcess_LOWPC; // 0x360(0x08)
	struct USceneComponent* GenericLighting; // 0x368(0x08)
	float Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39; // 0x370(0x04)
	enum class ETimelineDirection Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39; // 0x374(0x01)
	char pad_375[0x3]; // 0x375(0x03)
	struct UTimelineComponent* Timeline_Zoom; // 0x378(0x08)
	struct FVector CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x380(0x0c)
	struct FVector CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x38c(0x0c)
	float CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714; // 0x398(0x04)
	float CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714; // 0x39c(0x04)
	enum class ETimelineDirection CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct UTimelineComponent* CameraTurn_180_to_361; // 0x3a8(0x08)
	struct FVector CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x3b0(0x0c)
	struct FVector CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x3bc(0x0c)
	float CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x3c8(0x04)
	float CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x3cc(0x04)
	enum class ETimelineDirection CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct UTimelineComponent* CameraTurn_0_to_181; // 0x3d8(0x08)
	struct FTransform InitialCameraTransform; // 0x3e0(0x30)
	struct USoundBase* ClockwiseSound; // 0x410(0x08)
	struct USoundBase* CounterClockwiseSound; // 0x418(0x08)
	bool DebugMobile Lighting; // 0x420(0x01)
	bool DebugLightingPC; // 0x421(0x01)
	bool IsActive; // 0x422(0x01)
	bool AlwaysOn; // 0x423(0x01)
	bool DebugLighting_LOWDetailPC; // 0x424(0x01)
	char pad_425[0x3]; // 0x425(0x03)
	float TargetZoomLevel; // 0x428(0x04)

	void PlaySoundWhenEnabled(struct USoundBase* sound); // Function VaultRotator.VaultRotator_C.PlaySoundWhenEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBackgroundColor(struct FLinearColor RGBA0, struct FLinearColor RGBA1); // Function VaultRotator.VaultRotator_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleBackgroundText(bool bDisplayText); // Function VaultRotator.VaultRotator_C.ToggleBackgroundText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LightControl(bool Active); // Function VaultRotator.VaultRotator_C.LightControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchPCLighting(bool Visibility); // Function VaultRotator.VaultRotator_C.SwitchPCLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchPCLighting_LOWDetail(bool Visibility); // Function VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwitchMobileLighting(bool Visibility); // Function VaultRotator.VaultRotator_C.SwitchMobileLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBackgroundString(struct FText CustomText); // Function VaultRotator.VaultRotator_C.SetBackgroundString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CameraTurn_0_to_180__FinishedFunc(); // Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void CameraTurn_0_to_180__UpdateFunc(); // Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void CameraTurn_180_to_360__FinishedFunc(); // Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void CameraTurn_180_to_360__UpdateFunc(); // Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_Zoom__FinishedFunc(); // Function VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_Zoom__UpdateFunc(); // Function VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function VaultRotator.VaultRotator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateSettings(); // Function VaultRotator.VaultRotator_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCameraTransitionReady(bool bPrimaryToSecondary, struct UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions Options); // Function VaultRotator.VaultRotator_C.OnCameraTransitionReady // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnTargetZoomLevelSet(float TargetZoomLevel); // Function VaultRotator.VaultRotator_C.OnTargetZoomLevelSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetBackgroundMessageText(struct FText BackgroundMessageText); // Function VaultRotator.VaultRotator_C.OnSetBackgroundMessageText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateBackgroundColor(bool bEnableAutotestBackground); // Function VaultRotator.VaultRotator_C.OnUpdateBackgroundColor // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VaultRotator(int32_t EntryPoint); // Function VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

