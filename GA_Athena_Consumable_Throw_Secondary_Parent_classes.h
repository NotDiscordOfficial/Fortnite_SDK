// BlueprintGeneratedClass GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C
// Size: 0xe60 (Inherited: 0xa70)
struct UGA_Athena_Consumable_Throw_Secondary_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	bool AbilityKeyPressed; // 0xa80(0x01)
	bool InThrowWindup; // 0xa81(0x01)
	char pad_A82[0x2]; // 0xa82(0x02)
	float AdditionalThrowAngle; // 0xa84(0x04)
	float MaxTossPitch; // 0xa88(0x04)
	struct FVector GrenadeTargetingOriginOffset; // 0xa8c(0x0c)
	struct FVector GrenadeTargetingOriginOffset_Crouched; // 0xa98(0x0c)
	char pad_AA4[0x4]; // 0xaa4(0x04)
	struct AFortProjectileBase* SpawnedProjectile; // 0xaa8(0x08)
	struct AFortProjectileBase* Proj_ThrownProjectile; // 0xab0(0x08)
	struct FScalableFloat ProjectileSpeed; // 0xab8(0x28)
	struct FScalableFloat ProjectileGravityScale; // 0xae0(0x28)
	float TrajectoryUpdateInterval; // 0xb08(0x04)
	char pad_B0C[0x4]; // 0xb0c(0x04)
	struct UAnimMontage* CookMonage; // 0xb10(0x08)
	struct UAnimMontage* ThrowMontage; // 0xb18(0x08)
	struct FGameplayTag GC_OnThrow; // 0xb20(0x08)
	struct ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xb28(0x08)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xb30(0x08)
	struct AFortProjectileBase* DummyProjectile; // 0xb38(0x08)
	float DummyMaxSpeed; // 0xb40(0x04)
	float DummyGravity; // 0xb44(0x04)
	float DummyExtent; // 0xb48(0x04)
	float DummyTimeStep; // 0xb4c(0x04)
	struct FName TrajectoryCollisionProfileName; // 0xb50(0x08)
	struct FGameplayTag GC_CookLoop; // 0xb58(0x08)
	struct UGameplayEffect* GE_InWindup; // 0xb60(0x08)
	struct FVector GrenadeTargetingOriginOffsetWater; // 0xb68(0x0c)
	struct FActiveGameplayEffectHandle Handle_GE_InWindup; // 0xb74(0x08)
	struct FGameplayTag EC_DefaultExplosion; // 0xb7c(0x08)
	int32_t ExplosionEffectLevel; // 0xb84(0x04)
	struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec; // 0xb88(0xb8)
	bool SpawnedOnEquip; // 0xc40(0x01)
	char pad_C41[0x3]; // 0xc41(0x03)
	struct FGameplayTag EC_DefaultHit; // 0xc44(0x08)
	int32_t HitEffectLevel; // 0xc4c(0x04)
	struct FFortGameplayEffectContainerSpec HitEffectContainerSpec; // 0xc50(0xb8)
	struct FMulticastInlineDelegate OnProjectileSpawn; // 0xd08(0x10)
	bool HasAdditionalExplosion; // 0xd18(0x01)
	char pad_D19[0x3]; // 0xd19(0x03)
	struct FGameplayTag EC_AdditionalExplosion; // 0xd1c(0x08)
	int32_t AdditionalExplodeLevel; // 0xd24(0x04)
	struct FFortGameplayEffectContainerSpec AdditionalContainerSpec; // 0xd28(0xb8)
	struct FGameplayTagContainer QuestCreditTargetTag; // 0xde0(0x20)
	bool IsThrowing; // 0xe00(0x01)
	bool ThrowInstantly; // 0xe01(0x01)
	char pad_E02[0x6]; // 0xe02(0x06)
	struct FScalableFloat ThrowConsumablesEnabled; // 0xe08(0x28)
	int32_t DummyMaxSteps; // 0xe30(0x04)
	char pad_E34[0x4]; // 0xe34(0x04)
	struct UFortCameraMode* CameraMode; // 0xe38(0x08)
	struct FGameplayTagContainer Tag_BlockAbilityActivation; // 0xe40(0x20)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector> OutSplinePoints, struct TArray<struct FVector> OutSplineTangents, struct FHitResult OutHitResult); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RemoveCookGC(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.RemoveCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddCookGC(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.AddCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer RelevantTags); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void AddValidCamera(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.AddValidCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetProjectileInitialGravityScaleToUse(float GravityScaleToUse); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetProjectileInitialGravityScaleToUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetProjectileInitialSpeedToUse(float ProjectileSpeedToUse); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetProjectileInitialSpeedToUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void CleanupTrajectory(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.CleanupTrajectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PostThrowCleanup(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.PostThrowCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectorySpline(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDummyProjectile(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnProjectileSetup(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnProjectileSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnProjectileSpawned(struct AFortProjectileBase* SpawnedProjectile); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnProjectileSpawned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnThrownProjectile(struct AFortProjectileBase* ProjectileClass, struct FVector ProjectileSpawnLocation, struct FRotator ProjectileSpawnDirection, struct FFortGameplayEffectContainerSpec HitEffectContainerSpec, struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, struct AFortProjectileBase* SpawnedProjectile); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.SpawnThrownProjectile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetOwningPlayer(struct AFortPlayerPawn* Player Pawn); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetSpawnLocationAndRotation(struct FVector Location, struct FRotator Rotation); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.GetSpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void PrethrowSetup(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.PrethrowSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_7CDE11F247AD13935CDDCCA29666AC3E(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.Completed_7CDE11F247AD13935CDDCCA29666AC3E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_7CDE11F247AD13935CDDCCA29666AC3E(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.Cancelled_7CDE11F247AD13935CDDCCA29666AC3E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_7CDE11F247AD13935CDDCCA29666AC3E(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.Triggered_7CDE11F247AD13935CDDCCA29666AC3E // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSync_65BB2FE343979EBE180BC6A76D8BF92F(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnSync_65BB2FE343979EBE180BC6A76D8BF92F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_69B60BD84BF46B2613ACDE9E1A689444(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.EventReceived_69B60BD84BF46B2613ACDE9E1A689444 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ThrowProjectile(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.ThrowProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttemptSpawnThrownProjectile(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.AttemptSpawnThrownProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAbilityInputReleased(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void InitTrajectoryVariables(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectory(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ThrowMontageStarted(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.ThrowMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Consumable_Throw_Secondary_Parent(int32_t EntryPoint); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_Throw_Secondary_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnProjectileSpawn__DelegateSignature(); // Function GA_Athena_Consumable_Throw_Secondary_Parent.GA_Athena_Consumable_Throw_Secondary_Parent_C.OnProjectileSpawn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

