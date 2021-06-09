// BlueprintGeneratedClass AthenaSupplyDrop.AthenaSupplyDrop_C
// Size: 0xb31 (Inherited: 0x9b0)
struct AAthenaSupplyDrop_C : AFortAthenaSupplyDrop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9b0(0x08)
	struct USphereComponent* WaterCollisionSphere; // 0x9b8(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x9c0(0x08)
	struct UFortWaterInteractionComponent* FortWaterInteraction; // 0x9c8(0x08)
	struct UAudioComponent* FallingAudio; // 0x9d0(0x08)
	struct UParticleSystemComponent* ReticlePSC; // 0x9d8(0x08)
	struct UBoxComponent* CrateCollision; // 0x9e0(0x08)
	struct UChildActorComponent* ChildActor; // 0x9e8(0x08)
	struct UAudioComponent* FlareAudio; // 0x9f0(0x08)
	struct UParticleSystemComponent* FlarePSC; // 0x9f8(0x08)
	struct UAudioComponent* ReticleAudio; // 0xa00(0x08)
	struct UStaticMeshComponent* CrateStaticMesh; // 0xa08(0x08)
	struct AFortPawn* MyInteractingPawn; // 0xa10(0x08)
	struct FName LootTableName; // 0xa18(0x08)
	struct FVector LootSpawnOffset; // 0xa20(0x0c)
	char pad_A2C[0x4]; // 0xa2c(0x04)
	struct USoundBase* Sound_Looted; // 0xa30(0x08)
	struct USoundBase* Sound_Destroyed; // 0xa38(0x08)
	struct USoundBase* Sound_Landing; // 0xa40(0x08)
	bool Opened; // 0xa48(0x01)
	bool BalloonPopped; // 0xa49(0x01)
	char pad_A4A[0x6]; // 0xa4a(0x06)
	struct UParticleSystem* LandingFX; // 0xa50(0x08)
	struct UParticleSystem* DestroyedFX; // 0xa58(0x08)
	struct UParticleSystem* LootedFX; // 0xa60(0x08)
	float FallSpeed; // 0xa68(0x04)
	float ReticleUpdateInterval; // 0xa6c(0x04)
	float InitialFallDelay; // 0xa70(0x04)
	char pad_A74[0x4]; // 0xa74(0x04)
	struct UParticleSystem* FallTrailFX; // 0xa78(0x08)
	struct USoundBase* Sound_Appear; // 0xa80(0x08)
	struct USoundBase* Sound_ReticleAppear; // 0xa88(0x08)
	struct USoundBase* Sound_AlmostLanded; // 0xa90(0x08)
	struct FVector LandingLocation; // 0xa98(0x0c)
	bool AutoOpen; // 0xaa4(0x01)
	char pad_AA5[0x3]; // 0xaa5(0x03)
	float FallHeight; // 0xaa8(0x04)
	float DescentOffsetMin; // 0xaac(0x04)
	float DescentOffsetMax; // 0xab0(0x04)
	struct FVector FallDirection; // 0xab4(0x0c)
	struct FVector GroundLocation; // 0xac0(0x0c)
	float DescentYOffsetMin; // 0xacc(0x04)
	float DescentYOffsetMax; // 0xad0(0x04)
	bool bGroundLocationInitialized; // 0xad4(0x01)
	bool bOverrideRotation; // 0xad5(0x01)
	char pad_AD6[0x2]; // 0xad6(0x02)
	struct FRotator OverrideRotation; // 0xad8(0x0c)
	bool BlingDrop; // 0xae4(0x01)
	char pad_AE5[0x3]; // 0xae5(0x03)
	struct FName LootTableNameToUse; // 0xae8(0x08)
	struct AFortAthenaVehicle* VehicleType; // 0xaf0(0x08)
	struct FTimerHandle FallingAudioCheckTimerHandle; // 0xaf8(0x08)
	float PlayerDistanceCheckTimeLoop; // 0xb00(0x04)
	bool InfDrop; // 0xb04(0x01)
	char pad_B05[0x3]; // 0xb05(0x03)
	struct USoundBase* Sound Looted Inf; // 0xb08(0x08)
	struct USoundBase* Sound Appear Dialogue; // 0xb10(0x08)
	struct TArray<struct FFortItemEntry> DelayedSpawnLoot; // 0xb18(0x10)
	float RandomSpawnRangeMin; // 0xb28(0x04)
	float RandomSpawnRangeMax; // 0xb2c(0x04)
	bool LandInterrupted; // 0xb30(0x01)

	void SpawnVehicle(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnVehicle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Analytics(struct TArray<struct FFortItemEntry> ItemsToSpawn); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.Analytics // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSetCustomDepthStencilValue(struct TArray<struct UPrimitiveComponent*> PrimComponents, bool bUseCustomDepth, int32_t StencilValue, bool bOutConsume); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnSetCustomDepthStencilValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleProjectileMovementStop(struct FHitResult ImpactResult); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.HandleProjectileMovementStop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceSetLocationOnLanding(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.ForceSetLocationOnLanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_LandingLocation(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_LandingLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AlmostLanded(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.AlmostLanded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DisableFlare(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.DisableFlare // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitFallHeightAndSpeed(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFallHeightAndSpeed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayLandingFX(bool bSpawnVFX); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.PlayLandingFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitFall(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_BalloonPopped(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_BalloonPopped // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BalloonDestroyed(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BalloonDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateReticleLocation(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.UpdateReticleLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OpenSupplyDrop(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OpenSupplyDrop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_Opened(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_Opened // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Setup Bind To Building Actor(struct UObject* Object); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.Setup Bind To Building Actor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void GetLootSpawnLocation(struct FVector LootSpawnLocation); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.GetLootSpawnLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void SpawnLoot(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnLoot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void UserConstructionScript(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLandingLocationChanged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLandingLocationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Multicast_ApplyGravityForFall(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.Multicast_ApplyGravityForFall // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BeginFallAudioTimeline(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BeginFallAudioTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopFallAudioTimeline(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.StopFallAudioTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLanding(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLanding // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TimerCheckPlayerDistance(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.TimerCheckPlayerDistance // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DestroyGroundComponents(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.DestroyGroundComponents // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Play Looted Dialogue(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.Play Looted Dialogue // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SetupQuestData(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.SetupQuestData // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnDelayedSpawnLoot(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDelayedSpawnLoot // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTouchedFillFloor(struct AAthenaFillFloor* FillFloorActor); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnTouchedFillFloor // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PhysicsActivated(struct UActorComponent* Component, bool bReset); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.PhysicsActivated // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LandingInterrupted(); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.LandingInterrupted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaSupplyDrop(int32_t EntryPoint); // Function AthenaSupplyDrop.AthenaSupplyDrop_C.ExecuteUbergraph_AthenaSupplyDrop // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

