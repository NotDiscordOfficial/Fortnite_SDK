// Enum FortniteConversationRuntime.EInteractionRange
enum class EInteractionRange : uint8 {
	Preview,
	Interaction,
	EInteractionRange_MAX,
};

// ScriptStruct FortniteConversationRuntime.FortConversationNodeConditionalMessages
// Size: 0x10 (Inherited: 0x00)
struct FFortConversationNodeConditionalMessages {
	struct TArray<struct FFortConversationConditionalMessage> Messages; // 0x00(0x10)
};

// ScriptStruct FortniteConversationRuntime.FortConversationConditionalMessage
// Size: 0x20 (Inherited: 0x00)
struct FFortConversationConditionalMessage {
	struct UFortConversationContextCondition* Condition; // 0x00(0x08)
	struct FText Message; // 0x08(0x18)
};

