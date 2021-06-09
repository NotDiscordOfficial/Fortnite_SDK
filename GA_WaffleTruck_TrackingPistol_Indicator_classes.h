// BlueprintGeneratedClass GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C
// Size: 0xad0 (Inherited: 0xa70)
struct UGA_WaffleTruck_TrackingPistol_Indicator_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct TArray<struct AActor*> HitActors; // 0xa78(0x10)
	struct UParticleSystem* IndicatorParticleSystem; // 0xa88(0x08)
	struct FName IndicatorActorParamName; // 0xa90(0x08)
	struct FName IndicatorVectorParamName; // 0xa98(0x08)
	struct FString IndicatorGroupID; // 0xaa0(0x10)
	float IndicatorDuration; // 0xab0(0x04)
	char pad_AB4[0x4]; // 0xab4(0x04)
	struct USoundBase* IndicatorSound; // 0xab8(0x08)
	struct TArray<struct UGameplayEffect*> EnemyMarkingGE; // 0xac0(0x10)

	bool IsDamgeFromSourceWeapon(struct FGameplayEventData GameplayEventData); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.IsDamgeFromSourceWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool IsPawnAndNotFriendly(struct AActor* OwningController, struct AActor* HitActor); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.IsPawnAndNotFriendly // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct TArray<struct AActor*> GetHitActorsFromEventData(struct FGameplayEventData GameplayEventData); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetHitActorsFromEventData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct AFortPlayerController* GetAvatarAsFortPlayerController(); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetAvatarAsFortPawn(struct AFortPawn* AsFort Pawn); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.GetAvatarAsFortPawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator(int32_t EntryPoint); // Function GA_WaffleTruck_TrackingPistol_Indicator.GA_WaffleTruck_TrackingPistol_Indicator_C.ExecuteUbergraph_GA_WaffleTruck_TrackingPistol_Indicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

