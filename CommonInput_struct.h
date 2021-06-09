// Enum CommonInput.ECommonInputType
enum class ECommonInputType : uint8 {
	MouseAndKeyboard,
	Gamepad,
	Touch,
	Count,
	ECommonInputType_MAX,
};

// ScriptStruct CommonInput.CommonInputPlatformBaseData
// Size: 0x38 (Inherited: 0x00)
struct FCommonInputPlatformBaseData {
	char pad_0[0x8]; // 0x00(0x08)
	bool bSupported; // 0x08(0x01)
	enum class ECommonInputType DefaultInputType; // 0x09(0x01)
	bool bSupportsMouseAndKeyboard; // 0x0a(0x01)
	bool bSupportsGamepad; // 0x0b(0x01)
	struct FName DefaultGamepadName; // 0x0c(0x08)
	bool bCanChangeGamepadType; // 0x14(0x01)
	bool bSupportsTouch; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct TArray<SoftClassProperty> ControllerData; // 0x18(0x10)
	struct TArray<struct UCommonInputBaseControllerData*> ControllerDataClasses; // 0x28(0x10)
};

// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
// Size: 0x98 (Inherited: 0x00)
struct FCommonInputKeySetBrushConfiguration {
	struct TArray<struct FKey> Keys; // 0x00(0x10)
	struct FSlateBrush KeyBrush; // 0x10(0x88)
};

// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
// Size: 0xa0 (Inherited: 0x00)
struct FCommonInputKeyBrushConfiguration {
	struct FKey Key; // 0x00(0x18)
	struct FSlateBrush KeyBrush; // 0x18(0x88)
};

