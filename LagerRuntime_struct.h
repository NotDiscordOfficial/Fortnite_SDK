// Enum LagerRuntime.ELivingWorldPointProviderSpawnLimiterBehavior
enum class ELivingWorldPointProviderSpawnLimiterBehavior : uint8 {
	Lifetime,
	Concurrent,
	ELivingWorldPointProviderSpawnLimiterBehavior_MAX,
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
// Size: 0x38 (Inherited: 0x00)
struct FFortAthenaLivingWorldPointProviderSpawnLimiter {
	char pad_0[0x4]; // 0x00(0x04)
	enum class ELivingWorldPointProviderSpawnLimiterBehavior Behavior; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FScalableFloat MaxNumberOfSpawn; // 0x08(0x28)
	bool bResetLimitWhenEnabling; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategory
// Size: 0x98 (Inherited: 0x08)
struct FFortAthenaLivingWorldCategory : FTableRowBase {
	struct TSoftObjectPtr<struct UDataTable> EventTable; // 0x08(0x28)
	int32_t MaxCount; // 0x30(0x04)
	float Priority; // 0x34(0x04)
	bool bExcludeFromGlobalAIBudget; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FGameplayTagQuery RequirePlaylistTagQuery; // 0x40(0x48)
	struct TArray<struct TSoftObjectPtr<struct UFortAthenaLivingWorldEncounter>> Encounters; // 0x88(0x10)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldDensityGrid
// Size: 0x148 (Inherited: 0x70)
struct FFortAthenaLivingWorldDensityGrid : FFortSpatialGrid {
	char pad_70[0xd8]; // 0x70(0xd8)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEncounterStage
// Size: 0x50 (Inherited: 0x00)
struct FFortAthenaLivingWorldEncounterStage {
	struct TSoftObjectPtr<struct UDataTable> EventTable; // 0x00(0x28)
	struct FScalableFloat MaximumConcurrentNumberOfAI; // 0x28(0x28)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEvent
// Size: 0xd8 (Inherited: 0x08)
struct FFortAthenaLivingWorldEvent : FTableRowBase {
	struct TSoftObjectPtr<struct UFortAthenaLivingWorldEventData> EventData; // 0x08(0x28)
	struct FScalableFloat IsEnabled; // 0x30(0x28)
	struct TArray<float> MaxCount; // 0x58(0x10)
	struct TArray<float> MaxSpawnedCount; // 0x68(0x10)
	float Weight; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<float> MinRespawnTime; // 0x80(0x10)
	struct TArray<float> MaxRespawnTime; // 0x90(0x10)
	bool bOnlyInSafeZone; // 0xa0(0x01)
	enum class EAthenaGamePhaseStep ActivationGamePhaseStep; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	int32_t ActivationSafeZoneIndex; // 0xa4(0x04)
	float ActivationMinDelay; // 0xa8(0x04)
	float ActivationMaxDelay; // 0xac(0x04)
	bool bCheckForActorDensity; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FGameplayTagContainer RequirePlaylistTags; // 0xb8(0x20)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
// Size: 0xf8 (Inherited: 0x00)
struct FFortAthenaLivingWorldEventDataActorSpawnDescription {
	SoftClassProperty ActorClass; // 0x00(0x28)
	SoftClassProperty SpawnerData; // 0x28(0x28)
	struct FGameplayTagQuery SpawnerDataTagQuery; // 0x50(0x48)
	bool bUseProviderTagOverrides; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FGameplayTagQuery ProviderFiltersTagQueryOverride; // 0xa0(0x48)
	bool bSpawnAroundDefaultPoint; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct UEnvQuery* SpawnAroundEnvironmentQuery; // 0xf0(0x08)
};

// ScriptStruct LagerRuntime.PointProviderFilterEntry
// Size: 0x70 (Inherited: 0x00)
struct FPointProviderFilterEntry {
	struct FGameplayTagQuery ProviderFiltersTagQuery; // 0x00(0x48)
	struct FScalableFloat Weight; // 0x48(0x28)
};

// ScriptStruct LagerRuntime.FortLivingWorldConfigOverride
// Size: 0x80 (Inherited: 0x00)
struct FFortLivingWorldConfigOverride {
	struct TSoftObjectPtr<struct UWorld> SourceWorld; // 0x00(0x28)
	struct FGameplayTagContainer PlaylistTag; // 0x28(0x20)
	struct TSoftObjectPtr<struct UFortAthenaLivingWorldConfigData> LagerConfig; // 0x48(0x28)
	struct FFortReleaseVersion StartVersion; // 0x70(0x08)
	struct FFortReleaseVersion EndVersion; // 0x78(0x08)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
// Size: 0x08 (Inherited: 0x00)
struct FFortAthenaLivingWorldPointProviderFilterRules {
	char pad_0[0x8]; // 0x00(0x08)
};

