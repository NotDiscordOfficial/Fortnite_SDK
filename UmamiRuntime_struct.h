// Enum UmamiRuntime.EFlyingEvasiveManeuversMode
enum class EFlyingEvasiveManeuversMode : uint8 {
	Disabled,
	HorizontalAndVerticalWhileMoving,
	HorizontalAndVerticalWhileStandingStill,
	EFlyingEvasiveManeuversMode_MAX,
};

// Enum UmamiRuntime.EFlyingAttackMovementMode
enum class EFlyingAttackMovementMode : uint8 {
	None,
	ReachTarget,
	Evade,
	EFlyingAttackMovementMode_MAX,
};

// Enum UmamiRuntime.EAITractorBeamMode
enum class EAITractorBeamMode : uint8 {
	None,
	TryToKidnap,
	KeepKidnapped,
	EAITractorBeamMode_MAX,
};

// Enum UmamiRuntime.EKidnapMode
enum class EKidnapMode : uint8 {
	None,
	FromTargetingSystem,
	LowPriorityTrackedObject,
	HighPriorityTrackedObject,
	EKidnapMode_MAX,
};

// ScriptStruct UmamiRuntime.EvasiveManeuver_Step
// Size: 0x50 (Inherited: 0x00)
struct FEvasiveManeuver_Step {
	struct FScalableFloat RightMultiplier; // 0x00(0x28)
	struct FScalableFloat UpMultiplier; // 0x28(0x28)
};

// ScriptStruct UmamiRuntime.EvasiveManeuver_Step_Digested
// Size: 0x08 (Inherited: 0x00)
struct FEvasiveManeuver_Step_Digested {
	float RightMultiplier; // 0x00(0x04)
	float UpMultiplier; // 0x04(0x04)
};

// ScriptStruct UmamiRuntime.HotfixableUmami3DAgentConfiguration
// Size: 0x78 (Inherited: 0x00)
struct FHotfixableUmami3DAgentConfiguration {
	struct FScalableFloat ProjectionExtentsX; // 0x00(0x28)
	struct FScalableFloat ProjectionExtentsY; // 0x28(0x28)
	struct FScalableFloat ProjectionExtentsZ; // 0x50(0x28)
};

// ScriptStruct UmamiRuntime.DestroyBlockerOffsetConfiguration
// Size: 0x78 (Inherited: 0x00)
struct FDestroyBlockerOffsetConfiguration {
	struct FScalableFloat XOffset; // 0x00(0x28)
	struct FScalableFloat YOffset; // 0x28(0x28)
	struct FScalableFloat ZOffset; // 0x50(0x28)
};

// ScriptStruct UmamiRuntime.KidnapCustomTargetWeightConfiguration
// Size: 0x10 (Inherited: 0x00)
struct FKidnapCustomTargetWeightConfiguration {
	bool bCheckOnVehicle; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGameplayTag TargetTag; // 0x04(0x08)
	float WeightDelta; // 0x0c(0x04)
};

// ScriptStruct UmamiRuntime.UmamiMaximumStuckTimePerBuildingTypeDigested
// Size: 0x0c (Inherited: 0x00)
struct FUmamiMaximumStuckTimePerBuildingTypeDigested {
	struct FGameplayTag RequiredTag; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct UmamiRuntime.UmamiMaximumStuckTimePerBuildingType
// Size: 0x30 (Inherited: 0x00)
struct FUmamiMaximumStuckTimePerBuildingType {
	struct FGameplayTag RequiredTag; // 0x00(0x08)
	struct FScalableFloat MaximumStuckTime; // 0x08(0x28)
};

// ScriptStruct UmamiRuntime.Umami3DNavigationGraphWrapper
// Size: 0x08 (Inherited: 0x00)
struct FUmami3DNavigationGraphWrapper {
	char pad_0[0x8]; // 0x00(0x08)
};

