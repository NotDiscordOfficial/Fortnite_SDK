// BlueprintGeneratedClass GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C
// Size: 0x810 (Inherited: 0x7d0)
struct AGCNL_EnvCampFire_Doused_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	float Fade_Doused_Smoke_Fade_50A77D974140FDA04967E2BABB987458; // 0x7d8(0x04)
	enum class ETimelineDirection Fade_Doused_Smoke__Direction_50A77D974140FDA04967E2BABB987458; // 0x7dc(0x01)
	char pad_7DD[0x3]; // 0x7dd(0x03)
	struct UTimelineComponent* Fade Doused Smoke; // 0x7e0(0x08)
	struct FScalableFloat Row_Duration; // 0x7e8(0x28)

	void Fade Doused Smoke__FinishedFunc(); // Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.Fade Doused Smoke__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Fade Doused Smoke__UpdateFunc(); // Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.Fade Doused Smoke__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void DestroyOnDestroy(struct AActor* DestroyedActor); // Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.DestroyOnDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_EnvCampFire_Doused(int32_t EntryPoint); // Function GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.ExecuteUbergraph_GCNL_EnvCampFire_Doused // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

