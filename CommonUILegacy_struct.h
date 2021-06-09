// Enum CommonUILegacy.EOperation
enum class EOperation : uint8 {
	Intro,
	Outro,
	Push,
	Pop,
	Invalid,
	EOperation_MAX,
};

// Enum CommonUILegacy.ECommonGamepadType
enum class ECommonGamepadType : uint8 {
	XboxOneController,
	PS4Controller,
	SwitchController,
	GenericController,
	XboxSeriesXController,
	PS5Controller,
	Count,
	ECommonGamepadType_MAX,
};

// Enum CommonUILegacy.ECommonPlatformType
enum class ECommonPlatformType : uint8 {
	PC,
	Mac,
	PS4,
	XBox,
	IOS,
	Android,
	Switch,
	XSX,
	PS5,
	Count,
	ECommonPlatformType_MAX,
};

// ScriptStruct CommonUILegacy.Operation
// Size: 0x28 (Inherited: 0x00)
struct FOperation {
	enum class EOperation Operation; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UCommonActivatablePanelLegacy* Panel; // 0x08(0x08)
	bool bIntroPanel; // 0x10(0x01)
	bool bActivatePanel; // 0x11(0x01)
	bool bOutroPanelBelow; // 0x12(0x01)
	char pad_13[0x15]; // 0x13(0x15)
};

// ScriptStruct CommonUILegacy.CommonInputActionData
// Size: 0x6c0 (Inherited: 0x280)
struct FCommonInputActionData : FCommonInputActionDataBase {
	struct TMap<enum class ECommonGamepadType, struct FCommonInputTypeInfo> GamepadInputTypeInfoOverrides; // 0x280(0x50)
	struct FCommonInputTypeInfo GamepadInputTypeInfos[0x6]; // 0x2d0(0x3f0)
};

