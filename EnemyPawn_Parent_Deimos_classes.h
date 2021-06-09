// BlueprintGeneratedClass EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C
// Size: 0x2904 (Inherited: 0x25f0)
struct AEnemyPawn_Parent_Deimos_C : AFortAIPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x25f0(0x08)
	struct UCapsuleComponent* WeaponCapsuleCollision; // 0x25f8(0x08)
	struct UAudioComponent* Elemental_Layer_Audio_Loop; // 0x2600(0x08)
	float Enemy_Spawn_Out_TL_ColorFadeOutTrack_37A083E44F5772C5FFF36680D2AD7D94; // 0x2608(0x04)
	float Enemy_Spawn_Out_TL_FadeInTrack_37A083E44F5772C5FFF36680D2AD7D94; // 0x260c(0x04)
	enum class ETimelineDirection Enemy_Spawn_Out_TL__Direction_37A083E44F5772C5FFF36680D2AD7D94; // 0x2610(0x01)
	char pad_2611[0x7]; // 0x2611(0x07)
	struct UTimelineComponent* Enemy Spawn Out TL; // 0x2618(0x08)
	float EnemySpawnInTL_ColorFadeOutTrack_515E6B424789F427A1B9ACAD857FFF5D; // 0x2620(0x04)
	float EnemySpawnInTL_FadeInTrack_515E6B424789F427A1B9ACAD857FFF5D; // 0x2624(0x04)
	enum class ETimelineDirection EnemySpawnInTL__Direction_515E6B424789F427A1B9ACAD857FFF5D; // 0x2628(0x01)
	char pad_2629[0x7]; // 0x2629(0x07)
	struct UTimelineComponent* EnemySpawnInTL; // 0x2630(0x08)
	char pad_2638[0x8]; // 0x2638(0x08)
	struct FTransform SpawnParticlesTransform; // 0x2640(0x30)
	struct UParticleSystem* SpawnParticles; // 0x2670(0x08)
	struct UParticleSystemComponent* CharacterElementalParticles; // 0x2678(0x08)
	bool AllowHeadshot; // 0x2680(0x01)
	char pad_2681[0x7]; // 0x2681(0x07)
	struct FGameplayTagContainer TC_RangedWeapon; // 0x2688(0x20)
	struct UParticleSystemComponent* HeadshotParticleSystemComp; // 0x26a8(0x08)
	struct UAnimMontage* Additive Hit React Montage; // 0x26b0(0x08)
	struct USoundBase* Death Normal Sound; // 0x26b8(0x08)
	struct USoundBase* Elemental_Audio_Layer_Sound; // 0x26c0(0x08)
	struct FName Headshot FX Socket; // 0x26c8(0x08)
	struct TMap<struct USkeletalMeshComponent*, struct UFXSkeletonMeshComponent_C*> AwakenFXSkeletalMeshes; // 0x26d0(0x50)
	struct TMap<struct UStaticMeshComponent*, struct UFXStaticMeshComponent_C*> AwakenFXStaticMeshes; // 0x2720(0x50)
	float AwokenMaxDistance; // 0x2770(0x04)
	float AwakenDuration; // 0x2774(0x04)
	struct FTimerHandle DestroyAwakenFXTimer; // 0x2778(0x08)
	struct TMap<struct USkeletalMeshComponent*, struct UFXSkeletonMeshComponent_C*> BuildingHitFXSkeletalMeshes; // 0x2780(0x50)
	struct TMap<struct UStaticMeshComponent*, struct UFXStaticMeshComponent_C*> BuildingHitFXStaticMeshes; // 0x27d0(0x50)
	float BuildingHitDuration; // 0x2820(0x04)
	char pad_2824[0x4]; // 0x2824(0x04)
	struct FTimerHandle DestroyBuildingHitFXTimer; // 0x2828(0x08)
	struct UFXSkeletonMeshComponent_C* TempFXSkeletalMesh; // 0x2830(0x08)
	struct TArray<struct USkeletalMeshComponent*> RegisteredSkeletalMeshesForEffects; // 0x2838(0x10)
	struct TArray<struct UStaticMeshComponent*> RegisteredStaticMeshesForEffects; // 0x2848(0x10)
	bool HasGlowColorsAssigned; // 0x2858(0x01)
	bool SpawnInTimelineCompletedSuccessfully; // 0x2859(0x01)
	char pad_285A[0x6]; // 0x285a(0x06)
	struct FTimerHandle CharacterSpawnInSafetyCheckHandle; // 0x2860(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Previous MID; // 0x2868(0x10)
	struct UParticleSystem* CharacterAmbientParticlesTemplate; // 0x2878(0x08)
	struct UParticleSystemComponent* CharacterAmbientParticles; // 0x2880(0x08)
	struct USkeletalMeshComponent* DuplicateCharacterMesh; // 0x2888(0x08)
	struct UMaterialInstanceDynamic* DuplicateCharacterMID; // 0x2890(0x08)
	struct TArray<struct UObject*> Auxillary Objects; // 0x2898(0x10)
	struct TArray<struct UObject*> Duplicate Auxillary Objects; // 0x28a8(0x10)
	struct UParticleSystemComponent* MinibossPSComponent; // 0x28b8(0x08)
	float CharacterParticlesMaxDrawDistance; // 0x28c0(0x04)
	char pad_28C4[0x4]; // 0x28c4(0x04)
	struct TArray<struct UPhysicalMaterial*> Original Phys Material; // 0x28c8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous MID_AuxObjs; // 0x28d8(0x10)
	int32_t Restoring Array Index; // 0x28e8(0x04)
	bool UseHeadShotFX; // 0x28ec(0x01)
	char pad_28ED[0x3]; // 0x28ed(0x03)
	struct USoundBase* Death_Dematerialize_Sound; // 0x28f0(0x08)
	struct USoundBase* HeadShot_Sound; // 0x28f8(0x08)
	float AdditiveHitReactRetriggerDelay; // 0x2900(0x04)

	void Orphaned(bool IsOrphaned, struct AFortPawn* AttachedPawn); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Orphaned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeregisterEffectSkeletalMesh(struct USkeletalMeshComponent* Mesh); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DeregisterEffectSkeletalMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeregisterEffectStaticMesh(struct UStaticMeshComponent* Mesh); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DeregisterEffectStaticMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyAwakenEffectToStaticMesh(struct UStaticMeshComponent* Mesh); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyAwakenEffectToStaticMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyAwakenEffectToSkeletalMesh(struct USkeletalMeshComponent* Mesh); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyAwakenEffectToSkeletalMesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RegisterEffectStaticMesh(struct UStaticMeshComponent* Mesh); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.RegisterEffectStaticMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RegisterEffectSkeletalMesh(struct USkeletalMeshComponent* Mesh); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.RegisterEffectSkeletalMesh // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyBuildingHitEffectToStaticMesh(struct UStaticMeshComponent* Mesh); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyBuildingHitEffectToStaticMesh // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyBuildingHitEffectToSkeletalMesh(struct USkeletalMeshComponent* Mesh); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ApplyBuildingHitEffectToSkeletalMesh // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CharacterSpawnInSafetyCheck(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.CharacterSpawnInSafetyCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnParticleSystemOnCharacterMesh(struct UParticleSystem* ParticleSystemTemplate, struct UParticleSystemComponent* ParticleSystemComponentReferenceVar, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, struct TArray<struct FParticleSysParam> InstanceParameters, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, struct UParticleSystemComponent* PSComponentReference); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SpawnParticleSystemOnCharacterMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayAdditiveHitReacts(struct FVector Hit Direction, struct UAnimMontage* Anim Montage); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.PlayAdditiveHitReacts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetScalarParameterOnAllCharacterMIDs(struct FName Parameter Name, float Scalar Value, bool AlsoModifyOriginalMIDs); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SetScalarParameterOnAllCharacterMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetVectorParameterOnAllCharacterMIDs(struct FName Parameter Name, struct FVector Vector Value, bool Propagate to Auxiliary Meshes); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SetVectorParameterOnAllCharacterMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Enemy Spawn Out TL__FinishedFunc(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Enemy Spawn Out TL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Enemy Spawn Out TL__UpdateFunc(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.Enemy Spawn Out TL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void EnemySpawnInTL__FinishedFunc(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void EnemySpawnInTL__UpdateFunc(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void EnemySpawnInTL__Spawn__EventFunc(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.EnemySpawnInTL__Spawn__EventFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnBeginDance(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnBeginDance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEndDance(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnEndDance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ManualDespawnEnemy(struct FVector RiftLocationWS); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ManualDespawnEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ManualEnemySpawnIn(struct FVector RiftLocationWS); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ManualEnemySpawnIn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnInSafetyCheck(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.SpawnInSafetyCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PostSpawnIn(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.PostSpawnIn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DespawnEnemy(struct FVector RiftLocationWS); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DespawnEnemy // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DebugEnemySpawnIn(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DebugEnemySpawnIn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinishedEncounterSpawn(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnFinishedEncounterSpawn // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnStartedEncounterSpawn(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnStartedEncounterSpawn // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void AdditiveHitReactDelay(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.AdditiveHitReactDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DestroyBuildingHitEffect(); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.DestroyBuildingHitEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBuildingHitPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct FGameplayEffectContextHandle EffectContext, bool bPlayerPlaced); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.OnBuildingHitPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EnemyPawn_Parent_Deimos(int32_t EntryPoint); // Function EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C.ExecuteUbergraph_EnemyPawn_Parent_Deimos // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

