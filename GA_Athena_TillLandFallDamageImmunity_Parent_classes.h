// BlueprintGeneratedClass GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C
// Size: 0xac5 (Inherited: 0xa70)
struct UGA_Athena_TillLandFallDamageImmunity_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UGameplayEffect* GE_FallDamageImmunity; // 0xa78(0x08)
	struct FActiveGameplayEffectHandle GEH_FallDamageImmunity; // 0xa80(0x08)
	float Delay_PostLand; // 0xa88(0x04)
	struct FGameplayTag Tag_SurfaceSwimming; // 0xa8c(0x08)
	char pad_A94[0x4]; // 0xa94(0x04)
	struct FGameplayTagContainer TC_IgnoreApplication; // 0xa98(0x20)
	struct FGameplayTag Tag_InVehicle; // 0xab8(0x08)
	float Delay_WaterSwimBind; // 0xac0(0x04)
	bool ApplyInAirOnly; // 0xac4(0x01)

	void Added_3DBE819D4ED6A0A0909A7690321F9B09(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.Added_3DBE819D4ED6A0A0909A7690321F9B09 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_15DBA1504E74C72F22BBCBAD8E3CD31E(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.Added_15DBA1504E74C72F22BBCBAD8E3CD31E // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void CallEnd(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.CallEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetUpWaits(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.SetUpWaits // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetUpBinds(); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.SetUpBinds // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PawnLanded(struct FHitResult Hit); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.PawnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent(int32_t EntryPoint); // Function GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

