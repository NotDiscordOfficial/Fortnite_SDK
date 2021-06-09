// BlueprintGeneratedClass GA_Athena_Lockout.GA_Athena_Lockout_C
// Size: 0xa84 (Inherited: 0xa70)
struct UGA_Athena_Lockout_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct FTimerHandle Timer_LockoutFailsafe; // 0xa78(0x08)
	float LockoutFailsafeTime; // 0xa80(0x04)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Lockout.GA_Athena_Lockout_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Failsafe(); // Function GA_Athena_Lockout.GA_Athena_Lockout_C.Failsafe // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Lockout(int32_t EntryPoint); // Function GA_Athena_Lockout.GA_Athena_Lockout_C.ExecuteUbergraph_GA_Athena_Lockout // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

