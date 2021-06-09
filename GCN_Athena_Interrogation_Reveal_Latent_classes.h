// BlueprintGeneratedClass GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C
// Size: 0x4e1 (Inherited: 0x458)
struct AGCN_Athena_Interrogation_Reveal_Latent_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UPostProcessComponent* PostProcess; // 0x460(0x08)
	float SweepDuration; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FTimerHandle SweepDelayHandle; // 0x470(0x08)
	float SweepRadius; // 0x478(0x04)
	struct FVector LocalPlayerLocation; // 0x47c(0x0c)
	struct APlayerPawn_Athena_C* PlayerPawnAthena; // 0x488(0x08)
	float DelayBeforeSweep; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct FTimerHandle DelayBeforeSweepHandle; // 0x498(0x08)
	struct FVector ParticleRelativeLocation; // 0x4a0(0x0c)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct USoundMix* RevealSoundMix; // 0x4b0(0x08)
	struct FScalableFloat StencilDuration; // 0x4b8(0x28)
	bool bShouldPlayParticleEffectOnHand; // 0x4e0(0x01)

	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.OnExecute // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BeginSweepFX(); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.BeginSweepFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndSweepFX(); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.EndSweepFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayWorldSweep(); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.PlayWorldSweep // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent(int32_t EntryPoint); // Function GCN_Athena_Interrogation_Reveal_Latent.GCN_Athena_Interrogation_Reveal_Latent_C.ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

