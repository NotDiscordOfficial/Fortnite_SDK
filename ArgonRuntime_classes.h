// Class ArgonRuntime.ArgonPlayerComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UArgonPlayerComponent : UFortControllerComponent {
	float EntireSquadDiedServerTimeForRespawn; // 0xb0(0x04)
	bool bRotatePawnToCamera; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct UFortMontageItemDefinitionBase* CachedFinishedRaceEmote; // 0xb8(0x08)
	struct AFortAthenaMutator_Argon* ArgonMutator; // 0xc0(0x08)

	void PlayFinishedRaceEmote(); // Function ArgonRuntime.ArgonPlayerComponent.PlayFinishedRaceEmote // (Final|Native|Public) // @ game+0x203d3e0
	void OnRep_RotatePawnToCamera(); // Function ArgonRuntime.ArgonPlayerComponent.OnRep_RotatePawnToCamera // (Final|Native|Protected) // @ game+0x3db1834
	void OnRep_EntireSquadDiedServerTimeForRespawn(); // Function ArgonRuntime.ArgonPlayerComponent.OnRep_EntireSquadDiedServerTimeForRespawn // (Final|Native|Public) // @ game+0x3db17b8
	void OnRep_ArgonMutator(); // Function ArgonRuntime.ArgonPlayerComponent.OnRep_ArgonMutator // (Final|Native|Private) // @ game+0x3db1710
	void OnRacePhaseChanged(enum class EArgonRacePhase NewRacePhase); // Function ArgonRuntime.ArgonPlayerComponent.OnRacePhaseChanged // (Final|Native|Private) // @ game+0x3db1678
};

// Class ArgonRuntime.ArgonStartingPlatform
// Size: 0x248 (Inherited: 0x220)
struct AArgonStartingPlatform : AActor {
	struct FGameplayTagContainer GameplayTags; // 0x220(0x20)
	bool bIsEnabled; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)

	void OnRep_IsEnabled(); // Function ArgonRuntime.ArgonStartingPlatform.OnRep_IsEnabled // (Final|Native|Protected) // @ game+0x3db17cc
};

// Class ArgonRuntime.ArgonTicketComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UArgonTicketComponent : UActorComponent {
	struct AFortAthenaMutator_Argon* ArgonMutator; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnIsNearToPlayerChanged; // 0xb8(0x10)
	char pad_C8[0x8]; // 0xc8(0x08)

	bool IsNearToPlayer(); // Function ArgonRuntime.ArgonTicketComponent.IsNearToPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db13dc
	struct AFortAthenaMutator_Argon* GetArgonMutator(); // Function ArgonRuntime.ArgonTicketComponent.GetArgonMutator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f15148
};

// Class ArgonRuntime.ArgonTraversePoint
// Size: 0xa08 (Inherited: 0x9f8)
struct AArgonTraversePoint : AAthenaLTMTraversePoint {
	struct AFortPlayerMarkerBase* MarkerActor; // 0x9f8(0x08)
	struct AFortPlayerMarkerBase* MarkerClass; // 0xa00(0x08)

	void OnNewState_Hidden_Server_BP(); // Function ArgonRuntime.ArgonTraversePoint.OnNewState_Hidden_Server_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnNewState_Active_Server_BP(); // Function ArgonRuntime.ArgonTraversePoint.OnNewState_Active_Server_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ClientSpawnMarkerActor(struct FTransform Transform); // Function ArgonRuntime.ArgonTraversePoint.ClientSpawnMarkerActor // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3db0b2c
};

// Class ArgonRuntime.ArgonVehicleSpawner
// Size: 0x238 (Inherited: 0x220)
struct AArgonVehicleSpawner : AActor {
	struct TArray<struct FPrimaryAssetId> OverrideVehicleAssetIds; // 0x220(0x10)
	enum class ESpawnActorCollisionHandlingMethod SpawnVehicleCollisionHandlingMethod; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
};

