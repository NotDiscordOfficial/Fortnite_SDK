// Class DynamicHUD.DynamicHUDScene
// Size: 0x50 (Inherited: 0x30)
struct UDynamicHUDScene : UDataAsset {
	struct TArray<struct FDynamicHUDAllowed> Allowed; // 0x30(0x10)
	struct TArray<struct FDynamicHUDUnallowed> Unallowed; // 0x40(0x10)
};

// Class DynamicHUD.DynamicHUDDirectorBase
// Size: 0x230 (Inherited: 0x220)
struct ADynamicHUDDirectorBase : AActor {
	struct TArray<struct UDynamicHUDScene*> DefaultScenes; // 0x220(0x10)
};

// Class DynamicHUD.DynamicHUDConstraintBase
// Size: 0x60 (Inherited: 0x28)
struct UDynamicHUDConstraintBase : UObject {
	char pad_28[0x38]; // 0x28(0x38)
};

// Class DynamicHUD.DynamicHUDConstraintPosition
// Size: 0x70 (Inherited: 0x60)
struct UDynamicHUDConstraintPosition : UDynamicHUDConstraintBase {
	struct FVector2D Position; // 0x60(0x08)
	enum class EDynamicHUDAnchor Anchor; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// Class DynamicHUD.DynamicHUDConstraintAlignment
// Size: 0x68 (Inherited: 0x60)
struct UDynamicHUDConstraintAlignment : UDynamicHUDConstraintBase {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	enum class EDynamicHUDAnchor Anchor; // 0x64(0x04)
};

// Class DynamicHUD.DynamicHUDConstraintWidget
// Size: 0xa0 (Inherited: 0x60)
struct UDynamicHUDConstraintWidget : UDynamicHUDConstraintBase {
	enum class EDynamicHUDAnchor Anchor; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	SoftClassProperty TargetWidget; // 0x68(0x28)
	struct FName TargetUniqueID; // 0x90(0x08)
	enum class EDynamicHUDAnchor TargetAnchor; // 0x98(0x04)
	enum class EDynamicHUDStrength Strength; // 0x9c(0x04)
};

// Class DynamicHUD.DynamicHUDConstraintComparison
// Size: 0xb0 (Inherited: 0x60)
struct UDynamicHUDConstraintComparison : UDynamicHUDConstraintBase {
	enum class EDynamicHUDSide Side; // 0x60(0x04)
	float Offset; // 0x64(0x04)
	enum class EDynamicHUDComparison Comparison; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	SoftClassProperty TargetWidget; // 0x70(0x28)
	struct FName TargetUniqueID; // 0x98(0x08)
	enum class EDynamicHUDSide TargetSide; // 0xa0(0x04)
	float TargetOffset; // 0xa4(0x04)
	enum class EDynamicHUDStrength Strength; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// Class DynamicHUD.DynamicHUDConstraintEquation
// Size: 0xa8 (Inherited: 0x60)
struct UDynamicHUDConstraintEquation : UDynamicHUDConstraintBase {
	enum class EDynamicHUDSide Side; // 0x60(0x04)
	enum class EDynamicHUDOperator Operator; // 0x64(0x04)
	SoftClassProperty TargetWidget; // 0x68(0x28)
	struct FName TargetUniqueID; // 0x90(0x08)
	enum class EDynamicHUDSide TargetSide; // 0x98(0x04)
	enum class EDynamicHUDComparison Comparison; // 0x9c(0x04)
	float Result; // 0xa0(0x04)
	enum class EDynamicHUDStrength Strength; // 0xa4(0x04)
};

// Class DynamicHUD.DynamicHUDManager
// Size: 0x138 (Inherited: 0x30)
struct UDynamicHUDManager : UWorldSubsystem {
	char pad_30[0x40]; // 0x30(0x40)
	struct TMap<struct UDynamicHUDScene*, char> ActiveScenes; // 0x70(0x50)
	char pad_C0[0x28]; // 0xc0(0x28)
	struct TMap<struct FString, struct FDirectorData> ActiveDirectors; // 0xe8(0x50)

	void RemoveScenes(struct TArray<struct UDynamicHUDScene*> Scenes); // Function DynamicHUD.DynamicHUDManager.RemoveScenes // (Final|Native|Protected|BlueprintCallable) // @ game+0x656a3e0
	void RemoveScene(struct UDynamicHUDScene* Scene); // Function DynamicHUD.DynamicHUDManager.RemoveScene // (Final|Native|Protected|BlueprintCallable) // @ game+0x656a1e0
	void AddScenes(struct TArray<struct UDynamicHUDScene*> Scenes); // Function DynamicHUD.DynamicHUDManager.AddScenes // (Final|Native|Protected|BlueprintCallable) // @ game+0x656a0b0
	void AddScene(struct UDynamicHUDScene* Scene); // Function DynamicHUD.DynamicHUDManager.AddScene // (Final|Native|Protected|BlueprintCallable) // @ game+0x6569edc
};

// Class DynamicHUD.DynamicHUDVisualizerWidget
// Size: 0x288 (Inherited: 0x260)
struct UDynamicHUDVisualizerWidget : UUserWidget {
	struct TArray<struct UDynamicHUDScene*> Scenes; // 0x260(0x10)
	bool bRefresh; // 0x270(0x01)
	char pad_271[0x17]; // 0x271(0x17)
};

