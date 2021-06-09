// Enum FreshCheeseRuntime.EFriendChestResult
enum class EFriendChestResult : uint8 {
	Ignored,
	Partial,
	Abandoned,
	Opened,
	EFriendChestResult_MAX,
};

// ScriptStruct FreshCheeseRuntime.FriendChestPlayerActivationPair
// Size: 0x10 (Inherited: 0x00)
struct FFriendChestPlayerActivationPair {
	struct AFortPlayerPawnAthena* Player; // 0x00(0x08)
	struct FTimerHandle ActivationTimer; // 0x08(0x08)
};

// ScriptStruct FreshCheeseRuntime.FriendChestRoundPacing
// Size: 0x10 (Inherited: 0x00)
struct FFriendChestRoundPacing {
	struct TArray<int32_t> NumTargetsPerRound; // 0x00(0x10)
};

// ScriptStruct FreshCheeseRuntime.FriendChestAnalyticsParticipant
// Size: 0x68 (Inherited: 0x00)
struct FFriendChestAnalyticsParticipant {
	struct AFortPlayerStateAthena* PlayerState; // 0x00(0x08)
	struct FString AccountId; // 0x08(0x10)
	struct FVector SpawnCoordinates; // 0x18(0x0c)
	char pad_24[0x24]; // 0x24(0x24)
	struct TArray<struct FFriendChestAnalyticsLootRoll> InstancedLoot; // 0x48(0x10)
	struct TArray<struct FFriendChestAnalyticsLootRoll> FailedLoot; // 0x58(0x10)
};

// ScriptStruct FreshCheeseRuntime.FriendChestAnalyticsLootRoll
// Size: 0x48 (Inherited: 0x00)
struct FFriendChestAnalyticsLootRoll {
	char pad_0[0x48]; // 0x00(0x48)
};

