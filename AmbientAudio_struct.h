// Enum AmbientAudio.EAmbientAudioTagActionType
enum class EAmbientAudioTagActionType : uint8 {
	Added,
	Removed,
	Count,
	EAmbientAudioTagActionType_MAX,
};

// Enum AmbientAudio.EAmbientAudioEntryActionType
enum class EAmbientAudioEntryActionType : uint8 {
	Added,
	Updated,
	Removed,
	Count,
	EAmbientAudioEntryActionType_MAX,
};

// ScriptStruct AmbientAudio.AmbientProxy
// Size: 0x18 (Inherited: 0x00)
struct FAmbientProxy {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct AmbientAudio.AmbientAudioBase
// Size: 0x70 (Inherited: 0x00)
struct FAmbientAudioBase {
	struct TSoftObjectPtr<struct USoundBase> sound; // 0x00(0x28)
	struct FGameplayTagQuery Requirements; // 0x28(0x48)
};

// ScriptStruct AmbientAudio.AmbientAudioOneShot
// Size: 0x80 (Inherited: 0x70)
struct FAmbientAudioOneShot : FAmbientAudioBase {
	struct FVector2D RetriggerTimeRange; // 0x70(0x08)
	struct FVector2D TriggerDistanceRange; // 0x78(0x08)
};

// ScriptStruct AmbientAudio.AmbientAudioLoop
// Size: 0x70 (Inherited: 0x70)
struct FAmbientAudioLoop : FAmbientAudioBase {
};

