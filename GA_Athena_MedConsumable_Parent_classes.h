// BlueprintGeneratedClass GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C
// Size: 0xc09 (Inherited: 0xa70)
struct UGA_Athena_MedConsumable_Parent_C : UFortGameplayAbility {
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
	struct UGameplayEffect* GE_EffectToApply; // 0xa98(0x08)
	bool HealsShields; // 0xaa0(0x01)
	bool HasShieldCap; // 0xaa1(0x01)
	char pad_AA2[0x2]; // 0xaa2(0x02)
	float ShieldHealAmount; // 0xaa4(0x04)
	struct FScalableFloat Row_ShieldCap; // 0xaa8(0x28)
	struct FScalableFloat Row_ShieldAmount; // 0xad0(0x28)
	struct FGameplayTag GC_PotionConsumed; // 0xaf8(0x08)
	struct FScalableFloat Row_HealthCap; // 0xb00(0x28)
	struct FScalableFloat Row_HealthAmount; // 0xb28(0x28)
	struct FGameplayTagContainer Tags_FailedResponse; // 0xb50(0x20)
	bool IgnoreCalcsForEffectApplication; // 0xb70(0x01)
	bool AlwaysActivate; // 0xb71(0x01)
	char pad_B72[0x2]; // 0xb72(0x02)
	struct FGameplayTag GC_EquippingCue; // 0xb74(0x08)
	float OverHealing; // 0xb7c(0x04)
	bool HealthIsEffective; // 0xb80(0x01)
	char pad_B81[0x7]; // 0xb81(0x07)
	struct UForceFeedbackEffect* ForceFeedback; // 0xb88(0x08)
	struct FGameplayTag GC_HealthHealUsed; // 0xb90(0x08)
	struct UGameplayEffect* GE_Channeling; // 0xb98(0x08)
	struct FActiveGameplayEffectHandle GEH_Channeling; // 0xba0(0x08)
	struct FGameplayTagContainer QuestTags; // 0xba8(0x20)
	struct FGameplayTagContainer QuestWeaponTags; // 0xbc8(0x20)
	struct FGameplayTagContainer QuestSourceTags; // 0xbe8(0x20)
	bool EndAbilityWhenTriggered; // 0xc08(0x01)

	void OnMontageTriggeredPostCommitSuccess(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.OnMontageTriggeredPostCommitSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMontageTriggeredPreCommit(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.OnMontageTriggeredPreCommit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MakeCustomMontageInfo(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.MakeCustomMontageInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupGE(struct FGameplayEffectSpecHandle Effect Out); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.SetupGE // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HealthCalc(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.HealthCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShieldCalc(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ShieldCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer RelevantTags); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void Completed_4C02BFB04B18D9E79F84848FFE6D2C32(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Completed_4C02BFB04B18D9E79F84848FFE6D2C32 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_4C02BFB04B18D9E79F84848FFE6D2C32(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Triggered_4C02BFB04B18D9E79F84848FFE6D2C32 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_MedConsumable_Parent(int32_t EntryPoint); // Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ExecuteUbergraph_GA_Athena_MedConsumable_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

