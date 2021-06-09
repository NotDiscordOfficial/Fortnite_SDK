// BlueprintGeneratedClass GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking.GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking_C
// Size: 0x7e8 (Inherited: 0x7d0)
struct AGCNL_Athena_ReactiveProp_FireExtinguisher_Smoking_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct FTimerHandle TimerHandle; // 0x7d8(0x08)
	struct UCurveFloat* SpawnRampCurve; // 0x7e0(0x08)

	void StartLoop(); // Function GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking.GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking_C.StartLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Loop(); // Function GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking.GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking_C.Loop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking.GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking(int32_t EntryPoint); // Function GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking.GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking_C.ExecuteUbergraph_GCNL_Athena_ReactiveProp_FireExtinguisher_Smoking // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

