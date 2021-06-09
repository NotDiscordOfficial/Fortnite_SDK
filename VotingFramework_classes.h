// Class VotingFramework.VoteBroadcasterComponent
// Size: 0x5c0 (Inherited: 0x200)
struct UVoteBroadcasterComponent : UMeshNetworkComponent {
	struct TArray<struct FVoteSessionSettings> VoteSessionSettingsList; // 0x200(0x10)
	struct FVoteSessionRuntimeArray VoteSessionRuntimeList; // 0x210(0x120)
	struct FVoteRuntimeArray VoteRuntimeList; // 0x330(0x120)
	struct FVoteSelectionResultsArray VoteResultsList; // 0x450(0x120)
	struct TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap; // 0x570(0x50)

	void VoteStart(struct FName VoteSessionId, struct FName VoteId); // Function VotingFramework.VoteBroadcasterComponent.VoteStart // (Final|Native|Public|BlueprintCallable) // @ game+0x4040150
	void VoteSetup(struct FName VoteSessionId, struct FName VoteId); // Function VotingFramework.VoteBroadcasterComponent.VoteSetup // (Final|Native|Public|BlueprintCallable) // @ game+0x4040068
	void VoteSessionShutdown(struct FName VoteSessionId); // Function VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown // (Final|Native|Public|BlueprintCallable) // @ game+0x403ffd0
	void VoteSessionSetup(struct FName VoteSessionId, struct FName StartingVoteId, enum class EVoteSessionNetworkType NetworkType); // Function VotingFramework.VoteBroadcasterComponent.VoteSessionSetup // (Final|Native|Public|BlueprintCallable) // @ game+0x403fe90
	void VoteSessionComplete(struct FName VoteSessionId); // Function VotingFramework.VoteBroadcasterComponent.VoteSessionComplete // (Final|Native|Public|BlueprintCallable) // @ game+0x403fdf8
	void VoteEnd(struct FName VoteSessionId, struct FName VoteId, struct FName WinningVoteSelectionId); // Function VotingFramework.VoteBroadcasterComponent.VoteEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x403fcb8
	void ServerSubmitVotesAggregated(struct FName VoteSessionId, struct FName VoteId, struct FName VoteSelectionId, int32_t VoteDelta); // Function VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x403fae8
	void OnVoteCasted(struct FUniqueNetIdRepl UserNetId, struct FGameplayTag VoteSessionId, struct FGameplayTag VoteId, struct FGameplayTag VoteSelectionId); // Function VotingFramework.VoteBroadcasterComponent.OnVoteCasted // (Final|Native|Protected|HasOutParms) // @ game+0x403ecd4
};

// Class VotingFramework.VoteDispatchSubsystem
// Size: 0xd0 (Inherited: 0x30)
struct UVoteDispatchSubsystem : UGameInstanceSubsystem {
	char pad_30[0x90]; // 0x30(0x90)
	struct TArray<struct FVoteSelectionResults> VotingResults; // 0xc0(0x10)
};

// Class VotingFramework.VoteInitiationActor
// Size: 0x230 (Inherited: 0x220)
struct AVoteInitiationActor : AInfo {
	char pad_220[0x8]; // 0x220(0x08)
	struct UVoteBroadcasterComponent* VoteBroadcasterComponent; // 0x228(0x08)
};

