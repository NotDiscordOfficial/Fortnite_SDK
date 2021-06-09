// BlueprintGeneratedClass BP_DeimosRift.BP_DeimosRift_C
// Size: 0xb64 (Inherited: 0x9b0)
struct ABP_DeimosRift_C : ABuildingRift {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9b0(0x08)
	struct UParticleSystemComponent* P_Rift_IdleFog; // 0x9b8(0x08)
	struct UStaticMeshComponent* SM_CubeRunes; // 0x9c0(0x08)
	struct UAudioComponent* Deimos_Spawner_Loop_Sound; // 0x9c8(0x08)
	struct UStaticMeshComponent* FogMesh; // 0x9d0(0x08)
	struct UBoxComponent* NoBuildZone; // 0x9d8(0x08)
	struct UParticleSystemComponent* P_Deimos_Rift_Dying; // 0x9e0(0x08)
	struct UStaticMeshComponent* CosmeticBaseMesh; // 0x9e8(0x08)
	struct UParticleSystemComponent* P_Deimos_RiftSpawn_DamageState; // 0x9f0(0x08)
	struct UStaticMeshComponent* CubeMesh; // 0x9f8(0x08)
	struct UPointLightComponent* PointLight; // 0xa00(0x08)
	struct UMaterialInstanceDynamic* MaskedMID; // 0xa08(0x08)
	struct UMaterialInstanceDynamic* OpaqueMID; // 0xa10(0x08)
	struct UMaterialInstanceDynamic* CubeMat; // 0xa18(0x08)
	struct UMaterialInstanceDynamic* CubeMatLOD1; // 0xa20(0x08)
	struct UMaterialInterface* BaseMaterial; // 0xa28(0x08)
	struct UGameplayEffect* GE_Destroyed; // 0xa30(0x08)
	struct FGameplayCueParameters CueParamsChargeUp; // 0xa38(0xc0)
	int32_t DamageState; // 0xaf8(0x04)
	char pad_AFC[0x4]; // 0xafc(0x04)
	struct UMaterialInterface* BaseLODMaterial; // 0xb00(0x08)
	struct UMaterialInterface* BaseMeshMat; // 0xb08(0x08)
	struct USoundBase* Sound_StageOneExplode; // 0xb10(0x08)
	struct USoundBase* Sound_StageTwoExplode; // 0xb18(0x08)
	struct USoundBase* Sound_DeimosSpawnerLoop; // 0xb20(0x08)
	struct USoundBase* Sound_StageThreeBuildup; // 0xb28(0x08)
	struct UGameplayEffect* GE_DamagePerSpawn; // 0xb30(0x08)
	struct UGameplayEffect* GE_DamageReduction; // 0xb38(0x08)
	bool DoSpawnEffects; // 0xb40(0x01)
	char pad_B41[0x3]; // 0xb41(0x03)
	float SpawnAnimDuration; // 0xb44(0x04)
	struct FGameplayTag FiendSpawnFXGC; // 0xb48(0x08)
	struct FGameplayTag ChargeUpFXGC; // 0xb50(0x08)
	struct FGameplayTag SpawnFXGC; // 0xb58(0x08)
	float HitAnimLength; // 0xb60(0x04)

	void FlashCubeMaterial(float Length); // Function BP_DeimosRift.BP_DeimosRift_C.FlashCubeMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_DamageState(); // Function BP_DeimosRift.BP_DeimosRift_C.OnRep_DamageState // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_DeimosRift.BP_DeimosRift_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_DeimosRift.BP_DeimosRift_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_DeimosRift.BP_DeimosRift_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BP_Cosmetic_Intro(); // Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Intro // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_Cosmetic_Idle(); // Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_Idle // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartedEncounterSpawn(struct AFortAIPawn* SpawnedAI); // Function BP_DeimosRift.BP_DeimosRift_C.OnStartedEncounterSpawn // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_DeimosRift.BP_DeimosRift_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDamaged_Bind(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_DeimosRift.BP_DeimosRift_C.OnDamaged_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_Cosmetic_ShouldDie(); // Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_ShouldDie // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBuildingRiftSpawnedAI_Bind(); // Function BP_DeimosRift.BP_DeimosRift_C.OnBuildingRiftSpawnedAI_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TestDynamicRiftSpawn(); // Function BP_DeimosRift.BP_DeimosRift_C.TestDynamicRiftSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnEffects(); // Function BP_DeimosRift.BP_DeimosRift_C.SpawnEffects // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_Cosmetic_RampUp(); // Function BP_DeimosRift.BP_DeimosRift_C.BP_Cosmetic_RampUp // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_DeimosRift(int32_t EntryPoint); // Function BP_DeimosRift.BP_DeimosRift_C.ExecuteUbergraph_BP_DeimosRift // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

