// Enum DataAssetDirectory.EDataAssetDirectoryUpdateStatus
enum class EDataAssetDirectoryUpdateStatus : uint8 {
	Failed,
	Success,
	SuccessNoChange,
	EDataAssetDirectoryUpdateStatus_MAX,
};

// Enum DataAssetDirectory.EDataAssetDirectoryTestEnum
enum class EDataAssetDirectoryTestEnum : uint8 {
	A,
	B,
	C,
	D,
	EDataAssetDirectoryTestEnum_MAX,
};

// ScriptStruct DataAssetDirectory.DataAssetDirectoryTestSimpleStruct
// Size: 0x04 (Inherited: 0x00)
struct FDataAssetDirectoryTestSimpleStruct {
	int32_t IntProperty; // 0x00(0x04)
};

// ScriptStruct DataAssetDirectory.DataAssetDirectoryTestPODStruct
// Size: 0x40 (Inherited: 0x00)
struct FDataAssetDirectoryTestPODStruct {
	enum class EDataAssetDirectoryTestEnum EnumProperty; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t IntProperty; // 0x04(0x04)
	float FloatProperty; // 0x08(0x04)
	bool BoolProperty; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString StringProperty; // 0x10(0x10)
	struct FName NameProperty; // 0x20(0x08)
	struct FText TextProperty; // 0x28(0x18)
};

