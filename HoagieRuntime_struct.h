// Enum HoagieRuntime.EHoagieBoostState
enum class EHoagieBoostState : uint8 {
	Unknown,
	Ready,
	Started,
	Finished,
	Failed,
	EHoagieBoostState_MAX,
};

// Enum HoagieRuntime.EHoagieState
enum class EHoagieState : uint8 {
	STARTUP,
	STARTUP_LIFT,
	FLIGHT,
	AUTO_LANDING,
	SPIN_CRASHING,
	CRASHING_NO_SPIN,
	CRASH_LANDED,
	LANDED,
	EXPLODING,
	NONE,
	EHoagieState_MAX,
};

// ScriptStruct HoagieRuntime.FortHeliFlightModel
// Size: 0x110 (Inherited: 0x00)
struct FFortHeliFlightModel {
	char pad_0[0x108]; // 0x00(0x108)
	struct UFortHoagieVehicleConfigs* Configs; // 0x108(0x08)
};

// ScriptStruct HoagieRuntime.HoagieOutPersistent
// Size: 0x10 (Inherited: 0x10)
struct FHoagieOutPersistent : FFortVehicleOutPersistent {
};

// ScriptStruct HoagieRuntime.HoagieOutContinuous
// Size: 0x28 (Inherited: 0x28)
struct FHoagieOutContinuous : FFortVehicleOutContinuous {
};

// ScriptStruct HoagieRuntime.HoagieInternal
// Size: 0x168 (Inherited: 0x50)
struct FHoagieInternal : FFortVehicleInternalPersistent {
	struct FFortHeliFlightModel FlightModel; // 0x50(0x110)
	char pad_160[0x8]; // 0x160(0x08)
};

// ScriptStruct HoagieRuntime.HoagieInPersistent
// Size: 0x160 (Inherited: 0x138)
struct FHoagieInPersistent : FFortVehicleInPersistent {
	struct UFortHoagieVehicleConfigs* FortHoagieVehicleConfigs; // 0x138(0x08)
	enum class EHoagieState CurrentHoagieState; // 0x140(0x04)
	float LastRotorImpulseTime; // 0x144(0x04)
	struct FVector RotorHitLinearImpulse; // 0x148(0x0c)
	struct FVector RotorHitAngularImpulse; // 0x154(0x0c)
};

// ScriptStruct HoagieRuntime.HoagieCmd
// Size: 0x44 (Inherited: 0x00)
struct FHoagieCmd {
	char pad_0[0x44]; // 0x00(0x44)
};

// ScriptStruct HoagieRuntime.ReplicatedHeliControlState
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedHeliControlState {
	struct FVector_NetQuantizeNormal Up; // 0x00(0x0c)
	struct FVector_NetQuantizeNormal Forward; // 0x0c(0x0c)
};

// ScriptStruct HoagieRuntime.CachedSeatCollision
// Size: 0x08 (Inherited: 0x00)
struct FCachedSeatCollision {
	int32_t SeatIndex; // 0x00(0x04)
	bool bOccupied; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct HoagieRuntime.RotorHit
// Size: 0x0c (Inherited: 0x00)
struct FRotorHit {
	struct TWeakObjectPtr<struct AActor> HitActor; // 0x00(0x08)
	float LastHitTimer; // 0x08(0x04)
};

