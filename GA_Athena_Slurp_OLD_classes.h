// BlueprintGeneratedClass GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C
// Size: 0xa94 (Inherited: 0xa70)
struct UGA_Athena_Slurp_OLD_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	int32_t IncreCheck; // 0xa80(0x04)
	float MaxTicks; // 0xa84(0x04)
	struct FTimerHandle TimerHandle; // 0xa88(0x08)
	float TickRate; // 0xa90(0x04)

	void K2_ActivateAbility(); // Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ApplyHealthOrShield(); // Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ApplyHealthOrShield // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Slurp_OLD(int32_t EntryPoint); // Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ExecuteUbergraph_GA_Athena_Slurp_OLD // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

