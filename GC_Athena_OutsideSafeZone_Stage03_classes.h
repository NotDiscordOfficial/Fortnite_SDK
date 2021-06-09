// BlueprintGeneratedClass GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C
// Size: 0x860 (Inherited: 0x854)
struct AGC_Athena_OutsideSafeZone_Stage03_C : AGC_Athena_OutsideSafeZone_C {
	char pad_854[0x4]; // 0x854(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x858(0x08)

	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void On Distant Lightning Spawn(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity); // Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.On Distant Lightning Spawn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03(int32_t EntryPoint); // Function GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03 // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

