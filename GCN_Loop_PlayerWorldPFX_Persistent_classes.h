// BlueprintGeneratedClass GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C
// Size: 0x7fc (Inherited: 0x7d0)
struct AGCN_Loop_PlayerWorldPFX_Persistent_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UNiagaraComponent* NS_Loop_WorldFX_Persistent_Motes01; // 0x7d8(0x08)
	struct UNiagaraComponent* NS_Loop_WorldFX_Persistent; // 0x7e0(0x08)
	struct AActor* My Target; // 0x7e8(0x08)
	struct FTimerHandle Timer; // 0x7f0(0x08)
	float LoopingCheckTime; // 0x7f8(0x04)

	void SpawnNiagara(); // Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.SpawnNiagara // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStartNiagara(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UNiagaraComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnLoopingStartNiagara // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent(int32_t EntryPoint); // Function GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

