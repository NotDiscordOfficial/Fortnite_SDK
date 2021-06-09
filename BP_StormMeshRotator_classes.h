// BlueprintGeneratedClass BP_StormMeshRotator.BP_StormMeshRotator_C
// Size: 0x267 (Inherited: 0x220)
struct ABP_StormMeshRotator_C : AFortStormRotator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Sphere; // 0x228(0x08)
	struct UStaticMeshComponent* stormCircleLowerSheet; // 0x230(0x08)
	struct UStaticMeshComponent* SM_stormCircleTopRim; // 0x238(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x240(0x08)
	struct UStaticMeshComponent* SM_stormCircleNew; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float RotationSpeed; // 0x258(0x04)
	float BoundsScale; // 0x25c(0x04)
	float StormProgression; // 0x260(0x04)
	bool TestStorm; // 0x264(0x01)
	bool isMobileStormEnabled; // 0x265(0x01)
	bool areStormEffectsEnabled; // 0x266(0x01)

	void getSphereEnabled(bool Enabled); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.getSphereEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void handleCvarChanged(struct FString CVarName); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.handleCvarChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void initializeMobileStormSphere(); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.initializeMobileStormSphere // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void setStormMeshVisibility(bool bEnabled); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.setStormMeshVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetStormProgression(float Progression); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.SetStormProgression // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStormEffectsEnabled(bool bEnabled); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.OnStormEffectsEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_StormMeshRotator(int32_t EntryPoint); // Function BP_StormMeshRotator.BP_StormMeshRotator_C.ExecuteUbergraph_BP_StormMeshRotator // (Final|UbergraphFunction) // @ game+0xda7c34
};