// Class ArgonRuntime.FortAthenaMutator_Argon
// Size: 0x1440 (Inherited: 0x3d0)
struct AFortAthenaMutator_Argon : AFortAthenaMutator_GameModeBase {
	char pad_3D0[0x8]; // 0x3d0(0x08)
	struct FScalableFloat MinInitialVehicleFuelPercent; // 0x3d8(0x28)
	struct FScalableFloat MaxInitialVehicleFuelPercent; // 0x400(0x28)
	struct FMulticastInlineDelegate OnArgonPlayerFinished; // 0x428(0x10)
	struct FMulticastInlineDelegate OnArgonPlayerReachedEndWithoutEnoughTickets; // 0x438(0x10)
	struct FMulticastInlineDelegate OnArgonRacePhaseChanged; // 0x448(0x10)
	struct FMulticastInlineDelegate OnArgonEndTraversePointSet; // 0x458(0x10)
	struct FMulticastInlineDelegate OnTeamTicketCountChanged; // 0x468(0x10)
	char pad_478[0x18]; // 0x478(0x18)
	struct FMulticastInlineDelegate OnSupplyDropClusterSpawned; // 0x490(0x10)
	char pad_4A0[0x20]; // 0x4a0(0x20)
	struct TArray<struct FArgonRoute> Routes; // 0x4c0(0x10)
	struct FFortSquadStartSearchParamData StartPOISquadStartSearchParam; // 0x4d0(0xc0)
	struct FScalableFloat bUseOverridingSpawnTransforms; // 0x590(0x28)
	struct TArray<struct FTransform> OverridingSpawnTransforms; // 0x5b8(0x10)
	struct FText TeleportingPlayersText; // 0x5c8(0x18)
	struct FScalableFloat PreCountdownTextDuration; // 0x5e0(0x28)
	struct TArray<struct FArgonVehicleOption> VehicleOptionsList; // 0x608(0x10)
	struct FScalableFloat EndRaceAfterNumFinishers; // 0x618(0x28)
	struct FSlateBrush EndLocationCompassBrush; // 0x640(0x88)
	struct FSlateBrush EndLocationLockedCompassBrush; // 0x6c8(0x88)
	float EndLocationCompassBrush_YOffset; // 0x750(0x04)
	float EndLocationCompassBrush_MinScale; // 0x754(0x04)
	float EndLocationCompassBrush_MaxScale; // 0x758(0x04)
	float EndLocationCompassBrush_DistanceForMinScale; // 0x75c(0x04)
	float EndLocationCompassBrush_DistanceForMaxScale; // 0x760(0x04)
	char pad_764[0x4]; // 0x764(0x04)
	struct FSlateBrush EndLocationMapBrush; // 0x768(0x88)
	struct FSlateBrush EndLocationLockedMapBrush; // 0x7f0(0x88)
	struct FVector2D EndLocationMapBrushScale; // 0x878(0x08)
	struct FGameplayTag RacePositionStatGameplayTag; // 0x880(0x08)
	struct UFortWorldItemDefinition* TicketItemDefinition; // 0x888(0x08)
	struct FScalableFloat NumTicketsNeededToCompleteRace; // 0x890(0x28)
	int32_t NumEnemiesTrackedOnProgressBarUI; // 0x8b8(0x04)
	int32_t NumSquadmatesTrackedOnProgressBarUI; // 0x8bc(0x04)
	struct FScalableFloat EntireSquadDeadRespawnViewPitch; // 0x8c0(0x28)
	struct FScalableFloat EntireSquadDeadRespawnTime; // 0x8e8(0x28)
	struct AActor* EntireSquadDeadRespawnActorClass; // 0x910(0x08)
	struct FScalableFloat RespawnOffsetDistance; // 0x918(0x28)
	struct FScalableFloat MinRespawnHeightAboveGround; // 0x940(0x28)
	struct FScalableFloat bShouldRespawnInSafeZone; // 0x968(0x28)
	struct FScalableFloat PercentDistanceInsideOfSafeZone; // 0x990(0x28)
	struct FArgonSupplyDropPointData SupplyDropPointData; // 0x9b8(0x298)
	struct FScalableFloat bAreDropsAlwaysTriggeredByFirstPlacePlayer; // 0xc50(0x28)
	struct UCurveFloat* SupplyDropPercentCurve; // 0xc78(0x08)
	struct FScalableFloat MaxConsecutiveDropsOnSameSideOfPath; // 0xc80(0x28)
	struct FScalableFloat MinPathDropOffset; // 0xca8(0x28)
	struct FScalableFloat MaxPathDropOffset; // 0xcd0(0x28)
	struct FScalableFloat MinDropTriggerSpacing; // 0xcf8(0x28)
	struct FScalableFloat MaxDropTriggerSpacing; // 0xd20(0x28)
	struct FScalableFloat MinDropDistFromRaceEnd; // 0xd48(0x28)
	struct FScalableFloat FirstDropTriggerDist; // 0xd70(0x28)
	struct FScalableFloat NumRepopulationsPerRacePathDrop; // 0xd98(0x28)
	struct FScalableFloat DelayBeforeRepopulatingRacePathDrops; // 0xdc0(0x28)
	struct FScalableFloat NumDropsAroundEnd; // 0xde8(0x28)
	struct FScalableFloat DelayBetweenEndPointDrops; // 0xe10(0x28)
	struct FScalableFloat MinEndDropRadius; // 0xe38(0x28)
	struct FScalableFloat MaxEndDropRadius; // 0xe60(0x28)
	struct FScalableFloat NumRepopulationsPerEndPointDrop; // 0xe88(0x28)
	struct FScalableFloat DelayBeforeRepopulatingEndPointDrops; // 0xeb0(0x28)
	struct FVector StartingPoint; // 0xed8(0x0c)
	char pad_EE4[0x2c]; // 0xee4(0x2c)
	struct UFortMontageItemDefinitionBase* StartingLineEmote; // 0xf10(0x08)
	struct FScalableFloat MaxStartingLineEmoteDelay; // 0xf18(0x28)
	struct FScalableFloat MinStartingLineEmotePlayRate; // 0xf40(0x28)
	struct FScalableFloat MaxStartingLineEmotePlayRate; // 0xf68(0x28)
	struct FScalableFloat bPlayStartingLineEmoteBeforeCountdown; // 0xf90(0x28)
	struct UFortMontageItemDefinitionBase* FinishedRaceEmote; // 0xfb8(0x08)
	struct FScalableFloat FinishedRaceEmoteTime; // 0xfc0(0x28)
	struct UNiagaraSystem* SquadmateVictoryVFXTemplate; // 0xfe8(0x08)
	struct UParticleSystem* FinishedPlayerDespawnVFXTemplate; // 0xff0(0x08)
	struct FScalableFloat MaxFloorCheckDist; // 0xff8(0x28)
	struct FScalableFloat NumNearbyTicketsToShowOnCompass; // 0x1020(0x28)
	struct FScalableFloat NumNearbyTicketsToShowInWorld; // 0x1048(0x28)
	struct FSlateBrush TicketCompassBrush; // 0x1070(0x88)
	float TicketCompassBrush_YOffset; // 0x10f8(0x04)
	float TicketCompassBrush_Scale; // 0x10fc(0x04)
	struct FScalableFloat SortClientTicketComponentsTime; // 0x1100(0x28)
	struct FSlateBrush AcquiredAllTicketsMapBrush; // 0x1128(0x88)
	struct FGameplayTagContainer TicketSpecialActorCategories; // 0x11b0(0x20)
	struct TMap<struct FName, struct FName> AnalyticsAttributeNameToStatNameMap; // 0x11d0(0x50)
	struct UFortGameplayAbility_JumpBoostPack* JumpBoostPackAbilityClass; // 0x1220(0x08)
	struct FArgonRaceStateInfo CurrentRaceState; // 0x1228(0x18)
	char pad_1240[0x28]; // 0x1240(0x28)
	struct TArray<struct AFortSquadStart*> SquadStarts; // 0x1268(0x10)
	struct TArray<struct FArgonPlayerInfo> RacingPlayersByPlace; // 0x1278(0x10)
	struct TArray<struct FArgonTeamProgressBarInfo> LeaderProgressInfos; // 0x1288(0x10)
	struct TArray<struct FArgonTeamTicketCount> TeamTicketCounts; // 0x1298(0x10)
	char pad_12A8[0x10]; // 0x12a8(0x10)
	struct AAthenaHoldingArea* SquadStartHoldingArea; // 0x12b8(0x08)
	struct AArgonTraversePoint* EndTraversePoint; // 0x12c0(0x08)
	struct AFortAthenaMutator_SynchronizedTeleport* TeleportMutator; // 0x12c8(0x08)
	struct AFortAthenaMutator_GameStartCountdown* GameStartCountdownMutator; // 0x12d0(0x08)
	struct AFortAthenaMutator_RespawnAndSpectateSelect* RespawnAndSpectateSelectMutator; // 0x12d8(0x08)
	struct TMap<char, struct AActor*> EntireSquadDeadRespawnActors; // 0x12e0(0x50)
	char pad_1330[0x11]; // 0x1330(0x11)
	char NumSupplyDropClustersSpawned; // 0x1341(0x01)
	char pad_1342[0x2]; // 0x1342(0x02)
	float RaceStartTime; // 0x1344(0x04)
	struct TArray<struct TWeakObjectPtr<struct AFortPlayerPawn>> FinishedPlayerPawns; // 0x1348(0x10)
	char pad_1358[0xe8]; // 0x1358(0xe8)

