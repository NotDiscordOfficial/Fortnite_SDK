// Enum NVIDIAGfeSDK.EGfeSDKHighlightSignificance
enum class EGfeSDKHighlightSignificance : uint8 {
	NONE,
	ExtremelyBad,
	VeryBad,
	Bad,
	Neutral,
	Good,
	VeryGood,
	ExtremelyGood,
	MAX,
};

// Enum NVIDIAGfeSDK.EGfeSDKHighlightType
enum class EGfeSDKHighlightType : uint8 {
	NONE,
	Milestone,
	Achievement,
	Incident,
	StateChange,
	MAX,
};

// Enum NVIDIAGfeSDK.EGfeSDKPermission
enum class EGfeSDKPermission : uint8 {
	Granted,
	Denied,
	MustAsk,
	Unknown,
	MAX,
};

// Enum NVIDIAGfeSDK.EGfeSDKScope
enum class EGfeSDKScope : uint8 {
	Highlights,
	HighlightsRecordVideo,
	HighlightsRecordScreenshot,
	MAX,
};

// Enum NVIDIAGfeSDK.EGfeSDKReturnCode
enum class EGfeSDKReturnCode : uint8 {
	Success,
	SuccessIpcOldSdk,
	SuccessIpcOldGfe,
	Error,
	ErrorGfeVersion,
	ErrorSdkVersion,
	ErrorModuleNotLoaded,
	EGfeSDKReturnCode_MAX,
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
// Size: 0x10 (Inherited: 0x00)
struct FGfeSDKHighlightSummaryParams {
	struct TArray<struct FGfeSDKHighlightGroupView> GroupViews; // 0x00(0x10)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightGroupView
// Size: 0x18 (Inherited: 0x00)
struct FGfeSDKHighlightGroupView {
	struct FString GroupId; // 0x00(0x10)
	enum class EGfeSDKHighlightType TagsFilter; // 0x10(0x01)
	enum class EGfeSDKHighlightSignificance SignificanceFilter; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightVideoParams
// Size: 0x28 (Inherited: 0x00)
struct FGfeSDKHighlightVideoParams {
	struct FString GroupId; // 0x00(0x10)
	struct FString HighlightId; // 0x10(0x10)
	int32_t StartDelta; // 0x20(0x04)
	int32_t EndDelta; // 0x24(0x04)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
// Size: 0x20 (Inherited: 0x00)
struct FGfeSDKHighlightScreenshotParams {
	struct FString GroupId; // 0x00(0x10)
	struct FString HighlightId; // 0x10(0x10)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
// Size: 0x18 (Inherited: 0x00)
struct FGfeSDKHighlightCloseGroupParams {
	struct FString GroupId; // 0x00(0x10)
	bool DestroyHighlights; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
// Size: 0x60 (Inherited: 0x00)
struct FGfeSDKHighlightOpenGroupParams {
	struct FString GroupId; // 0x00(0x10)
	struct TMap<struct FString, struct FString> GroupDescriptionTranslationTable; // 0x10(0x50)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKPermissionsChangedData
// Size: 0x50 (Inherited: 0x00)
struct FGfeSDKPermissionsChangedData {
	struct TMap<enum class EGfeSDKScope, enum class EGfeSDKPermission> ScopePermissions; // 0x00(0x50)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
// Size: 0x10 (Inherited: 0x00)
struct FGfeSDKRequestPermissionsParams {
	struct TArray<enum class EGfeSDKScope> Scopes; // 0x00(0x10)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightConfigParams
// Size: 0x20 (Inherited: 0x00)
struct FGfeSDKHighlightConfigParams {
	struct TArray<struct FGfeSDKHighlightDefinition> HighlightDefinitions; // 0x00(0x10)
	struct FString DefaultLocale; // 0x10(0x10)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightDefinition
// Size: 0x68 (Inherited: 0x00)
struct FGfeSDKHighlightDefinition {
	struct FString ID; // 0x00(0x10)
	bool UserDefaultInterest; // 0x10(0x01)
	enum class EGfeSDKHighlightType HighlightTags; // 0x11(0x01)
	enum class EGfeSDKHighlightSignificance Significance; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TMap<struct FString, struct FString> NameTranslationTable; // 0x18(0x50)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateResponse
// Size: 0x68 (Inherited: 0x00)
struct FGfeSDKCreateResponse {
	uint16_t VersionMajor; // 0x00(0x02)
	uint16_t VersionMinor; // 0x02(0x02)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString NVIDIAGfeVersion; // 0x08(0x10)
	struct TMap<enum class EGfeSDKScope, enum class EGfeSDKPermission> ScopePermissions; // 0x18(0x50)
};

// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateInputParams
// Size: 0x28 (Inherited: 0x00)
struct FGfeSDKCreateInputParams {
	struct FString AppName; // 0x00(0x10)
	struct TArray<enum class EGfeSDKScope> RequiredScopes; // 0x10(0x10)
	bool PollForCallbacks; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

