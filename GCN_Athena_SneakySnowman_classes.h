// BlueprintGeneratedClass GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C
// Size: 0x808 (Inherited: 0x7d0)
struct AGCN_Athena_SneakySnowman_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UArrowComponent* Arrow; // 0x7d8(0x08)
	struct UArrowComponent* Arrow2; // 0x7e0(0x08)
	struct UArrowComponent* Arrow1; // 0x7e8(0x08)
	struct UStaticMeshComponent* SnowmanMesh; // 0x7f0(0x08)
	struct AActor* PlayerPawn; // 0x7f8(0x08)
	struct USoundBase* FootstepSound; // 0x800(0x08)

	void On Player Step(); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.On Player Step // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BeginPlay_Multicast(); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.BeginPlay_Multicast // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Athena_SneakySnowman(int32_t EntryPoint); // Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.ExecuteUbergraph_GCN_Athena_SneakySnowman // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

