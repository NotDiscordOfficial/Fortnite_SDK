// BlueprintGeneratedClass GCNL_Athena_LlamaRoaster_Beam_Fire.GCNL_Athena_LlamaRoaster_Beam_Fire_C
// Size: 0x82c (Inherited: 0x7d0)
struct AGCNL_Athena_LlamaRoaster_Beam_Fire_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UAudioComponent* Hightower_Tomato_Secondary_Charge_FlyBy; // 0x7d8(0x08)
	struct FScalableFloat MaxRange; // 0x7e0(0x28)
	struct FRotator SavedRotation; // 0x808(0x0c)
	char pad_814[0x4]; // 0x814(0x04)
	struct AActor* Pawn; // 0x818(0x08)
	struct FVector SavedPoint; // 0x820(0x0c)

	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCNL_Athena_LlamaRoaster_Beam_Fire.GCNL_Athena_LlamaRoaster_Beam_Fire_C.OnExecute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function GCNL_Athena_LlamaRoaster_Beam_Fire.GCNL_Athena_LlamaRoaster_Beam_Fire_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Athena_LlamaRoaster_Beam_Fire.GCNL_Athena_LlamaRoaster_Beam_Fire_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Update Audio Location(); // Function GCNL_Athena_LlamaRoaster_Beam_Fire.GCNL_Athena_LlamaRoaster_Beam_Fire_C.Update Audio Location // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Athena_LlamaRoaster_Beam_Fire(int32_t EntryPoint); // Function GCNL_Athena_LlamaRoaster_Beam_Fire.GCNL_Athena_LlamaRoaster_Beam_Fire_C.ExecuteUbergraph_GCNL_Athena_LlamaRoaster_Beam_Fire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

