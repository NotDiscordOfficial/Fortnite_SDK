// Class Tailgate.TailgateGameState
// Size: 0x270 (Inherited: 0x270)
struct ATailgateGameState : AGameStateBase {
};

// Class Tailgate.TailgateMultiplierSystem
// Size: 0x28 (Inherited: 0x28)
struct UTailgateMultiplierSystem : UObject {
};

// Class Tailgate.TailgateTargetBase
// Size: 0x228 (Inherited: 0x220)
struct ATailgateTargetBase : AActor {
	struct FGameplayTag TargetType; // 0x220(0x08)
};

// Class Tailgate.TailgateTargetDefinition
// Size: 0x28 (Inherited: 0x28)
struct UTailgateTargetDefinition : UObject {
};

// Class Tailgate.TailgateTargetSpawnCondition
// Size: 0x30 (Inherited: 0x28)
struct UTailgateTargetSpawnCondition : UObject {
	struct FGameplayTag TargetType; // 0x28(0x08)
};

// Class Tailgate.TailgateTargetSpawnerDefinition
// Size: 0x48 (Inherited: 0x28)
struct UTailgateTargetSpawnerDefinition : UObject {
	struct FGameplayTag SpawnerID; // 0x28(0x08)
	struct TArray<struct UTailgateTargetSpawnCondition*> SpawnConditions; // 0x30(0x10)
	struct UTailgateTargetDefinition* TargetDefinitionOverride; // 0x40(0x08)
};

// Class Tailgate.TailgateWaveDefinition
// Size: 0x50 (Inherited: 0x28)
struct UTailgateWaveDefinition : UObject {
	struct TArray<struct UTailgateTargetSpawnerDefinition*> TargetSpawnerDefinitionClasses; // 0x28(0x10)
	struct TArray<struct UTailgateTargetSpawnerDefinition*> TargetSpawnerDefinitions; // 0x38(0x10)
	struct UTailgateTargetDefinition* DefaultTargetDefinition; // 0x48(0x08)
};

// Class Tailgate.TailgateWaveDirector
// Size: 0x250 (Inherited: 0x220)
struct ATailgateWaveDirector : AActor {
	struct TArray<struct UTailgateWaveDefinition*> WaveDefinitionClasses; // 0x220(0x10)
	struct TArray<struct UTailgateWaveDefinition*> WaveDefinitions; // 0x230(0x10)
	struct UTailgateMultiplierSystem* MultiplierSystemClass; // 0x240(0x08)
	struct UTailgateMultiplierSystem* MultiplierSystem; // 0x248(0x08)
};

