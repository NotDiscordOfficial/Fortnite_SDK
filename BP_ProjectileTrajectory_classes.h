// BlueprintGeneratedClass BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
// Size: 0x269 (Inherited: 0x238)
struct ABP_ProjectileTrajectory_C : AFortProjectileTrajectory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UStaticMeshComponent* Target; // 0x240(0x08)
	int32_t MaxMeshCount; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UMaterialInstanceDynamic* SplineMID; // 0x250(0x08)
	float SplineFadeDistance; // 0x258(0x04)
	float SplineFadeStartDistance; // 0x25c(0x04)
	struct UObject* Trajectory Owner; // 0x260(0x08)
	bool ShouldUpdate; // 0x268(0x01)

	void SetShouldUpdateFromOwner(bool ShouldUpdate, struct UObject* Owner); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromTrajectoryOwner(); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetTrajectorySpline(struct TArray<struct FVector> SplinePoints, struct TArray<struct FVector> SplineTangents); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_ProjectileTrajectory(int32_t EntryPoint); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

