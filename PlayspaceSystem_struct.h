// Enum PlayspaceSystem.EPlayspaceCreationType
enum class EPlayspaceCreationType : uint8 {
	ChildOfRoot,
	RootDestroy,
	RootInserted,
	EPlayspaceCreationType_MAX,
};

// ScriptStruct PlayspaceSystem.PlayspaceUser
// Size: 0x50 (Inherited: 0x0c)
struct FPlayspaceUser : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FUniqueNetIdRepl UserId; // 0x10(0x28)
	struct APlayspace* LeafPlayspace; // 0x38(0x08)
	struct APlayerState* PlayerStateCached; // 0x40(0x08)
	struct AController* ControllerCached; // 0x48(0x08)
};

// ScriptStruct PlayspaceSystem.ReplicatedSpawnInfo
// Size: 0x2c (Inherited: 0x00)
struct FReplicatedSpawnInfo {
	struct FVector SpawnLocation; // 0x00(0x0c)
	struct FRotator SpawnRotation; // 0x0c(0x0c)
	float ServerSpawnTime; // 0x18(0x04)
	struct FVector LastLocation; // 0x1c(0x0c)
	float MinTimeForCameraFadeTransition; // 0x28(0x04)
};

// ScriptStruct PlayspaceSystem.PlayspaceSpawningInfo
// Size: 0x68 (Inherited: 0x00)
struct FPlayspaceSpawningInfo {
	struct FUniqueNetIdRepl UserId; // 0x00(0x28)
	struct TWeakObjectPtr<struct APlayspace> RequestingPlayspace; // 0x28(0x08)
	struct TWeakObjectPtr<struct AActor> SpawnLocationActor; // 0x30(0x08)
	struct FVector SpawnLocation; // 0x38(0x0c)
	struct FRotator SpawnRotation; // 0x44(0x0c)
	float SpawnTimeServer; // 0x50(0x04)
	struct FVector LastLocation; // 0x54(0x0c)
	float MinTimeForCameraFadeTransition; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct PlayspaceSystem.ActorOverlapEvent
// Size: 0x10 (Inherited: 0x00)
struct FActorOverlapEvent {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct PlayspaceSystem.PlayspaceUserList
// Size: 0x128 (Inherited: 0x108)
struct FPlayspaceUserList : FFastArraySerializer {
	struct TArray<struct FPlayspaceUser> PlayspaceUsers; // 0x108(0x10)
	bool bIsInitialized; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct APlayspace* Playspace; // 0x120(0x08)
};

