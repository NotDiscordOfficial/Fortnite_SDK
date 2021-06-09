// Enum CraftingRuntime.ECraftingObjectState
enum class ECraftingObjectState : uint8 {
	Invalid,
	Idle,
	Crafting,
	Ready,
	OverCrafting,
	Resetting,
	TotalStates,
	ECraftingObjectState_MAX,
};

// Enum CraftingRuntime.ECraftingIngredientReqError
enum class ECraftingIngredientReqError : uint8 {
	None,
	NoItem,
	NotEnough,
	ECraftingIngredientReqError_MAX,
};

// ScriptStruct CraftingRuntime.CraftingObjectRepStateData
// Size: 0x08 (Inherited: 0x00)
struct FCraftingObjectRepStateData {
	enum class ECraftingObjectState CraftingObjectState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float StateChangeServerTime; // 0x04(0x04)
};

// ScriptStruct CraftingRuntime.CraftingIngredientQueryState
// Size: 0x30 (Inherited: 0x00)
struct FCraftingIngredientQueryState {
	struct FCraftingIngredientRequirement Requirement; // 0x00(0x28)
	int32_t Owned; // 0x28(0x04)
	int32_t Missing; // 0x2c(0x04)
};

// ScriptStruct CraftingRuntime.CraftingIngredientRequirement
// Size: 0x28 (Inherited: 0x00)
struct FCraftingIngredientRequirement {
	struct FGameplayTagContainer IngredientTags; // 0x00(0x20)
	int32_t Count; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct CraftingRuntime.CraftingIngredientUIData
// Size: 0x48 (Inherited: 0x08)
struct FCraftingIngredientUIData : FTableRowBase {
	struct FGameplayTagContainer IngredientTags; // 0x08(0x20)
	struct TArray<struct TSoftObjectPtr<struct UFortItemDefinition>> ItemDefs; // 0x28(0x10)
	struct TArray<struct TSoftObjectPtr<struct UObject>> Icons; // 0x38(0x10)
};

// ScriptStruct CraftingRuntime.CraftingResult
// Size: 0x18 (Inherited: 0x00)
struct FCraftingResult {
	struct FName ResultLootTierKey; // 0x00(0x08)
	struct TArray<struct FItemAndCount> Results; // 0x08(0x10)
};

// ScriptStruct CraftingRuntime.CraftingFormula
// Size: 0x70 (Inherited: 0x08)
struct FCraftingFormula : FTableRowBase {
	struct FText DisplayName; // 0x08(0x18)
	char bEnabled : 1; // 0x20(0x01)
	char bAlwaysKnownFormula : 1; // 0x20(0x01)
	char bInstantlyConsumeIngredients : 1; // 0x20(0x01)
	char pad_20_3 : 5; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FGameplayTag SourceObjectTag; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FCraftingIngredientRequirement> RequiredIngredients; // 0x30(0x10)
	struct FName ResultLootTierKey; // 0x40(0x08)
	SoftClassProperty WhileCraftingAbility; // 0x48(0x28)
};

