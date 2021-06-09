// BlueprintGeneratedClass GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C
// Size: 0x808 (Inherited: 0x7d0)
struct AGCNL_Athena_HidingProp_Teleporting_WilliePete_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	float Timeline_0_LerpWhiteWash_7F6EEB5A42EA09E354D8B4A32C35C459; // 0x7d8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_7F6EEB5A42EA09E354D8B4A32C35C459; // 0x7dc(0x01)
	char pad_7DD[0x3]; // 0x7dd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x7e0(0x08)
	struct UAudioComponent* 1PTravelAudio; // 0x7e8(0x08)
	struct TScriptInterface<None> LensEffectInterface; // 0x7f0(0x10)
	struct AActor* LensEffectActor; // 0x800(0x08)

	void Timeline_0__FinishedFunc(); // Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__DoFlash__EventFunc(); // Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.Timeline_0__DoFlash__EventFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting_WilliePete(int32_t EntryPoint); // Function GCNL_Athena_HidingProp_Teleporting_WilliePete.GCNL_Athena_HidingProp_Teleporting_WilliePete_C.ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting_WilliePete // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

