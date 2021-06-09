// Enum VendettaRuntime.EVendettaHuntedStatus
enum class EVendettaHuntedStatus : uint8 {
	NotHunted,
	Hunted_Far,
	Hunted_Near,
	EVendettaHuntedStatus_MAX,
};

// ScriptStruct VendettaRuntime.WaxPickupSpawnRequestData
// Size: 0x10 (Inherited: 0x00)
struct FWaxPickupSpawnRequestData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct VendettaRuntime.VendettaEQSQueryData
// Size: 0x30 (Inherited: 0x00)
struct FVendettaEQSQueryData {
	struct FName ParameterName; // 0x00(0x08)
	struct FScalableFloat ParameterValue; // 0x08(0x28)
};

// ScriptStruct VendettaRuntime.VendettaReplicatedUIMessage
// Size: 0x20 (Inherited: 0x00)
struct FVendettaReplicatedUIMessage {
	int32_t IndexToUpdate; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText TextToDisplay; // 0x08(0x18)
};

// ScriptStruct VendettaRuntime.VendettaBountyPuckTargetingDataArray
// Size: 0x118 (Inherited: 0x108)
struct FVendettaBountyPuckTargetingDataArray : FFastArraySerializer {
	struct TArray<struct FVendettaBountyPuckTargetData> Entries; // 0x108(0x10)
};

// ScriptStruct VendettaRuntime.VendettaBountyPuckTargetData
// Size: 0x40 (Inherited: 0x0c)
struct FVendettaBountyPuckTargetData : FFastArraySerializerItem {
	struct FGuid TrackerGuid; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct AFortPlayerStateAthena* TargetPlayerState; // 0x20(0x08)
	struct AFortPlayerStateAthena* OwnerPlayerState; // 0x28(0x08)
	int32_t BonusReward; // 0x30(0x04)
	enum class EFortRarity Rarity; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UBountyPuckWeaponComponent* BountyPuckWeaponComponent; // 0x38(0x08)
};

// ScriptStruct VendettaRuntime.VendettaBountyPuckRarityData
// Size: 0x58 (Inherited: 0x00)
struct FVendettaBountyPuckRarityData {
	struct FScalableFloat MinRewardValue; // 0x00(0x28)
	struct FScalableFloat MaxRewardValue; // 0x28(0x28)
	enum class EFortRarity Rarity; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct VendettaRuntime.VendettaPlayerData
// Size: 0x10 (Inherited: 0x00)
struct FVendettaPlayerData {
	struct AFortPlayerStateAthena* PlayerState; // 0x00(0x08)
	float LastPlayerSpawnTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct VendettaRuntime.VendettaActiveBountyTargetDataArray
// Size: 0x118 (Inherited: 0x108)
struct FVendettaActiveBountyTargetDataArray : FFastArraySerializer {
	struct TArray<struct FVendettaActiveBountyTargetData> Entries; // 0x108(0x10)
};

// ScriptStruct VendettaRuntime.VendettaActiveBountyTargetData
// Size: 0x20 (Inherited: 0x0c)
struct FVendettaActiveBountyTargetData : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct AFortPlayerStateAthena* BountyOwningPlayerState; // 0x10(0x08)
	struct FVector2D BountyTargetLocation2D; // 0x18(0x08)
};

// ScriptStruct VendettaRuntime.VendettaTargetMarkedStatusData
// Size: 0x02 (Inherited: 0x00)
struct FVendettaTargetMarkedStatusData {
	bool bIsTargetMarked; // 0x00(0x01)
	bool bIsResultOfScan; // 0x01(0x01)
};

// ScriptStruct VendettaRuntime.VendettaPlayerHuntedStatusArray
// Size: 0x118 (Inherited: 0x108)
struct FVendettaPlayerHuntedStatusArray : FFastArraySerializer {
	struct TArray<struct FVendettaPlayerHuntedStatus> Entries; // 0x108(0x10)
};

// ScriptStruct VendettaRuntime.VendettaPlayerHuntedStatus
// Size: 0x20 (Inherited: 0x0c)
struct FVendettaPlayerHuntedStatus : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct AFortPlayerStateAthena* PlayerState; // 0x10(0x08)
	enum class EVendettaHuntedStatus HuntedStatusReplicated; // 0x18(0x01)
	enum class EVendettaHuntedStatus MasterHunterHuntedStatusReplicated; // 0x19(0x01)
	enum class EVendettaHuntedStatus HuntedStatusLocal; // 0x1a(0x01)
	enum class EVendettaHuntedStatus MasterHunterHuntedStatusLocal; // 0x1b(0x01)
	char pad_1C[0x4]; // 0x1c(0x04)
};

