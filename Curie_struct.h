// Enum Curie.ECurieHandlerPriority
enum class ECurieHandlerPriority : uint8 {
	Priority_2,
	Priority_3,
	Priority_4,
	Priority_5,
	Priority_6,
	Priority_7,
	Priority_8,
	Priority_9,
	Priority_10,
	Priority_11,
	Priority_Default,
	Priority_MAX,
};

// Enum Curie.ECurieHandlerBehavior
enum class ECurieHandlerBehavior : uint8 {
	Handler_Add,
	Handler_Replace,
	Handler_MAX,
};

// Enum Curie.ECurieEntityType
enum class ECurieEntityType : uint8 {
	Invalid,
	Material,
	Element,
	ECurieEntityType_MAX,
};

// ScriptStruct Curie.CurieContainerHandle
// Size: 0x04 (Inherited: 0x00)
struct FCurieContainerHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Curie.CurieEntityStateDefinitionBase
// Size: 0x18 (Inherited: 0x08)
struct FCurieEntityStateDefinitionBase : FTableRowBase {
	struct UCurieEntityStateBehavior* StateBehaviorClass; // 0x08(0x08)
	char bIsEnabled : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Curie.CurieElementDefinitionBase
// Size: 0x78 (Inherited: 0x08)
struct FCurieElementDefinitionBase : FTableRowBase {
	struct TArray<struct UCurieElementAttachHandler*> ElementAttachHandlers; // 0x08(0x10)
	struct UCurieElementAttachConditionHandler* ElementAttachConditionHandler; // 0x18(0x08)
	struct TArray<struct UCurieElementInteractWithElementHandler*> ElementInteractHandlers; // 0x20(0x10)
	struct TArray<struct UCurieElementInteractWithMaterialHandler*> ElementMaterialInteractHandlers; // 0x30(0x10)
	struct TArray<struct UCurieElementInteractWithContainerHandler*> ElementContainerInteractHandlers; // 0x40(0x10)
	struct FGameplayTagContainer ElementalImmunities; // 0x50(0x20)
	char bIsEnabled : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Curie.CurieMaterialDefinitionBase
// Size: 0x68 (Inherited: 0x08)
struct FCurieMaterialDefinitionBase : FTableRowBase {
	struct FGameplayTagContainer ElementalImmunities; // 0x08(0x20)
	struct FGameplayTagContainer ElementAttachmentImmunities; // 0x28(0x20)
	struct FGameplayTagContainer ElementsAllowedWhenCannotBeDamaged; // 0x48(0x20)
};

// ScriptStruct Curie.CurieElementInteractWithContainerHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementInteractWithContainerHandlersContainer {
	struct TArray<struct UCurieElementInteractWithContainerHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementInteractWithMaterialHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementInteractWithMaterialHandlersContainer {
	struct TArray<struct UCurieElementInteractWithMaterialHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementInteractWithElementHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementInteractWithElementHandlersContainer {
	struct TArray<struct UCurieElementInteractWithElementHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementAttachConditionHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementAttachConditionHandlersContainer {
	struct TArray<struct UCurieElementAttachConditionHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementAttachHandlersContainer
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementAttachHandlersContainer {
	struct TArray<struct UCurieElementAttachHandler*> Handlers; // 0x00(0x10)
};

// ScriptStruct Curie.CurieElementPairKey
// Size: 0x10 (Inherited: 0x00)
struct FCurieElementPairKey {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Curie.CurieInteractParamsHandle
// Size: 0x10 (Inherited: 0x00)
struct FCurieInteractParamsHandle {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Curie.CurieInteractHandle
// Size: 0x04 (Inherited: 0x00)
struct FCurieInteractHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Curie.CurieElementHandle
// Size: 0x04 (Inherited: 0x00)
struct FCurieElementHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Curie.CurieStateHandle
// Size: 0x04 (Inherited: 0x00)
struct FCurieStateHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Curie.CurieEffectContainer
// Size: 0x50 (Inherited: 0x00)
struct FCurieEffectContainer {
	struct FGameplayTagQuery TargetFilter; // 0x00(0x48)
	struct UGameplayEffect* GameplayEffect; // 0x48(0x08)
};