	void SortClientTicketComponents(); // Function ArgonRuntime.FortAthenaMutator_Argon.SortClientTicketComponents // (Final|Native|Private) // @ game+0x3db18cc
	bool ShouldShowNearbyTicketIndicators(); // Function ArgonRuntime.FortAthenaMutator_Argon.ShouldShowNearbyTicketIndicators // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db18a8
	void OnRep_TeamTicketCounts(); // Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_TeamTicketCounts // (Final|Native|Private) // @ game+0x3db1894
	void OnRep_RacingPlayersByPlace(); // Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_RacingPlayersByPlace // (Final|Native|Private) // @ game+0x3db1818
	void OnRep_NumSupplyDropClustersSpawned(); // Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_NumSupplyDropClustersSpawned // (Final|Native|Private) // @ game+0x3db17e4
	void OnRep_EndTraversePoint(); // Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_EndTraversePoint // (Final|Native|Private) // @ game+0x3db1740
	void OnRep_CurrentRaceState(); // Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_CurrentRaceState // (Final|Native|Private) // @ game+0x3db172c
	void OnEndTraversePointTouched(struct AAthenaTraversePoint* PointActor, struct AFortPlayerStateAthena* TouchingPlayer); // Function ArgonRuntime.FortAthenaMutator_Argon.OnEndTraversePointTouched // (Final|Native|Private) // @ game+0x3db1418
	bool IsUsingRespawnAndSpectateSelectMutator(); // Function ArgonRuntime.FortAthenaMutator_Argon.IsUsingRespawnAndSpectateSelectMutator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db13f4
	bool IsInSafeZone(struct FVector TestLocation); // Function ArgonRuntime.FortAthenaMutator_Argon.IsInSafeZone // (Final|Native|Private|HasDefaults|Const) // @ game+0x3db1310
	bool HasTeamFinishedRace(char Team); // Function ArgonRuntime.FortAthenaMutator_Argon.HasTeamFinishedRace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db1248
	bool HasPlayerFinishedRace(struct AFortPlayerStateAthena* PlayerState); // Function ArgonRuntime.FortAthenaMutator_Argon.HasPlayerFinishedRace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db1160
	void HandlePlayerTeleportComplete(struct AFortPlayerStateAthena* PlayerState); // Function ArgonRuntime.FortAthenaMutator_Argon.HandlePlayerTeleportComplete // (Final|Native|Private) // @ game+0x3ce1cd8
	void HandleGroupTeleportComplete(); // Function ArgonRuntime.FortAthenaMutator_Argon.HandleGroupTeleportComplete // (Final|Native|Private) // @ game+0x203d3e0
	void HandleGameStartCountdownEnd(); // Function ArgonRuntime.FortAthenaMutator_Argon.HandleGameStartCountdownEnd // (Final|Native|Private) // @ game+0x203d3e0
	struct UFortWorldItemDefinition* GetTicketItemDefinition(); // Function ArgonRuntime.FortAthenaMutator_Argon.GetTicketItemDefinition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db1148
	float GetRandomStartingLineEmotePlayRate(); // Function ArgonRuntime.FortAthenaMutator_Argon.GetRandomStartingLineEmotePlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db1120
	float GetRaceTimeElapsed(); // Function ArgonRuntime.FortAthenaMutator_Argon.GetRaceTimeElapsed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db10f8
	void GetProgressBarUIInfo(float OutMyPercent, struct TArray<float> OutSquadmatePcts, char OutNumSquadTickets, struct TArray<struct FArgonTeamProgressBarInfo> OutEnemyProgressInfos); // Function ArgonRuntime.FortAthenaMutator_Argon.GetProgressBarUIInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3db0f04
	int32_t GetPlayerTeamPlacement(struct AFortPlayerStateAthena* Player); // Function ArgonRuntime.FortAthenaMutator_Argon.GetPlayerTeamPlacement // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db0e5c
	int32_t GetNumberOfTicketsTeamHasAcquired(char Team); // Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsTeamHasAcquired // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db0dac
	int32_t GetNumberOfTicketsNeededToFinishRace(); // Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsNeededToFinishRace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db0d78
	struct AArgonTraversePoint* GetEndTraversePoint(); // Function ArgonRuntime.FortAthenaMutator_Argon.GetEndTraversePoint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db0d60
	void FindSpawnLocationInSafeZone(struct FVector InOutSpawnLocation); // Function ArgonRuntime.FortAthenaMutator_Argon.FindSpawnLocationInSafeZone // (Final|Native|Private|HasOutParms|HasDefaults|Const) // @ game+0x3db0cec
	bool DidPlayerCrossFinishLine(struct AFortPlayerStateAthena* PlayerState); // Function ArgonRuntime.FortAthenaMutator_Argon.DidPlayerCrossFinishLine // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db0c10
};

// Class ArgonRuntime.FortCheatManager_Argon
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_Argon : UFortCheatManager_Coupled {

	void ArgonTeleportToEndPoint(); // Function ArgonRuntime.FortCheatManager_Argon.ArgonTeleportToEndPoint // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x203d3e0
};

