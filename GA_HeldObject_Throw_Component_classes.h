// BlueprintGeneratedClass GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C
// Size: 0xc50 (Inherited: 0xa70)
struct UGA_HeldObject_Throw_Component_C : UFortGameplayAbility {
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
	struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec; // 0xab8(0xb8)
	struct FScalableFloat ProjectileSpeed; // 0xb70(0x28)
	struct FScalableFloat ProjectileGravityScale; // 0xb98(0x28)
	float TrajectoryUpdateInterval; // 0xbc0(0x04)
	struct FGameplayTag EC_DefaultExplosion; // 0xbc4(0x08)
	char pad_BCC[0x4]; // 0xbcc(0x04)
	struct UAnimMontage* CookMonage; // 0xbd0(0x08)
	struct UAnimMontage* ThrowMontage; // 0xbd8(0x08)
	struct FGameplayTag GC_OnThrow; // 0xbe0(0x08)
	struct ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xbe8(0x08)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xbf0(0x08)
	struct AFortProjectileBase* DummyProjectile; // 0xbf8(0x08)
	float DummyMaxSpeed; // 0xc00(0x04)
	float DummyGravity; // 0xc04(0x04)
	float DummyExtent; // 0xc08(0x04)
	float DummyTimeStep; // 0xc0c(0x04)
	struct UGameplayEffect* GE_InWindup; // 0xc10(0x08)
	struct FActiveGameplayEffectHandle Handle_GE_InWindup; // 0xc18(0x08)
	bool SpawnedOnEquip; // 0xc20(0x01)
	char pad_C21[0x7]; // 0xc21(0x07)
	struct AActor* HeldObject; // 0xc28(0x08)
	struct ABP_ProjectileTrajectory_C* ProjectileTrajectorySocketed; // 0xc30(0x08)
	struct AActor* TrajectoryIndicatorSocketedClass; // 0xc38(0x08)
	struct UFortHeldObjectComponent* HeldObjectComponent; // 0xc40(0x08)
	struct UFortCameraMode* CookOverrideCamera; // 0xc48(0x08)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector> OutSplinePoints, struct TArray<struct FVector> OutSplineTangents, struct FHitResult OutHitResult); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetupSplineActors(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupSplineActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer RelevantTags); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void Setup Late Trajectory Data(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Setup Late Trajectory Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HitValidSocket(struct FHitResult HitResult, bool CanSocket); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.HitValidSocket // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDummyProjectileSocketed(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupDummyProjectileSocketed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectory(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.CleanupTrajectory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PostThrowCleanup(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.PostThrowCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectorySpline(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDummyProjectile(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHeldObjectSetup(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnHeldObjectSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHeldObjectThrown(struct AFortProjectileBase* SpawnedProjectile); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnHeldObjectThrown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnThrownProjectile(struct AFortProjectileBase* ProjectileClass, struct FVector ProjectileSpawnLocation, struct FRotator ProjectileSpawnDirection, struct FFortGameplayEffectContainerSpec ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, struct AFortProjectileBase* SpawnedProjectile); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SpawnThrownProjectile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetOwningPlayer(struct AFortPlayerPawn* Player Pawn); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetSpawnLocationAndRotation(struct FVector Location, struct FRotator Rotation); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetSpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void PrethrowSetup(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.PrethrowSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_A44500A44ED1BD047C0A7FB13050E377(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Completed_A44500A44ED1BD047C0A7FB13050E377 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_A44500A44ED1BD047C0A7FB13050E377(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Cancelled_A44500A44ED1BD047C0A7FB13050E377 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_A44500A44ED1BD047C0A7FB13050E377(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Triggered_A44500A44ED1BD047C0A7FB13050E377 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_CE16214748EB548E38F0A4A5EBFDD545(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnFinish_CE16214748EB548E38F0A4A5EBFDD545 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Throw(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Throw // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttemptSpawnThrownProjectile(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.AttemptSpawnThrownProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void InitTrajectoryVariables(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectory(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAbilityInputReleased(); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_HeldObject_Throw_Component(int32_t EntryPoint); // Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.ExecuteUbergraph_GA_HeldObject_Throw_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

