// BlueprintGeneratedClass GA_Athena_Tethered.GA_Athena_Tethered_C
// Size: 0xb00 (Inherited: 0xa70)
struct UGA_Athena_Tethered_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct FActiveGameplayEffectHandle GE_TetheredHandle; // 0xa78(0x08)
	struct AFortPlayerPawn* OwningFortPlayerPawn; // 0xa80(0x08)
	float maxSpeedToPlayGCN; // 0xa88(0x04)
	struct FGameplayTag GCTagPlayerLand; // 0xa8c(0x08)
	char pad_A94[0x4]; // 0xa94(0x04)
	struct UGameplayEffect* StructureDamageGE; // 0xa98(0x08)
	struct FGameplayTag SmashGC; // 0xaa0(0x08)
	struct FScalableFloat BreakStructuresOnTetherEnabled; // 0xaa8(0x28)
	struct FScalableFloat BreakStructuresOnTetherRange; // 0xad0(0x28)
	struct FGameplayTag Event_FishingForceEnd; // 0xaf8(0x08)

	void BreakNearbyStructures(struct FVector ForwardVector, float OffsetForward); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakNearbyStructures // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void MovementModeChangedDelegate_Event_1(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.MovementModeChangedDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BreakBuildingsAtPlayerInDirectionOfTether(); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakBuildingsAtPlayerInDirectionOfTether // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Tethered(int32_t EntryPoint); // Function GA_Athena_Tethered.GA_Athena_Tethered_C.ExecuteUbergraph_GA_Athena_Tethered // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

