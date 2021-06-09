// BlueprintGeneratedClass GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C
// Size: 0xb60 (Inherited: 0xa70)
struct UGA_Athena_ZipLine_ReachedEnd_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct FScalableFloat MaxLateralSpeed; // 0xa80(0x28)
	struct FVector ImpulseVec; // 0xaa8(0x0c)
	char pad_AB4[0x4]; // 0xab4(0x04)
	struct FScalableFloat JumpVertStrength; // 0xab8(0x28)
	struct FScalableFloat LateralDamping; // 0xae0(0x28)
	struct FScalableFloat MaxZiplineVel; // 0xb08(0x28)
	bool debug; // 0xb30(0x01)
	char pad_B31[0x7]; // 0xb31(0x07)
	struct FScalableFloat MinJumpVertStrength; // 0xb38(0x28)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_ZipLine_ReachedEnd(int32_t EntryPoint); // Function GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C.ExecuteUbergraph_GA_Athena_ZipLine_ReachedEnd // (Final|UbergraphFunction) // @ game+0xda7c34
};

