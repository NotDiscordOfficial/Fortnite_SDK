// BlueprintGeneratedClass BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C
// Size: 0x2b8 (Inherited: 0x238)
struct ABP_ProjectileTrajectory_Bow_Generic_C : AFortProjectileTrajectory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UStaticMeshComponent* Target; // 0x240(0x08)
	struct USplineComponent* Spline; // 0x248(0x08)
	int32_t MaxMeshCount; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct UMaterialInstanceDynamic* SplineMID; // 0x258(0x08)
	struct UObject* Trajectory Owner; // 0x260(0x08)
	struct FTimerHandle Update Timer Handle; // 0x268(0x08)
	struct FVector EndPointOffset; // 0x270(0x0c)
	float Right; // 0x27c(0x04)
	float Up; // 0x280(0x04)
	float SplineMeshLength; // 0x284(0x04)
	float SplineMeshOffsetDistance; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct AFortWeaponRanged* OwnerWeapon; // 0x290(0x08)
	struct FVector MuzzleOffset; // 0x298(0x0c)
	bool ValidTarget; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UMaterialInstanceDynamic* TargetMID; // 0x2a8(0x08)
	bool CheckForValidTarget; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float ProjMaxDistance; // 0x2b4(0x04)

	void OnRep_InvalidTarget(); // Function BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C.OnRep_InvalidTarget // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetShouldUpdateFromOwner(bool ShouldUpdate, struct UObject* Owner, float Interval); // Function BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C.SetShouldUpdateFromOwner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateFromTrajectoryOwner(); // Function BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C.UpdateFromTrajectoryOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTrajectorySplineInternal(struct TArray<struct FVector> SplinePoints, struct TArray<struct FVector> SplineTangents); // Function BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C.SetTrajectorySplineInternal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Pulse(); // Function BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C.Pulse // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTrajectorySpline(struct TArray<struct FVector> SplinePoints, struct TArray<struct FVector> SplineTangents); // Function BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C.SetTrajectorySpline // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Check Valid Target(struct FHitResult Trajectory Hit Result); // Function BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C.Check Valid Target // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_ProjectileTrajectory_Bow_Generic(int32_t EntryPoint); // Function BP_ProjectileTrajectory_Bow_Generic.BP_ProjectileTrajectory_Bow_Generic_C.ExecuteUbergraph_BP_ProjectileTrajectory_Bow_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

