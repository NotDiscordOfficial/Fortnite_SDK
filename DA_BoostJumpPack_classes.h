// BlueprintGeneratedClass DA_BoostJumpPack.DA_BoostJumpPack_C
// Size: 0xed0 (Inherited: 0xe88)
struct ADA_BoostJumpPack_C : AFortCustomizableAbilityDecoTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe88(0x08)
	struct FGameplayTagContainer ErrorReason; // 0xe90(0x20)
	struct FGameplayTagContainer ErrorReasonGamepad; // 0xeb0(0x20)

	void IsOnGround(bool bOnGround); // Function DA_BoostJumpPack.DA_BoostJumpPack_C.IsOnGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RaiseUsageError(struct FGameplayTagContainer FailedReason); // Function DA_BoostJumpPack.DA_BoostJumpPack_C.RaiseUsageError // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BPPressTrigger(struct AFortDecoHelper* FortDecoHelper); // Function DA_BoostJumpPack.DA_BoostJumpPack_C.BPPressTrigger // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DA_BoostJumpPack(int32_t EntryPoint); // Function DA_BoostJumpPack.DA_BoostJumpPack_C.ExecuteUbergraph_DA_BoostJumpPack // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

