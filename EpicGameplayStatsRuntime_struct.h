// Enum EpicGameplayStatsRuntime.EEpicLeaderboardUpdateFunction
enum class EEpicLeaderboardUpdateFunction : uint8 {
	Min,
	Max,
	Sum,
	MostRecent,
};

// Enum EpicGameplayStatsRuntime.EEpicLeaderboardTimeWindow
enum class EEpicLeaderboardTimeWindow : uint8 {
	Daily,
	Weekly,
	Monthly,
	AllTime,
	EEpicLeaderboardTimeWindow_MAX,
};

// Enum EpicGameplayStatsRuntime.EEpicLeaderboardDataType
enum class EEpicLeaderboardDataType : uint8 {
	Integer,
	Double,
	EEpicLeaderboardDataType_MAX,
};

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
// Size: 0x50 (Inherited: 0x08)
struct FGameplayStatMetadataTableRow : FTableRowBase {
	struct FString BackendName; // 0x08(0x10)
	struct FText DisplayName; // 0x18(0x18)
	struct TArray<enum class EEpicLeaderboardTimeWindow> Windows; // 0x30(0x10)
	enum class EEpicLeaderboardUpdateFunction Metric; // 0x40(0x01)
	enum class EEpicLeaderboardDataType DataType; // 0x41(0x01)
	bool bPublish; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	int32_t WeeklyRefreshInterval; // 0x44(0x04)
	bool bExportToBackEnd; // 0x48(0x01)
	bool bShowInFrontEnd; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct EpicGameplayStatsRuntime.GameplayStatTag
// Size: 0x10 (Inherited: 0x08)
struct FGameplayStatTag : FGameplayTag {
	struct FGameplayTag Tag; // 0x08(0x08)
};

// ScriptStruct EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
// Size: 0x10 (Inherited: 0x00)
struct FManagedGameplayTagDataTableItem {
	struct FGameplayTag RootTag; // 0x00(0x08)
	struct UDataTable* DataTable; // 0x08(0x08)
};

// ScriptStruct EpicGameplayStatsRuntime.TagTableManagerHelper
// Size: 0x01 (Inherited: 0x00)
struct FTagTableManagerHelper {
	char pad_0[0x1]; // 0x00(0x01)
};

