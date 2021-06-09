// Enum SubtitlesWidgets.ESubtitleDisplayBackgroundOpacity
enum class ESubtitleDisplayBackgroundOpacity : uint8 {
	Clear,
	Low,
	Medium,
	High,
	Solid,
	ESubtitleDisplayBackgroundOpacity_MAX,
};

// Enum SubtitlesWidgets.ESubtitleDisplayTextBorder
enum class ESubtitleDisplayTextBorder : uint8 {
	None,
	Outline,
	DropShadow,
	ESubtitleDisplayTextBorder_MAX,
};

// Enum SubtitlesWidgets.ESubtitleDisplayTextColor
enum class ESubtitleDisplayTextColor : uint8 {
	White,
	Yellow,
	ESubtitleDisplayTextColor_MAX,
};

// Enum SubtitlesWidgets.ESubtitleDisplayTextSize
enum class ESubtitleDisplayTextSize : uint8 {
	ExtraSmall,
	Small,
	Medium,
	Large,
	ExtraLarge,
	ESubtitleDisplayTextSize_MAX,
};

// ScriptStruct SubtitlesWidgets.SubtitleFormat
// Size: 0x04 (Inherited: 0x00)
struct FSubtitleFormat {
	enum class ESubtitleDisplayTextSize SubtitleTextSize; // 0x00(0x01)
	enum class ESubtitleDisplayTextColor SubtitleTextColor; // 0x01(0x01)
	enum class ESubtitleDisplayTextBorder SubtitleTextBorder; // 0x02(0x01)
	enum class ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity; // 0x03(0x01)
};

