// BlueprintGeneratedClass GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C
// Size: 0xbc0 (Inherited: 0xaa0)
struct UGAB_InterrogatePlayer_Search_C : UFortGameplayAbility_CarryPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xaa8(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xab0(0x08)
	struct AFortPlayerPawn* InterrogatedPlayer; // 0xab8(0x08)
	struct UAnimMontage* Anim_Search; // 0xac0(0x08)
	struct FName InterrogateHolster; // 0xac8(0x08)
	struct FName LootTierGroupName; // 0xad0(0x08)
	struct UFortWorldItemDefinition* ItemDefinition; // 0xad8(0x08)
	int32_t NumberToSpawn; // 0xae0(0x04)
	struct FVector LootSpawnOffset; // 0xae4(0x0c)
	struct FScalableFloat MaxDropsInstance; // 0xaf0(0x28)
	int32_t NumDropsInstance; // 0xb18(0x04)
	char pad_B1C[0x4]; // 0xb1c(0x04)
	struct FScalableFloat KeycardDropBias; // 0xb20(0x28)
	struct TArray<struct UFortWorldItemDefinition*> KeycardItemDefinitions; // 0xb48(0x10)
	struct FGameplayTag T_Keycard_Yacht; // 0xb58(0x08)
	struct FGameplayTag T_Keycard_OilRig; // 0xb60(0x08)
	struct FGameplayTag T_Keycard_SharkIsland; // 0xb68(0x08)
	struct FGameplayTag T_Keycard_HQ; // 0xb70(0x08)
	struct FGameplayTag T_Keycard_MountainBase; // 0xb78(0x08)
	struct FTimerHandle Timer_Interrogation; // 0xb80(0x08)
	struct FGameplayTagContainer T_ReticleHUD; // 0xb88(0x20)
	struct FGameplayTag T_NPC; // 0xba8(0x08)
	struct UGameplayEffect* GE_Cooldown; // 0xbb0(0x08)
	struct UGameplayEffect* GE_PickedUp; // 0xbb8(0x08)

	void ApplyGameplayEffectToNPC(struct UGameplayEffect* GameplayEffect); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ApplyGameplayEffectToNPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DropKeycard(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropKeycard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetKeycardToDrop(bool HasKeycard, struct UFortWorldItemDefinition* Output); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.GetKeycardToDrop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void DropLoot(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropLoot // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleReticleVisibility(bool Hide); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ToggleReticleVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndAbilityCleanup(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.EndAbilityCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitAbility(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.InitAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Completed_6BBDC9B445D4280492A25E8E5EA7A53D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Triggered_6BBDC9B445D4280492A25E8E5EA7A53D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_9291D75D4A0949E1C5B7E49C1FD11F8B(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Added_9291D75D4A0949E1C5B7E49C1FD11F8B // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPress_2000C5AE43E9D757FF188B85CF911E39(float TimeWaited); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnPress_2000C5AE43E9D757FF188B85CF911E39 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDied_Event_1(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDied_Event_2(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_InterrogatePlayer_Search(int32_t EntryPoint); // Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ExecuteUbergraph_GAB_InterrogatePlayer_Search // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

