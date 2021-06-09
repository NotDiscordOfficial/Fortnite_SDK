// BlueprintGeneratedClass GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C
// Size: 0xae0 (Inherited: 0xa90)
struct UGA_Trap_FloorJumpPad_C : UGA_TrapGeneric_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa90(0x08)
	struct AFortPlayerPawn* PlayerJumping; // 0xa98(0x08)
	struct FGameplayTag TC_LaunchTag; // 0xaa0(0x08)
	struct TArray<struct AActor*> OverlappingTargets; // 0xaa8(0x10)
	struct FGameplayAbilityTargetDataHandle TargetData; // 0xab8(0x28)

	void Cancelled_E91C59AB43D826926CE5CEAA22E84570(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.Cancelled_E91C59AB43D826926CE5CEAA22E84570 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Targeted_E91C59AB43D826926CE5CEAA22E84570(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.Targeted_E91C59AB43D826926CE5CEAA22E84570 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayPlayerFX(struct AFortPlayerPawn* Player); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.PlayPlayerFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Trap_FloorJumpPad(int32_t EntryPoint); // Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.ExecuteUbergraph_GA_Trap_FloorJumpPad // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

