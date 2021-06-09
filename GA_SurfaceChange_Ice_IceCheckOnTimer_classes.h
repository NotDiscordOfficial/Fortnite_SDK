// BlueprintGeneratedClass GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C
// Size: 0xa90 (Inherited: 0xa70)
struct UGA_SurfaceChange_Ice_IceCheckOnTimer_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* FortPlayerPawn; // 0xa78(0x08)
	struct FTimerHandle TraceTimer; // 0xa80(0x08)
	struct FTimerHandle OffIceTimer; // 0xa88(0x08)

	void K2_ActivateAbility(); // Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void TraceForTerrain(); // Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.TraceForTerrain // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveIceGE(); // Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.RemoveIceGE // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer(int32_t EntryPoint); // Function GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

