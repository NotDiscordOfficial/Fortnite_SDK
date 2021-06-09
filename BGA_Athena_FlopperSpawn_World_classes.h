// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C
// Size: 0xe69 (Inherited: 0xd18)
struct ABGA_Athena_FlopperSpawn_World_C : ABGA_Athena_FlopperSpawn_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd18(0x08)
	struct UAudioComponent* Audio_FlopperLoop; // 0xd20(0x08)
	struct UNiagaraComponent* NS_Flopper_Spot; // 0xd28(0x08)
	float Time_Interval; // 0xd30(0x04)
	float OffsetDistance; // 0xd34(0x04)
	float TimeIntervalOffset; // 0xd38(0x04)
	char pad_D3C[0x4]; // 0xd3c(0x04)
	struct UNiagaraSystem* NS_FX_Jump; // 0xd40(0x08)
	struct UParticleSystem* FX_Jump; // 0xd48(0x08)
	struct FVector TraceOffsetAmount; // 0xd50(0x0c)
	char pad_D5C[0x4]; // 0xd5c(0x04)
	struct AFortWaterBodyActor* FortWaterBody; // 0xd60(0x08)
	struct FVector WaterPlaneOffset; // 0xd68(0x0c)
	char pad_D74[0x4]; // 0xd74(0x04)
	struct USoundBase* Sound_AmbientFishFlop; // 0xd78(0x08)
	struct FVector ExplosionItemSpawnOffset; // 0xd80(0x0c)
	char pad_D8C[0x4]; // 0xd8c(0x04)
	struct FGameplayTagContainer T_FlopperSpawn; // 0xd90(0x20)
	float MinDistanceToExplosion; // 0xdb0(0x04)
	char pad_DB4[0x4]; // 0xdb4(0x04)
	struct TMap<struct FGameplayTag, struct FName> MAP_TagToLootExplode; // 0xdb8(0x50)
	struct FName ExplodeItemsToDrop; // 0xe08(0x08)
	int32_t ExplodeRolls; // 0xe10(0x04)
	struct FVector WaterNormalHit; // 0xe14(0x0c)
	bool bHasWrittenAnalytic; // 0xe20(0x01)
	char pad_E21[0x7]; // 0xe21(0x07)
	struct FGameplayTagContainer BattleLabProjectileTag; // 0xe28(0x20)
	struct FGameplayTagContainer ExplosionSpawnTag; // 0xe48(0x20)
	bool TestForWaterOnStart; // 0xe68(0x01)

	void GetLootTier(bool IsExplosion, bool IsProFishingRod, struct FName Output_Get); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.GetLootTier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExplosionQuestProgress(struct AActor* Instigator, struct AActor* DamageCauser); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExplosionQuestProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_FortWaterBody(); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnRep_FortWaterBody // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	float RandomTimeInterval(); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.RandomTimeInterval // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SpawnJumpingFish(); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnJumpingFish // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SpawnFromExplosion(struct AActor* Instigator, struct AActor* DamageCauser); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnFromExplosion // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_FlopperSpawn_World(int32_t EntryPoint); // Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_World // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

