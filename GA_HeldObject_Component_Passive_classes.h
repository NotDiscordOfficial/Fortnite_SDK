// BlueprintGeneratedClass GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C
// Size: 0xab4 (Inherited: 0xa70)
struct UGA_HeldObject_Component_Passive_C : UFortGameplayAbilityAthena_HeldObjectComponentPassive {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct FGameplayTagContainer T_StatusHeldObject; // 0xa78(0x20)
	struct UGameplayEffect* GE_HeldObjectPassive; // 0xa98(0x08)
	struct FGameplayTag T_DanceStunned; // 0xaa0(0x08)
	float DanceDropDelay; // 0xaa8(0x04)
	struct FGameplayTag Event_ForceDrop; // 0xaac(0x08)

	void Added_EB79E5C3467383D5FAE134978A7BDE59(); // Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.Added_EB79E5C3467383D5FAE134978A7BDE59 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_DD24550D4856E973AC41D9BDAECD0498(struct FGameplayEventData Payload); // Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.EventReceived_DD24550D4856E973AC41D9BDAECD0498 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DropHeldObject(); // Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.DropHeldObject // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_HeldObject_Component_Passive(int32_t EntryPoint); // Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.ExecuteUbergraph_GA_HeldObject_Component_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

