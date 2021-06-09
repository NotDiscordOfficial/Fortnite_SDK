// BlueprintGeneratedClass GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C
// Size: 0xa90 (Inherited: 0xa70)
struct UGA_Athena_Tethered_PassiveTriggered_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct FGameplayTag GCN_BoostTag; // 0xa78(0x08)
	struct FGameplayTag GCN_JumpTag; // 0xa80(0x08)
	struct FGameplayTag ZiplineExit; // 0xa88(0x08)

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered(int32_t EntryPoint); // Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

