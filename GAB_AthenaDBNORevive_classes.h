// BlueprintGeneratedClass GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
// Size: 0xaa8 (Inherited: 0xa70)
struct UGAB_AthenaDBNORevive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct FGameplayTag EC_AppliedEffect; // 0xa78(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa80(0x08)
	struct FGameplayTag ResurrectCue; // 0xa88(0x08)
	struct FGameplayTag ResurrectAthenaCue; // 0xa90(0x08)
	struct UAnimMontage* DBNOMontageOutro; // 0xa98(0x08)
	struct UAnimMontage* DBNOMontageOutroSwimming; // 0xaa0(0x08)

	void Get DBNO Outro Montage(struct UAnimMontage* DBNOMontageOutro); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Get DBNO Outro Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Completed_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed_23712DBC45E68EA0C91A4895CBD8B3A6 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered_23712DBC45E68EA0C91A4895CBD8B3A6 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_779E7BAA49FEAD286C5164B83CDFD609 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Targeted_779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted_779E7BAA49FEAD286C5164B83CDFD609 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_AthenaDBNORevive(int32_t EntryPoint); // Function GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

