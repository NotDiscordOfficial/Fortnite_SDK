// BlueprintGeneratedClass GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C
// Size: 0xb04 (Inherited: 0xab0)
struct UGA_Creative_OnKillSiphon_C : UGAT_Creative_TriggeredAbility_Pawn_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xab0(0x08)
	struct AAthena_GameState_C* GameState; // 0xab8(0x08)
	bool IsCreativeOrPlayground; // 0xac0(0x01)
	char pad_AC1[0x7]; // 0xac1(0x07)
	struct UGameplayEffect* GE_HealPlayer; // 0xac8(0x08)
	bool bShouldConvertExcessHealthToShields; // 0xad0(0x01)
	char pad_AD1[0x7]; // 0xad1(0x07)
	struct UGameplayEffect* ShieldGE; // 0xad8(0x08)
	struct FGameplayTag ConsumedCue; // 0xae0(0x08)
	bool bDebugBypasLocalMapEnable; // 0xae8(0x01)
	bool bAttemptHealthRestore; // 0xae9(0x01)
	bool bAttemptMatsRestore; // 0xaea(0x01)
	char pad_AEB[0x1]; // 0xaeb(0x01)
	struct FName NameGrantWood; // 0xaec(0x08)
	struct FName NameGrantStone; // 0xaf4(0x08)
	struct FName NameGrantMetal; // 0xafc(0x08)

	void GiveResourcesToPlayer(bool bShouldGrant, int32_t GiveAmount, enum class EFortResourceType GiveType, bool Success); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.GiveResourcesToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalculateResources(enum class EFortResourceType ResourceGrantType, bool bSuccess, int32_t ResourceToGive, enum class EFortResourceType ResourceType); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.CalculateResources // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttemptMats(); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptMats // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttemptHeal(); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptHeal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupRestoreModes(bool ShouldContinue); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.SetupRestoreModes // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DetermineHealthDelta(float HealingAmount, float MaxHealth, float CurrentHealth, float HealthDelta, float ExcessHealh); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.DetermineHealthDelta // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddShields(bool bShouldConvertExcessHealthToShields, float ShieldToAdd, bool bAddedShields, float ShieldAdded); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AddShields // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RestoreHealth(bool Success, float InitialHealAmount, float ActualAppliedHeal, float ExcessHealing); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.RestoreHealth // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Creative_OnKillSiphon(int32_t EntryPoint); // Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.ExecuteUbergraph_GA_Creative_OnKillSiphon // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

