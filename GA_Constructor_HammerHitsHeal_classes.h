// BlueprintGeneratedClass GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C
// Size: 0xc40 (Inherited: 0xc18)
struct UGA_Constructor_HammerHitsHeal_C : UGA_Ninja_Tactical_MeleeHitsHeal_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc18(0x08)
	struct FGameplayTagContainer TC_RequiredTags; // 0xc20(0x20)

	void SetupAbility(struct UAbilitySystemComponent* AbilitySystem); // Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.SetupAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Constructor_HammerHitsHeal(int32_t EntryPoint); // Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.ExecuteUbergraph_GA_Constructor_HammerHitsHeal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

