// BlueprintGeneratedClass GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C
// Size: 0x1b0 (Inherited: 0x1a8)
struct UGCN_Athena_OutsideSafeZoneDamage_C : UFortGameplayCueNotify_Burst {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a8(0x08)

	void ZapFX(int32_t ZapCount, struct APlayerPawn_Athena_C* PlayerPawnAthena); // Function GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.ZapFX // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void OnBurst(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.OnBurst // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage(int32_t EntryPoint); // Function GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C.ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage // (Final|UbergraphFunction) // @ game+0xda7c34
};

