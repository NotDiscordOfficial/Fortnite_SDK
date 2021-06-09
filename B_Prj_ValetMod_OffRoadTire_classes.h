// BlueprintGeneratedClass B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C
// Size: 0xa28 (Inherited: 0x900)
struct AB_Prj_ValetMod_OffRoadTire_C : AB_Prj_Athena_BGASpawner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x900(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x908(0x08)
	struct UStaticMeshComponent* Tire; // 0x910(0x08)
	struct FGameplayTag ModTagToApply; // 0x918(0x08)
	float SpeedToStop; // 0x920(0x04)
	float PlayerLaunchMultiplier; // 0x924(0x04)
	float PlayerLaunchZMultiplier; // 0x928(0x04)
	char pad_92C[0x4]; // 0x92c(0x04)
	struct TArray<struct FName> TireFXSocketArray; // 0x930(0x10)
	struct FScalableFloat ShouldTirePilesBeStackable; // 0x940(0x28)
	struct FScalableFloat ShouldLaunchHitPlayer; // 0x968(0x28)
	struct FScalableFloat HitPlayerLaunchMag; // 0x990(0x28)
	struct FScalableFloat HitPlayerLaunchZMulti; // 0x9b8(0x28)
	bool EnteredWater; // 0x9e0(0x01)
	bool Hit; // 0x9e1(0x01)
	char pad_9E2[0x6]; // 0x9e2(0x06)
	struct UFortWorldItemDefinition* TireModWID; // 0x9e8(0x08)
	struct UFXSystemAsset* WaterSplashFX; // 0x9f0(0x08)
	struct AFortDagwoodVehicle* HitVehicle; // 0x9f8(0x08)
	struct FScalableFloat HotfixSpawnPickUpIfStuckOnVehicle; // 0xa00(0x28)

	bool ShouldApplyMod(struct AFortDagwoodVehicle* Vehicle); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ShouldApplyMod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct FVector CalculateLaunchVelocity(struct AFortPawn* PlayerPawn); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.CalculateLaunchVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void PickValetTireToApply(struct AFortDagwoodVehicle* Vehicle); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.PickValetTireToApply // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ParentHit(); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ParentHit // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HasEnteredWater(); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.HasEnteredWater // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ResetHitVehicle(); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ResetHitVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_ValetMod_OffRoadTire(int32_t EntryPoint); // Function B_Prj_ValetMod_OffRoadTire.B_Prj_ValetMod_OffRoadTire_C.ExecuteUbergraph_B_Prj_ValetMod_OffRoadTire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

