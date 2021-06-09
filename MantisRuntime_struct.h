// Enum MantisRuntime.EFortMantisBranchPath
enum class EFortMantisBranchPath : uint8 {
	Default,
	Path_2,
	Path_3,
	Path_4,
	Path_5,
	Path_6,
	Blocked,
	EFortMantisBranchPath_MAX,
};

// Enum MantisRuntime.EFortMantisBranchRule
enum class EFortMantisBranchRule : uint8 {
	Off,
	Any,
	Starter,
	EFortMantisBranchRule_MAX,
};

// Enum MantisRuntime.EFortMantisNotifyRotationWarpRateRule
enum class EFortMantisNotifyRotationWarpRateRule : uint8 {
	Snap,
	WindowDurationLerp,
	EFortMantisNotifyRotationWarpRateRule_MAX,
};

// Enum MantisRuntime.EFortMantisNotifyWindow
enum class EFortMantisNotifyWindow : uint8 {
	Invalid,
	Input,
	Execution,
	Damage,
	RootMotionWarp,
	EFortMantisNotifyWindow_MAX,
};

// Enum MantisRuntime.EFortMantisNotifyEvent
enum class EFortMantisNotifyEvent : uint8 {
	Invalid,
	Branch,
	EFortMantisNotifyEvent_MAX,
};

// ScriptStruct MantisRuntime.FortRootMotionSource_Mantis
// Size: 0x100 (Inherited: 0xa0)
struct FFortRootMotionSource_Mantis : FRootMotionSource {
	float CurrentTechniqueTime; // 0x98(0x04)
	struct UAnimMontage* TechniqueMontage; // 0xa0(0x08)
	struct FFortMantisRootMotionWarpInfo WarpInfo; // 0xa8(0x18)
	struct FVector LatestRepMovementLocation; // 0xc0(0x0c)
	char pad_D0[0x30]; // 0xd0(0x30)
};

// ScriptStruct MantisRuntime.FortMantisRootMotionWarpInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortMantisRootMotionWarpInfo {
	struct AActor* WarpTarget; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct MantisRuntime.FortMantisTargetData
// Size: 0x28 (Inherited: 0x08)
struct FFortMantisTargetData : FGameplayAbilityTargetData {
	struct FFortMantisRootMotionWarpInfo TechniqueWarpInfo; // 0x08(0x18)
	int32_t TechniqueDataIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct MantisRuntime.FortMantisTechniqueBranch
// Size: 0x14 (Inherited: 0x00)
struct FFortMantisTechniqueBranch {
	struct FName FromTechnique; // 0x00(0x08)
	struct FName ToTechnique; // 0x08(0x08)
	enum class EFortMantisBranchPath BranchPath; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct MantisRuntime.FortMantisTechniqueData
// Size: 0xb8 (Inherited: 0x00)
struct FFortMantisTechniqueData {
	struct FName Name; // 0x00(0x08)
	bool bStartsSequence; // 0x08(0x01)
	bool bEndsSequence; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float InputWindowDelay; // 0x0c(0x04)
	struct UAnimMontage* Montage; // 0x10(0x08)
	bool bUseRootMotion; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FGameplayTagQuery ActivationTagQuery; // 0x20(0x48)
	struct FGameplayTagQuery OngoingTagQuery; // 0x68(0x48)
	struct FGameplayTag ApplicationTag; // 0xb0(0x08)
};

// ScriptStruct MantisRuntime.FortMantisMontageData
// Size: 0x18 (Inherited: 0x00)
struct FFortMantisMontageData {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

