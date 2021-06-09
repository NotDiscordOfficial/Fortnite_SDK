// Enum CommonConversationRuntime.EConversationTaskResultType
enum class EConversationTaskResultType : uint8 {
	Invalid,
	AbortConversation,
	AdvanceConversation,
	AdvanceConversationWithChoice,
	PauseConversationAndSendClientChoices,
	ReturnToLastClientChoice,
	ReturnToCurrentClientChoice,
	ReturnToConversationStart,
	EConversationTaskResultType_MAX,
};

// Enum CommonConversationRuntime.EConversationRequirementResult
enum class EConversationRequirementResult : uint8 {
	Passed,
	FailedButVisible,
	FailedAndHidden,
	EConversationRequirementResult_MAX,
};

// Enum CommonConversationRuntime.EConversationChoiceType
enum class EConversationChoiceType : uint8 {
	ServerOnly,
	UserChoiceAvailable,
	UserChoiceUnavailable,
	EConversationChoiceType_MAX,
};

// ScriptStruct CommonConversationRuntime.ConversationContext
// Size: 0x38 (Inherited: 0x00)
struct FConversationContext {
	struct UConversationRegistry* ConversationRegistry; // 0x00(0x08)
	struct UConversationInstance* ActiveConversation; // 0x08(0x08)
	struct UConversationParticipantComponent* ClientParticipant; // 0x10(0x08)
	struct UConversationTaskNode* TaskBeingConsidered; // 0x18(0x08)
	struct TArray<struct FConversationNodeHandle> ReturnScopeStack; // 0x20(0x10)
	bool bServer; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct CommonConversationRuntime.ConversationNodeHandle
// Size: 0x10 (Inherited: 0x00)
struct FConversationNodeHandle {
	struct FGuid NodeGUID; // 0x00(0x10)
};

// ScriptStruct CommonConversationRuntime.ConversationTaskResult
// Size: 0x70 (Inherited: 0x00)
struct FConversationTaskResult {
	enum class EConversationTaskResultType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FAdvanceConversationRequest AdvanceToChoice; // 0x08(0x30)
	struct FClientConversationMessage Message; // 0x38(0x38)
};

// ScriptStruct CommonConversationRuntime.ClientConversationMessage
// Size: 0x38 (Inherited: 0x00)
struct FClientConversationMessage {
	struct FGameplayTag SpeakerID; // 0x00(0x08)
	struct FText ParticipantDisplayName; // 0x08(0x18)
	struct FText Text; // 0x20(0x18)
};

// ScriptStruct CommonConversationRuntime.AdvanceConversationRequest
// Size: 0x30 (Inherited: 0x00)
struct FAdvanceConversationRequest {
	struct FConversationChoiceReference Choice; // 0x00(0x20)
	struct TArray<struct FConversationNodeParameterPair> UserParameters; // 0x20(0x10)
};

// ScriptStruct CommonConversationRuntime.ConversationNodeParameterPair
// Size: 0x20 (Inherited: 0x00)
struct FConversationNodeParameterPair {
	struct FString Name; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct CommonConversationRuntime.ConversationChoiceReference
// Size: 0x20 (Inherited: 0x00)
struct FConversationChoiceReference {
	struct FConversationNodeHandle NodeReference; // 0x00(0x10)
	struct TArray<struct FConversationNodeParameterPair> NodeParameters; // 0x10(0x10)
};

// ScriptStruct CommonConversationRuntime.CommonDialogueBankParticipant
// Size: 0x30 (Inherited: 0x00)
struct FCommonDialogueBankParticipant {
	struct FText FallbackName; // 0x00(0x18)
	struct FGameplayTag ParticipantName; // 0x18(0x08)
	struct FLinearColor NodeTint; // 0x20(0x10)
};

// ScriptStruct CommonConversationRuntime.ConversationEntryList
// Size: 0x18 (Inherited: 0x00)
struct FConversationEntryList {
	struct FGameplayTag EntryTag; // 0x00(0x08)
	struct TArray<struct FGuid> DestinationList; // 0x08(0x10)
};

// ScriptStruct CommonConversationRuntime.NetSerializeScriptStructCache_ConvVersion
// Size: 0x60 (Inherited: 0x00)
struct FNetSerializeScriptStructCache_ConvVersion {
	struct TMap<struct UScriptStruct*, int32_t> ScriptStructsToIndex; // 0x00(0x50)
	struct TArray<struct UScriptStruct*> IndexToScriptStructs; // 0x50(0x10)
};

// ScriptStruct CommonConversationRuntime.ClientConversationMessagePayload
// Size: 0x68 (Inherited: 0x00)
struct FClientConversationMessagePayload {
	struct FClientConversationMessage Message; // 0x00(0x38)
	struct FConversationParticipants Participants; // 0x38(0x10)
	struct FConversationNodeHandle CurrentNode; // 0x48(0x10)
	struct TArray<struct FClientConversationOptionEntry> Options; // 0x58(0x10)
};

// ScriptStruct CommonConversationRuntime.ClientConversationOptionEntry
// Size: 0x70 (Inherited: 0x00)
struct FClientConversationOptionEntry {
	struct FText ChoiceText; // 0x00(0x18)
	struct FGameplayTagContainer ChoiceTags; // 0x18(0x20)
	enum class EConversationChoiceType ChoiceType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FConversationChoiceReference ChoiceReference; // 0x40(0x20)
	struct TArray<struct FConversationNodeParameterPair> ExtraData; // 0x60(0x10)
};

// ScriptStruct CommonConversationRuntime.ConversationParticipants
// Size: 0x10 (Inherited: 0x00)
struct FConversationParticipants {
	struct TArray<struct FConversationParticipantEntry> List; // 0x00(0x10)
};

// ScriptStruct CommonConversationRuntime.ConversationParticipantEntry
// Size: 0x10 (Inherited: 0x00)
struct FConversationParticipantEntry {
	struct AActor* Actor; // 0x00(0x08)
	struct FGameplayTag ParticipantID; // 0x08(0x08)
};

// ScriptStruct CommonConversationRuntime.ConversationBranchPoint
// Size: 0x80 (Inherited: 0x00)
struct FConversationBranchPoint {
	struct TArray<struct FConversationNodeHandle> ReturnScopeStack; // 0x00(0x10)
	struct FClientConversationOptionEntry ClientChoice; // 0x10(0x70)
};

// ScriptStruct CommonConversationRuntime.ConversationChoiceDataHandle
// Size: 0x20 (Inherited: 0x00)
struct FConversationChoiceDataHandle {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct CommonConversationRuntime.ConversationChoiceData
// Size: 0x08 (Inherited: 0x00)
struct FConversationChoiceData {
	char pad_0[0x8]; // 0x00(0x08)
};

