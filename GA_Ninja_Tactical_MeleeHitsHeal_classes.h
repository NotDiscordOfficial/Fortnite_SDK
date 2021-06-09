// BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C
// Size: 0xc18 (Inherited: 0xb4a)
struct UGA_Ninja_Tactical_MeleeHitsHeal_C : UGAT_GenericTriggeredAbility_C {
	char pad_B4A[0x6]; // 0xb4a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb50(0x08)
	struct FGameplayTag EventActivation; // 0xb58(0x08)
	struct FGameplayTag EventComplete; // 0xb60(0x08)
	struct UGameplayEffect* GE_Ninja_Tactical_MeleeHitsHeal; // 0xb68(0x08)
	struct FGameplayTagContainer TC_Melee; // 0xb70(0x20)
	int32_t MeleeCount; // 0xb90(0x04)
	float LastHitSwingTime; // 0xb94(0x04)
	float BaseHealValue; // 0xb98(0x04)
	float FinalHealValue; // 0xb9c(0x04)
	struct FName DataRowName; // 0xba0(0x08)
	struct FGameplayAttribute Attribute_HealingSourceBaseMultiplier; // 0xba8(0x38)
	struct FGameplayAttribute Attribute_HealingSource; // 0xbe0(0x38)

	void SetupAbility(struct UAbilitySystemComponent* AbilitySystem); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.SetupAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int32_t EntryPoint); // Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

