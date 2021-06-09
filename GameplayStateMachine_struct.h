// ScriptStruct GameplayStateMachine.ActiveGameplayStateData
// Size: 0x18 (Inherited: 0x00)
struct FActiveGameplayStateData {
	struct UGameplayState* GameplayState; // 0x00(0x08)
	struct FGameplayTag PreviousStateId; // 0x08(0x08)
	float BeginStateDelay; // 0x10(0x04)
	float InitializationTime; // 0x14(0x04)
};

// ScriptStruct GameplayStateMachine.GameplayStateSettings
// Size: 0x20 (Inherited: 0x00)
struct FGameplayStateSettings {
	struct UGameplayState* StateClass; // 0x00(0x08)
	struct FGameplayTag StateId; // 0x08(0x08)
	struct TArray<struct FGameplayStateTransition> StateTransitions; // 0x10(0x10)
};

// ScriptStruct GameplayStateMachine.GameplayStateTransition
// Size: 0x30 (Inherited: 0x00)
struct FGameplayStateTransition {
	struct FGameplayTagContainer TransitionConditionTags; // 0x00(0x20)
	struct FGameplayTag TransitionStateTag; // 0x20(0x08)
	float BeginStateDelay; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct GameplayStateMachine.GameplayStateMachineArray
// Size: 0x120 (Inherited: 0x108)
struct FGameplayStateMachineArray : FFastArraySerializer {
	struct UGameplayStateMachineManager* StateMachineManager; // 0x108(0x08)
	struct TArray<struct FGameplayStateMachineItem> StateMachineItems; // 0x110(0x10)
};

// ScriptStruct GameplayStateMachine.GameplayStateMachineItem
// Size: 0x20 (Inherited: 0x0c)
struct FGameplayStateMachineItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct UGameplayStateMachine* StateMachine; // 0x10(0x08)
	float BeginStateDelay; // 0x18(0x04)
	float InitializationTime; // 0x1c(0x04)
};

// ScriptStruct GameplayStateMachine.GameplayStateMachineData
// Size: 0xb8 (Inherited: 0x00)
struct FGameplayStateMachineData {
	struct UGameplayStateMachine* StateMachine; // 0x00(0x08)
	char pad_8[0xb0]; // 0x08(0xb0)
};

