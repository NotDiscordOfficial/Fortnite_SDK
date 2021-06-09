// Enum DynamicHUD.EDynamicHUDComparison
enum class EDynamicHUDComparison : uint8 {
	Equal,
	LessOrEqual,
	GreaterOrEqual,
	EDynamicHUDComparison_MAX,
};

// Enum DynamicHUD.EDynamicHUDOperator
enum class EDynamicHUDOperator : uint8 {
	Addition,
	Substraction,
	EDynamicHUDOperator_MAX,
};

// Enum DynamicHUD.EDynamicHUDSide
enum class EDynamicHUDSide : uint8 {
	Top,
	Bottom,
	Left,
	Right,
	EDynamicHUDSide_MAX,
};

// Enum DynamicHUD.EDynamicHUDAnchor
enum class EDynamicHUDAnchor : uint8 {
	TopLeft,
	TopCenter,
	TopRight,
	CenterLeft,
	CenterCenter,
	CenterRight,
	BottomLeft,
	BottomCenter,
	BottomRight,
	EDynamicHUDAnchor_MAX,
};

// Enum DynamicHUD.EDynamicHUDStrength
enum class EDynamicHUDStrength : uint8 {
	Weak,
	Medium,
	Strong,
	Required,
	EDynamicHUDStrength_MAX,
};

// Enum DynamicHUD.EDynamicHUDZOrder
enum class EDynamicHUDZOrder : uint8 {
	Back,
	Middle,
	Front,
	Custom,
	EDynamicHUDZOrder_MAX,
};

// ScriptStruct DynamicHUD.DirectorData
// Size: 0x38 (Inherited: 0x00)
struct FDirectorData {
	SoftClassProperty DirectorClass; // 0x00(0x28)
	struct AActor* Instance; // 0x28(0x08)
	char pad_30[0x1]; // 0x30(0x01)
	char Count; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct DynamicHUD.DynamicHUDUnallowed
// Size: 0x38 (Inherited: 0x00)
struct FDynamicHUDUnallowed {
	SoftClassProperty Widget; // 0x00(0x28)
	bool bUseUniqueID; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName UniqueId; // 0x2c(0x08)
	bool bIncludeAll; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct DynamicHUD.DynamicHUDAllowed
// Size: 0x50 (Inherited: 0x00)
struct FDynamicHUDAllowed {
	SoftClassProperty Widget; // 0x00(0x28)
	enum class EDynamicHUDZOrder ZOrder; // 0x28(0x04)
	int32_t CustomZOrder; // 0x2c(0x04)
	bool bIsUnique; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName UniqueId; // 0x34(0x08)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UDynamicHUDConstraintBase*> LayoutConstraints; // 0x40(0x10)
};

