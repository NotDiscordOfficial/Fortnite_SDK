// BlueprintGeneratedClass Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C
// Size: 0xd00 (Inherited: 0xc90)
struct AAthena_Enemy_Player_SneakySnowman_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct UStaticMeshComponent* SM_SneakySnowman; // 0xc98(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xca0(0x08)
	float TotalDamage; // 0xca8(0x04)
	char pad_CAC[0x4]; // 0xcac(0x04)
	struct FScalableFloat MaxHealth; // 0xcb0(0x28)
	struct FScalableFloat SnowmanDuration; // 0xcd8(0x28)

	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman(int32_t EntryPoint); // Function Athena_Enemy_Player_SneakySnowman.Athena_Enemy_Player_SneakySnowman_C.ExecuteUbergraph_Athena_Enemy_Player_SneakySnowman // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

