// BlueprintGeneratedClass BP_FluidSim_FN.BP_FluidSim_FN_C
// Size: 0x559 (Inherited: 0x459)
struct ABP_FluidSim_FN_C : ABP_FluidSim_01_C {
	char pad_459[0x7]; // 0x459(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct FFluidForceDynamic BoatForceSettings; // 0x468(0x70)
	struct FFluidForceDynamic PlayerForceSettings; // 0x4d8(0x70)
	struct TArray<struct AFortPawn*> RelevantFortPawns; // 0x548(0x10)
	bool Use FN Pawn Forces; // 0x558(0x01)

	void GetFortnitePawnForces(); // Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetFortnitePawnForces // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetLocalPawn(struct APawn* Pawn); // Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetLocalPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetPlayerPawnForces(); // Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetPlayerPawnForces // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_FluidSim_FN(int32_t EntryPoint); // Function BP_FluidSim_FN.BP_FluidSim_FN_C.ExecuteUbergraph_BP_FluidSim_FN // (Final|UbergraphFunction) // @ game+0xda7c34
};

