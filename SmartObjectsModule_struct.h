// Enum SmartObjectsModule.ESmartObjectTagPolicy
enum class ESmartObjectTagPolicy : uint8 {
	Any,
	All,
	MAX,
};

// Enum SmartObjectsModule.ESOReferenceDrawingMode
enum class ESOReferenceDrawingMode : uint8 {
	Default,
	Sequence,
	MAX,
};

// Enum SmartObjectsModule.ESmartObjectRequiredTagsPolicy
enum class ESmartObjectRequiredTagsPolicy : uint8 {
	RequireAny,
	RequireAnyExact,
	RequireAll,
	RequireAllExact,
	RequireNone,
	ESmartObjectRequiredTagsPolicy_MAX,
};

// Enum SmartObjectsModule.ESmartObjectSlotState
enum class ESmartObjectSlotState : uint8 {
	Free,
	Claimed,
	Occupied,
	MAX,
};

// ScriptStruct SmartObjectsModule.SmartObjectUseConfig
// Size: 0xd0 (Inherited: 0x00)
struct FSmartObjectUseConfig {
	struct FGameplayTagQuery AvatarTagFilter; // 0x00(0x48)
	struct FGameplayTagQuery ObjectTagFilter; // 0x48(0x48)
	struct FGameplayTagContainer ActivityTags; // 0x90(0x20)
	struct TArray<struct FSmartObjectSlot> Slots; // 0xb0(0x10)
	struct UGameplayBehaviorConfig* DefaultBehavior; // 0xc0(0x08)
	uint32_t MaxConcurrentUsers; // 0xc8(0x04)
	uint32_t DefaultExecutionPriority; // 0xcc(0x04)
};

// ScriptStruct SmartObjectsModule.SmartObjectSlot
// Size: 0x20 (Inherited: 0x00)
struct FSmartObjectSlot {
	struct FVector Offset; // 0x00(0x0c)
	struct FVector Direction; // 0x0c(0x0c)
	struct UGameplayBehaviorConfig* BehaviorConfig; // 0x18(0x08)
};

// ScriptStruct SmartObjectsModule.SmartObjectRuntime
// Size: 0x28 (Inherited: 0x00)
struct FSmartObjectRuntime {
	struct USmartObjectComponent* SOComponent; // 0x00(0x08)
	struct TScriptInterface<None> AsRichSO; // 0x08(0x10)
	struct TArray<struct FSmartObjectUse> ActiveUses; // 0x18(0x10)
};

// ScriptStruct SmartObjectsModule.SmartObjectUse
// Size: 0x30 (Inherited: 0x00)
struct FSmartObjectUse {
	char pad_0[0x8]; // 0x00(0x08)
	struct FSmartObjectExecutionSlot Slot; // 0x08(0x20)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct SmartObjectsModule.SmartObjectExecutionSlot
// Size: 0x20 (Inherited: 0x00)
struct FSmartObjectExecutionSlot {
	enum class ESmartObjectSlotState State; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* UserAvatar; // 0x08(0x08)
	struct UGameplayBehavior* AssignedBehavior; // 0x10(0x08)
	int32_t SlotIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct SmartObjectsModule.SmartObjectID
// Size: 0x04 (Inherited: 0x00)
struct FSmartObjectID {
	char pad_0[0x4]; // 0x00(0x04)
};

