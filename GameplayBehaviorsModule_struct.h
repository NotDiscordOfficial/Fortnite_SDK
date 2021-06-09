// Enum GameplayBehaviorsModule.EGameplayBehaviorInstantiationPolicy
enum class EGameplayBehaviorInstantiationPolicy : uint8 {
	Instantiate,
	ConditionallyInstantiate,
	DontInstantiate,
	EGameplayBehaviorInstantiationPolicy_MAX,
};

// ScriptStruct GameplayBehaviorsModule.MontagePlaybackData
// Size: 0x48 (Inherited: 0x00)
struct FMontagePlaybackData {
	struct AActor* Avatar; // 0x00(0x08)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	struct UAbilitySystemComponent* AbilityComponent; // 0x10(0x08)
	char pad_18[0x30]; // 0x18(0x30)
};

// ScriptStruct GameplayBehaviorsModule.AgentGameplayBehaviors
// Size: 0x10 (Inherited: 0x00)
struct FAgentGameplayBehaviors {
	struct TArray<struct UGameplayBehavior*> Behaviors; // 0x00(0x10)
};

