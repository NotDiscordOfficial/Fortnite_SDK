// BlueprintGeneratedClass GCNL_Zipline_Travel.GCNL_Zipline_Travel_C
// Size: 0x8c0 (Inherited: 0x8a0)
struct AGCNL_Zipline_Travel_C : AFortGameplayCueNotifyLoop_ZiplineTravel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8a0(0x08)
	struct UAudioComponent* AttachSoundAudioComp; // 0x8a8(0x08)
	struct TArray<bool> NewVar_1; // 0x8b0(0x10)

	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Zipline_Travel.GCNL_Zipline_Travel_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Zipline_Travel.GCNL_Zipline_Travel_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Zipline_Travel(int32_t EntryPoint); // Function GCNL_Zipline_Travel.GCNL_Zipline_Travel_C.ExecuteUbergraph_GCNL_Zipline_Travel // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

