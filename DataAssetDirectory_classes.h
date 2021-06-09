// Class DataAssetDirectory.DataAssetDirectoryManager
// Size: 0x198 (Inherited: 0x28)
struct UDataAssetDirectoryManager : UObject {
	char pad_28[0x158]; // 0x28(0x158)
	struct FDateTime LastUpdateCheck; // 0x180(0x08)
	bool bUpdateCheckPending; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	uint32_t UpdateCheckLimitSeconds; // 0x18c(0x04)
	bool bEnabled; // 0x190(0x01)
	bool bFailOnError; // 0x191(0x01)
	bool bAnalyticsEnabled; // 0x192(0x01)
	char pad_193[0x5]; // 0x193(0x05)
};

// Class DataAssetDirectory.DataAssetDirectoryPatcher
// Size: 0x28 (Inherited: 0x28)
struct UDataAssetDirectoryPatcher : UObject {
};

// Class DataAssetDirectory.DataAssetDirectorySimpleObject
// Size: 0x30 (Inherited: 0x28)
struct UDataAssetDirectorySimpleObject : UObject {
	int32_t IntProperty; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class DataAssetDirectory.DataAssetDirectoryTestPODAsset
// Size: 0x78 (Inherited: 0x28)
struct UDataAssetDirectoryTestPODAsset : UObject {
	struct FString AssetName; // 0x28(0x10)
	enum class EDataAssetDirectoryTestEnum EnumProperty; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t IntProperty; // 0x3c(0x04)
	float FloatProperty; // 0x40(0x04)
	bool BoolProperty; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FString StringProperty; // 0x48(0x10)
	struct FName NameProperty; // 0x58(0x08)
	struct FText TextProperty; // 0x60(0x18)
};

// Class DataAssetDirectory.DataAssetDirectoryTestStructAsset
// Size: 0x68 (Inherited: 0x28)
struct UDataAssetDirectoryTestStructAsset : UObject {
	struct FDataAssetDirectoryTestPODStruct TestStruct; // 0x28(0x40)
};

// Class DataAssetDirectory.DataAssetDirectoryTestArrayAsset
// Size: 0x48 (Inherited: 0x28)
struct UDataAssetDirectoryTestArrayAsset : UObject {
	struct TArray<int32_t> IntArray; // 0x28(0x10)
	struct TArray<struct FDataAssetDirectoryTestSimpleStruct> SimpleStructArray; // 0x38(0x10)
};

// Class DataAssetDirectory.DataAssetDirectoryTestObjectAsset
// Size: 0x30 (Inherited: 0x28)
struct UDataAssetDirectoryTestObjectAsset : UObject {
	struct UDataAssetDirectorySimpleObject* SimpleObject; // 0x28(0x08)
};

// Class DataAssetDirectory.DataAssetDirectoryTestMapAsset
// Size: 0x118 (Inherited: 0x28)
struct UDataAssetDirectoryTestMapAsset : UObject {
	struct TMap<struct FString, int32_t> StringIntMap; // 0x28(0x50)
	struct TMap<struct FString, int32_t> ShrinkStringIntMap; // 0x78(0x50)
	struct TMap<struct FString, int32_t> GrowStringIntMap; // 0xc8(0x50)
};

