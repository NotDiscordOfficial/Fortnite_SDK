// BlueprintGeneratedClass GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C
// Size: 0xad8 (Inherited: 0xa90)
struct UGA_Trap_FloorJumpPadDirectional_C : UGA_TrapGeneric_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa90(0x08)
	struct AFortPlayerPawn* LaunchedPlayer; // 0xa98(0x08)
	struct TArray<struct AActor*> OverlappingTargets; // 0xaa0(0x10)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0xab0(0x28)

	void Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Targeted_9399FB2A485BD9AC6632A4B347C4BBE0(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Targeted_9399FB2A485BD9AC6632A4B347C4BBE0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayPlayerFX(struct AFortPlayerPawn* Player, struct FTransform TrapTransform); // Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.PlayPlayerFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional(int32_t EntryPoint); // Function GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

