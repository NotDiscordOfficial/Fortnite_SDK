// Enum GameplayMessages.EGameplayMessageMatchType
enum class EGameplayMessageMatchType : uint8 {
	ExactMatch,
	PartialMatch,
	EGameplayMessageMatchType_MAX,
};

// ScriptStruct GameplayMessages.ReplicatedMessage
// Size: 0x10 (Inherited: 0x00)
struct FReplicatedMessage {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GameplayMessages.ReplicatedMessageData
// Size: 0x18 (Inherited: 0x00)
struct FReplicatedMessageData {
	struct UScriptStruct* StructType; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct GameplayMessages.GameplayMessageReceiverData
// Size: 0xa0 (Inherited: 0x00)
struct FGameplayMessageReceiverData {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct GameplayMessages.GameplayMessageReceiverHandle
// Size: 0x20 (Inherited: 0x00)
struct FGameplayMessageReceiverHandle {
	struct TWeakObjectPtr<struct UGameplayMessageRouter> Subsystem; // 0x00(0x08)
	struct FEventMessageTag Channel; // 0x08(0x08)
	int32_t ID; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct GameplayMessages.EventMessageTag
// Size: 0x08 (Inherited: 0x08)
struct FEventMessageTag : FGameplayTag {
};

