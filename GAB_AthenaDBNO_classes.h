// BlueprintGeneratedClass GAB_AthenaDBNO.GAB_AthenaDBNO_C
// Size: 0xb80 (Inherited: 0xa70)
struct UGAB_AthenaDBNO_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UAnimMontage* DeathMontage; // 0xa78(0x08)
	struct FVector DeathHitDirection; // 0xa80(0x0c)
	struct FHitResult DeathHitResult; // 0xa8c(0x88)
	char pad_B14[0x4]; // 0xb14(0x04)
	struct FGameplayTagContainer DamageTags; // 0xb18(0x20)
	struct FGameplayTagContainer GameplayStatusAfflicted; // 0xb38(0x20)
	struct UAnimMontage* DeathMontageSkydive; // 0xb58(0x08)
	struct FActiveGameplayEffectHandle DBNOBleedGEHandle; // 0xb60(0x08)
	struct FName HolsterId; // 0xb68(0x08)
	struct UAnimMontage* DeathMontageSwimming; // 0xb70(0x08)
	struct AFortPlayerPawnAthena* Pawn; // 0xb78(0x08)

	struct UAnimMontage* Get DBNO Montage(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get DBNO Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetInitialHealAmount(float Health); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeDeathHitDirection(struct FGameplayEventData EventHitData); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_F0F6785443BD2E74F5591884CB19F35F(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_F0F6785443BD2E74F5591884CB19F35F(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_4C169D40441E45B462D83CBBA67F6E45(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnFinish_4C169D40441E45B462D83CBBA67F6E45 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DropHeldObjects(); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.DropHeldObjects // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_AthenaDBNO(int32_t EntryPoint); // Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

