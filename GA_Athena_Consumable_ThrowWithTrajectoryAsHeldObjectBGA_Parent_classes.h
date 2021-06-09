// BlueprintGeneratedClass GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C
// Size: 0xc04 (Inherited: 0xa70)
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct AFortProjectileBase* ProjectileReference; // 0xa80(0x08)
	float DistanceFromInstigatorCheck; // 0xa88(0x04)
	float ProjectileSpeedMin; // 0xa8c(0x04)
	float ProjectileSpeedMax; // 0xa90(0x04)
	float TrajectoryProjectileGravityScaleCorrection; // 0xa94(0x04)
	struct FVector ProjectileTargetingOriginOffset; // 0xa98(0x0c)
	bool DummyShouldBounce; // 0xaa4(0x01)
	char pad_AA5[0x3]; // 0xaa5(0x03)
	float DummyBounciness; // 0xaa8(0x04)
	float DummyFriction; // 0xaac(0x04)
	float DummyMaxSpeed; // 0xab0(0x04)
	float DummyGravity; // 0xab4(0x04)
	float DummyTimeStep; // 0xab8(0x04)
	float DummyExtent; // 0xabc(0x04)
	struct FVector ProjectileTargetingOriginOffset_Crouched; // 0xac0(0x0c)
	bool InThrowWindup; // 0xacc(0x01)
	char pad_ACD[0x3]; // 0xacd(0x03)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xad0(0x58)
	struct ABP_ProjectileTrajectory_Athena_C* TrajectoryIndicator; // 0xb28(0x08)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xb30(0x08)
	bool AbilityKeyPressed; // 0xb38(0x01)
	char pad_B39[0x3]; // 0xb39(0x03)
	float AdditionalThrowAngle; // 0xb3c(0x04)
	float MaxSpeedPitch; // 0xb40(0x04)
	float MinSpeedPitch; // 0xb44(0x04)
	float MaxThrowPitch; // 0xb48(0x04)
	int32_t MaxTrajectoryBounces; // 0xb4c(0x04)
	bool IsThrowing; // 0xb50(0x01)
	char pad_B51[0x3]; // 0xb51(0x03)
	float PostThrowDelay; // 0xb54(0x04)
	bool Spawned On Equip; // 0xb58(0x01)
	enum class ECollisionChannel DummyCollisionChannel; // 0xb59(0x01)
	char pad_B5A[0x6]; // 0xb5a(0x06)
	struct FScalableFloat ThrowConsumablesEnabled; // 0xb60(0x28)
	struct FGameplayTagContainer T_ItemThrown; // 0xb88(0x20)
	struct FGameplayTag T_Quest; // 0xba8(0x08)
	struct ABGA_HeldObject_Parent_C* BGA_ToSpawn; // 0xbb0(0x08)
	struct ABGA_HeldObject_Parent_C* DummyProjectile; // 0xbb8(0x08)
	struct ABGA_HeldObject_Parent_C* SpawnedBGAHeldObject; // 0xbc0(0x08)
	int32_t ItemCountToRemoveWhenThrown; // 0xbc8(0x04)
	char pad_BCC[0x4]; // 0xbcc(0x04)
	struct UGameplayEffect* GE_Windup; // 0xbd0(0x08)
	struct FGameplayTagContainer Tag_InWindup; // 0xbd8(0x20)
	struct AB_PetrolWeapon_C* PetrolWeapon; // 0xbf8(0x08)
	int32_t DummyMaxSteps; // 0xc00(0x04)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector> OutSplinePoints, struct TArray<struct FVector> OutSplineTangents, struct FHitResult OutHitResult); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void CanBeDropped(bool Yes); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CanBeDropped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UpdateTrajectorySpline(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetOwningPlayer(struct AFortPlayerPawn* Player Pawn); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void CalcProjectileSpeedFromPitch(float AimPitch, float GrenadeSpeed); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CalcProjectileSpeedFromPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void SetupDummyProjectile(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnLocationAndRotation(struct FVector OutLoc, struct FRotator OutRot); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Completed_11EB7D0B4C52CC25C785B3A1EA90B008(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Completed_11EB7D0B4C52CC25C785B3A1EA90B008 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_11EB7D0B4C52CC25C785B3A1EA90B008(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Triggered_11EB7D0B4C52CC25C785B3A1EA90B008 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_4303A6684F8456517B7D258D8BA1CE9B(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnFinish_4303A6684F8456517B7D258D8BA1CE9B // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_37ED270D4E5065DF6944ECB72BFD05A2(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_37ED270D4E5065DF6944ECB72BFD05A2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_526561A640EC49D3EEBA449BC71450EF(struct FGameplayEventData Payload); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_526561A640EC49D3EEBA449BC71450EF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAbilityInputReleased(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryDisplay(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ThrowConsumable(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ThrowConsumable // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitTrajectoryVariables(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cleanup Trajectory Display On End(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cleanup Trajectory Display On End // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectory(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSpawnedBGA(ServerOnly)(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateSpawnedBGA(ServerOnly) // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnBGA(ServerOnly)(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnBGA(ServerOnly) // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveItemFromQuickBar(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.RemoveItemFromQuickBar // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateDummyProjectileBGA(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateDummyProjectileBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SendGameplayEventsAndQuestUpdate(); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SendGameplayEventsAndQuestUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent(int32_t EntryPoint); // Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

