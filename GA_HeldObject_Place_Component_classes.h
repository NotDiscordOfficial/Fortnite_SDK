// BlueprintGeneratedClass GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C
// Size: 0xa81 (Inherited: 0xa70)
struct UGA_HeldObject_Place_Component_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UAnimMontage* Montage; // 0xa78(0x08)
	bool bPlayMontage; // 0xa80(0x01)

	void Completed_FB73B2F540131A6D5CEF3FB7287803D4(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Completed_FB73B2F540131A6D5CEF3FB7287803D4 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_FB73B2F540131A6D5CEF3FB7287803D4(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Cancelled_FB73B2F540131A6D5CEF3FB7287803D4 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_FB73B2F540131A6D5CEF3FB7287803D4(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Triggered_FB73B2F540131A6D5CEF3FB7287803D4 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_HeldObject_Place_Component(int32_t EntryPoint); // Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.ExecuteUbergraph_GA_HeldObject_Place_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

