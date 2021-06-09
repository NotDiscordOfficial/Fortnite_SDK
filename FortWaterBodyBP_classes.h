// BlueprintGeneratedClass FortWaterBodyBP.FortWaterBodyBP_C
// Size: 0xf88 (Inherited: 0xf30)
struct AFortWaterBodyBP_C : AFortWaterBodyActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf30(0x08)
	struct FWaveSpectrumSettings Wave Spectrum Settings; // 0xf38(0x48)
	struct ABP_FluidSim_FN_C* FluidSimBP; // 0xf80(0x08)

	void ReceiveBeginPlay(); // Function FortWaterBodyBP.FortWaterBodyBP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnReceivedBulletImpact(struct FHitResult Hit); // Function FortWaterBodyBP.FortWaterBodyBP_C.OnReceivedBulletImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FortWaterBodyBP(int32_t EntryPoint); // Function FortWaterBodyBP.FortWaterBodyBP_C.ExecuteUbergraph_FortWaterBodyBP // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

