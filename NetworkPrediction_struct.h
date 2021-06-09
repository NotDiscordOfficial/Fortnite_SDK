// Enum NetworkPrediction.ENetworkLOD
enum class ENetworkLOD : uint8 {
	Interpolated,
	SimExtrapolate,
	ForwardPredict,
	All,
	ENetworkLOD_MAX,
};

// Enum NetworkPrediction.ENetworkPredictionTickingPolicy
enum class ENetworkPredictionTickingPolicy : uint8 {
	Independent,
	Fixed,
	All,
	ENetworkPredictionTickingPolicy_MAX,
};

// Enum NetworkPrediction.ENetworkPredictionStateRead
enum class ENetworkPredictionStateRead : uint8 {
	Simulation,
	Presentation,
	ENetworkPredictionStateRead_MAX,
};

// ScriptStruct NetworkPrediction.NetworkPredictionProxyAsync
// Size: 0x40 (Inherited: 0x00)
struct FNetworkPredictionProxyAsync {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct NetworkPrediction.TempMockObject
// Size: 0x18 (Inherited: 0x00)
struct FTempMockObject {
	int32_t JumpCooldownMS; // 0x00(0x04)
	int32_t JumpCount; // 0x04(0x04)
	float ForceMultiplier; // 0x08(0x04)
	int32_t RandValue; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct NetworkPrediction.NetworkPhysicsState
// Size: 0x60 (Inherited: 0x00)
struct FNetworkPhysicsState {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct NetworkPrediction.TempMockInputCmd
// Size: 0x14 (Inherited: 0x00)
struct FTempMockInputCmd {
	struct FVector Force; // 0x00(0x0c)
	float Turn; // 0x0c(0x04)
	bool bJumpedPressed; // 0x10(0x01)
	bool bBrakesPressed; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct NetworkPrediction.NetworkPredictionProxy
// Size: 0xb0 (Inherited: 0x00)
struct FNetworkPredictionProxy {
	char pad_0[0xa0]; // 0x00(0xa0)
	struct UNetworkPredictionWorldManager* WorldManager; // 0xa0(0x08)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct NetworkPrediction.SharedPackageMap
// Size: 0x10 (Inherited: 0x00)
struct FSharedPackageMap {
	struct TArray<struct FSharedPackageMapItem> Items; // 0x00(0x10)
};

// ScriptStruct NetworkPrediction.SharedPackageMapItem
// Size: 0x28 (Inherited: 0x00)
struct FSharedPackageMapItem {
	struct TSoftObjectPtr<struct UObject> SoftPtr; // 0x00(0x28)
};

// ScriptStruct NetworkPrediction.ServerReplicationRPCParameter
// Size: 0x18 (Inherited: 0x00)
struct FServerReplicationRPCParameter {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct NetworkPrediction.ReplicationProxy
// Size: 0x50 (Inherited: 0x00)
struct FReplicationProxy {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct NetworkPrediction.NetworkPredictionSettings
// Size: 0x28 (Inherited: 0x00)
struct FNetworkPredictionSettings {
	enum class ENetworkPredictionTickingPolicy PreferredTickingPolicy; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct ANetworkPredictionReplicatedManager* ReplicatedManagerClassOverride; // 0x08(0x08)
	int32_t FixedTickFrameRate; // 0x10(0x04)
	bool bForceEngineFixTickForcePhysics; // 0x14(0x01)
	enum class ENetworkLOD SimulatedProxyNetworkLOD; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	int32_t FixedTickInterpolationBufferedMS; // 0x18(0x04)
	int32_t IndependentTickInterpolationBufferedMS; // 0x1c(0x04)
	int32_t IndependentTickInterpolationMaxBufferedMS; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

