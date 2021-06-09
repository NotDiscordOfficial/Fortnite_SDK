// BlueprintGeneratedClass GCNL_Athena_HidingProp_Collision.GCNL_Athena_HidingProp_Collision_C
// Size: 0x7d8 (Inherited: 0x7d0)
struct AGCNL_Athena_HidingProp_Collision_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)

	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Athena_HidingProp_Collision.GCNL_Athena_HidingProp_Collision_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_HidingProp_Collision.GCNL_Athena_HidingProp_Collision_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Athena_HidingProp_Collision(int32_t EntryPoint); // Function GCNL_Athena_HidingProp_Collision.GCNL_Athena_HidingProp_Collision_C.ExecuteUbergraph_GCNL_Athena_HidingProp_Collision // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

