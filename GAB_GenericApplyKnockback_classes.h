// BlueprintGeneratedClass GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
// Size: 0xb6c (Inherited: 0xa70)
struct UGAB_GenericApplyKnockback_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UGameplayEffect* GE_TransferKnockback; // 0xa78(0x08)
	struct UGameplayEffect* GE_KnockbackActive; // 0xa80(0x08)
	float KnockbackPropagationThreshold; // 0xa88(0x04)
	char pad_A8C[0x4]; // 0xa8c(0x04)
	struct UAnimMontage* KnockbackUpMontage; // 0xa90(0x08)
	struct FName KnockbackUpMontageSection; // 0xa98(0x08)
	struct UAnimMontage* KnockbackDownMontage; // 0xaa0(0x08)
	struct FName KnockbackDownMontageSection; // 0xaa8(0x08)
	struct UAnimMontage* KnockbackLandMontage; // 0xab0(0x08)
	struct FName KnockbackLandMontageSection; // 0xab8(0x08)
	struct UAnimMontage* KnockbackLandToIdleMontage; // 0xac0(0x08)
	struct FName KnockbackLandToIdleMontageSection; // 0xac8(0x08)
	struct UAnimMontage* KnockbackLandToStunMontage; // 0xad0(0x08)
	struct FName KnockbackLandToStunMontageSection; // 0xad8(0x08)
	bool DebugDraw; // 0xae0(0x01)
	bool DebugNumbers; // 0xae1(0x01)
	bool DebugForceKnockbackValues; // 0xae2(0x01)
	bool bOrientToImpulse; // 0xae3(0x01)
	struct FActiveGameplayEffectHandle ActiveKnockback; // 0xae4(0x08)
	struct FVector OrientDirection; // 0xaec(0x0c)
	struct FVector HitDirection; // 0xaf8(0x0c)
	struct FVector ImpulseDirectionVelocityOrRotation; // 0xb04(0x0c)
	struct FVector DebugLastLocation; // 0xb10(0x0c)
	struct FGameplayTag TC_NPCStatusLockedInPlace; // 0xb1c(0x08)
	float LockedInPlaceKnockbackAngle; // 0xb24(0x04)
	float LockedInPlaceKnockbackMagnitude; // 0xb28(0x04)
	char pad_B2C[0x4]; // 0xb2c(0x04)
	struct UGameplayEffect* GE_RestoreControlResistance; // 0xb30(0x08)
	struct UGameplayEffect* GE_ImpactImmunity; // 0xb38(0x08)
	struct FActiveGameplayEffectHandle ActiveImpactImmunity; // 0xb40(0x08)
	bool bHasImpactImmunity; // 0xb48(0x01)
	char pad_B49[0x3]; // 0xb49(0x03)
	float F_OneFrameDelay; // 0xb4c(0x04)
	struct FGameplayTag Event_Triggered_Knockback; // 0xb50(0x08)
	bool KnockbackFromFloorTrap; // 0xb58(0x01)
	bool KnockbackFromFloorTrap PlayUpMontage; // 0xb59(0x01)
	bool KnockbackFromFloorTrap PlayDownMontage; // 0xb5a(0x01)
	bool KnockbackFromFloorTrap PlayLandMontage; // 0xb5b(0x01)
	struct FGameplayTag Event Control Ended; // 0xb5c(0x08)
	struct FGameplayTag GC_TrapKnockback_Tag; // 0xb64(0x08)

	void CheckForPawnDeath(struct AFortPawn* Pawn, bool IsDead); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CheckForPawnDeath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DoesUseInstagorInsteadOfImpulseDirection(struct FGameplayEffectContextHandle EffectContext, struct UObject* OptionalObject, bool Value); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetPawnFromInstigator(struct AActor* InActor, struct AFortPlayerPawn* OutPawn); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FVector CalculateImpulseDirection(struct AFortPlayerPawn* InPawn); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_D744890E4C485F1C80B3E7864AE506FF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_D744890E4C485F1C80B3E7864AE506FF(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_1F181048470CEB2EB6CC648039C5913C(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_1F181048470CEB2EB6CC648039C5913C // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_1F181048470CEB2EB6CC648039C5913C(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_1F181048470CEB2EB6CC648039C5913C // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_1F181048470CEB2EB6CC648039C5913C(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_1F181048470CEB2EB6CC648039C5913C // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_1F181048470CEB2EB6CC648039C5913C(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_1F181048470CEB2EB6CC648039C5913C // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_BA9188C34C234A4C47306FA73AAF0583(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_BA9188C34C234A4C47306FA73AAF0583(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReachedJumpApex(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupMontageSectionsAndOrientDirection(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPawnLanded(struct FHitResult Hit); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHitPawn(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MovementModeChangedDelegate_Event(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.MovementModeChangedDelegate_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindMovementModeChange(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.BindMovementModeChange // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnbindMovementModeChange(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.UnbindMovementModeChange // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DebugLine(); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_GenericApplyKnockback(int32_t EntryPoint); // Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

