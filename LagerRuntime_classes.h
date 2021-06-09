// Class LagerRuntime.FortAthenaLivingWorldConfigData
// Size: 0x1a0 (Inherited: 0x30)
struct UFortAthenaLivingWorldConfigData : UDataAsset {
	struct TSoftObjectPtr<struct UDataTable> CategoryTable; // 0x30(0x28)
	struct FScalableFloat MaxActorCount; // 0x58(0x28)
	struct FScalableFloat MaxEventSpawnPerTick; // 0x80(0x28)
	struct FScalableFloat MinimumEventGenerationInterval; // 0xa8(0x28)
	struct FScalableFloat MaxActorDensity; // 0xd0(0x28)
	struct FScalableFloat DensityComputationDistance; // 0xf8(0x28)
	struct FScalableFloat MaxActorDensityUpdatesPerTick; // 0x120(0x28)
	struct FScalableFloat ActorDensityGridCellSize; // 0x148(0x28)
	struct FScalableFloat PointClusterSize; // 0x170(0x28)
	struct AActor* EQSActorHelperClass; // 0x198(0x08)
};

// Class LagerRuntime.FortAthenaLivingWorldEncounter
// Size: 0x68 (Inherited: 0x30)
struct UFortAthenaLivingWorldEncounter : UDataAsset {
	struct FScalableFloat IntervalBetweenEventGeneration; // 0x30(0x28)
	struct TArray<struct FFortAthenaLivingWorldEncounterStage> Stages; // 0x58(0x10)
};

// Class LagerRuntime.FortAthenaLivingWorldEncounterInstance
// Size: 0xe0 (Inherited: 0x28)
struct UFortAthenaLivingWorldEncounterInstance : UObject {
	struct FMulticastInlineDelegate OnActorSpawned; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
	struct TArray<struct TScriptInterface<None>> OriginalPointProviders; // 0x88(0x10)
	struct TArray<struct TScriptInterface<None>> RegisteredPointProviders; // 0x98(0x10)
	struct TSoftObjectPtr<struct UFortAthenaLivingWorldEncounter> EncounterDefinition; // 0xa8(0x28)
	char pad_D0[0x8]; // 0xd0(0x08)
	int32_t CurrentStageIndex; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	void OnActorSpawned__DelegateSignature(struct AActor* SpawnedActor); // DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	void AdvanceEncounterStage(); // Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3b5471c
};

// Class LagerRuntime.FortAthenaLivingWorldEventData
// Size: 0xf8 (Inherited: 0x30)
struct UFortAthenaLivingWorldEventData : UDataAsset {
	int32_t TimeOfDayFilters; // 0x30(0x04)
	float WaterLevelIndexMin; // 0x34(0x04)
	float WaterLevelIndexMax; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FGameplayTagQuery ProviderFiltersTagQuery; // 0x40(0x48)
	struct TArray<struct FPointProviderFilterEntry> ProviderFiltersEntries; // 0x88(0x10)
	struct FScalableFloat MinActorCountToSpawn; // 0x98(0x28)
	struct FScalableFloat MaxActorCountToSpawn; // 0xc0(0x28)
	struct TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions; // 0xe8(0x10)
};

// Class LagerRuntime.FortAthenaLivingWorldManager
// Size: 0x590 (Inherited: 0xb0)
struct UFortAthenaLivingWorldManager : UGameStateComponent {
	struct TSoftObjectPtr<struct UFortAthenaLivingWorldConfigData> DefaultLagerConfig; // 0xb0(0x28)
	struct TArray<struct FFortLivingWorldConfigOverride> LagerConfigOverrides; // 0xd8(0x10)
	struct FScalableFloat LagerEnabled; // 0xe8(0x28)
	struct TArray<struct TScriptInterface<None>> PointProviders; // 0x110(0x10)
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x120(0x88)
	struct FVector2D SpecialActorMinimapIconScale; // 0x1a8(0x08)
	struct FSlateBrush SpecialActorCompassIconBrush; // 0x1b0(0x88)
	struct FVector2D SpecialActorCompassIconScale; // 0x238(0x08)
	struct TArray<struct UFortAthenaAISpawnerData*> LoadedSpawnerDataClass; // 0x240(0x10)
	struct TArray<struct AActor*> LoadedActorDataClass; // 0x250(0x10)
	struct AFortGameStateAthena* CachedGameState; // 0x260(0x08)
	struct UWorld* CachedWorld; // 0x268(0x08)
	struct UFortAthenaLivingWorldConfigData* CachedConfig; // 0x270(0x08)
	struct TArray<struct UFortAthenaLivingWorldEncounterInstance*> RunningEncounterInstances; // 0x278(0x10)
	char pad_288[0x108]; // 0x288(0x108)
	struct TArray<struct AActor*> RuntimePointProviderList; // 0x390(0x10)
	struct TSet<struct AActor*> RuntimePointProviderOwners; // 0x3a0(0x50)
	char pad_3F0[0x18]; // 0x3f0(0x18)
	struct TArray<struct AActor*> SpawnedPawns; // 0x408(0x10)
	char pad_418[0x168]; // 0x418(0x168)
	struct AActor* EQSHelper; // 0x580(0x08)
	char pad_588[0x8]; // 0x588(0x08)

