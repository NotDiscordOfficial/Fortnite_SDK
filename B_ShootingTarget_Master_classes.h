// BlueprintGeneratedClass B_ShootingTarget_Master.B_ShootingTarget_Master_C
// Size: 0xe4c (Inherited: 0xc90)
struct AB_ShootingTarget_Master_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct UChildActorComponent* AimAssistPawn; // 0xc98(0x08)
	struct UParticleSystemComponent* P_TargetImpact_Falldown; // 0xca0(0x08)
	struct USphereComponent* RoundShortWeakPoint; // 0xca8(0x08)
	struct USphereComponent* RoundWeakPoint; // 0xcb0(0x08)
	struct UCapsuleComponent* HuskyWeakPoint1; // 0xcb8(0x08)
	struct USphereComponent* PumpkinHeadTargetWeakPoint; // 0xcc0(0x08)
	struct USphereComponent* LlamaTargetWeakPoint; // 0xcc8(0x08)
	struct USphereComponent* TomatoHeadTargetWeakPoint; // 0xcd0(0x08)
	struct USphereComponent* HandsOnHipsWeakPoint; // 0xcd8(0x08)
	struct USphereComponent* PandaHeadWeakPoint; // 0xce0(0x08)
	struct USphereComponent* TeddyBearWeakPoint; // 0xce8(0x08)
	struct UCapsuleComponent* CrouchingTargetWeakPoint; // 0xcf0(0x08)
	struct USphereComponent* HuskTargetWeakPoint; // 0xcf8(0x08)
	struct USphereComponent* DancingTargetWeakPoint; // 0xd00(0x08)
	struct USphereComponent* LoserTargetWeakPoint; // 0xd08(0x08)
	struct UCapsuleComponent* StandingTargetWeakPoint; // 0xd10(0x08)
	struct UStaticMeshComponent* TargetMesh; // 0xd18(0x08)
	struct UStaticMeshComponent* HeightExtender; // 0xd20(0x08)
	struct UAbilitySystemComponent* AbilitySystem; // 0xd28(0x08)
	struct USphereComponent* ProximityTrigger; // 0xd30(0x08)
	struct UFortMinigameProgressComponent* FortMinigameProgress; // 0xd38(0x08)
	struct UToyOptionsComponent_C* ToyOptionsComponent; // 0xd40(0x08)
	struct UStaticMeshComponent* SM_Target_StandShort; // 0xd48(0x08)
	struct UStaticMeshComponent* SM_Target_Base; // 0xd50(0x08)
	float KnockDownTimeline_Rotation_8B965F244DB51315A670CE8BD54F045D; // 0xd58(0x04)
	enum class ETimelineDirection KnockDownTimeline__Direction_8B965F244DB51315A670CE8BD54F045D; // 0xd5c(0x01)
	char pad_D5D[0x3]; // 0xd5d(0x03)
	struct UTimelineComponent* KnockDownTimeline; // 0xd60(0x08)
	float Timeline_2_Height_50A7E1DD45D0851E9ECD309DBAE220D5; // 0xd68(0x04)
	enum class ETimelineDirection Timeline_2__Direction_50A7E1DD45D0851E9ECD309DBAE220D5; // 0xd6c(0x01)
	char pad_D6D[0x3]; // 0xd6d(0x03)
	struct UTimelineComponent* Timeline_3; // 0xd70(0x08)
	float PopUpTimeline_Rotation_EC7265FB4A8A31A05B401FB83B908B21; // 0xd78(0x04)
	enum class ETimelineDirection PopUpTimeline__Direction_EC7265FB4A8A31A05B401FB83B908B21; // 0xd7c(0x01)
	char pad_D7D[0x3]; // 0xd7d(0x03)
	struct UTimelineComponent* PopUpTimeline; // 0xd80(0x08)
	struct USceneComponent* Rotated_Piece; // 0xd88(0x08)
	float StartingHealthSetting; // 0xd90(0x04)
	float ResetDelaySetting; // 0xd94(0x04)
	float JumpTimeSetting; // 0xd98(0x04)
	float TimeBeforeHidingSetting; // 0xd9c(0x04)
	int32_t HingeLocationSetting; // 0xda0(0x04)
	int32_t StartingPositionSetting; // 0xda4(0x04)
	int32_t MaxPopUpsSetting; // 0xda8(0x04)
	int32_t ScoreValueSetting; // 0xdac(0x04)
	int32_t WeakPointMultiplierSetting; // 0xdb0(0x04)
	int32_t ProximityDistanceSetting; // 0xdb4(0x04)
	int32_t TeamAssignmentSetting; // 0xdb8(0x04)
	int32_t TargetMeshSetting; // 0xdbc(0x04)
	int32_t NumResets; // 0xdc0(0x04)
	bool WeakPointKnockdownSetting; // 0xdc4(0x01)
	bool TargetIsUp; // 0xdc5(0x01)
	char pad_DC6[0x2]; // 0xdc6(0x02)
	struct UStaticMeshComponent* CurrentlyDisplayedMesh; // 0xdc8(0x08)
	bool InJumpUpPosition; // 0xdd0(0x01)
	bool WeakPointHit; // 0xdd1(0x01)
	char pad_DD2[0x6]; // 0xdd2(0x06)
	struct UGameplayEffect* ModifyMaxHealth; // 0xdd8(0x08)
	struct FMulticastInlineDelegate TargetKnockedDownDispatcher; // 0xde0(0x10)
	struct FMulticastInlineDelegate TargetPopUpDispatcher; // 0xdf0(0x10)
	struct FTimerHandle PopUpDelayTimer; // 0xe00(0x08)
	struct FTimerHandle HideTargetTimer; // 0xe08(0x08)
	struct FTimerHandle HopTimer; // 0xe10(0x08)
	struct TArray<struct TSoftObjectPtr<struct UStaticMesh>> TargetMeshesArray; // 0xe18(0x10)
	struct TArray<struct UPrimitiveComponent*> WeakPointArray; // 0xe28(0x10)
	bool UserSuppressHealthBar; // 0xe38(0x01)
	char pad_E39[0x3]; // 0xe39(0x03)
	struct FGameplayTag SetMaxHealthDataTag; // 0xe3c(0x08)
	struct FActiveGameplayEffectHandle MaxHealthEffectHandler; // 0xe44(0x08)

	struct TArray<struct UMeshComponent*> GetMeshComponents(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetMeshComponents // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct UStaticMesh* GetCollisionStaticMesh(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetCollisionStaticMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void OnRep_TargetMeshSetting(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnRep_TargetMeshSetting // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RestoreToMaxHealth(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.RestoreToMaxHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WeakPointArrayContainsItems(bool ArrayContainsItems); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointArrayContainsItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetWeaponDataFromDamageCauser(struct UObject* DamageCauser, struct UFortWeaponItemDefinition* OutWeaponData); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetWeaponDataFromDamageCauser // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalculateDamageFromWeaponData(struct UFortWeaponItemDefinition* WeaponData, float InDamage, float OutDamage); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateDamageFromWeaponData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsWithinWeakpointBounds(struct FVector Impact location, struct USceneComponent* Component); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.IsWithinWeakpointBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateHealthBarVisibility(bool ShouldShowBar); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.UpdateHealthBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	float BlueprintModifyIncomingDamage(float Damage, struct FGameplayTagContainer InTags, struct FGameplayEffectContextHandle EffectContext, struct AController* EventInstigator, struct AActor* DamageCauser); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BlueprintModifyIncomingDamage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetAimAssistEnabled(bool NewType); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetAimAssistEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateWeakPointArray(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CreateWeakPointArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckIfShouldHop(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CheckIfShouldHop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBunnyHopTimer(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetBunnyHopTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearBunnyHopTimer(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ClearBunnyHopTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeHideTargetTimer(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeHideTargetTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideTarget(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMaxHealth(float NewMaxHealth); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetMaxHealth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool TargetShouldFall(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetShouldFall // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetStartingPosition(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetStartingPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MinigameIsRunning(bool MinigameIsRunning); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.MinigameIsRunning // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShouldTriggerTarget(struct UObject* Overlapping Actor, struct UPrimitiveComponent* Overlapping Component, bool Result); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ShouldTriggerTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AwardScore(struct AFortPlayerController* FortPlayerController, int32_t ScoreAwarded, int32_t TeamAwardedPoints); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.AwardScore // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalculateScore(int32_t ScoreToAward); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateScore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PrepareChosenTarget(struct UStaticMeshComponent* StaticMeshComponent, struct UPrimitiveComponent* WeakPointComponent 1, struct UPrimitiveComponent* WeakPointComponent2); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PrepareChosenTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool WeakPointWasHit(struct FHitResult Hit Result, struct UPrimitiveComponent* HitComponent); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointWasHit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetWeakPoints(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetWeakPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CanPopUp(bool MinigameJustStartedOrStopped, bool CanPopUp); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CanPopUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PopUpTimeline__FinishedFunc(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void PopUpTimeline__UpdateFunc(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void KnockDownTimeline__FinishedFunc(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void KnockDownTimeline__UpdateFunc(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_2__FinishedFunc(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_2__UpdateFunc(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnReady_A57ED5A14BEB6A98DB20D88D1582D58A(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnReady_A57ED5A14BEB6A98DB20D88D1582D58A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_068F5161459B8B1AEAD4A0B19781287D(struct UObject* Loaded); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnLoaded_068F5161459B8B1AEAD4A0B19781287D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void PopUpTarget(bool MinigameJustStartedOrStopped); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTarget // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void KnockdownTarget(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockdownTarget // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void PickMeshFromSettings(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PickMeshFromSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeSettings(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetFromSettings(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetFromSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideTargetTimerEvent(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTargetTimerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetHideTargetTimer(float TimerDuration); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHideTargetTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Hop(bool InJumpUpPosition); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Hop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HopTimerEvent(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HopTimerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetHopTimer(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHopTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Knock Down Audio(bool Knocked Down?); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Knock Down Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Impact Audio(int32_t Check for Positive Score, struct AController* Instigator); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Impact Audio // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnWeakpointFX(struct FTransform ImpactTransform); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SpawnWeakpointFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Target Movement Audio(bool Jump Up?); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Target Movement Audio // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PopUpTargetTimerEvent(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTargetTimerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PostFinishSpawning(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PostFinishSpawning // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_ShootingTarget_Master(int32_t EntryPoint); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ExecuteUbergraph_B_ShootingTarget_Master // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void TargetPopUpDispatcher__DelegateSignature(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetPopUpDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TargetKnockedDownDispatcher__DelegateSignature(); // Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetKnockedDownDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

