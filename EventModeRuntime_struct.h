// Enum EventModeRuntime.EFortEventModeEmoteToPlay
enum class EFortEventModeEmoteToPlay : uint8 {
	Emote1,
	Emote2,
	Emote3,
	RandomEmote,
	QuickEmotes,
	EFortEventModeEmoteToPlay_MAX,
};

// ScriptStruct EventModeRuntime.EventModeWidgetCachedData
// Size: 0x0c (Inherited: 0x00)
struct FEventModeWidgetCachedData {
	enum class EUIExtensionSlot Slot; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct TWeakObjectPtr<struct UUserWidget> Widget; // 0x04(0x08)
};

// ScriptStruct EventModeRuntime.EventModeFocusActor
// Size: 0x40 (Inherited: 0x00)
struct FEventModeFocusActor {
	struct TSoftObjectPtr<struct AActor> Target; // 0x00(0x28)
	float Distance; // 0x28(0x04)
	struct FVector Offset; // 0x2c(0x0c)
	float FOV; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

