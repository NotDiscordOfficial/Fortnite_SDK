// Enum EpicCMSUIFramework.EDateType
enum class EDateType : uint8 {
	None,
	Coming,
	Ending,
	EDateType_MAX,
};

// ScriptStruct EpicCMSUIFramework.SlotDescription
// Size: 0x14 (Inherited: 0x00)
struct FSlotDescription {
	struct FName SlotName; // 0x00(0x08)
	int32_t ColumnCount; // 0x08(0x04)
	int32_t RowCount; // 0x0c(0x04)
	bool bUseFeaturedTextStyle; // 0x10(0x01)
	bool bEnableAutoScroll; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct EpicCMSUIFramework.EpicCMSTileTypeMapping
// Size: 0x30 (Inherited: 0x08)
struct FEpicCMSTileTypeMapping : FTableRowBase {
	SoftClassProperty TileClass; // 0x08(0x28)
};

// ScriptStruct EpicCMSUIFramework.EpicCMSPage
// Size: 0x70 (Inherited: 0x00)
struct FEpicCMSPage {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct EpicCMSUIFramework.EpicCMSLayoutTypeMapping
// Size: 0x30 (Inherited: 0x08)
struct FEpicCMSLayoutTypeMapping : FTableRowBase {
	SoftClassProperty LayoutType; // 0x08(0x28)
};

// ScriptStruct EpicCMSUIFramework.TileDefinition
// Size: 0x88 (Inherited: 0x00)
struct FTileDefinition {
	struct FString TypeString; // 0x00(0x10)
	struct FString Title; // 0x10(0x10)
	struct FString Subtitle; // 0x20(0x10)
	struct FString Eyebrow; // 0x30(0x10)
	struct FString Link; // 0x40(0x10)
	struct FString GroupId; // 0x50(0x10)
	struct FDateTime Countdown; // 0x60(0x08)
	enum class EDateType CountdownType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString MediaUrl; // 0x70(0x10)
	bool IsVisible; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

