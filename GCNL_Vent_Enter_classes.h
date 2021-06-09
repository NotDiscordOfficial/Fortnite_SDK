// BlueprintGeneratedClass GCNL_Vent_Enter.GCNL_Vent_Enter_C
// Size: 0x801 (Inherited: 0x7d0)
struct AGCNL_Vent_Enter_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UPostProcessComponent* PostProcess; // 0x7d8(0x08)
	float FadePPVol_LERP_6D28D8B64202D10F474B48B80194DA6D; // 0x7e0(0x04)
	enum class ETimelineDirection FadePPVol__Direction_6D28D8B64202D10F474B48B80194DA6D; // 0x7e4(0x01)
	char pad_7E5[0x3]; // 0x7e5(0x03)
	struct UTimelineComponent* FadePPVol; // 0x7e8(0x08)
	struct UMatineeCameraShake* CameraShakeClass; // 0x7f0(0x08)
	struct UMatineeCameraShake* CameraShake; // 0x7f8(0x08)
	bool UsePP; // 0x800(0x01)

	void FadePPVol__FinishedFunc(); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.FadePPVol__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void FadePPVol__UpdateFunc(); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.FadePPVol__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Vent_Enter(int32_t EntryPoint); // Function GCNL_Vent_Enter.GCNL_Vent_Enter_C.ExecuteUbergraph_GCNL_Vent_Enter // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

