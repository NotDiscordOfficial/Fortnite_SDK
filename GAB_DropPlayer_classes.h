// BlueprintGeneratedClass GAB_DropPlayer.GAB_DropPlayer_C
// Size: 0xab0 (Inherited: 0xaa0)
struct UGAB_DropPlayer_C : UFortGameplayAbility_CarryPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xaa8(0x08)

	void Completed_89F288114D44792D5568298354B7216C(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_DropPlayer.GAB_DropPlayer_C.Completed_89F288114D44792D5568298354B7216C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_89F288114D44792D5568298354B7216C(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_DropPlayer.GAB_DropPlayer_C.Cancelled_89F288114D44792D5568298354B7216C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_89F288114D44792D5568298354B7216C(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_DropPlayer.GAB_DropPlayer_C.Triggered_89F288114D44792D5568298354B7216C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GAB_DropPlayer.GAB_DropPlayer_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_DropPlayer.GAB_DropPlayer_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_DropPlayer(int32_t EntryPoint); // Function GAB_DropPlayer.GAB_DropPlayer_C.ExecuteUbergraph_GAB_DropPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

