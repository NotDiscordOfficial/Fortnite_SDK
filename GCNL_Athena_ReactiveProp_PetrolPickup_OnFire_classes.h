// BlueprintGeneratedClass GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C
// Size: 0x7e8 (Inherited: 0x7d0)
struct AGCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UCurveFloat* SpawnRampCurve; // 0x7d8(0x08)
	struct FTimerHandle Timer Handle; // 0x7e0(0x08)

	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Loop(); // Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.Loop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartLoop(); // Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.StartLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Athena_ReactiveProp_PetrolPickup_OnFire(int32_t EntryPoint); // Function GCNL_Athena_ReactiveProp_PetrolPickup_OnFire.GCNL_Athena_ReactiveProp_PetrolPickup_OnFire_C.ExecuteUbergraph_GCNL_Athena_ReactiveProp_PetrolPickup_OnFire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

