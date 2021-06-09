// BlueprintGeneratedClass B_HidingProp.B_HidingProp_C
// Size: 0xf88 (Inherited: 0xc90)
struct AB_HidingProp_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct USceneComponent* ProjectileLocation_ForwardVector; // 0xc98(0x08)
	struct UStaticMeshComponent* LandedOnCollisionMesh; // 0xca0(0x08)
	struct USphereComponent* Sphere; // 0xca8(0x08)
	struct USceneComponent* HideLocation_ForwardVector; // 0xcb0(0x08)
	struct FScalableFloat Enabled; // 0xcb8(0x28)
	struct FScalableFloat HidingEnabled; // 0xce0(0x28)
	struct FScalableFloat PlayerLimit; // 0xd08(0x28)
	struct FScalableFloat TeleportEnabled; // 0xd30(0x28)
	struct FScalableFloat CanTeleport; // 0xd58(0x28)
	struct TArray<struct AFortPawn*> HidingPlayers; // 0xd80(0x10)
	struct FGameplayTag EnterGameplayCue; // 0xd90(0x08)
	struct FGameplayTag ExitGameplayCue; // 0xd98(0x08)
	struct FGameplayTag LandedOnGameplayCue; // 0xda0(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0xda8(0x08)
	struct FGameplayTag RustleGameplayCue; // 0xdb0(0x08)
	struct FGameplayTag ExitGameplayCue_Player; // 0xdb8(0x08)
	struct FGameplayTag WhileEnteringGameplayCue; // 0xdc0(0x08)
	float ObstructionTraceLength; // 0xdc8(0x04)
	char pad_DCC[0x4]; // 0xdcc(0x04)
	struct TArray<enum class EObjectTypeQuery> DestroyObjectTypes; // 0xdd0(0x10)
	struct TArray<struct AFortPawn*> Array; // 0xde0(0x10)
	int32_t Int; // 0xdf0(0x04)
	struct FVector DeimosPropSpawnerOffset; // 0xdf4(0x0c)
	bool FixedEntranceDirection; // 0xe00(0x01)
	char pad_E01[0x3]; // 0xe01(0x03)
	float MaxInteractAngle; // 0xe04(0x04)
	struct FVector WobbleLocationOffset; // 0xe08(0x0c)
	float InteractBelowPropDistance; // 0xe14(0x04)
	struct TMap<struct AFortPawn*, float> HiddenPlayersAndEnterTimes; // 0xe18(0x50)
	struct AFortPawn* LastPawnToInteract; // 0xe68(0x08)
	struct AB_HidingProp_C* TargetTeleporter; // 0xe70(0x08)
	struct FGameplayTag TeleporterEnterGameplayCue; // 0xe78(0x08)
	struct FGameplayTag TeleporterExitGameplayCue; // 0xe80(0x08)
	struct FGameplayTag LoopingTeleportingCue; // 0xe88(0x08)
	struct FGameplayTag GC_Wobble; // 0xe90(0x08)
	struct FTimerHandle WobbleTimerHandle; // 0xe98(0x08)
	struct TArray<struct FGameplayTag> BlockEntranceTags; // 0xea0(0x10)
	struct TArray<struct FGameplayTag> BlockExitTags; // 0xeb0(0x10)
	struct UAnimMontage* EnterAnimMontage; // 0xec0(0x08)
	struct UAnimMontage* ExitAnimMontage; // 0xec8(0x08)
	struct AFortPawn* LastPawnToHide; // 0xed0(0x08)
	struct FGameplayTag TeleportingStateGC; // 0xed8(0x08)
	bool RandomWobbleNormal; // 0xee0(0x01)
	bool SingleOccupant; // 0xee1(0x01)
	bool Teleporting; // 0xee2(0x01)
	bool JumpOut; // 0xee3(0x01)
	bool DestroyInNonSpyLTM; // 0xee4(0x01)
	bool ActiveInSpyLTM; // 0xee5(0x01)
	char pad_EE6[0x2]; // 0xee6(0x02)
	struct TArray<struct FGameplayTag> ForceAllowInteractTags; // 0xee8(0x10)
	struct FGameplayTag IsTeleporter; // 0xef8(0x08)
	struct FGameplayTag ContainsPlayerRepNof; // 0xf00(0x08)
	struct FVector ObstructionTraceExtents; // 0xf08(0x0c)
	struct FVector ObstructionTraceStartOffSet; // 0xf14(0x0c)
	float ExitLaunchVelocity; // 0xf20(0x04)
	struct FVector AdditionalLaunchVelocity; // 0xf24(0x0c)
	struct FVector FixedEntraceObstructionTraceEndOffset; // 0xf30(0x0c)
	bool isActiveTeleportExit; // 0xf3c(0x01)
	char pad_F3D[0x3]; // 0xf3d(0x03)
	struct UGameplayEffect* GE_TeleportAbilityGranted; // 0xf40(0x08)
	bool DisableWhenSubmergedInWater; // 0xf48(0x01)
	char pad_F49[0x7]; // 0xf49(0x07)
	struct FGameplayTagContainer DisableWhenSubmergedExceptionTags; // 0xf50(0x20)
	struct TArray<struct AFortPawn*> NonCosmeticPawns; // 0xf70(0x10)
	struct UCameraModifier* CameraModifier; // 0xf80(0x08)

	void Allow Cosmetics For Pawn(struct AFortPawn* Pawn, bool Allow); // Function B_HidingProp.B_HidingProp_C.Allow Cosmetics For Pawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_ContainsPlayer(); // Function B_HidingProp.B_HidingProp_C.OnRep_ContainsPlayer // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_IsTeleporter(); // Function B_HidingProp.B_HidingProp_C.OnRep_IsTeleporter // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool CheckCanUsePassage(struct UObject* Object); // Function B_HidingProp.B_HidingProp_C.CheckCanUsePassage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsInInfiltrationLTM(); // Function B_HidingProp.B_HidingProp_C.IsInInfiltrationLTM // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnRep_Teleporting(); // Function B_HidingProp.B_HidingProp_C.OnRep_Teleporting // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BlueprintGetFailedInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HidingProp.B_HidingProp_C.BlueprintGetFailedInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void RemoveHiddenPlayer(struct AFortPawn* FortPawn); // Function B_HidingProp.B_HidingProp_C.RemoveHiddenPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddHiddenPlayer(struct AFortPawn* FortPawn); // Function B_HidingProp.B_HidingProp_C.AddHiddenPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_HidingPlayers(); // Function B_HidingProp.B_HidingProp_C.OnRep_HidingPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function B_HidingProp.B_HidingProp_C.BlueprintCanInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnReady_64CBF02E419FF250B433D5B2A6E5D744(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function B_HidingProp.B_HidingProp_C.OnReady_64CBF02E419FF250B433D5B2A6E5D744 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141(); // Function B_HidingProp.B_HidingProp_C.OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HidingProp.B_HidingProp_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function B_HidingProp.B_HidingProp_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function B_HidingProp.B_HidingProp_C.BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void LandedOnHayStack(struct AFortPlayerPawn* PlayerPawn, float Z Velocity Mag); // Function B_HidingProp.B_HidingProp_C.LandedOnHayStack // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LaunchPlayersOffTop(struct AFortPlayerPawn* PlayerPawn); // Function B_HidingProp.B_HidingProp_C.LaunchPlayersOffTop // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function B_HidingProp.B_HidingProp_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void StopHidingLoop(); // Function B_HidingProp.B_HidingProp_C.StopHidingLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HidingPlayerCountChanged(); // Function B_HidingProp.B_HidingProp_C.HidingPlayerCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InteractEnter(); // Function B_HidingProp.B_HidingProp_C.InteractEnter // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndHidingAnalyticSession(struct AFortPawn* FortPawn, enum class EEnvironmentalItemEndReason EndReason); // Function B_HidingProp.B_HidingProp_C.EndHidingAnalyticSession // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WatchForPlayerDeath(struct AFortPawn* FortPawn); // Function B_HidingProp.B_HidingProp_C.WatchForPlayerDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Pawn Died(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_HidingProp.B_HidingProp_C.Pawn Died // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopHiding(struct AFortPawn* Pawn); // Function B_HidingProp.B_HidingProp_C.StopHiding // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_HidingProp.B_HidingProp_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Teleport(struct AActor* Pawn); // Function B_HidingProp.B_HidingProp_C.Teleport // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IgnorePawnCollision(struct AFortPawn* Target, float InIgnoreDuration); // Function B_HidingProp.B_HidingProp_C.IgnorePawnCollision // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleCameraCollisionForClients(); // Function B_HidingProp.B_HidingProp_C.ToggleCameraCollisionForClients // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartHiding(struct AFortPawn* InteractingPawn); // Function B_HidingProp.B_HidingProp_C.StartHiding // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TurnClientCameraCollisionOn(); // Function B_HidingProp.B_HidingProp_C.TurnClientCameraCollisionOn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters CueParameters); // Function B_HidingProp.B_HidingProp_C.AddGameplayCue // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters CueParameters); // Function B_HidingProp.B_HidingProp_C.RemoveGameplayCue // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteGameplayCue(struct FGameplayTag GameplayCueTag, struct FGameplayCueParameters CueParameters); // Function B_HidingProp.B_HidingProp_C.ExecuteGameplayCue // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMatchStarted(); // Function B_HidingProp.B_HidingProp_C.OnMatchStarted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_HidingProp(int32_t EntryPoint); // Function B_HidingProp.B_HidingProp_C.ExecuteUbergraph_B_HidingProp // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

