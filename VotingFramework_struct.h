// Enum VotingFramework.EVoteSessionState
enum class EVoteSessionState : uint8 {
	None,
	Setup,
	Voting,
	Complete,
	Shutdown,
	EVoteSessionState_MAX,
};

// Enum VotingFramework.EVoteSessionNetworkType
enum class EVoteSessionNetworkType : uint8 {
	NotDetermined,
	DedicatedServer,
	MeshNetwork,
	EVoteSessionNetworkType_MAX,
};

// Enum VotingFramework.EVoteState
enum class EVoteState : uint8 {
	None,
	Setup,
	Active,
	Completed,
	EVoteState_MAX,
};

// ScriptStruct VotingFramework.VoteSessionRuntimeArray
// Size: 0x120 (Inherited: 0x108)
struct FVoteSessionRuntimeArray : FFastArraySerializer {
	struct UWorld* WorldRef; // 0x108(0x08)
	struct TArray<struct FVoteSessionRuntime> VotingSessions; // 0x110(0x10)
};

// ScriptStruct VotingFramework.VoteSessionRuntime
// Size: 0x30 (Inherited: 0x0c)
struct FVoteSessionRuntime : FFastArraySerializerItem {
	struct FName VoteSessionId; // 0x0c(0x08)
	enum class EVoteSessionNetworkType NetworkType; // 0x14(0x01)
	enum class EVoteSessionState VoteSessionState; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FName CurrentVoteId; // 0x18(0x08)
	struct UWorld* WorldRef; // 0x20(0x08)
	enum class EVoteSessionState Shadow_VoteSessionState; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct VotingFramework.VoteRuntimeArray
// Size: 0x120 (Inherited: 0x108)
struct FVoteRuntimeArray : FFastArraySerializer {
	struct UWorld* WorldRef; // 0x108(0x08)
	struct TArray<struct FVoteRuntime> VotingResults; // 0x110(0x10)
};

// ScriptStruct VotingFramework.VoteRuntime
// Size: 0x50 (Inherited: 0x0c)
struct FVoteRuntime : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct UWorld* WorldRef; // 0x10(0x08)
	struct FName VoteSessionId; // 0x18(0x08)
	struct FName VoteId; // 0x20(0x08)
	struct TArray<struct FName> VoteSelectionIds; // 0x28(0x10)
	enum class EVoteState VoteState; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName VoteSelectionWinningResult; // 0x3c(0x08)
	struct FName Shadow_VoteSelectionWinningResult; // 0x44(0x08)
	enum class EVoteState Shadow_VoteState; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct VotingFramework.VoteSelectionResultsArray
// Size: 0x120 (Inherited: 0x108)
struct FVoteSelectionResultsArray : FFastArraySerializer {
	struct UWorld* WorldRef; // 0x108(0x08)
	struct TArray<struct FVoteSelectionResults> VoteSelectionResults; // 0x110(0x10)
};

// ScriptStruct VotingFramework.VoteSelectionResults
// Size: 0x40 (Inherited: 0x0c)
struct FVoteSelectionResults : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct UWorld* WorldRef; // 0x10(0x08)
	struct FName VoteSessionId; // 0x18(0x08)
	struct FName VoteId; // 0x20(0x08)
	struct FName VoteSelectionId; // 0x28(0x08)
	int32_t ServerVoteTotal; // 0x30(0x04)
	int32_t AllServersVoteTotal; // 0x34(0x04)
	int32_t Shadow_ServerVoteTotal; // 0x38(0x04)
	int32_t Shadow_AllServersVoteTotal; // 0x3c(0x04)
};

// ScriptStruct VotingFramework.VoteSessionSettings
// Size: 0x38 (Inherited: 0x00)
struct FVoteSessionSettings {
	struct FGameplayTag VoteSessionId; // 0x00(0x08)
	struct FText VoteSessionText; // 0x08(0x18)
	struct TArray<struct FVoteSettings> VoteSettingsList; // 0x20(0x10)
	enum class EVoteSessionNetworkType NetworkType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct VotingFramework.VoteSettings
// Size: 0x38 (Inherited: 0x00)
struct FVoteSettings {
	struct FGameplayTag VoteId; // 0x00(0x08)
	bool bLocksSelection; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText VoteText; // 0x10(0x18)
	struct TArray<struct FVoteSelectionSettings> VoteSelections; // 0x28(0x10)
};

// ScriptStruct VotingFramework.VoteSelectionSettings
// Size: 0x20 (Inherited: 0x00)
struct FVoteSelectionSettings {
	struct FGameplayTag VoteSelectionId; // 0x00(0x08)
	struct FText VoteSelectionText; // 0x08(0x18)
};

// ScriptStruct VotingFramework.VoteSelection
// Size: 0x18 (Inherited: 0x00)
struct FVoteSelection {
	struct FGameplayTag VoteSessionId; // 0x00(0x08)
	struct FGameplayTag VoteId; // 0x08(0x08)
	struct FGameplayTag VoteSelectionId; // 0x10(0x08)
};

// ScriptStruct VotingFramework.CastedVote
// Size: 0x18 (Inherited: 0x00)
struct FCastedVote {
	struct FName VoteSessionId; // 0x00(0x08)
	struct FName VoteId; // 0x08(0x08)
	struct FName VoteSelectionId; // 0x10(0x08)
};

