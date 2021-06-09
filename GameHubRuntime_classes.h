// Class GameHubRuntime.GameHubBaseMutator
// Size: 0x2d0 (Inherited: 0x2c0)
struct AGameHubBaseMutator : AFortAthenaMutator {
	char pad_2C0[0x10]; // 0x2c0(0x10)
};

// Class GameHubRuntime.GameHubPlayerSpawningComponent
// Size: 0xe0 (Inherited: 0xc0)
struct UGameHubPlayerSpawningComponent : UPlayspaceComponent_PlayerSpawning {
	struct FGameplayTagContainer PlayerStartRequirements; // 0xc0(0x20)
};

// Class GameHubRuntime.GameHubPlayspace
// Size: 0x558 (Inherited: 0x530)
struct AGameHubPlayspace : AFortPlayspace {
	bool bSimulatePlayerDamage; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct FGameplayTagContainer PlayerStartRequirements; // 0x538(0x20)
};

