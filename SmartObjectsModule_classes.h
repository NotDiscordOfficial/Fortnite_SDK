// Class SmartObjectsModule.AITask_UseSmartObject
// Size: 0xb0 (Inherited: 0x70)
struct UAITask_UseSmartObject : UAITask {
	struct USmartObjectComponent* SOComponent; // 0x70(0x08)
	struct FMulticastInlineDelegate OnFinished; // 0x78(0x10)
	struct UAITask_MoveTo* MoveToTask; // 0x88(0x08)
	char pad_90[0x20]; // 0x90(0x20)

	struct UAITask_UseSmartObject* UseSmartObject(struct AAIController* Controller, struct AActor* SmartObjectActor, struct USmartObjectComponent* SmartObjectComponent, bool bLockAILogic); // Function SmartObjectsModule.AITask_UseSmartObject.UseSmartObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x42bff9c
};

// Class SmartObjectsModule.BTTask_FindAndUseSmartObject
// Size: 0xc0 (Inherited: 0x70)
struct UBTTask_FindAndUseSmartObject : UBTTaskNode {
	struct FGameplayTagQuery ActivityRequirements; // 0x70(0x48)
	float Radius; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class SmartObjectsModule.BTTask_UseSmartObject
// Size: 0x98 (Inherited: 0x98)
struct UBTTask_UseSmartObject : UBTTask_BlackboardBase {
};

// Class SmartObjectsModule.GenericSmartObject
// Size: 0x238 (Inherited: 0x220)
struct AGenericSmartObject : AActor {
	struct USmartObjectComponent* SOComponent; // 0x220(0x08)
	struct TArray<struct AActor*> ReferenceActors; // 0x228(0x10)
};

// Class SmartObjectsModule.RichSmartObjectInterface
// Size: 0x28 (Inherited: 0x28)
struct URichSmartObjectInterface : UInterface {
};

// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USmartObjectBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool K2_UseSmartObject(struct AActor* Avatar, struct AActor* SmartObject); // Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_UseSmartObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x42bfe74
	bool K2_SetSmartObjectEnabled(struct AActor* SmartObject, bool bEnabled); // Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x42bfd54
	bool K2_RemoveLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer GameplayTags); // Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_RemoveLooseGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2090d60
	bool K2_AddLooseGameplayTags(struct AActor* Actor, struct FGameplayTagContainer GameplayTags); // Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_AddLooseGameplayTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2090eb8
};

// Class SmartObjectsModule.SmartObjectComponent
// Size: 0x108 (Inherited: 0xb0)
struct USmartObjectComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct TSoftObjectPtr<struct USmartObjectConfig> Config; // 0xb8(0x28)
	struct FSmartObjectID RegisteredID; // 0xe0(0x04)
	uint32_t ExecutionPriorityOverride; // 0xe4(0x04)
	struct TScriptInterface<None> GameplayTagAssetInterfaceImplementation; // 0xe8(0x10)
	char bRichSmartObjectOwner : 1; // 0xf8(0x01)
	char bRichSmartObjectComponent : 1; // 0xf8(0x01)
	char pad_F8_2 : 6; // 0xf8(0x01)
	char pad_F9[0xf]; // 0xf9(0x0f)
};

// Class SmartObjectsModule.SmartObjectConfig
// Size: 0x68 (Inherited: 0x30)
struct USmartObjectConfig : UDataAsset {
	struct TArray<struct FSmartObjectUseConfig> Uses; // 0x30(0x10)
	struct FGameplayTagContainer DescriptionTags; // 0x40(0x20)
	uint32_t MaxConcurrentUsers; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class SmartObjectsModule.SmartObjectManager
// Size: 0x130 (Inherited: 0x28)
struct USmartObjectManager : UObject {
	struct TMap<struct FSmartObjectID, struct FSmartObjectRuntime> RuntimeSmartObjects; // 0x28(0x50)
	char pad_78[0xa8]; // 0x78(0xa8)
	char pad_120_0 : 1; // 0x120(0x01)
	char bCreateIfMissing : 1; // 0x120(0x01)
	char pad_120_2 : 6; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float DefaultUnusedSmartObjectLifespan; // 0x124(0x04)
	char pad_128[0x8]; // 0x128(0x08)
};

// Class SmartObjectsModule.SmartObjectRenderingComponent
// Size: 0x450 (Inherited: 0x450)
struct USmartObjectRenderingComponent : UPrimitiveComponent {
	enum class ESOReferenceDrawingMode ReferenceDrawingMode; // 0x448(0x01)
};

