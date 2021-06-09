// BlueprintGeneratedClass GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C
// Size: 0x7d8 (Inherited: 0x7d0)
struct AGCN_Loop_ShipCannon_PlayerLaunch_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)

	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Loop_ShipCannon_PlayerLaunch(int32_t EntryPoint); // Function GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C.ExecuteUbergraph_GCN_Loop_ShipCannon_PlayerLaunch // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

