// BlueprintGeneratedClass GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C
// Size: 0xc0c (Inherited: 0xa70)
struct UGA_Athena_Consumable_Pass_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct UFortWeaponRangedItemDefinition* ItemDefinition; // 0xa80(0x08)
	struct AFortProjectileBase* ProjectileToThrow; // 0xa88(0x08)
	struct AFortProjectileBase* ProjectileReference; // 0xa90(0x08)
	float DistanceFromInstigatorCheck; // 0xa98(0x04)
	float ProjectileSpeedMin; // 0xa9c(0x04)
	float ProjectileSpeedMax; // 0xaa0(0x04)
	float ProjectileGravityScale; // 0xaa4(0x04)
	struct FVector ProjectileTargetingOriginOffset; // 0xaa8(0x0c)
	char pad_AB4[0x4]; // 0xab4(0x04)
	struct AFortProjectileBase* DummyProjectile; // 0xab8(0x08)
	bool DummyShouldBounce; // 0xac0(0x01)
	char pad_AC1[0x3]; // 0xac1(0x03)
	float DummyBounciness; // 0xac4(0x04)
	float DummyFriction; // 0xac8(0x04)
	float DummyMaxSpeed; // 0xacc(0x04)
	float DummyGravity; // 0xad0(0x04)
	float DummyTimeStep; // 0xad4(0x04)
	float DummyExtent; // 0xad8(0x04)
	struct FVector ProjectileTargetingOriginOffset_Crouched; // 0xadc(0x0c)
	bool InThrowWindup; // 0xae8(0x01)
	char pad_AE9[0x7]; // 0xae9(0x07)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xaf0(0x58)
	struct ABP_ProjectileTrajectory_Athena_C* TrajectoryIndicator; // 0xb48(0x08)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xb50(0x08)
	bool AbilityKeyPressed; // 0xb58(0x01)
	char pad_B59[0x3]; // 0xb59(0x03)
	struct FVector GrenadeTargetingOriginOffsetWater; // 0xb5c(0x0c)
	float AdditionalThrowAngle; // 0xb68(0x04)
	float MaxSpeedPitch; // 0xb6c(0x04)
	float MinSpeedPitch; // 0xb70(0x04)
	float MaxThrowPitch; // 0xb74(0x04)
	int32_t MaxTrajectoryBounces; // 0xb78(0x04)
	bool IsThrowing; // 0xb7c(0x01)
	char pad_B7D[0x3]; // 0xb7d(0x03)
	float PostThrowDelay; // 0xb80(0x04)
	bool Spawned On Equip; // 0xb84(0x01)
	enum class ECollisionChannel DummyCollisionChannel; // 0xb85(0x01)
	char pad_B86[0x2]; // 0xb86(0x02)
	struct FScalableFloat ThrowConsumablesEnabled; // 0xb88(0x28)
	struct FGameplayTagContainer T_ItemThrown; // 0xbb0(0x20)
	struct FGameplayTag T_Quest; // 0xbd0(0x08)
	struct AB_UtilityItem_Generic_Athena_C* WeaponUtilityItemGeneric; // 0xbd8(0x08)
	int32_t DummyMaxSteps; // 0xbe0(0x04)
	struct FVector Projectile Trajectory Final Location; // 0xbe4(0x0c)
	struct FGameplayTag T_Quest_NearOtherPlayer; // 0xbf0(0x08)
	float DistanceCheckToNearbyPlayers; // 0xbf8(0x04)
	struct FGameplayTag GC_OnPass; // 0xbfc(0x08)
	struct FGameplayTag GC_CookLoop; // 0xc04(0x08)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector> OutSplinePoints, struct TArray<struct FVector> OutSplineTangents, struct FHitResult OutHitResult); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void RemoveCookGC(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.RemoveCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddCookGC(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.AddCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayThrowGC(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.PlayThrowGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CanBeDropped(bool Yes); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.CanBeDropped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetProjectileDataFromWeaponID(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.GetProjectileDataFromWeaponID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectorySpline(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetOwningPlayer(struct AFortPlayerPawn* Player Pawn); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void CalcProjectileSpeedFromPitch(float AimPitch, float GrenadeSpeed); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.CalcProjectileSpeedFromPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void SetupDummyProjectile(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnLocationAndRotation(struct FVector OutLoc, struct FRotator OutRot); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.SpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void Destroyed_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Destroyed_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Exploded_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Exploded_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Stopped_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Stopped_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bounced_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Bounced_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Touched_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Touched_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Created_810B87EA424E705019D253BCBCE0A171(struct FProjectileEventData ProjectileData); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Created_810B87EA424E705019D253BCBCE0A171 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_B7154AE349A61FA4A5545D97B125C031(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Completed_B7154AE349A61FA4A5545D97B125C031 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_B7154AE349A61FA4A5545D97B125C031(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Cancelled_B7154AE349A61FA4A5545D97B125C031 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_B7154AE349A61FA4A5545D97B125C031(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Triggered_B7154AE349A61FA4A5545D97B125C031 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_3698CE084DFBBB65C54A74B61C442258(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnFinish_3698CE084DFBBB65C54A74B61C442258 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_37708BDA4A053044298FDD8A986CE91D(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnFinish_37708BDA4A053044298FDD8A986CE91D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_CF0A57844174C8A87D0024B17D96B713(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnFinish_CF0A57844174C8A87D0024B17D96B713 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_13E531C84957E69360FC6EB6E9818D90(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.EventReceived_13E531C84957E69360FC6EB6E9818D90 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSync_F83BC34A45D86702B453A1BFE1D7F7E1(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnSync_F83BC34A45D86702B453A1BFE1D7F7E1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_D907E28A43BC498803B5B0AD054E5FC1(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.EventReceived_D907E28A43BC498803B5B0AD054E5FC1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Server_SpawnProjectile(struct FVector Location, struct FRotator Direction, struct FVector Projected Landing Location); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Server_SpawnProjectile // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnAbilityInputReleased(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryDisplay(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.CleanupTrajectoryDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ThrowConsumable(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.ThrowConsumable // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitTrajectoryVariables(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cleanup Trajectory Display On End(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.Cleanup Trajectory Display On End // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectory(); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Consumable_Pass_Parent(int32_t EntryPoint); // Function GA_Athena_Consumable_Pass_Parent.GA_Athena_Consumable_Pass_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_Pass_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

