// Enum DataRegistry.EDataRegistryAcquireStatus
enum class EDataRegistryAcquireStatus : uint8 {
	NotStarted,
	WaitingForInitialAcquire,
	InitialAcquireFinished,
	WaitingForResources,
	AcquireFinished,
	AcquireError,
	DoesNotExist,
	EDataRegistryAcquireStatus_MAX,
};

// Enum DataRegistry.EMetaDataRegistrySourceAssetUsage
enum class EMetaDataRegistrySourceAssetUsage : uint8 {
	NoAssets,
	SearchAssets,
	RegisterAssets,
	SearchAndRegisterAssets,
	EMetaDataRegistrySourceAssetUsage_MAX,
};

// Enum DataRegistry.EDataRegistrySubsystemGetItemResult
enum class EDataRegistrySubsystemGetItemResult : uint8 {
	Found,
	NotFound,
	EDataRegistrySubsystemGetItemResult_MAX,
};

// Enum DataRegistry.EDataRegistryAvailability
enum class EDataRegistryAvailability : uint8 {
	DoesNotExist,
	Unknown,
	Remote,
	OnDisk,
	LocalAsset,
	PreCached,
	EDataRegistryAvailability_MAX,
};

// ScriptStruct DataRegistry.DataRegistryLookup
// Size: 0x20 (Inherited: 0x00)
struct FDataRegistryLookup {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct DataRegistry.DataRegistryId
// Size: 0x10 (Inherited: 0x00)
struct FDataRegistryId {
	struct FDataRegistryType RegistryType; // 0x00(0x08)
	struct FName ItemName; // 0x08(0x08)
};

// ScriptStruct DataRegistry.DataRegistryType
// Size: 0x08 (Inherited: 0x00)
struct FDataRegistryType {
	struct FName Name; // 0x00(0x08)
};

// ScriptStruct DataRegistry.DataRegistrySource_DataTableRules
// Size: 0x08 (Inherited: 0x00)
struct FDataRegistrySource_DataTableRules {
	bool bPrecacheTable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CachedTableKeepSeconds; // 0x04(0x04)
};

// ScriptStruct DataRegistry.DataRegistrySourceItemId
// Size: 0x40 (Inherited: 0x00)
struct FDataRegistrySourceItemId {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct DataRegistry.DataRegistryCachePolicy
// Size: 0x14 (Inherited: 0x00)
struct FDataRegistryCachePolicy {
	bool bCacheIsAlwaysVolatile; // 0x00(0x01)
	bool bUseCurveTableCacheVersion; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MinNumberKept; // 0x04(0x04)
	int32_t MaxNumberKept; // 0x08(0x04)
	float ForceKeepSeconds; // 0x0c(0x04)
	float ForceReleaseSeconds; // 0x10(0x04)
};

// ScriptStruct DataRegistry.DataRegistryIdFormat
// Size: 0x08 (Inherited: 0x00)
struct FDataRegistryIdFormat {
	struct FGameplayTag BaseGameplayTag; // 0x00(0x08)
};

