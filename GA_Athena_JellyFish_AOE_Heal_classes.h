// BlueprintGeneratedClass GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C
// Size: 0xba0 (Inherited: 0xa70)
struct UGA_Athena_JellyFish_AOE_Heal_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	bool HealsHealth; // 0xa80(0x01)
	bool HasHealthCap; // 0xa81(0x01)
	char pad_A82[0x2]; // 0xa82(0x02)
	float HealthHealAmount; // 0xa84(0x04)
	float TriggerDuration; // 0xa88(0x04)
	bool ShouldHolster; // 0xa8c(0x01)
	char pad_A8D[0x3]; // 0xa8d(0x03)
	struct FName ItemIDToHolster; // 0xa90(0x08)
	struct FGameplayTag GC_PotionConsumed; // 0xa98(0x08)
	struct UGameplayEffect* GE_EffectToApply; // 0xaa0(0x08)
	bool HealsShields; // 0xaa8(0x01)
	bool HasShieldCap; // 0xaa9(0x01)
	char pad_AAA[0x2]; // 0xaaa(0x02)
	float ShieldHealAmount; // 0xaac(0x04)
	struct FScalableFloat Row_ShieldCap; // 0xab0(0x28)
	struct FScalableFloat Row_ShieldAmount; // 0xad8(0x28)
	struct FScalableFloat Row_HealthCap; // 0xb00(0x28)
	struct FScalableFloat Row_HealthAmount; // 0xb28(0x28)
	struct FGameplayTagContainer Tags_FailedResponse; // 0xb50(0x20)
	bool IgnoreCalcsForEffectApplication; // 0xb70(0x01)
	bool AlwaysActivate; // 0xb71(0x01)
	char pad_B72[0x2]; // 0xb72(0x02)
	struct FGameplayTag EquippingCue; // 0xb74(0x08)
	float OverHealing; // 0xb7c(0x04)
	bool HealthIsEffective; // 0xb80(0x01)
	char pad_B81[0x7]; // 0xb81(0x07)
	struct UForceFeedbackEffect* ForceFeedback; // 0xb88(0x08)
	struct FGameplayTag ExplodeCue; // 0xb90(0x08)
	struct AFortPlayerPawn* TargetPawn; // 0xb98(0x08)

	void OnMontageTriggered(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.OnMontageTriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MakeCustomMontageInfo(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.MakeCustomMontageInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupGE(struct FGameplayEffectSpecHandle Effect Out); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.SetupGE // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HealthCalc(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.HealthCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShieldCalc(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ShieldCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer RelevantTags); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void Completed_39BB44CE4B5ACBFAF09C9C960F1A3644(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Completed_39BB44CE4B5ACBFAF09C9C960F1A3644 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_CommitExecute(); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CommitExecute // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal(int32_t EntryPoint); // Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

