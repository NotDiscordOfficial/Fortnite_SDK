// Class GameplayStateMachine.GameplayState
// Size: 0x80 (Inherited: 0x28)
struct UGameplayState : UObject {
	struct FGameplayTag StateId; // 0x28(0x08)
	struct FGameplayTagContainer StateRuntimeTags; // 0x30(0x20)
	bool bEvaluateTransition; // 0x50(0x01)
	bool bReplicates; // 0x51(0x01)
	bool bStateBegun; // 0x52(0x01)
	bool bStateEnded; // 0x53(0x01)
	float InitializationServerTime; // 0x54(0x04)
	float BeginStateDelay; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct UGameplayStateMachine* CachedGameplayStateMachine; // 0x60(0x08)
	struct UGameplayStateMachineManager* CachedStateMachineManager; // 0x68(0x08)
	struct UGameplayStateMachineSubsystem* CachedStateMachineSubSystem; // 0x70(0x08)
	struct UGameplayState* Hack_StateToDelayProcess; // 0x78(0x08)

	void UpdateStateEventServer(float DeltaTime); // Function GameplayStateMachine.GameplayState.UpdateStateEventServer // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateStateEventClient(float DeltaTime); // Function GameplayStateMachine.GameplayState.UpdateStateEventClient // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateStateEvent(float DeltaTime); // Function GameplayStateMachine.GameplayState.UpdateStateEvent // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void RemoveStateRuntimeTag(struct FGameplayTag RemovedTag); // Function GameplayStateMachine.GameplayState.RemoveStateRuntimeTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d6297c
	void MarkStateToEvaluateTransitions(); // Function GameplayStateMachine.GameplayState.MarkStateToEvaluateTransitions // (Final|Native|Public|BlueprintCallable) // @ game+0x3d62954
	void InitializeStateEventServer(struct FGameplayTag PrevStateId); // Function GameplayStateMachine.GameplayState.InitializeStateEventServer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void InitializeStateEventClient(struct FGameplayTag PrevStateId); // Function GameplayStateMachine.GameplayState.InitializeStateEventClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void InitializeStateEvent(struct FGameplayTag PrevStateId); // Function GameplayStateMachine.GameplayState.InitializeStateEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	bool HasAuthority(); // Function GameplayStateMachine.GameplayState.HasAuthority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d62930
	struct FGameplayTagContainer GetStateRuntimeTags(); // Function GameplayStateMachine.GameplayState.GetStateRuntimeTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d62914
	struct FGameplayTag GetStateId(); // Function GameplayStateMachine.GameplayState.GetStateId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d628e4
	struct AActor* GetOwningActor(); // Function GameplayStateMachine.GameplayState.GetOwningActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d628c0
	struct UGameplayStateMachine* GetGameplayStateMachine(); // Function GameplayStateMachine.GameplayState.GetGameplayStateMachine // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d628a8
	void EndStateEventServer(struct FGameplayTag NextStateId); // Function GameplayStateMachine.GameplayState.EndStateEventServer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void EndStateEventClient(struct FGameplayTag NextStateId); // Function GameplayStateMachine.GameplayState.EndStateEventClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void EndStateEvent(struct FGameplayTag NextStateId); // Function GameplayStateMachine.GameplayState.EndStateEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BeginStateEventServer(struct FGameplayTag PrevStateId); // Function GameplayStateMachine.GameplayState.BeginStateEventServer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BeginStateEventClient(struct FGameplayTag PrevStateId); // Function GameplayStateMachine.GameplayState.BeginStateEventClient // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BeginStateEvent(struct FGameplayTag PrevStateId); // Function GameplayStateMachine.GameplayState.BeginStateEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void AddStateRuntimeTag(struct FGameplayTag AddedTag); // Function GameplayStateMachine.GameplayState.AddStateRuntimeTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d62774
};

// Class GameplayStateMachine.GameplayStateMachine
// Size: 0xc0 (Inherited: 0x80)
struct UGameplayStateMachine : UGameplayState {
	bool bPubliclyBroadcast; // 0x80(0x01)
	bool bPersistDelegatesOnUnregistration; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	struct FGameplayTag StateMachineId; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FActiveGameplayStateData ActiveGameplayStateData; // 0x90(0x18)
	struct TArray<struct FGameplayStateSettings> GameplayStateSettings; // 0xa8(0x10)
	struct FGameplayTag InitialGameplayStateId; // 0xb8(0x08)

	void SetState(struct FGameplayTag InStateId, float InBeginStateDelay); // Function GameplayStateMachine.GameplayStateMachine.SetState // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d62a20
	void OnRep_ActiveGameplayStateData(); // Function GameplayStateMachine.GameplayStateMachine.OnRep_ActiveGameplayStateData // (Final|Native|Private) // @ game+0x3d62968
	struct FGameplayTag GetStateMachineId(); // Function GameplayStateMachine.GameplayStateMachine.GetStateMachineId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d628fc
	struct UGameplayState* GetActiveStateObject(); // Function GameplayStateMachine.GameplayStateMachine.GetActiveStateObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d62890
	struct FGameplayTag GetActiveStateId(); // Function GameplayStateMachine.GameplayStateMachine.GetActiveStateId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d62864
	void EvaluateStateTransition(); // Function GameplayStateMachine.GameplayStateMachine.EvaluateStateTransition // (Native|Event|Protected|BlueprintEvent) // @ game+0x3d6284c
};

// Class GameplayStateMachine.GameplayStateMachineManager
// Size: 0x1d0 (Inherited: 0xb0)
struct UGameplayStateMachineManager : UActorComponent {
	struct FGameplayStateMachineArray StateMachineList; // 0xb0(0x120)
};

// Class GameplayStateMachine.GameplayStateMachineSubsystem
// Size: 0x80 (Inherited: 0x30)
struct UGameplayStateMachineSubsystem : UGameInstanceSubsystem {
	struct TMap<struct FGameplayTag, struct FGameplayStateMachineData> StateMachineMap; // 0x30(0x50)
};

