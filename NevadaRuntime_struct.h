// Enum NevadaRuntime.ETractorBeamState
enum class ETractorBeamState : uint8 {
	TBS_Inactive,
	TBS_Charging,
	TBS_Active,
	TBS_MAX,
};

// Enum NevadaRuntime.ENevadaFlightStates
enum class ENevadaFlightStates : uint8 {
	FLIGHT,
	CRASHING,
	CRASHED,
	REBOOTING,
	LANDING,
	LANDED,
	IDLE,
	NONE,
	ENevadaFlightStates_MAX,
};

// ScriptStruct NevadaRuntime.NevadaAudioUpdateContext
// Size: 0x01 (Inherited: 0x00)
struct FNevadaAudioUpdateContext {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct NevadaRuntime.NevadaInPersistent
// Size: 0x1c0 (Inherited: 0x138)
struct FNevadaInPersistent : FFortVehicleInPersistent {
	struct UFortNevadaVehicleConfigs* FortNevadaVehicleConfigs; // 0x138(0x08)
	bool bBoostThrust; // 0x140(0x01)
	bool bBoostDrag; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	float TractorBeamExtraLengthForExtents; // 0x144(0x04)
	bool bUseTractorBeamUprightForce; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	struct FVector CrashingDesiredUp; // 0x14c(0x0c)
	enum class ENevadaFlightStates CurrentVehicleState; // 0x158(0x01)
	char pad_159[0x67]; // 0x159(0x67)
};

// ScriptStruct NevadaRuntime.NevadaMoveModeConfig
// Size: 0x14 (Inherited: 0x00)
struct FNevadaMoveModeConfig {
	float ThrustForce; // 0x00(0x04)
	float LiftForce; // 0x04(0x04)
	float MaxHorizontalSpeed; // 0x08(0x04)
	float MaxVerticalSpeed; // 0x0c(0x04)
	float DragForceMultiplier; // 0x10(0x04)
};

// ScriptStruct NevadaRuntime.NevadaState
// Size: 0x10 (Inherited: 0x00)
struct FNevadaState {
	enum class ENevadaFlightStates CurrentStatus; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LivesRemaining; // 0x04(0x04)
	bool bHijackingActive; // 0x08(0x01)
	bool bPilotBubbleCollisionEnabled; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float CurrentBatteryCharge; // 0x0c(0x04)
};

// ScriptStruct NevadaRuntime.NevadaOutPersistent
// Size: 0x2d0 (Inherited: 0x10)
struct FNevadaOutPersistent : FFortVehicleOutPersistent {
	char pad_10[0x2c0]; // 0x10(0x2c0)
};

// ScriptStruct NevadaRuntime.NevadaOutContinuous
// Size: 0x30 (Inherited: 0x28)
struct FNevadaOutContinuous : FFortVehicleOutContinuous {
	float AltimeterTraceHitDistance; // 0x28(0x04)
	float TractorBeamAppliedForceMagnitude; // 0x2c(0x04)
};

