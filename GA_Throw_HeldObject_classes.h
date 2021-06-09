// BlueprintGeneratedClass GA_Throw_HeldObject.GA_Throw_HeldObject_C
// Size: 0xbd8 (Inherited: 0xa70)
struct UGA_Throw_HeldObject_C : UFortGameplayAbility {
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
	struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec; // 0xab0(0xb8)
	struct FGameplayTag EC_DefaultExplosion; // 0xb68(0x08)
	struct UAnimMontage* CookMonage; // 0xb70(0x08)
	struct UAnimMontage* ThrowMontage; // 0xb78(0x08)
	struct FGameplayTag GC_OnThrow; // 0xb80(0x08)
	struct ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xb88(0x08)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xb90(0x08)
	float DummyMaxSpeed; // 0xb98(0x04)
	float DummyGravity; // 0xb9c(0x04)
	float DummyExtent; // 0xba0(0x04)
	float DummyTimeStep; // 0xba4(0x04)
	struct UGameplayEffect* GE_InWindup; // 0xba8(0x08)
	struct FActiveGameplayEffectHandle Handle_GE_InWindup; // 0xbb0(0x08)
	bool SpawnedOnEquip; // 0xbb8(0x01)
	char pad_BB9[0x7]; // 0xbb9(0x07)
	struct AB_HeldObject_Parent_C* HeldObject; // 0xbc0(0x08)
	struct ABP_ProjectileTrajectory_C* ProjectileTrajectorySocketed; // 0xbc8(0x08)
	struct AActor* TrajectoryIndicatorSocketedClass; // 0xbd0(0x08)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector> OutSplinePoints, struct TArray<struct FVector> OutSplineTangents, struct FHitResult OutHitResult); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HitValidSocket(struct FHitResult HitResult, bool CanSocket); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.HitValidSocket // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDummyProjectileSocketed(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SetupDummyProjectileSocketed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectory(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.CleanupTrajectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PostThrowCleanup(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.PostThrowCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectorySpline(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDummyProjectile(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHeldObjectSetup(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnHeldObjectSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHeldObjectThrown(struct AFortProjectileBase* SpawnedProjectile); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnHeldObjectThrown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnThrownProjectile(struct AFortProjectileBase* ProjectileClass, struct FVector ProjectileSpawnLocation, struct FRotator ProjectileSpawnDirection, struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, struct AFortProjectileBase* SpawnedProjectile); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SpawnThrownProjectile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetOwningPlayer(struct AFortPlayerPawn* Player Pawn); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetSpawnLocationAndRotation(struct FVector Location, struct FRotator Rotation); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetSpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void PrethrowSetup(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.PrethrowSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_9DD11B80484829AF1E8DC5ACFC965E7A(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Completed_9DD11B80484829AF1E8DC5ACFC965E7A // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_9DD11B80484829AF1E8DC5ACFC965E7A(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Cancelled_9DD11B80484829AF1E8DC5ACFC965E7A // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_9DD11B80484829AF1E8DC5ACFC965E7A(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Triggered_9DD11B80484829AF1E8DC5ACFC965E7A // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_5115EDCE4339523BE389D09CA4A2AECC(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnFinish_5115EDCE4339523BE389D09CA4A2AECC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttemptSpawnThrownProjectile(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.AttemptSpawnThrownProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ThrowProjectile(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ThrowProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitTrajectoryVariables(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectory(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAbilityInputReleased(); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Throw_HeldObject(int32_t EntryPoint); // Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ExecuteUbergraph_GA_Throw_HeldObject // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

