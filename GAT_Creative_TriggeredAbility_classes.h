// BlueprintGeneratedClass GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C
// Size: 0xaa0 (Inherited: 0xa81)
struct UGAT_Creative_TriggeredAbility_C : UGAT_TriggeredAbility_C {
	char pad_A81[0x7]; // 0xa81(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa88(0x08)
	struct TArray<struct FName> OverriddenPropertyNames; // 0xa90(0x10)

	void IsPropertyOverridden(struct FName PropertyName, bool bResult); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.IsPropertyOverridden // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SetupAbilityFailsafeTimer(float Duration); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.SetupAbilityFailsafeTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AbilityTimeout(); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.AbilityTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility(int32_t EntryPoint); // Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

