// BlueprintGeneratedClass GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C
// Size: 0x828 (Inherited: 0x7d0)
struct AGCNL_EnvCampFire_Stoke_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct FScalableFloat Row_TickInterval; // 0x7d8(0x28)
	struct FScalableFloat Row_MaxHeals; // 0x800(0x28)

	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_EnvCampFire_Stoke(int32_t EntryPoint); // Function GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C.ExecuteUbergraph_GCNL_EnvCampFire_Stoke // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

