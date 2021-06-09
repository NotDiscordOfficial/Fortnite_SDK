// Enum EntityCore.EMovementType
enum class EMovementType : uint8 {
	SweepPhysics,
	TeleportPhysics,
	ResetPhysics,
	EMovementType_MAX,
};

// Enum EntityCore.EScriptDiagnosticMessageType
enum class EScriptDiagnosticMessageType : uint8 {
	Debug,
	Verbose,
	Normal,
	Warning,
	Error,
	Fatal,
	EScriptDiagnosticMessageType_MAX,
};

// ScriptStruct EntityCore.EntityComponentContainer
// Size: 0x10 (Inherited: 0x00)
struct FEntityComponentContainer {
	struct TArray<struct UEntityComponent*> Array; // 0x00(0x10)
};

// ScriptStruct EntityCore.ComponentData
// Size: 0x01 (Inherited: 0x00)
struct FComponentData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct EntityCore.EntityCoreSystemRelativePositionComponentData
// Size: 0x10 (Inherited: 0x01)
struct FEntityCoreSystemRelativePositionComponentData : FComponentData {
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct EntityCore.EntityScaleComponentData
// Size: 0x0c (Inherited: 0x01)
struct FEntityScaleComponentData : FComponentData {
	struct FVector WorldScale3D; // 0x00(0x0c)
};

// ScriptStruct EntityCore.EntityRotationComponentData
// Size: 0x0c (Inherited: 0x01)
struct FEntityRotationComponentData : FComponentData {
	struct FRotator WorldRotation; // 0x00(0x0c)
};

// ScriptStruct EntityCore.EntityPositionComponentData
// Size: 0x0c (Inherited: 0x01)
struct FEntityPositionComponentData : FComponentData {
	struct FVector WorldPosition; // 0x00(0x0c)
};

// ScriptStruct EntityCore.EntityTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FEntityTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct EntityCore.ScriptDiagnosticMessage
// Size: 0x58 (Inherited: 0x00)
struct FScriptDiagnosticMessage {
	enum class EScriptDiagnosticMessageType MessageType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime Timestamp; // 0x08(0x08)
	struct FString Channel; // 0x10(0x10)
	struct FText MessageStr; // 0x20(0x18)
	struct FScriptDiagnosticSourceLocation SourceLocation; // 0x38(0x20)
};

// ScriptStruct EntityCore.ScriptDiagnosticSourceLocation
// Size: 0x20 (Inherited: 0x00)
struct FScriptDiagnosticSourceLocation {
	char pad_0[0x20]; // 0x00(0x20)
};

