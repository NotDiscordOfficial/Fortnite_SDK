// BlueprintGeneratedClass GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C
// Size: 0xb88 (Inherited: 0xa70)
struct UGA_Athena_EnvCampFire_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	float TimeBetweenHeals; // 0xa78(0x04)
	char pad_A7C[0x4]; // 0xa7c(0x04)
	struct FTimerHandle Timer_ApplyHeal; // 0xa80(0x08)
	int32_t MaxHeals; // 0xa88(0x04)
	int32_t CurrentHeals; // 0xa8c(0x04)
	struct FTransform CustomTargeting; // 0xa90(0x30)
	float TargetingHeightOffset; // 0xac0(0x04)
	char pad_AC4[0x4]; // 0xac4(0x04)
	struct FScalableFloat Row_MaxHeals; // 0xac8(0x28)
	struct FScalableFloat Row_TimeBetweenHeals; // 0xaf0(0x28)
	struct FScalableFloat Row_StokeDuration; // 0xb18(0x28)
	struct FScalableFloat Row_Stoke_TimeBetweenHeals; // 0xb40(0x28)
	bool IsStoked; // 0xb68(0x01)
	char pad_B69[0x3]; // 0xb69(0x03)
	struct FGameplayTag GC_StokedLoop; // 0xb6c(0x08)
	struct FGameplayTag GC_StokeBurst; // 0xb74(0x08)
	char pad_B7C[0x4]; // 0xb7c(0x04)
	struct AB_BGA_Athena_EnvCampFire_C* Campfire; // 0xb80(0x08)

	void SetBalanceValues(bool Stoke); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetBalanceValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetCustomTargetingTrans(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetCustomTargetingTrans // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FTransform GetCustomAbilitySourceTransform(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.GetCustomAbilitySourceTransform // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void Cancelled_EDAB937443020D47385625B06E892DF0(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_EDAB937443020D47385625B06E892DF0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Targeted_EDAB937443020D47385625B06E892DF0(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_EDAB937443020D47385625B06E892DF0 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4(struct FGameplayEventData Payload); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_FA21AF3D4B3CDB44816F37A74E520B7C(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_FA21AF3D4B3CDB44816F37A74E520B7C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Targeted_FA21AF3D4B3CDB44816F37A74E520B7C(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_FA21AF3D4B3CDB44816F37A74E520B7C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ApplyHeal(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ApplyHeal // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void FinishStoke(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.FinishStoke // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetIsStoked(bool IsStoked); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetIsStoked // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndEvent(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EndEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceEndAbility(); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ForceEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_EnvCampFire(int32_t EntryPoint); // Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ExecuteUbergraph_GA_Athena_EnvCampFire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

