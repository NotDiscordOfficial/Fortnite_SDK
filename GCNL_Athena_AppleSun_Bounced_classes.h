// BlueprintGeneratedClass GCNL_Athena_AppleSun_Bounced.GCNL_Athena_AppleSun_Bounced_C
// Size: 0x7e8 (Inherited: 0x7d0)
struct AGCNL_Athena_AppleSun_Bounced_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UAudioComponent* InUseLoopAudio; // 0x7d8(0x08)
	struct AActor* Target; // 0x7e0(0x08)

	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_AppleSun_Bounced.GCNL_Athena_AppleSun_Bounced_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function GCNL_Athena_AppleSun_Bounced.GCNL_Athena_AppleSun_Bounced_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Athena_AppleSun_Bounced.GCNL_Athena_AppleSun_Bounced_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Athena_AppleSun_Bounced(int32_t EntryPoint); // Function GCNL_Athena_AppleSun_Bounced.GCNL_Athena_AppleSun_Bounced_C.ExecuteUbergraph_GCNL_Athena_AppleSun_Bounced // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

