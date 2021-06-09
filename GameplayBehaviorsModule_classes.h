// Class GameplayBehaviorsModule.BTTask_StopGameplayBehavior
// Size: 0x78 (Inherited: 0x70)
struct UBTTask_StopGameplayBehavior : UBTTaskNode {
	struct UGameplayBehavior* BehaviorToStop; // 0x70(0x08)
};

// Class GameplayBehaviorsModule.GameplayBehavior
// Size: 0x88 (Inherited: 0x28)
struct UGameplayBehavior : UObject {
	char pad_28[0x14]; // 0x28(0x14)
	struct FGameplayTag ActionTag; // 0x3c(0x08)
	char pad_44[0x1c]; // 0x44(0x1c)
	struct TArray<struct AActor*> RelevantActors; // 0x60(0x10)
	struct TArray<struct UGameplayTask*> ActiveTasks; // 0x70(0x10)
	struct AActor* TransientAvatar; // 0x80(0x08)

	void K2_TriggerBehavior(struct AActor* Avatar, struct UGameplayBehaviorConfig* Config); // Function GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x42c2414
	void K2_OnTriggeredPawn(struct APawn* Avatar, struct UGameplayBehaviorConfig* Config); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnTriggeredCharacter(struct ACharacter* Avatar, struct UGameplayBehaviorConfig* Config); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnTriggered(struct AActor* Avatar, struct UGameplayBehaviorConfig* Config); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnFinishedPawn(struct APawn* Avatar, bool bWasInterrupted); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnFinishedCharacter(struct ACharacter* Avatar, bool bWasInterrupted); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnFinished(struct AActor* Avatar, bool bWasInterrupted); // Function GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	int32_t K2_GetNextActorIndexInSequence(int32_t CurrentIndex); // Function GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42c234c
	void K2_EndBehavior(struct AActor* Avatar); // Function GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x42c22b0
	void K2_AbortBehavior(struct AActor* Avatar); // Function GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x42c2214
};

// Class GameplayBehaviorsModule.GameplayBehavior_AnimationBased
// Size: 0x98 (Inherited: 0x88)
struct UGameplayBehavior_AnimationBased : UGameplayBehavior {
	struct TArray<struct FMontagePlaybackData> ActivePlayback; // 0x88(0x10)

	void OnMontageFinished(struct UAnimMontage* Montage, bool bInterrupted, struct AActor* InAvatar); // Function GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished // (Final|Native|Protected) // @ game+0x42c250c
};

// Class GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
// Size: 0x98 (Inherited: 0x88)
struct UGameplayBehavior_BehaviorTree : UGameplayBehavior {
	struct UBehaviorTree* PreviousBT; // 0x88(0x08)
	struct AAIController* AIController; // 0x90(0x08)
};

// Class GameplayBehaviorsModule.GameplayBehaviorConfig
// Size: 0x30 (Inherited: 0x28)
struct UGameplayBehaviorConfig : UObject {
	struct UGameplayBehavior* BehaviorClass; // 0x28(0x08)
};

// Class GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
// Size: 0x68 (Inherited: 0x30)
struct UGameplayBehaviorConfig_Animation : UGameplayBehaviorConfig {
	struct TSoftObjectPtr<struct UAnimMontage> AnimMontage; // 0x30(0x28)
	float PlayRate; // 0x58(0x04)
	struct FName StartSectionName; // 0x5c(0x08)
	char bLoop : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// Class GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
// Size: 0x60 (Inherited: 0x30)
struct UGameplayBehaviorConfig_BehaviorTree : UGameplayBehaviorConfig {
	struct TSoftObjectPtr<struct UBehaviorTree> BehaviorTree; // 0x30(0x28)
	char bRevertToPreviousBTOnFinish : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class GameplayBehaviorsModule.GameplayBehaviorManager
// Size: 0x90 (Inherited: 0x38)
struct UGameplayBehaviorManager : UAISubsystem {
	struct TMap<struct AActor*, struct FAgentGameplayBehaviors> AgentGameplayBehaviors; // 0x38(0x50)
	char bCreateIfMissing : 1; // 0x88(0x01)
	char pad_88_1 : 7; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// Class GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameplayBehaviorsBlueprintFunctionLibrary : UBlueprintFunctionLibrary {
};

