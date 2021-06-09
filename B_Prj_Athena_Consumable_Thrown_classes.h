// BlueprintGeneratedClass B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C
// Size: 0x904 (Inherited: 0x880)
struct AB_Prj_Athena_Consumable_Thrown_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x888(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x890(0x08)
	struct UParticleSystemComponent* FX_Trail; // 0x898(0x08)
	struct UFortWorldItemDefinition* ItemDefinition; // 0x8a0(0x08)
	float Projectile Max Lifetime; // 0x8a8(0x04)
	bool bHasExploded?; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	struct FVector Impact location; // 0x8b0(0x0c)
	float FX Linger Time; // 0x8bc(0x04)
	struct FTimerHandle Lifespan Timer; // 0x8c0(0x08)
	struct FVector SpawnPositionOffset; // 0x8c8(0x0c)
	char pad_8D4[0x4]; // 0x8d4(0x04)
	struct AFortPickup* Pickup; // 0x8d8(0x08)
	struct UParticleSystem* SpawnFX; // 0x8e0(0x08)
	struct UParticleSystem* SpawnFX_Water; // 0x8e8(0x08)
	struct USoundBase* SpawnSound; // 0x8f0(0x08)
	struct USoundBase* Splash Sound ; // 0x8f8(0x08)
	float WaterSpawnDelay; // 0x900(0x04)

	void On Pickup Spawned(struct AFortPickup* Spawned Pickup); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.On Pickup Spawned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get Spawned Pickup Optional Owner PC(struct AFortPlayerController* Optional Owner PC); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Get Spawned Pickup Optional Owner PC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_Pickup(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Pickup // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_Impact Location(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Impact Location // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Timeout(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Timeout // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHomingPassedTarget(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnHomingPassedTarget // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnReachedLockTargetDistanceThreshold(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnReachedLockTargetDistanceThreshold // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBounce(struct FHitResult Hit); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SpawnedItemFx(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnedItemFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Mark(struct AActor* NewParam); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Mark // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void SpawnItem(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnItem // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WaterImpactItemFX(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.WaterImpactItemFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetItemDefinition(struct UFortWorldItemDefinition* In Item Definition); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SetItemDefinition // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Broadcast Pickup Projectile Created(); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Broadcast Pickup Projectile Created // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown(int32_t EntryPoint); // Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

