// BlueprintGeneratedClass GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C
// Size: 0x808 (Inherited: 0x7d0)
struct AGCN_Loop_Snow_Whiteout_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UPostProcessComponent* PostProcess; // 0x7d8(0x08)
	float FadeinOut_Post_BDCA5FC943E3CD00D42B59A9A0D1C530; // 0x7e0(0x04)
	float FadeinOut_Fade_BDCA5FC943E3CD00D42B59A9A0D1C530; // 0x7e4(0x04)
	enum class ETimelineDirection FadeinOut__Direction_BDCA5FC943E3CD00D42B59A9A0D1C530; // 0x7e8(0x01)
	char pad_7E9[0x7]; // 0x7e9(0x07)
	struct UTimelineComponent* FadeinOut; // 0x7f0(0x08)
	struct USoundBase* SoundOnFadeIn; // 0x7f8(0x08)
	struct USoundBase* SoundOnFadeOut; // 0x800(0x08)

	void FadeinOut__FinishedFunc(); // Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.FadeinOut__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void FadeinOut__UpdateFunc(); // Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.FadeinOut__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Loop_Snow_Whiteout(int32_t EntryPoint); // Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.ExecuteUbergraph_GCN_Loop_Snow_Whiteout // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

