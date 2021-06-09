// BlueprintGeneratedClass GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C
// Size: 0x7f8 (Inherited: 0x7d0)
struct AGCNL_Zipline_Downhill_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x7d8(0x08)
	struct UMatineeCameraShake* matineeCamShake; // 0x7e0(0x08)
	float MinCamShakeAmp; // 0x7e8(0x04)
	float MaxCamShakeAmp; // 0x7ec(0x04)
	float MinCamShakeFreq; // 0x7f0(0x04)
	float MaxCamShakeFreq; // 0x7f4(0x04)

	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void cameraShakeTimer(); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.cameraShakeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Zipline_Downhill(int32_t EntryPoint); // Function GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.ExecuteUbergraph_GCNL_Zipline_Downhill // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

