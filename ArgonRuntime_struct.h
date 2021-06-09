// Enum ArgonRuntime.EArgonRacePhase
enum class EArgonRacePhase : uint8 {
	None,
	TeleportingPlayers,
	PreRaceSequence,
	RaceActive,
	PostRaceSequence,
	RaceEnded,
	MAX,
};

// ScriptStruct ArgonRuntime.ArgonFinishedPlayerInfo
// Size: 0x60 (Inherited: 0x00)
struct FArgonFinishedPlayerInfo {
	struct FString PlayerName; // 0x00(0x10)
	struct FUniqueNetIdRepl PlayerID; // 0x10(0x28)
	char Team; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float FinishedTime; // 0x3c(0x04)
	char Place; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UFortHeroType* HeroType; // 0x48(0x08)
	struct AFortPlayerStateAthena* PlayerState; // 0x50(0x08)
	bool bFinishedAsLastTeamLeft; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct ArgonRuntime.ArgonTeamProgressBarInfo
// Size: 0x0c (Inherited: 0x00)
struct FArgonTeamProgressBarInfo {
	char Team; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float PercentProgress; // 0x04(0x04)
	int32_t NumTicketsAcquired; // 0x08(0x04)
};

// ScriptStruct ArgonRuntime.ArgonTeamTicketCount
// Size: 0x10 (Inherited: 0x00)
struct FArgonTeamTicketCount {
	char Team; // 0x00(0x01)
	char NumTickets; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct AFortPlayerStateAthena* RecentTicketPickedUpByPlayer; // 0x08(0x08)
};

// ScriptStruct ArgonRuntime.ArgonRaceStateInfo
// Size: 0x18 (Inherited: 0x00)
struct FArgonRaceStateInfo {
	enum class EArgonRacePhase CurrentRacePhase; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FArgonFinishedPlayerInfo> FinishedTeamLeaderInfos; // 0x08(0x10)
};

// ScriptStruct ArgonRuntime.ArgonPlayerInfo
// Size: 0x10 (Inherited: 0x00)
struct FArgonPlayerInfo {
	struct AFortPlayerStateAthena* PlayerState; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ArgonRuntime.ArgonSupplyDropPointData
// Size: 0x298 (Inherited: 0x00)
struct FArgonSupplyDropPointData {
	struct FScalableFloat NumDropPoints; // 0x00(0x28)
	struct FScalableFloat NumDropsPerSide; // 0x28(0x28)
	struct FScalableFloat SpaceBetweenDrops; // 0x50(0x28)
	struct FScalableFloat MaxDistanceFromSpawnPointPerpendicularToRace; // 0x78(0x28)
	struct FScalableFloat MaxDistanceFromSpawnPointParallelToRace; // 0xa0(0x28)
	struct FScalableFloat DistanceFromCenter; // 0xc8(0x28)
	struct FScalableFloat MinDropDistanceFromCenter; // 0xf0(0x28)
	struct FScalableFloat MinPercentDistanceFromEnd; // 0x118(0x28)
	struct FScalableFloat MaxPercentDistanceFromEnd; // 0x140(0x28)
	struct FScalableFloat MinTimeUntilSpawn; // 0x168(0x28)
	struct FScalableFloat MaxTimeUntilSpawn; // 0x190(0x28)
	struct FScalableFloat MaxRepopulations; // 0x1b8(0x28)
	struct FScalableFloat MinRepopulationTime; // 0x1e0(0x28)
	struct FScalableFloat MaxRepopulationTime; // 0x208(0x28)
	char pad_230[0x68]; // 0x230(0x68)
};

// ScriptStruct ArgonRuntime.ArgonSupplyDropInfo
// Size: 0x18 (Inherited: 0x00)
struct FArgonSupplyDropInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ArgonRuntime.ArgonRoute
// Size: 0x48 (Inherited: 0x00)
struct FArgonRoute {
	struct FGameplayTagContainer Tag; // 0x00(0x20)
	struct FScalableFloat Enabled; // 0x20(0x28)
};

// ScriptStruct ArgonRuntime.ArgonVehicleOption
// Size: 0x38 (Inherited: 0x00)
struct FArgonVehicleOption {
	struct FPrimaryAssetId VehicleAssetId; // 0x00(0x10)
	struct FScalableFloat Enabled; // 0x10(0x28)
};

