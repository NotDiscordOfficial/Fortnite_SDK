// Enum KairosSceneCapture.EKairosAvatarCaptureState
enum class EKairosAvatarCaptureState : uint8 {
	Unloaded,
	LoadingAssets,
	ReadyToSpawn,
	FinalizingSpawn,
	Displaying,
	EKairosAvatarCaptureState_MAX,
};

// Enum KairosSceneCapture.EKairosHeroAnimationType
enum class EKairosHeroAnimationType : uint8 {
	Unknown,
	Idle,
	Emote,
	EKairosHeroAnimationType_MAX,
};

// Enum KairosSceneCapture.EKairosHeroAnimationState
enum class EKairosHeroAnimationState : uint8 {
	Unknown,
	Idling,
	Emoting,
	Face_Live,
	Face_Playback,
	EKairosHeroAnimationState_MAX,
};

// Enum KairosSceneCapture.EKairosHeroSkeletonType
enum class EKairosHeroSkeletonType : uint8 {
	Unknown,
	Male,
	Female,
	EKairosHeroSkeletonType_MAX,
};

// Enum KairosSceneCapture.EKairosAppMode
enum class EKairosAppMode : uint8 {
	Unknown,
	AvatarCapture,
	AvatarRender,
	EKairosAppMode_MAX,
};

// ScriptStruct KairosSceneCapture.KairosSnippetPlayRecord
// Size: 0x18 (Inherited: 0x00)
struct FKairosSnippetPlayRecord {
	struct FString PlayerID; // 0x00(0x10)
	bool bPause; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct KairosSceneCapture.KairosSnippetParams
// Size: 0x18 (Inherited: 0x00)
struct FKairosSnippetParams {
	struct FString PlayerID; // 0x00(0x10)
	bool bPause; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct KairosSceneCapture.KairosCaptureAvatarParams
// Size: 0x40 (Inherited: 0x00)
struct FKairosCaptureAvatarParams {
	struct FString Background; // 0x00(0x10)
	struct FString Format; // 0x10(0x10)
	int32_t Width; // 0x20(0x04)
	int32_t Height; // 0x24(0x04)
	int32_t FrameRate; // 0x28(0x04)
	int32_t NumFrames; // 0x2c(0x04)
	struct TArray<struct FKairosAvatarMcpData> Characters; // 0x30(0x10)
};

// ScriptStruct KairosSceneCapture.KairosAvatarMcpData
// Size: 0x98 (Inherited: 0x00)
struct FKairosAvatarMcpData {
	struct FString ID; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	bool CurrentUser; // 0x20(0x01)
	bool ShouldPlayFacialAnimation; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
	struct FKairosAvatarItemMcpData Character; // 0x28(0x20)
	struct FKairosAvatarItemMcpData Backpack; // 0x48(0x20)
	struct FKairosAvatarItemMcpData Dance; // 0x68(0x20)
	struct TArray<struct FString> BackgroundColors; // 0x88(0x10)
};

// ScriptStruct KairosSceneCapture.KairosAvatarItemMcpData
// Size: 0x20 (Inherited: 0x00)
struct FKairosAvatarItemMcpData {
	struct FString TemplateId; // 0x00(0x10)
	struct FKairosAvatarAttributesMcpData Attributes; // 0x10(0x10)
};

// ScriptStruct KairosSceneCapture.KairosAvatarAttributesMcpData
// Size: 0x10 (Inherited: 0x00)
struct FKairosAvatarAttributesMcpData {
	struct TArray<struct FMcpVariantReader> Variants; // 0x00(0x10)
};

// ScriptStruct KairosSceneCapture.KairosBobbleTimeParams
// Size: 0x60 (Inherited: 0x00)
struct FKairosBobbleTimeParams {
	struct FString Background; // 0x00(0x10)
	struct TArray<struct FKairosAvatarMcpData> Characters; // 0x10(0x10)
	struct FString SnippetPath; // 0x20(0x10)
	struct FString ContainerType; // 0x30(0x10)
	struct FString ContainerID; // 0x40(0x10)
	struct FString MessageID; // 0x50(0x10)
};

// ScriptStruct KairosSceneCapture.KairosSceneInfo
// Size: 0x20 (Inherited: 0x00)
struct FKairosSceneInfo {
	enum class EKairosAppMode SceneAppMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FKairosAvatarDisplayInfo> SpawnedAvatars; // 0x08(0x10)
	struct FColor BackgroundColor; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct KairosSceneCapture.KairosAvatarDisplayInfo
// Size: 0x410 (Inherited: 0x00)
struct FKairosAvatarDisplayInfo {
	enum class EKairosAvatarCaptureState CurrentState; // 0x00(0x01)
	enum class EKairosAvatarCaptureState TargetState; // 0x01(0x01)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FTransform SpawnTransform; // 0x10(0x30)
	struct FKairosAvatarMcpData AvatarData; // 0x40(0x98)
	char pad_D8[0x30]; // 0xd8(0x30)
	struct FFortAthenaLoadout Loadout; // 0x108(0x140)
	struct UAnimSequenceBase* AnimToPlay; // 0x248(0x08)
	struct FString SnippetPathToPlay; // 0x250(0x10)
	char pad_260[0x10]; // 0x260(0x10)
	struct UFortHero* HeroItem; // 0x270(0x08)
	char pad_278[0x8]; // 0x278(0x08)
	struct FKairosCaptureParams CaptureParams; // 0x280(0x100)
	struct TArray<struct FLinearColor> BackgroundColors; // 0x380(0x10)
	struct AKairosHeroBase* KairosHero; // 0x390(0x08)
	struct AFortPlayerPawn* Pawn; // 0x398(0x08)
	bool bIsCurrentUser; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct FString DisplayName; // 0x3a8(0x10)
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct FTransform HeadBoneTransform; // 0x3c0(0x30)
	bool bSpawnTransformIsAbsolute; // 0x3f0(0x01)
	bool bIsNewCharacter; // 0x3f1(0x01)
	char pad_3F2[0x6]; // 0x3f2(0x06)
	struct AFortPlayerPawn* HeroPawnClass; // 0x3f8(0x08)
	bool bUseDefaultFrontendAnimClass; // 0x400(0x01)
	char pad_401[0xf]; // 0x401(0x0f)
};

// ScriptStruct KairosSceneCapture.KairosCaptureParams
// Size: 0x100 (Inherited: 0x00)
struct FKairosCaptureParams {
	int32_t FrameRate; // 0x00(0x04)
	int32_t OverrideNumFrames; // 0x04(0x04)
	struct FVector2D Size; // 0x08(0x08)
	struct FColor BackgroundColor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString FullPathAndName; // 0x18(0x10)
	char pad_28[0xd8]; // 0x28(0xd8)
};

// ScriptStruct KairosSceneCapture.KairosAnimationFramingInfo
// Size: 0x50 (Inherited: 0x00)
struct FKairosAnimationFramingInfo {
	struct FName Name; // 0x00(0x08)
	struct UAnimMontage* IdleMontage; // 0x08(0x08)
	enum class EKairosHeroAnimationType AnimationType; // 0x10(0x01)
	enum class EKairosHeroSkeletonType SkeletonType; // 0x11(0x01)
	char pad_12[0xe]; // 0x12(0x0e)
	struct FTransform CameraTransform; // 0x20(0x30)
};

