// Class PhosphorusRuntime.FortAthenaMutator_Phosphorus
// Size: 0x758 (Inherited: 0x3d0)
struct AFortAthenaMutator_Phosphorus : AFortAthenaMutator_GameModeBase {
	struct FMulticastInlineDelegate OnPhosphorusPhaseChanged; // 0x3d0(0x10)
	struct UFortAbilitySet* EjectAbilitySet; // 0x3e0(0x08)
	struct UFortAbilitySet* LeaderAbilitySet; // 0x3e8(0x08)
	struct FScalableFloat bKeepWarmupLoadoutsInFirstRound; // 0x3f0(0x28)
	struct FScalableFloat bPutInStasisAtRoundEnd; // 0x418(0x28)
	enum class EPhosphorusPhase PhosphorusPhase; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct USoundBase* PlayerEnteredStormSound; // 0x448(0x08)
	struct AFortAthenaMutator_CustomStormMovement* StormMutator; // 0x450(0x08)
	struct AFortAthenaMutator_SafeZoneOrderOptimize* SafeZoneOrderOptimizeMutator; // 0x458(0x08)
	char pad_460[0x8]; // 0x460(0x08)
	struct TArray<struct FPhosphorusTeamData> TeamDataArray; // 0x468(0x10)
	struct FScalableFloat InnerLandRadiusPercent; // 0x478(0x28)
	struct FScalableFloat OuterLandRadiusPercent; // 0x4a0(0x28)
	struct FScalableFloat TeamLandWedgeAngleRandPercent; // 0x4c8(0x28)
	struct AFortAthenaMutator_PlayerSpawnPod* PlayerSpawnPodMutator; // 0x4f0(0x08)
	struct FMulticastInlineDelegate OnRoundAdvanced; // 0x4f8(0x10)
	char pad_508[0x30]; // 0x508(0x30)
	struct FMulticastInlineDelegate OnPhosphorusNewSquadMVP; // 0x538(0x10)
	struct FScalableFloat MaxExpectedRoundsOverride; // 0x548(0x28)
	struct FScalableFloat AdvanceRoundDelay; // 0x570(0x28)
	struct FScalableFloat EndRoundUIDuration; // 0x598(0x28)
	struct FScalableFloat PreFirstRoundFadeOutDuration; // 0x5c0(0x28)
	int32_t CurrentRound; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct FScalableFloat EndRoundTimeDilationDuration; // 0x5f0(0x28)
	struct FScalableFloat EndRoundDuration; // 0x618(0x28)
	struct FScalableFloat EmoteAudioFadeOutDuration; // 0x640(0x28)
	struct FScalableFloat NumRoundsToWin; // 0x668(0x28)
	char RoundWinningTeamNum; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	struct FScalableFloat DesiredSupplyDrops; // 0x698(0x28)
	struct FScalableFloat SupplyDropPercentSafeZoneRadiusToUse; // 0x6c0(0x28)
	struct FScalableFloat SupplyDropMinTimeUntilSpawn; // 0x6e8(0x28)
	struct FScalableFloat SupplyDropMaxTimeUntilSpawn; // 0x710(0x28)
	char pad_738[0x8]; // 0x738(0x08)
	struct TArray<struct AFortAthenaSupplyDrop*> SupplyDrops; // 0x740(0x10)
	bool bCheatForcedStart; // 0x750(0x01)
	char pad_751[0x7]; // 0x751(0x07)

