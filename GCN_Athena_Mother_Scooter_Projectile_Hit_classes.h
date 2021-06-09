// BlueprintGeneratedClass GCN_Athena_Mother_Scooter_Projectile_Hit.GCN_Athena_Mother_Scooter_Projectile_Hit_C
// Size: 0x1a8 (Inherited: 0x1a8)
struct UGCN_Athena_Mother_Scooter_Projectile_Hit_C : UFortGameplayCueNotify_Burst {

	void OnBurst(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_Mother_Scooter_Projectile_Hit.GCN_Athena_Mother_Scooter_Projectile_Hit_C.OnBurst // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCN_Athena_Mother_Scooter_Projectile_Hit.GCN_Athena_Mother_Scooter_Projectile_Hit_C.OnExecute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnBurstNiagara(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UNiagaraComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_Mother_Scooter_Projectile_Hit.GCN_Athena_Mother_Scooter_Projectile_Hit_C.OnBurstNiagara // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_Mother_Scooter_Projectile_Hit.GCN_Athena_Mother_Scooter_Projectile_Hit_C.OnBurstGeneric // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
};

