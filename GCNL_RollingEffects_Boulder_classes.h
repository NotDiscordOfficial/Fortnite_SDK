// BlueprintGeneratedClass GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C
// Size: 0x8a8 (Inherited: 0x898)
struct AGCNL_RollingEffects_Boulder_C : AGCNL_RollingEffects_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UNiagaraComponent* FX_Reference; // 0x8a0(0x08)

	void ReceiveTick(float DeltaSeconds); // Function GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStartNiagara(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UNiagaraComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C.OnLoopingStartNiagara // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_RollingEffects_Boulder(int32_t EntryPoint); // Function GCNL_RollingEffects_Boulder.GCNL_RollingEffects_Boulder_C.ExecuteUbergraph_GCNL_RollingEffects_Boulder // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

