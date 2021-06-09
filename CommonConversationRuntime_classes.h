// Class CommonConversationRuntime.ConversationParticipantComponent
// Size: 0x188 (Inherited: 0xb0)
struct UConversationParticipantComponent : UActorComponent {
	char pad_B0[0xb4]; // 0xb0(0xb4)
	int32_t ConversationsActive; // 0x164(0x04)
	struct UConversationInstance* Auth_CurrentConversation; // 0x168(0x08)
	struct TArray<struct UConversationInstance*> Auth_Conversations; // 0x170(0x10)
	char pad_180[0x8]; // 0x180(0x08)

	void ServerAdvanceConversation(struct FAdvanceConversationRequest InChoicePicked); // Function CommonConversationRuntime.ConversationParticipantComponent.ServerAdvanceConversation // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x3b2b34c
	void RequestServerAdvanceConversation(struct FAdvanceConversationRequest InChoicePicked); // Function CommonConversationRuntime.ConversationParticipantComponent.RequestServerAdvanceConversation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b2b228
	void OnRep_ConversationsActive(int32_t OldConversationsActive); // Function CommonConversationRuntime.ConversationParticipantComponent.OnRep_ConversationsActive // (Final|Native|Protected) // @ game+0x3b2afb4
	bool IsInActiveConversation(); // Function CommonConversationRuntime.ConversationParticipantComponent.IsInActiveConversation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b2aca0
	struct FText GetParticipantDisplayName(); // Function CommonConversationRuntime.ConversationParticipantComponent.GetParticipantDisplayName // (Native|Public|BlueprintCallable) // @ game+0x3b2ac2c
	void ClientUpdateParticipants(struct FConversationParticipants InParticipants); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateParticipants // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3b2a324
	void ClientUpdateConversations(int32_t InConversationsActive); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversations // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3b2a288
	void ClientUpdateConversation(struct FClientConversationMessagePayload Message); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientUpdateConversation // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3b2a1d4
	void ClientStartConversation(struct FGameplayTag AsParticipant); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientStartConversation // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3b2a138
	void ClientExecuteTaskAndSideEffects(struct FConversationNodeHandle Handle); // Function CommonConversationRuntime.ConversationParticipantComponent.ClientExecuteTaskAndSideEffects // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x3b2a08c
};

// Class CommonConversationRuntime.ConversationNode
// Size: 0x58 (Inherited: 0x28)
struct UConversationNode : UObject {
	struct UObject* EvalWorldContextObj; // 0x28(0x08)
	struct FString NodeName; // 0x30(0x10)
	struct FGuid Compiled_NodeGUID; // 0x40(0x10)
	struct UConversationNode* ParentNode; // 0x50(0x08)

	struct FLinearColor GetDebugParticipantColor(struct FGameplayTag ParticipantID); // Function CommonConversationRuntime.ConversationNode.GetDebugParticipantColor // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b2aa9c
};

// Class CommonConversationRuntime.ConversationSubNode
// Size: 0x58 (Inherited: 0x58)
struct UConversationSubNode : UConversationNode {
};

// Class CommonConversationRuntime.ConversationChoiceNode
// Size: 0x90 (Inherited: 0x58)
struct UConversationChoiceNode : UConversationSubNode {
	struct FText DefaultChoiceDisplayText; // 0x58(0x18)
	struct FGameplayTagContainer ChoiceTags; // 0x70(0x20)

	void FillChoice(struct FConversationContext Context, struct FClientConversationOptionEntry ChoiceEntry); // Function CommonConversationRuntime.ConversationChoiceNode.FillChoice // (Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x3b2a51c
};

// Class CommonConversationRuntime.ConversationContextHelpers
// Size: 0x28 (Inherited: 0x28)
struct UConversationContextHelpers : UBlueprintFunctionLibrary {

