// Enum VerseFortnite.EPlayerSettingStateInternal
enum class EPlayerSettingStateInternal : uint8 {
	PlayerUseDefault,
	PlayerIsAllowed,
	PlayerIsDisallowed,
	EPlayerSettingStateInternal_MAX,
};

// ScriptStruct VerseFortnite.ActiveSoundInfo
// Size: 0x08 (Inherited: 0x00)
struct FActiveSoundInfo {
	bool bActive; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StartTime; // 0x04(0x04)
};

// ScriptStruct VerseFortnite.DatastoreState
// Size: 0x128 (Inherited: 0x108)
struct FDatastoreState : FFastArraySerializer {
	char pad_108[0x8]; // 0x108(0x08)
	struct TArray<struct FDatastoreEntry> EntriesArray; // 0x110(0x10)
	struct UDatastoreComponentBase* OwningComponent; // 0x120(0x08)
};

// ScriptStruct VerseFortnite.DatastoreEntry
// Size: 0x28 (Inherited: 0x0c)
struct FDatastoreEntry : FFastArraySerializerItem {
	struct FName KeyName; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ValueData; // 0x18(0x10)
};

// ScriptStruct VerseFortnite.DynamicHUDPulseEvent
// Size: 0x08 (Inherited: 0x00)
struct FDynamicHUDPulseEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct VerseFortnite.PlayerScore
// Size: 0x38 (Inherited: 0x00)
struct FPlayerScore {
	struct FUniqueNetIdRepl Player; // 0x00(0x28)
	uint32_t Eliminations; // 0x28(0x04)
	uint32_t Wins; // 0x2c(0x04)
	uint32_t Points; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct VerseFortnite.VerseActionMappingArray
// Size: 0x120 (Inherited: 0x108)
struct FVerseActionMappingArray : FFastArraySerializer {
	struct TArray<struct FVerseActionMapping> ActionMappingArray; // 0x108(0x10)
	struct UVerseFortniteInputComponentBase* OwningComponent; // 0x118(0x08)
};

// ScriptStruct VerseFortnite.VerseActionMapping
// Size: 0x38 (Inherited: 0x0c)
struct FVerseActionMapping : FFastArraySerializerItem {
	struct FName Name; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UIText; // 0x18(0x10)
	struct TArray<struct FKey> Keys; // 0x28(0x10)
};

