// BlueprintGeneratedClass Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C
// Size: 0xd38 (Inherited: 0xc90)
struct AAthena_Prop_SneakySnowman_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct UCapsuleComponent* OverlapCheck; // 0xc98(0x08)
	struct UProjectileMovementComponent* ProjectileMovementComp; // 0xca0(0x08)
	bool bSimulationRunning; // 0xca8(0x01)
	char pad_CA9[0x7]; // 0xca9(0x07)
	struct UGameplayEffect* GE_ApplyEnemySnowman; // 0xcb0(0x08)
	struct FScalableFloat ShouldSnowmanEnemies; // 0xcb8(0x28)
	struct AFortPickupAthena* PickupAthena; // 0xce0(0x08)
	struct FVector LandedLocation; // 0xce8(0x0c)
	float InitialGravityScale; // 0xcf4(0x04)
	bool GamestateLoaded; // 0xcf8(0x01)
	char pad_CF9[0x7]; // 0xcf9(0x07)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xd00(0x10)
	struct FScalableFloat FallHeightToDestroy; // 0xd10(0x28)

	void TraceStartAndEnd(struct FVector Start, struct FVector End); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.TraceStartAndEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ForceSetLocationOnLanding(); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ForceSetLocationOnLanding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_LandedLocation(); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnRep_LandedLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_bSimulationRunning(); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnRep_bSimulationRunning // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetSimulatedComponents(); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ResetSimulatedComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BuildingActorDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BuildingActorDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RestartSimulating(); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.RestartSimulating // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__OverlapCheck_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BndEvt__OverlapCheck_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PreFinishSpawning(struct AFortVolume* VolumeSpawnedWithin); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.PreFinishSpawning // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer PlaylistContextTags); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.PlaylistLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WobbleAnims(); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.WobbleAnims // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WorldPropSupportDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.WorldPropSupportDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetDistanceCheck(); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ResetDistanceCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Athena_Prop_SneakySnowman(int32_t EntryPoint); // Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ExecuteUbergraph_Athena_Prop_SneakySnowman // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