	void OnRep_PhosphorusPhase(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnRep_PhosphorusPhase // (RequiredAPI|Native|Protected) // @ game+0x3db77f8
	void OnRep_CurrentRound(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnRep_CurrentRound // (Final|Native|Private) // @ game+0x3dd0e3c
	void OnPrePodLaunch(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnPrePodLaunch // (Final|Native|Private) // @ game+0x203d3e0
	void OnPawnEjectedFromPod(struct AFortPlayerPawnAthena* Pawn); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnPawnEjectedFromPod // (Final|Native|Private) // @ game+0x3ce1cd8
	void OnAllPodsLaunched(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnAllPodsLaunched // (Final|Native|Private) // @ game+0x203d3e0
	void OnAllPodsLanded(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.OnAllPodsLanded // (Final|Native|Private) // @ game+0x203d3e0
	bool IsTeamValid(char TeamNum); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.IsTeamValid // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd0d80
	bool IsTeamAlive(char TeamNum); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.IsTeamAlive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd0cd8
	bool IsOnWinningTeam(struct AFortPlayerPawnAthena* Pawn); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.IsOnWinningTeam // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd0bc4
	void HandlePawnStormStatusChanged(struct AFortPlayerPawn* PlayerPawn, bool bIsInSafeZone); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.HandlePawnStormStatusChanged // (Final|Native|Private) // @ game+0x3dd099c
	int32_t GetTeamSize(char TeamNum); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamSize // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd08f4
	struct AFortPlayerStateAthena* GetTeamMVP(char TeamNum); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamMVP // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x3dd07d4
	struct FPhosphorusTeamData GetTeamDataCopy(char TeamNum); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamDataCopy // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd0720
	void GetTeamDataArray(struct TArray<struct FPhosphorusTeamData> OutTeamDataArray, bool bMustBeValid, bool bMustBeAlive, bool bSortByScore); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetTeamDataArray // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd0554
	char GetRoundWinningTeamNum(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetRoundWinningTeamNum // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd053c
	int32_t GetNumValidTeams(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetNumValidTeams // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd0194
	int32_t GetNumAliveTeams(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetNumAliveTeams // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd013c
	void GetLeadingTeamNums(struct TArray<char> LeadingTeamNums); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetLeadingTeamNums // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd008c
	struct AFortAthenaMutator_CustomStormMovement* GetCachedStormMutator(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.GetCachedStormMutator // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3dcffd0
	void FadeToFirstRound(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.FadeToFirstRound // (Final|Native|Private) // @ game+0x203d3e0
	void AudioFadeChangeEvent(bool bFadeOut, float FadeTime); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.AudioFadeChangeEvent // (Final|RequiredAPI|Native|Protected) // @ game+0x3c8e47c
	void AdvanceRound(); // Function PhosphorusRuntime.FortAthenaMutator_Phosphorus.AdvanceRound // (RequiredAPI|Native|Protected) // @ game+0x3dcffb8
};

// Class PhosphorusRuntime.FortAthenaMutator_InventoryOverride_Phosphorus
// Size: 0x578 (Inherited: 0x578)
struct AFortAthenaMutator_InventoryOverride_Phosphorus : AFortAthenaMutator_InventoryOverride {
};

// Class PhosphorusRuntime.FortCheatManager_Phosphorus
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_Phosphorus : UFortCheatManager_Coupled {

	void PhosphorusSetNumRoundsToWin(int32_t NumRounds); // Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusSetNumRoundsToWin // (Final|Exec|Native|Public) // @ game+0x3b54d20
	void PhosphorusForceStartMatch(); // Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusForceStartMatch // (Final|Exec|Native|Public) // @ game+0x203d3e0
	void PhosphorusEndRound(); // Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusEndRound // (Final|Exec|Native|Public) // @ game+0x203d3e0
	void PhosphorusEndMatch(); // Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusEndMatch // (Final|Exec|Native|Public) // @ game+0x203d3e0
	void PhosphorusDebug(float TextScale); // Function PhosphorusRuntime.FortCheatManager_Phosphorus.PhosphorusDebug // (Final|Exec|Native|Public) // @ game+0x3dc3d3c
};

// Class PhosphorusRuntime.FortCheatManager_PlayerSpawnPod
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_PlayerSpawnPod : UFortCheatManager_Coupled {

	void PlayerSpawnPodTest(); // Function PhosphorusRuntime.FortCheatManager_PlayerSpawnPod.PlayerSpawnPodTest // (Final|Exec|Native|Public) // @ game+0x203d3e0
	void PlayerSpawnPodDebug(float TextScale); // Function PhosphorusRuntime.FortCheatManager_PlayerSpawnPod.PlayerSpawnPodDebug // (Final|Exec|Native|Public) // @ game+0x3dc3d3c
};

// Class PhosphorusRuntime.PlayerSpawnPodCameraActor
// Size: 0x7a0 (Inherited: 0x7a0)
struct APlayerSpawnPodCameraActor : ACameraActor {
};

// Class PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod
// Size: 0x758 (Inherited: 0x2c0)
struct AFortAthenaMutator_PlayerSpawnPod : AFortAthenaMutator {
	struct FMulticastInlineDelegate OnPawnEjectedFromPod; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnPodLanded; // 0x2d0(0x10)
	char pad_2E0[0x30]; // 0x2e0(0x30)
	struct AActor* PodClass; // 0x310(0x08)
	struct FGameplayTagContainer AllowNativeActionsInPod; // 0x318(0x20)
	struct UGameplayEffect* DuringStasisEffectClass; // 0x338(0x08)
	struct FGameplayTagContainer BlockAbilityTagsInStasis; // 0x340(0x20)
	struct FScalableFloat PreLaunchDelay; // 0x360(0x28)
	struct FScalableFloat FallDuration; // 0x388(0x28)
	struct FScalableFloat RouteYawCenter; // 0x3b0(0x28)
	struct FScalableFloat RouteYawDeviation; // 0x3d8(0x28)
	struct FScalableFloat RouteMinXYDistancePercent; // 0x400(0x28)
	struct FScalableFloat RouteMaxXYDistancePercent; // 0x428(0x28)
	struct FScalableFloat StartAltitude; // 0x450(0x28)
	struct FScalableFloat StartAltitudeDeviation; // 0x478(0x28)
	struct FScalableFloat EndLocationUpperTraceOffset; // 0x4a0(0x28)
	struct FScalableFloat EndLocationLowerTraceOffset; // 0x4c8(0x28)
	struct FScalableFloat EjectPawnYawSpread; // 0x4f0(0x28)
	struct FScalableFloat EjectPawnPitch; // 0x518(0x28)
	struct FScalableFloat EjectPawnImpulseMagnitude; // 0x540(0x28)
	struct FScalableFloat CanToggleCursorModeInStasis; // 0x568(0x28)
	struct FScalableFloat UseDropPodsForRespawn; // 0x590(0x28)
	struct TArray<struct FName> ActionsToAllowToggleCursorModeInStasis; // 0x5b8(0x10)
	struct TArray<struct FPlayerSpawnPodData> PodDataArray; // 0x5c8(0x10)
	struct TArray<struct UFortAbilitySystemComponent*> BlockedAbilitySystemComponents; // 0x5d8(0x10)
	struct TArray<struct UFortAbilitySystemComponent*> PreviousBlockedAbilitySystemComponents; // 0x5e8(0x10)
	char pad_5F8[0x1]; // 0x5f8(0x01)
	bool bShouldLaunchIndividualPods; // 0x5f9(0x01)
	char pad_5FA[0x6]; // 0x5fa(0x06)
	struct FFortRespawnLogicData TeamTeleportLogicData; // 0x600(0x140)
	struct AFortAthenaMutator_SynchronizedTeleport* TeleportMutator; // 0x740(0x08)
	struct AActor* ViewTargetClass; // 0x748(0x08)
	struct UFortCameraMode* PawnFallingCameraMode; // 0x750(0x08)

	void SetViewTarget(struct AFortPlayerControllerAthena* Controller, struct AActor* ViewTarget, struct FViewTargetTransitionParams ViewTargetTransitionParams, bool bDestroyOldViewTarget); // Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.SetViewTarget // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3dd0e50
	void OnSingleTeleportComplete(struct AFortPlayerStateAthena* PlayerState); // Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnSingleTeleportComplete // (Final|Native|Private) // @ game+0x3ce1cd8
	void OnRep_BlockedAbilitySystemComponents(); // Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnRep_BlockedAbilitySystemComponents // (Final|Native|Private) // @ game+0x3dd0e28
	void OnPodDestroyed(struct AActor* DestroyedActor); // Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnPodDestroyed // (Final|Native|Private) // @ game+0x3ce1cd8
	void OnAllTeleportComplete(); // Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.OnAllTeleportComplete // (Final|Native|Private) // @ game+0x203d3e0
	void HandlePodLanded(struct UActorComponent* InComponent); // Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.HandlePodLanded // (Final|Native|Private) // @ game+0x3ce1cd8
	bool GetPodDataForID(int32_t ID, struct FPlayerSpawnPodData OutPodData, struct FString ContextString); // Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.GetPodDataForID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3dd0394
	bool GetPodDataForActor(struct AActor* Actor, struct FPlayerSpawnPodData OutPodData, struct FString ContextString); // Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.GetPodDataForActor // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3dd01ec
	float GetFallDuration(); // Function PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod.GetFallDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3dd0058
};