	struct FConversationTaskResult ReturnToLastClientChoice(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationContextHelpers.ReturnToLastClientChoice // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b29cd8
	struct FConversationTaskResult ReturnToCurrentClientChoice(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationContextHelpers.ReturnToCurrentClientChoice // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b29cd8
	struct FConversationTaskResult ReturnToConversationStart(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationContextHelpers.ReturnToConversationStart // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b29cd8
	struct FConversationTaskResult PauseConversationAndSendClientChoices(struct FConversationContext Context, struct FClientConversationMessage Message); // Function CommonConversationRuntime.ConversationContextHelpers.PauseConversationAndSendClientChoices // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b2b04c
	void MakeConversationParticipant(struct FConversationContext Context, struct AActor* ParticipantActor, struct FGameplayTag ParticipantTag); // Function CommonConversationRuntime.ConversationContextHelpers.MakeConversationParticipant // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b2ae68
	struct FConversationNodeHandle GetCurrentConversationNodeHandle(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationContextHelpers.GetCurrentConversationNodeHandle // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3b2a9b0
	struct AActor* GetConversationParticipantActor(struct FConversationContext Context, struct FGameplayTag ParticipantTag); // Function CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipantActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b2a878
	struct UConversationParticipantComponent* GetConversationParticipant(struct FConversationContext Context, struct FGameplayTag ParticipantTag); // Function CommonConversationRuntime.ConversationContextHelpers.GetConversationParticipant // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b2a730
	struct UConversationInstance* GetConversationInstance(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationContextHelpers.GetConversationInstance // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3b2a670
	struct UConversationParticipantComponent* FindConversationComponent(struct AActor* Actor); // Function CommonConversationRuntime.ConversationContextHelpers.FindConversationComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26fa364
	struct FConversationTaskResult AdvanceConversationWithChoice(struct FConversationContext Context, struct FAdvanceConversationRequest Choice); // Function CommonConversationRuntime.ConversationContextHelpers.AdvanceConversationWithChoice // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b29e10
	struct FConversationTaskResult AdvanceConversation(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationContextHelpers.AdvanceConversation // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b29cd8
};

// Class CommonConversationRuntime.ConversationDatabase
// Size: 0xe8 (Inherited: 0x30)
struct UConversationDatabase : UPrimaryDataAsset {
	int32_t CompilerVersion; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TMap<struct FGuid, struct UConversationNode*> ReachableNodeMap; // 0x38(0x50)
	struct TArray<struct FConversationEntryList> EntryTags; // 0x88(0x10)
	struct FGameplayTagContainer ExitTags; // 0x98(0x20)
	struct TArray<struct FGuid> InternalNodeIds; // 0xb8(0x10)
	struct TArray<struct FGuid> LinkedToNodeIds; // 0xc8(0x10)
	struct TArray<struct FCommonDialogueBankParticipant> Speakers; // 0xd8(0x10)
};

// Class CommonConversationRuntime.ConversationNodeWithLinks
// Size: 0x68 (Inherited: 0x58)
struct UConversationNodeWithLinks : UConversationNode {
	struct TArray<struct FGuid> OutputConnections; // 0x58(0x10)
};

// Class CommonConversationRuntime.ConversationEntryPointNode
// Size: 0x70 (Inherited: 0x68)
struct UConversationEntryPointNode : UConversationNodeWithLinks {
	struct FGameplayTag EntryTag; // 0x68(0x08)
};

// Class CommonConversationRuntime.ConversationInstance
// Size: 0x1a8 (Inherited: 0x28)
struct UConversationInstance : UObject {
	char pad_28[0x28]; // 0x28(0x28)
	struct FConversationParticipants Participants; // 0x50(0x10)
	char pad_60[0x148]; // 0x60(0x148)
};

// Class CommonConversationRuntime.ConversationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UConversationLibrary : UBlueprintFunctionLibrary {

	struct UConversationInstance* StartConversation(struct FGameplayTag ConversationEntryTag, struct AActor* Instigator, struct FGameplayTag InstigatorTag, struct AActor* Target, struct FGameplayTag TargetTag); // Function CommonConversationRuntime.ConversationLibrary.StartConversation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b2b4dc
};

// Class CommonConversationRuntime.ConversationTaskNode
// Size: 0x78 (Inherited: 0x68)
struct UConversationTaskNode : UConversationNodeWithLinks {
	struct TArray<struct UConversationSubNode*> SubNodes; // 0x68(0x10)

	enum class EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationTaskNode.IsRequirementSatisfied // (BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x3b2ad94
	bool GetNodeBodyColor(struct FLinearColor BodyColor); // Function CommonConversationRuntime.ConversationTaskNode.GetNodeBodyColor // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x3b2ab7c
	struct FConversationTaskResult ExecuteTaskNode(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationTaskNode.ExecuteTaskNode // (BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x3b2a3d0
	void ExecuteClientEffects(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationTaskNode.ExecuteClientEffects // (BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x3b29fc8
};

// Class CommonConversationRuntime.ConversationLinkNode
// Size: 0x80 (Inherited: 0x78)
struct UConversationLinkNode : UConversationTaskNode {
	struct FGameplayTag RemoteEntryTag; // 0x78(0x08)
};

// Class CommonConversationRuntime.ConversationRegistry
// Size: 0x1d8 (Inherited: 0x30)
struct UConversationRegistry : UWorldSubsystem {
	struct FNetSerializeScriptStructCache_ConvVersion ConversationChoiceDataStructCache; // 0x30(0x60)
	char pad_90[0x148]; // 0x90(0x148)
};

// Class CommonConversationRuntime.ConversationRequirementNode
// Size: 0x58 (Inherited: 0x58)
struct UConversationRequirementNode : UConversationSubNode {

	enum class EConversationRequirementResult IsRequirementSatisfied(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationRequirementNode.IsRequirementSatisfied // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x3b2acc0
};

// Class CommonConversationRuntime.ConversationSettings
// Size: 0x60 (Inherited: 0x38)
struct UConversationSettings : UDeveloperSettings {
	SoftClassProperty ConversationInstanceClass; // 0x38(0x28)
};

// Class CommonConversationRuntime.ConversationSideEffectNode
// Size: 0x58 (Inherited: 0x58)
struct UConversationSideEffectNode : UConversationSubNode {

	void ServerCauseSideEffect(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationSideEffectNode.ServerCauseSideEffect // (BlueprintAuthorityOnly|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x3b2b418
	void ClientCauseSideEffect(struct FConversationContext Context); // Function CommonConversationRuntime.ConversationSideEffectNode.ClientCauseSideEffect // (BlueprintCosmetic|Native|Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x3b29fc8
};

