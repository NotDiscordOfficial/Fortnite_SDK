// BlueprintGeneratedClass GA_BoostJumpPack.GA_BoostJumpPack_C
// Size: 0xc38 (Inherited: 0xa90)
struct UGA_BoostJumpPack_C : UFortGameplayAbility_JumpBoostPack {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa90(0x08)
	float Jump Multiple; // 0xa98(0x04)
	struct FVector Basic Jump Z Adjust; // 0xa9c(0x0c)
	struct FVector FinalJumpHeight; // 0xaa8(0x0c)
	char pad_AB4[0x4]; // 0xab4(0x04)
	struct FGameplayEventData EventTriggerData; // 0xab8(0xb0)
	bool bJumpButtonHeld; // 0xb68(0x01)
	bool bAtApex; // 0xb69(0x01)
	char pad_B6A[0x2]; // 0xb6a(0x02)
	struct FActiveGameplayEffectHandle JetpackEffectHandle; // 0xb6c(0x08)
	char pad_B74[0x4]; // 0xb74(0x04)
	struct AFortPlayerPawn* FortPlayerPawn; // 0xb78(0x08)
	float FuelFudge; // 0xb80(0x04)
	struct FActiveGameplayEffectHandle RegenEffectHandle; // 0xb84(0x08)
	bool bRegenEffectActive; // 0xb8c(0x01)
	char pad_B8D[0x3]; // 0xb8d(0x03)
	struct FGameplayTagContainer ExecuteTags; // 0xb90(0x20)
	int32_t JumpButtonHeldCount; // 0xbb0(0x04)
	char pad_BB4[0x4]; // 0xbb4(0x04)
	struct FGameplayTagContainer ReleaseTags; // 0xbb8(0x20)
	float TimeStartedHovering; // 0xbd8(0x04)
	float TimeStartedFalling; // 0xbdc(0x04)
	float EndHoverDelay; // 0xbe0(0x04)
	float EndFallingDelay; // 0xbe4(0x04)
	bool bHasDied; // 0xbe8(0x01)
	char pad_BE9[0x3]; // 0xbe9(0x03)
	struct FGameplayTag BoostCue; // 0xbec(0x08)
	struct FGameplayTag BoostJumpPackCue; // 0xbf4(0x08)
	char pad_BFC[0x4]; // 0xbfc(0x04)
	struct UGameplayEffect* JetpackInUseEffect; // 0xc00(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* HidingInPropTagTask; // 0xc08(0x08)
	bool TriggeredByJump; // 0xc10(0x01)
	char pad_C11[0x7]; // 0xc11(0x07)
	struct FGameplayTagContainer BlockExecuteTags; // 0xc18(0x20)

	bool NotInHidingSpot(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.NotInHidingSpot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer RelevantTags); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void Handle Jetpack Equipped(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Handle Jetpack Equipped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool Reasons To Reset on Transition(struct FGameplayTag Tag); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reasons To Reset on Transition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct AFortPlayerPawn* Get Player Pawn(struct UObject* Object); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Get Player Pawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool IsCurrentlyDead(struct FGameplayTag TagOne); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsCurrentlyDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Reengage Falling Movement(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reengage Falling Movement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Reengage Hovering Movement(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reengage Hovering Movement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SavePlayerPawn(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.SavePlayerPawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnAbilityCanceled(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnAbilityCanceled // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFuelIsEmpty(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsEmpty // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFuelIsFull(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsFull // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Reset Toggle Input State(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Reset Toggle Input State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ProcessTriggerData(struct FGameplayTag TagOne); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessTriggerData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Stop Regen Effect(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Stop Regen Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Start Regen Effect(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Start Regen Effect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Consider Stopping Regen Effect(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Stopping Regen Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Consider Starting Regen Effect(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Starting Regen Effect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsBoostAllowed(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsBoostAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_OnEndAbility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayEventData Payload); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ShouldAbilityRespondToEvent // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void GetMaxFuel(float MaxFuel); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.GetMaxFuel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void GetFuel(float Fuel); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.GetFuel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Setup PlayerPawn(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Setup PlayerPawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsUsingJetpackEffectActive(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.IsUsingJetpackEffectActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleCurrentBoostStateChanged(enum class EJumpBoostPackState PreviousState, enum class EJumpBoostPackState CurrentState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleCurrentBoostStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetCurrentBoostState(enum class EJumpBoostPackState NewState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetCurrentBoostState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PotentiallyEndHovering(bool bForceEndHovering); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.PotentiallyEndHovering // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Setup Notify at Apex(bool bNotifyApex); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Setup Notify at Apex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleIdle(bool bForceEndHovering); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleIdle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleFalling(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleFalling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleHovering(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleHovering // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetTransitionVariables(bool bForceEndHovering); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.ResetTransitionVariables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TransitionFromFalling(enum class Enum_BoostJumpStates TargetBoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromFalling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TransitionFromHovering(enum class Enum_BoostJumpStates TargetBoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromHovering // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TransitionFromBoost(enum class Enum_BoostJumpStates TargetBoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromBoost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TransitionFromIdle(enum class Enum_BoostJumpStates TargetBoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromIdle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void ProcessAbilityStateMachine(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessAbilityStateMachine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DetermineStateToTransitionTo(enum class Enum_BoostJumpStates BoostState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.DetermineStateToTransitionTo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupTransitionVariables(struct FGameplayTag Tag); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetupTransitionVariables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBoostJump(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.HandleBoostJump // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetJumpHeight(struct AFortPlayerPawn* Pawn, struct AFortPlayerPawn* Pawn Out, struct FVector Jump Height); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.SetJumpHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPawnLanded(struct FHitResult Hit); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnPawnLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Reached Jump Apex(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.On Reached Jump Apex // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnCurrentStateChanged(enum class EJumpBoostPackState InPreviousState, enum class EJumpBoostPackState InCurrentState); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnCurrentStateChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Delay_ProcessAbilityStateMachine(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.Delay_ProcessAbilityStateMachine // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSavedPawnChanged (struct AFortPlayerPawn* PreviousPawn, struct AFortPlayerPawn* NewPawn); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnSavedPawnChanged  // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnterVehicle(); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.OnEnterVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_BoostJumpPack(int32_t EntryPoint); // Function GA_BoostJumpPack.GA_BoostJumpPack_C.ExecuteUbergraph_GA_BoostJumpPack // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

