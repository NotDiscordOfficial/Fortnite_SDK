// BlueprintGeneratedClass GCN_Athena_LowGravity.GCN_Athena_LowGravity_C
// Size: 0x38c (Inherited: 0x358)
struct AGCN_Athena_LowGravity_C : AFortGameplayCueNotifyLoop_LowGravity {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct AActor* MyTargetCached; // 0x360(0x08)
	struct UParticleSystemComponent* LowGravityPSComponent; // 0x368(0x08)
	struct FTimerHandle ExpireTellDelayTimer; // 0x370(0x08)
	float ExpirationSoundPeriod; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FTimerHandle ExpirationSoundTimer; // 0x380(0x08)
	float MaxDrawDistance; // 0x388(0x04)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Activated(struct AActor* PlayerPawn); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExpireTell(); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayExpirationSound(); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.PlayExpirationSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ClearExpireTell(); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ClearExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Athena_LowGravity(int32_t EntryPoint); // Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

