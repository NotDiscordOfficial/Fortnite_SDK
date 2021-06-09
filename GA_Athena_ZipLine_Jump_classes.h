// BlueprintGeneratedClass GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C
// Size: 0xb08 (Inherited: 0xa70)
struct UGA_Athena_ZipLine_Jump_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct FScalableFloat MaxLateralSpeed; // 0xa80(0x28)
	struct FVector ImpulseVec; // 0xaa8(0x0c)
	char pad_AB4[0x4]; // 0xab4(0x04)
	struct FScalableFloat JumpVertStrength; // 0xab8(0x28)
	struct FScalableFloat JumpLateralDamper; // 0xae0(0x28)

	void K2_ActivateAbility(); // Function GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_ZipLine_Jump(int32_t EntryPoint); // Function GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C.ExecuteUbergraph_GA_Athena_ZipLine_Jump // (Final|UbergraphFunction) // @ game+0xda7c34
};