// Class VotingFramework.VoteListenerComponent
// Size: 0x190 (Inherited: 0xb0)
struct UVoteListenerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnVoteSessionSetupEvent; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnVoteSessionVotingEvent; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnVoteSetupEvent; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnVoteStartEvent; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnVoteChangeEvent; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnVoteEndEvent; // 0x100(0x10)
	struct FMulticastInlineDelegate OnVoteSessionCompleteEvent; // 0x110(0x10)
	struct FMulticastInlineDelegate OnVoteSessionShutdownEvent; // 0x120(0x10)
	struct FGameplayTagContainer RequestedVoteSessionIds; // 0x130(0x20)
	struct FGameplayTagContainer RequestedVoteIds; // 0x150(0x20)
	struct FGameplayTagContainer RequestedVoteSelectionIds; // 0x170(0x20)

	void OnVoteStart(struct FGameplayTag VoteSessionId, struct FGameplayTag VoteId, enum class EVoteState VoteState); // Function VotingFramework.VoteListenerComponent.OnVoteStart // (Native|Protected|HasOutParms) // @ game+0x403f804
	void OnVoteSetup(struct FGameplayTag VoteSessionId, struct FGameplayTag VoteId, enum class EVoteState VoteState); // Function VotingFramework.VoteListenerComponent.OnVoteSetup // (Native|Protected|HasOutParms) // @ game+0x403f6b0
	void OnVoteSessionVoting(struct FGameplayTag VoteSessionId, struct FGameplayTag StartingVoteId, enum class EVoteSessionState SessionState); // Function VotingFramework.VoteListenerComponent.OnVoteSessionVoting // (Native|Protected|HasOutParms) // @ game+0x403f55c
	void OnVoteSessionShutdown(struct FGameplayTag VoteSessionId); // Function VotingFramework.VoteListenerComponent.OnVoteSessionShutdown // (Native|Protected|HasOutParms) // @ game+0x403f4b8
	void OnVoteSessionSetup(struct FGameplayTag VoteSessionId, struct FGameplayTag StartingVoteId, enum class EVoteSessionNetworkType NetworkType, enum class EVoteSessionState SessionState); // Function VotingFramework.VoteListenerComponent.OnVoteSessionSetup // (Native|Protected|HasOutParms) // @ game+0x403f310
	void OnVoteSessionComplete(struct FGameplayTag VoteSessionId); // Function VotingFramework.VoteListenerComponent.OnVoteSessionComplete // (Native|Protected|HasOutParms) // @ game+0x403f26c
	void OnVoteEnd(struct FGameplayTag VoteSessionId, struct FGameplayTag VoteId, struct FGameplayTag WinningVoteSelectionId, enum class EVoteState VoteState); // Function VotingFramework.VoteListenerComponent.OnVoteEnd // (Native|Protected|HasOutParms) // @ game+0x403f0a8
	void OnVoteChange(struct FGameplayTag VoteSessionId, struct FGameplayTag VoteId, struct FGameplayTag VoteSelectionId, int32_t ServerVoteTotal, int32_t AllServersVoteTotal); // Function VotingFramework.VoteListenerComponent.OnVoteChange // (Native|Protected|HasOutParms) // @ game+0x403ee90
};

// Class VotingFramework.VoteResponderComponent
// Size: 0x208 (Inherited: 0x190)
struct UVoteResponderComponent : UVoteListenerComponent {
	struct TArray<struct FVoteSelection> SupportedVoteSelections; // 0x190(0x10)
	bool bShouldLockVotingAfterCasted; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap; // 0x1a8(0x50)
	struct FName ActiveVoteSessionId; // 0x1f8(0x08)
	struct FName ActiveVoteId; // 0x200(0x08)

	void ServerCastVoteSelection(struct FUniqueNetIdRepl InUserId, struct FCastedVote CastedVote); // Function VotingFramework.VoteResponderComponent.ServerCastVoteSelection // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x403f958
	void CastManualVoteSelectionAtIndex(struct APlayerState* InPlayerState, int32_t SelectionIndex); // Function VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x403ebec
	void CastManualVoteSelection(struct APlayerState* InPlayerState, struct FGameplayTag VoteSelection); // Function VotingFramework.VoteResponderComponent.CastManualVoteSelection // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x403eafc
	void CastDefaultVoteSelection(struct APlayerState* InPlayerState); // Function VotingFramework.VoteResponderComponent.CastDefaultVoteSelection // (Final|Native|Public|BlueprintCallable) // @ game+0x403ea60
};

