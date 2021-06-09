// Enum BattlePassBase.EBattlePassLandingPageSpecialEntryType
enum class EBattlePassLandingPageSpecialEntryType : uint8 {
	None,
	Subscription,
	CharacterCustomizer,
	SpecialCharacter,
	COUNT,
	EBattlePassLandingPageSpecialEntryType_MAX,
};

// Enum BattlePassBase.BattlePassTileAvailabilityStates
enum class BattlePassTileAvailabilityStates : uint8 {
	Invalid,
	Available,
	Owned,
	Locked,
	BattlePassTileAvailabilityStates_MAX,
};

// ScriptStruct BattlePassBase.BattlePassLandingPageEntryPreviewInfo
// Size: 0x40 (Inherited: 0x00)
struct FBattlePassLandingPageEntryPreviewInfo {
	enum class EBattlePassLandingPageSpecialEntryType SpecialEntryType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EFortItemType> SubscriptionItemTypesToDisplay; // 0x08(0x10)
	struct FGameplayTag SpecialCharacterVariantChannelToModify; // 0x18(0x08)
	struct FGameplayTag SpecialCharacterActiveVariantTag; // 0x20(0x08)
	struct TArray<struct TSoftObjectPtr<struct UFortItemDefinition>> PreviewItems; // 0x28(0x10)
	float TransitionTime; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct BattlePassBase.BattlePassEntrySelectedParams
// Size: 0x50 (Inherited: 0x00)
struct FBattlePassEntrySelectedParams {
	char pad_0[0x50]; // 0x00(0x50)
};

