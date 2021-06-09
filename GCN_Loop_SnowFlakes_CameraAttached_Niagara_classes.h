// BlueprintGeneratedClass GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C
// Size: 0x800 (Inherited: 0x7d0)
struct AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UNiagaraComponent* Snow_Niagara; // 0x7d8(0x08)
	float LoopingCheckTime; // 0x7e0(0x04)
	char pad_7E4[0x4]; // 0x7e4(0x04)
	struct AActor* My Target; // 0x7e8(0x08)
	struct UNiagaraComponent* ReturnValue; // 0x7f0(0x08)
	struct FTimerHandle Timer; // 0x7f8(0x08)

	void SpawnNiagara(); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.SpawnNiagara // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemovalNiagara(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UNiagaraComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnRemovalNiagara // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara(int32_t EntryPoint); // Function GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

