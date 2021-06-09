// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C
// Size: 0x2f0 (Inherited: 0x269)
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C : ABP_ProjectileTrajectory_Athena_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UStaticMeshComponent* SM_BuildingPreview; // 0x278(0x08)
	struct USceneComponent* Building; // 0x280(0x08)
	float GridSizeXY; // 0x288(0x04)
	float GridSizeZ; // 0x28c(0x04)
	float GridYOffset; // 0x290(0x04)
	float LastPointDist; // 0x294(0x04)
	float GridZOffset; // 0x298(0x04)
	struct FRotator YawOffset; // 0x29c(0x0c)
	struct FRotator LastYawOffset; // 0x2a8(0x0c)
	struct FVector GridSnapPosition; // 0x2b4(0x0c)
	struct FVector LastGridSnapPosition; // 0x2c0(0x0c)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct USoundBase* GridSnapSound; // 0x2d0(0x08)
	enum class ECardinalDirection CardinalDirection; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct UStaticMesh* BuildingPreviewMesh; // 0x2e0(0x08)
	struct UFortPlaysetItemDefinition* CachedPlayset; // 0x2e8(0x08)

	void GetPlaysetFromController(bool bSuccess); // Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.GetPlaysetFromController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateScaleForPlayset(); // Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UpdateScaleForPlayset // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleGridSnapUpdates(struct FVector NewLocation); // Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.HandleGridSnapUpdates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetTrajectorySpline(struct TArray<struct FVector> SplinePoints, struct TArray<struct FVector> SplineTangents); // Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.SetTrajectorySpline // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid(int32_t EntryPoint); // Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

