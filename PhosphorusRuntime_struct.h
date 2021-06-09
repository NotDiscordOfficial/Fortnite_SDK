// Enum PhosphorusRuntime.EPhosphorusPhase
enum class EPhosphorusPhase : uint8 {
	PreMatch,
	RoundSetup,
	PrePodLaunch,
	PodsLaunched,
	RoundInProgress,
	RoundEnd,
	RoundEndUI,
	MatchEnd,
	MatchEndUI,
	EPhosphorusPhase_MAX,
};

// Enum PhosphorusRuntime.EPlayerSpawnPodState
enum class EPlayerSpawnPodState : uint8 {
	Setup,
	PreLaunch,
	Moving,
	Landed,
	Ejected,
	EPlayerSpawnPodState_MAX,
};

// Enum PhosphorusRuntime.EPhosphorusClientEventId
enum class EPhosphorusClientEventId : uint8 {
	ShowLocalPlayerSquadWipedUI,
	ShowEnemySquadWipedUI,
	MAX,
};

// ScriptStruct PhosphorusRuntime.PlayerSpawnPodData
// Size: 0xb8 (Inherited: 0x00)
struct FPlayerSpawnPodData {
	int32_t ID; // 0x00(0x04)
	struct FVector EndLocation; // 0x04(0x0c)
	struct TArray<struct AFortPlayerControllerAthena*> Controllers; // 0x10(0x10)
	struct TArray<struct AFortPlayerPawnAthena*> EnteredPawns; // 0x20(0x10)
	struct TArray<struct AFortPlayerPawnAthena*> EjectedPawns; // 0x30(0x10)
	enum class EPlayerSpawnPodState State; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FVector StartLocation; // 0x44(0x0c)
	struct AActor* PodActor; // 0x50(0x08)
	struct TMap<struct AFortPlayerControllerAthena*, struct AActor*> ViewTargetsByPlayerController; // 0x58(0x50)
	float LandTime; // 0xa8(0x04)
	float NextEjectYaw; // 0xac(0x04)
	float EjectYawIncrement; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct PhosphorusRuntime.PhosphorusTeamData
// Size: 0x10 (Inherited: 0x00)
struct FPhosphorusTeamData {
	char TeamNum; // 0x00(0x01)
	char NumRoundsWon; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct AFortPlayerStateAthena* CurrentMVP; // 0x08(0x08)
};

