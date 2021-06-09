// BlueprintGeneratedClass BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C
// Size: 0xb90 (Inherited: 0xb64)
struct ABP_DeimosRift_Dynamic_C : ABP_DeimosRift_C {
	char pad_B64[0x4]; // 0xb64(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb68(0x08)
	float LifeTime; // 0xb70(0x04)
	char pad_B74[0x4]; // 0xb74(0x04)
	struct FTimerHandle LifeTimeTimerHandle; // 0xb78(0x08)
	float TimeLastSetLifeTimeTimer; // 0xb80(0x04)
	float ThrottleTime; // 0xb84(0x04)
	struct UGameplayEffect* GE_LifeTimeLapsed; // 0xb88(0x08)

	void OnRep_ServerSpawnTime(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnRep_ServerSpawnTime // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SetLifeTimeTimer(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.SetLifeTimeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LifetimeExpired(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.LifetimeExpired // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_Cosmetic_Intro(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Intro // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_Cosmetic_Idle(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_Idle // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_Cosmetic_RampUp(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_RampUp // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_Cosmetic_ShouldDie(); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.BP_Cosmetic_ShouldDie // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_DeimosRift_Dynamic(int32_t EntryPoint); // Function BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C.ExecuteUbergraph_BP_DeimosRift_Dynamic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

