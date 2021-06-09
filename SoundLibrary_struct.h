// Enum SoundLibrary.ESoundLibraryNotifyTriggerType
enum class ESoundLibraryNotifyTriggerType : uint8 {
	Play,
	Stop,
	None,
	ESoundLibraryNotifyTriggerType_MAX,
};

// ScriptStruct SoundLibrary.SoundLibraryPlaySoundResult
// Size: 0x30 (Inherited: 0x00)
struct FSoundLibraryPlaySoundResult {
	struct FGameplayTag EventName; // 0x00(0x08)
	bool bWasBlocked; // 0x08(0x01)
	bool bSuccess; // 0x09(0x01)
	char pad_A[0x16]; // 0x0a(0x16)
	struct TArray<struct UAudioComponent*> AudioComponents; // 0x20(0x10)
};

// ScriptStruct SoundLibrary.SoundLibraryAnimContextSettings
// Size: 0x1c (Inherited: 0x00)
struct FSoundLibraryAnimContextSettings {
	struct FFloatInterval AnimRateThreshold; // 0x00(0x08)
	struct FGameplayTag EventName; // 0x08(0x08)
	bool bAttachToActor; // 0x10(0x01)
	bool bFadeOutOnEnd; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float FadeTime; // 0x14(0x04)
	float NotifyTriggerChance; // 0x18(0x04)
};

// ScriptStruct SoundLibrary.SoundLibraryActorData
// Size: 0x38 (Inherited: 0x00)
struct FSoundLibraryActorData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct SoundLibrary.AttachedSoundLibraryContextSettings
// Size: 0x10 (Inherited: 0x00)
struct FAttachedSoundLibraryContextSettings {
	struct FGameplayTag EventName; // 0x00(0x08)
	struct FName AttachName; // 0x08(0x08)
};

// ScriptStruct SoundLibrary.SimpleSoundLibraryContextSettings
// Size: 0x0c (Inherited: 0x00)
struct FSimpleSoundLibraryContextSettings {
	struct FGameplayTag EventName; // 0x00(0x08)
	bool bIs1P; // 0x08(0x01)
	bool bForceComponentCreation; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

