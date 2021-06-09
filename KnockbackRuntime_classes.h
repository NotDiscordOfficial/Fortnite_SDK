// Class KnockbackRuntime.FortAthenaMutator_Knockback
// Size: 0x500 (Inherited: 0x2c0)
struct AFortAthenaMutator_Knockback : AFortAthenaMutator {
	bool bStorePlayerKnockbackData; // 0x2c0(0x01)
	bool bReplicatePlayerKnockbackData; // 0x2c1(0x01)
	char pad_2C2[0x6]; // 0x2c2(0x06)
	struct FMulticastInlineDelegate OnPlayerKnockbackDataChanged; // 0x2c8(0x10)
	struct FKnockbackMutatorDataArray AllPlayersKnockbackData; // 0x2d8(0x120)
	struct FScalableFloat bDisplayKnockbackDamageNumbersAsPercentage; // 0x3f8(0x28)
	struct FScalableFloat ConvertToKnockbackDamageMultiplier; // 0x420(0x28)
	struct FScalableFloat PercentDamageLowMaxThreshold; // 0x448(0x28)
	struct FScalableFloat PercentDamageMediumMaxThreshold; // 0x470(0x28)
	float KnockbackMultiplierInitialValue; // 0x498(0x04)
	char pad_49C[0x64]; // 0x49c(0x64)

	void SetPlayersShouldBreakThroughStructures(bool bActive, struct AFortPlayerPawn* PlayerPawn); // Function KnockbackRuntime.FortAthenaMutator_Knockback.SetPlayersShouldBreakThroughStructures // (Final|Native|Public|BlueprintCallable) // @ game+0x3da2f10
	void HandleBlockedCharacterMovement(struct FHitResult InOutImpact, struct AFortPawn* FortPawn); // Function KnockbackRuntime.FortAthenaMutator_Knockback.HandleBlockedCharacterMovement // (Final|Native|Private|HasOutParms) // @ game+0x3da2d54
	float GetPercentDamageMediumMaxThreshold(); // Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageMediumMaxThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3da2d20
	float GetPercentDamageLowMaxThreshold(); // Function KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageLowMaxThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3da2cec
	float GetKnockbackMultiplierInitialValue(); // Function KnockbackRuntime.FortAthenaMutator_Knockback.GetKnockbackMultiplierInitialValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3da2cd4
	struct TArray<struct FKnockbackMutatorData> GetAllPlayersKnockbackData(); // Function KnockbackRuntime.FortAthenaMutator_Knockback.GetAllPlayersKnockbackData // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3da2c30
};

// Class KnockbackRuntime.FortGameplayAbility_KnockbackMutator
// Size: 0xa80 (Inherited: 0xa70)
struct UFortGameplayAbility_KnockbackMutator : UFortGameplayAbility {
	struct AFortAthenaMutator_Knockback* CachedMutator; // 0xa70(0x08)
	struct AFortAthenaMutator_Knockback* MutatorClassToGet; // 0xa78(0x08)

	void SaveKnockbackData(struct FKnockbackMutatorData InKnockbackData); // Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.SaveKnockbackData // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3da2e80
	struct AFortAthenaMutator_Knockback* GetCachedMutator(); // Function KnockbackRuntime.FortGameplayAbility_KnockbackMutator.GetCachedMutator // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x3da2cb0
};

