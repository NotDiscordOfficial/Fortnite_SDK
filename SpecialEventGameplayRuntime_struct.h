// Enum SpecialEventGameplayRuntime.ESpecialEventPhaseState
enum class ESpecialEventPhaseState : uint8 {
	Unregistered,
	Inactive,
	Active,
	Deactivated,
	ESpecialEventPhaseState_MAX,
};

// ScriptStruct SpecialEventGameplayRuntime.SpecialClientEvent
// Size: 0x18 (Inherited: 0x00)
struct FSpecialClientEvent {
	struct AFortPlayerControllerAthena* PlayerController; // 0x00(0x08)
	float TimeSeconds; // 0x08(0x04)
	struct FGameplayTag EventTag; // 0x0c(0x08)
	int32_t Count; // 0x14(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
// Size: 0x20 (Inherited: 0x00)
struct FFortSpecialEventOverrideParts {
	struct TArray<struct UCustomCharacterPart*> OverrideParts; // 0x00(0x10)
	struct FFortSpecialEventGEData GameplayEffectToApplyOnSwap; // 0x10(0x10)
};

// ScriptStruct SpecialEventGameplayRuntime.FortSpecialEventGEData
// Size: 0x10 (Inherited: 0x00)
struct FFortSpecialEventGEData {
	struct UGameplayEffect* GameplayEffect; // 0x00(0x08)
	int32_t Level; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.FortDelayRTMMData
// Size: 0x10 (Inherited: 0x00)
struct FFortDelayRTMMData {
	bool bDelayRTTM; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinRTTMDelay; // 0x04(0x04)
	float MaxRTTMDelay; // 0x08(0x04)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct SpecialEventGameplayRuntime.PhaseInfo
// Size: 0x38 (Inherited: 0x00)
struct FPhaseInfo {
	struct ASpecialEventPhase* PhaseActorClass; // 0x00(0x08)
	float SequenceTime; // 0x08(0x04)
	struct FGameplayTag PhaseTag; // 0x0c(0x08)
	enum class ESpecialRelevancyMode RelevancyMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t NumOfSquadsInRelevancyGroup; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FPhaseLevelEntry> Levels; // 0x20(0x10)
	struct ASpecialEventPhase* PhaseActor; // 0x30(0x08)
};

// ScriptStruct SpecialEventGameplayRuntime.PhaseLevelEntry
// Size: 0xa0 (Inherited: 0x00)
struct FPhaseLevelEntry {
	struct TSoftObjectPtr<struct UWorld> LevelToLoad; // 0x00(0x28)
	struct FString LevelName; // 0x28(0x10)
	struct FVector Location; // 0x38(0x0c)
	struct FRotator Rotation; // 0x44(0x0c)
	bool bLevelStartsVisible; // 0x50(0x01)
	bool bUnloadLevelOnPhaseEnd; // 0x51(0x01)
	bool bLoadLevelOnScriptStart; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
	struct FGameplayTagContainer MakeVisibleAtPhaseTags; // 0x58(0x20)
	struct FGameplayTagContainer UnloadLevelAtPhaseTags; // 0x78(0x20)
	struct ULevelStreamingDynamic* LevelInstance; // 0x98(0x08)
};

