// BlueprintGeneratedClass GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C
// Size: 0xe2c (Inherited: 0xa70)
struct UGA_Athena_Grenade_WithTrajectory_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct FGameplayTag EventActivation; // 0xa78(0x08)
	struct FGameplayTag EventComplete; // 0xa80(0x08)
	struct AFortProjectileBase* Prj_Grenade; // 0xa88(0x08)
	float GrenadeSpeedMin; // 0xa90(0x04)
	float GrenadeSpeedMax; // 0xa94(0x04)
	float GravityScale; // 0xa98(0x04)
	char pad_A9C[0x4]; // 0xa9c(0x04)
	struct USoundBase* GrenadeSound; // 0xaa0(0x08)
	struct FGameplayTag EC_DefaultExplosion; // 0xaa8(0x08)
	struct FFortGameplayEffectContainerSpec EC_ReturnedEffect; // 0xab0(0xb8)
	struct FFortGameplayEffectContainerSpec EC_AdditionalReturnedEffect; // 0xb68(0xb8)
	float ExplosionRadius; // 0xc20(0x04)
	float AdditionalThrowAngle; // 0xc24(0x04)
	struct FFortFeedbackHandle GrenadeDialogFeedback; // 0xc28(0x18)
	bool GrenadeAmmo; // 0xc40(0x01)
	bool PlasmaGrenades; // 0xc41(0x01)
	bool Flashbang; // 0xc42(0x01)
	char pad_C43[0x1]; // 0xc43(0x01)
	struct FVector GrenadeTargetingOriginOffset; // 0xc44(0x0c)
	struct AFortProjectileBase* DummyProjectile; // 0xc50(0x08)
	bool DummyShouldBounce; // 0xc58(0x01)
	char pad_C59[0x3]; // 0xc59(0x03)
	float DummyBounciness; // 0xc5c(0x04)
	float DummyFriction; // 0xc60(0x04)
	float DummyMaxSpeed; // 0xc64(0x04)
	float DummyGravity; // 0xc68(0x04)
	float DummyTimeStep; // 0xc6c(0x04)
	float DummyExtent; // 0xc70(0x04)
	struct FVector GrenadeTargetingOriginOffset_Crouched; // 0xc74(0x0c)
	bool InThrowWindup; // 0xc80(0x01)
	char pad_C81[0x7]; // 0xc81(0x07)
	struct ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xc88(0x08)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xc90(0x08)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xc98(0x58)
	bool AbilityKeyPressed; // 0xcf0(0x01)
	char pad_CF1[0x3]; // 0xcf1(0x03)
	float MaxSpeedPitch; // 0xcf4(0x04)
	float MinSpeedPitch; // 0xcf8(0x04)
	char pad_CFC[0x4]; // 0xcfc(0x04)
	struct FGameplayEventData Event Data; // 0xd00(0xb0)
	struct AFortPlayerPawn* PlayerPawn; // 0xdb0(0x08)
	float MaxTossPitch; // 0xdb8(0x04)
	int32_t MaxTrajectoryBounces; // 0xdbc(0x04)
	float PostThrowCancelDelay; // 0xdc0(0x04)
	float PostThrowEndDelay; // 0xdc4(0x04)
	struct AFortProjectileBase* ProjectileReference; // 0xdc8(0x08)
	float DistanceFromInstigatorCheck; // 0xdd0(0x04)
	char pad_DD4[0x4]; // 0xdd4(0x04)
	struct FTimerHandle UpdateTrajectoryTimerHandle; // 0xdd8(0x08)
	bool Spawned On Equip; // 0xde0(0x01)
	enum class ECollisionChannel DummyCollisionChannel; // 0xde1(0x01)
	char pad_DE2[0x6]; // 0xde2(0x06)
	struct AFortProjectileDecoHelper* GrenadeDecoHelper; // 0xde8(0x08)
	struct AFortDecoTool_ContextTrap* GrenadeDecoTool; // 0xdf0(0x08)
	struct FMulticastInlineDelegate OnProjectileSpawn; // 0xdf8(0x10)
	struct FGameplayTagContainer QuestCreditTargetTag; // 0xe08(0x20)
	int32_t DummyMaxSteps; // 0xe28(0x04)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector> OutSplinePoints, struct TArray<struct FVector> OutSplineTangents, struct FHitResult OutHitResult); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void UpdateTrajectorySpline(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetOwningPlayer(struct AFortPlayerPawn* Player Pawn); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void CalcGrenadeSpeedFromPitch(float AimPitch, float GrenadeSpeed); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void SetupDummyProjectile(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnLocationAndRotation(struct FVector OutLoc, struct FRotator OutRot); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void SetupGrenade(float AimPitch, struct AFortProjectileBase* Base Grenade, float Projectile Speed, struct FFortGameplayEffectContainerSpec Explosion Gameplay Spec, float Projectile Gravity Scale, struct FFortGameplayEffectContainerSpec Additional Explosion Gameplay Spec); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.SetupGrenade // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Completed_B08560984B3818F6EECB3C9A92E61ADC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Cancelled_B08560984B3818F6EECB3C9A92E61ADC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Triggered_B08560984B3818F6EECB3C9A92E61ADC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_4B1D92B7427697E6BD9D58ACA0F87155(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnFinish_4B1D92B7427697E6BD9D58ACA0F87155 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_758AC809498064C01C71318E141D1E46(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnCancelled_758AC809498064C01C71318E141D1E46 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_758AC809498064C01C71318E141D1E46(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnInterrupted_758AC809498064C01C71318E141D1E46 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_758AC809498064C01C71318E141D1E46(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnBlendOut_758AC809498064C01C71318E141D1E46 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_758AC809498064C01C71318E141D1E46(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnCompleted_758AC809498064C01C71318E141D1E46 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Server_SpawnProjectile(struct FVector Location, struct FRotator Direction); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Server_SpawnProjectile // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnAbilityInputReleased(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryDisplay(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CleanupTrajectoryDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TossGrenade(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.TossGrenade // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitTrajectoryVariables(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AthenaProjectileSpawned(struct AFortProjectileBase* ProjectileReference); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.AthenaProjectileSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cleanup Trajectory Display On End(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.Cleanup Trajectory Display On End // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectory(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory(int32_t EntryPoint); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnProjectileSpawn__DelegateSignature(); // Function GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C.OnProjectileSpawn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

