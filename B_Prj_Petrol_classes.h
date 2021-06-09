// BlueprintGeneratedClass B_Prj_Petrol.B_Prj_Petrol_C
// Size: 0x990 (Inherited: 0x8b8)
struct AB_Prj_Petrol_C : AFortProjectilePetrol {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8b8(0x08)
	struct UParticleSystemComponent* P_Petrol_Prj_Trail; // 0x8c0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x8c8(0x08)
	struct FGameplayTagContainer RefillableVehicleTag; // 0x8d0(0x20)
	struct ABGA_Petrol_Pickup_C* ClosestPetrolPickupBGA; // 0x8f0(0x08)
	struct ABGA_Petrol_Pickup_C* NullBGA; // 0x8f8(0x08)
	float ShortestDistance; // 0x900(0x04)
	int32_t ClosestPetrolPickupBGAIndex; // 0x904(0x04)
	struct TArray<struct AActor*> HitActors; // 0x908(0x10)
	struct FScalableFloat OverrideFuelToAddToPetrolPickup; // 0x918(0x28)
	int32_t FuelToAddToPetrolPickup; // 0x940(0x04)
	char pad_944[0x4]; // 0x944(0x04)
	struct FGameplayTagContainer T_Quest; // 0x948(0x20)
	struct FScalableFloat Hotfix_RefillVehicleAmount; // 0x968(0x28)

	void UserConstructionScript(); // Function B_Prj_Petrol.B_Prj_Petrol_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_Petrol.B_Prj_Petrol_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Petrol.B_Prj_Petrol_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_Petrol.B_Prj_Petrol_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_Prj_Petrol.B_Prj_Petrol_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_Petrol.B_Prj_Petrol_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Petrol(int32_t EntryPoint); // Function B_Prj_Petrol.B_Prj_Petrol_C.ExecuteUbergraph_B_Prj_Petrol // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