	struct UFortAthenaLivingWorldEncounterInstance* StartEncounter(struct TSoftObjectPtr<struct UFortAthenaLivingWorldEncounter> EncounterType, struct TArray<struct TScriptInterface<None>> EncounterPointProviders); // Function LagerRuntime.FortAthenaLivingWorldManager.StartEncounter // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b559ec
	void RequestEventGeneration(); // Function LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration // (Final|Native|Public|BlueprintCallable) // @ game+0x3b559c4
	int32_t QueryEventBudget(struct FDataTableRowHandle EventEntry, struct AActor* SpawnLocation); // Function LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b558b8
	void OnSpawnedActorDestroy(struct AActor* DestroyedActor); // Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy // (Final|Native|Private) // @ game+0x3b5576c
	void OnPatrolPathAdded(struct AFortAthenaPatrolPath* PatrolPath); // Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded // (Final|Native|Private) // @ game+0x3b551b8
	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer PlaylistContextTags); // Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x3b5505c
	void LivingWorldManagerUnregisterPointProvider(struct AActor* PointProvider); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b54d9c
	void LivingWorldManagerToggleVerboseLogging(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging // (Final|Exec|Native|Public) // @ game+0x203d3e0
	void LivingWorldManagerToggleGenerateEvents(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents // (Final|Exec|Native|Public) // @ game+0x203d3e0
	void LivingWorldManagerToggleActorMinimap(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap // (Final|Exec|Native|Public) // @ game+0x203d3e0
	void LivingWorldManagerRegisterPointProvider(struct AActor* PointProvider); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b54d9c
	void LivingWorldManagerProviderDebugActor(int32_t ProviderIndex); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor // (Final|Exec|Native|Public) // @ game+0x3b54d20
	void LivingWorldManagerGenerateEvents(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents // (Final|Exec|Native|Public) // @ game+0x203d3e0
	void LivingWorldManagerFlush(); // Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush // (Final|Exec|Native|Public) // @ game+0x203d3e0
	void EndEncounter(struct UFortAthenaLivingWorldEncounterInstance* EncounterInstance); // Function LagerRuntime.FortAthenaLivingWorldManager.EndEncounter // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3b54768
};

// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortAthenaLivingWorldPointProviderInterface : UInterface {

	void OnSpawnedActorFailed(); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorFailed // (Native|Public|BlueprintCallable) // @ game+0x3b558a4
	void OnSpawnedActorDestroyed(struct AActor* DestroyedActor); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorDestroyed // (Native|Public|BlueprintCallable) // @ game+0x3b55808
	void OnSpawnedActor(struct AActor* SpawnedActor, struct FVector PositionFromProvider); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActor // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3b55670
	void OnEventRequested(); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnEventRequested // (Native|Public|BlueprintCallable) // @ game+0x3b551a4
	bool IsEnabled(struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.IsEnabled // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b54c50
	bool GetValidLocation(struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter, float ActorDensityComputationRadius, struct FVector OutPosition, struct FRotator OutRotation); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b54a70
	void GetFiltersTags(struct FGameplayTagContainer FilterTags); // Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b549a4
};

// Class LagerRuntime.FortAthenaLivingWorldVolume
// Size: 0x450 (Inherited: 0x258)
struct AFortAthenaLivingWorldVolume : AVolume {
	char pad_258[0x8]; // 0x258(0x08)
	bool bStartEnabled; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct FGameplayTagContainer FiltersTags; // 0x268(0x20)
	struct FGameplayTagQuery DeactivationTagsQuery; // 0x288(0x48)
	float DeactivationTagsRange; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UEnvQuery* EnvironmentQuery; // 0x2d8(0x08)
	bool bRemoveUsedPoint; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x2e8(0x38)
	struct FScalableFloat WaterLevelIndexMin; // 0x320(0x28)
	struct FScalableFloat WaterLevelIndexMax; // 0x348(0x28)
	struct AFortGameStateAthena* CachedGameState; // 0x370(0x08)
	struct FMulticastInlineDelegate OnActorSpawnedResult; // 0x378(0x10)
	char pad_388[0xc8]; // 0x388(0xc8)

	void OnPointProviderRegistered(struct TScriptInterface<None> PointProvider); // Function LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered // (Final|Native|Private|HasOutParms) // @ game+0x3b555cc
	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer PlaylistContextTags); // Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x3b54e20
	void OnActorSpawnedResult__DelegateSignature(struct AActor* SpawnedActor, bool bResult); // DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	bool IsPointProviderEnabled(); // Function LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b54d08
	void EnablePointProvider(); // Function LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x203d3e0
	bool DoesStartEnabled(); // Function LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b54750
	void DisablePointProvider(); // Function LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x203d3e0
};

// Class LagerRuntime.FortAthenaLivingWorldVolumesEnabler
// Size: 0x2a0 (Inherited: 0x220)
struct AFortAthenaLivingWorldVolumesEnabler : AActor {
	struct TArray<struct AFortAthenaLivingWorldVolume*> EnabledLinkedVolumes; // 0x220(0x10)
	struct FGameplayTagContainer EnablerTags; // 0x230(0x20)
	struct TArray<struct AFortAthenaLivingWorldVolume*> LinkedVolumes; // 0x250(0x10)
	struct FScalableFloat VolumesToEnable; // 0x260(0x28)
	char pad_288[0x8]; // 0x288(0x08)
	struct FMulticastInlineDelegate OnCompletedEvaluationDelegate; // 0x290(0x10)

	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer PlaylistContextTags); // Function LagerRuntime.FortAthenaLivingWorldVolumesEnabler.OnCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x3b54e20
	void OnCompletedEvaluation__DelegateSignature(struct TArray<struct AFortAthenaLivingWorldVolume*> EnabledLinkedVolumes); // DelegateFunction LagerRuntime.FortAthenaLivingWorldVolumesEnabler.OnCompletedEvaluation__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda7c34
	bool HasCompletedEvaluation(); // Function LagerRuntime.FortAthenaLivingWorldVolumesEnabler.HasCompletedEvaluation // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b54c38
	struct FGameplayTagContainer GetEnablerTags(); // Function LagerRuntime.FortAthenaLivingWorldVolumesEnabler.GetEnablerTags // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b54988
	struct TArray<struct AFortAthenaLivingWorldVolume*> GetEnabledLinkedVolumes(); // Function LagerRuntime.FortAthenaLivingWorldVolumesEnabler.GetEnabledLinkedVolumes // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5496c
};

// Class LagerRuntime.FortAthenaLivingWorldVolumesEnabler_MiniMapDataOverride
// Size: 0x2a0 (Inherited: 0x2a0)
struct AFortAthenaLivingWorldVolumesEnabler_MiniMapDataOverride : AFortAthenaLivingWorldVolumesEnabler {
};

// Class LagerRuntime.FortAthenaPatrolPathPointProvider
// Size: 0x2b8 (Inherited: 0x220)
struct AFortAthenaPatrolPathPointProvider : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct FGameplayTagContainer FiltersTags; // 0x228(0x20)
	struct AFortAthenaPatrolPath* AssociatedPatrolPath; // 0x248(0x08)
	char bStartEnabled : 1; // 0x250(0x01)
	char bSpawnOnPatrolPath : 1; // 0x250(0x01)
	char pad_250_2 : 6; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0x258(0x38)
	struct FMulticastInlineDelegate OnActorSpawnedResult; // 0x290(0x10)
	struct TWeakObjectPtr<struct AFortAthenaPatrolPath> RuntimePatrolPathWeakPtr; // 0x2a0(0x08)
	struct AFortGameStateAthena* CachedGameState; // 0x2a8(0x08)
	char pad_2B0[0x8]; // 0x2b0(0x08)

	void OnCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer PlaylistContextTags); // Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x3b54f28
	void OnActorSpawnedResult__DelegateSignature(struct AActor* SpawnedActor, bool bResult); // DelegateFunction LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	void EnablePointProvider(); // Function LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider // (Final|Native|Public|BlueprintCallable) // @ game+0x2133014
	void DisablePointProvider(); // Function LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider // (Final|Native|Public|BlueprintCallable) // @ game+0x3b54730
};

// Class LagerRuntime.FortCheatManager_LivingWorldManager
// Size: 0x40 (Inherited: 0x28)
struct UFortCheatManager_LivingWorldManager : UChildCheatManager {
	int32_t CheatTeleportToCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString CheatLastEventDataName; // 0x30(0x10)

	void LivingWorldManagerTeleportTo(struct FString EventDataName); // Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo // (Final|Exec|Native|Public) // @ game+0x37d45d4
	void LivingWorldManagerSpawn(struct FString EventDataName); // Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn // (Final|Exec|Native|Public) // @ game+0x37d45d4
};

