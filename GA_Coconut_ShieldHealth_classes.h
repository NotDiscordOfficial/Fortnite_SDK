// BlueprintGeneratedClass GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C
// Size: 0xac8 (Inherited: 0xa70)
struct UGA_Coconut_ShieldHealth_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct FScalableFloat TimeInterval; // 0xa80(0x28)
	struct FTimerHandle Timer_Interval; // 0xaa8(0x08)
	struct UGameplayEffect* GE_Heals; // 0xab0(0x08)
	struct UGameplayEffect* GE_Shields; // 0xab8(0x08)
	struct FGameplayTag GC_Activate; // 0xac0(0x08)

	void K2_ActivateAbility(); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ApplyEffect(); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.ApplyEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Coconut_ShieldHealth(int32_t EntryPoint); // Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.ExecuteUbergraph_GA_Coconut_ShieldHealth // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

