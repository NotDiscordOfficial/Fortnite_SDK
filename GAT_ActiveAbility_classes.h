// BlueprintGeneratedClass GAT_ActiveAbility.GAT_ActiveAbility_C
// Size: 0xa99 (Inherited: 0xa70)
struct UGAT_ActiveAbility_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct FGameplayTag TC_AbilitiesGenericActiveAbilityActivate; // 0xa78(0x08)
	struct FName N_SavedCollisionChannel; // 0xa80(0x08)
	struct UGameplayEffect* GE_KnockBackImmunity; // 0xa88(0x08)
	struct FActiveGameplayEffectHandle GEH_KnockBackImmunity; // 0xa90(0x08)
	bool bPlayerHolsterState; // 0xa98(0x01)

	void EndAbilityWithReason(struct FString Reason); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.EndAbilityWithReason // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SendHeroAbilityActivationEvent(); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.SendHeroAbilityActivationEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetHolsterWeaponWithName(struct AFortPawn* Target Fort Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool IsWeaponHolstered, bool OperationSuccessful); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetHolsterWeaponWithName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void ActiveAbilitySetup(struct UAbilitySystemComponent* AbilitySystemIn, struct UAbilitySystemComponent* AbilitySystemOut); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.ActiveAbilitySetup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetKnockbackImmunity(bool ImmunityOn); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPawnCollision(struct AFortPawn* FortPawn, bool CollisionOn); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAT_ActiveAbility(int32_t EntryPoint); // Function GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility // (Final|UbergraphFunction) // @ game+0xda7c34
};

