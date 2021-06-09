// Class Niagara.NiagaraDataInterface
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Niagara.MovieSceneNiagaraTrack
// Size: 0xa0 (Inherited: 0x90)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x90(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0xc0 (Inherited: 0xa0)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; // 0xa0(0x20)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0xc8 (Inherited: 0xc0)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0xf8 (Inherited: 0xe8)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0xa8 (Inherited: 0xa0)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xd0 (Inherited: 0xc0)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_C0[0x8]; // 0xc0(0x08)
	int32_t ChannelsUsed; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class Niagara.NiagaraActor
// Size: 0x230 (Inherited: 0x220)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x220(0x08)
	char bDestroyOnSystemFinish : 1; // 0x228(0x01)
	char pad_228_1 : 7; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8c8f8
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished // (Final|Native|Private) // @ game+0x27b2b70
};

// Class Niagara.NiagaraBakerSettings
// Size: 0x118 (Inherited: 0x28)
struct UNiagaraBakerSettings : UObject {
	float StartSeconds; // 0x28(0x04)
	float DurationSeconds; // 0x2c(0x04)
	int32_t FramesPerSecond; // 0x30(0x04)
	char bPreviewLooping : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FIntPoint FramesPerDimension; // 0x38(0x08)
	struct TArray<struct FNiagaraBakerTextureSettings> OutputTextures; // 0x40(0x10)
	enum class ENiagaraBakerViewMode CameraViewportMode; // 0x50(0x04)
	struct FVector CameraViewportLocation[0x7]; // 0x54(0x54)
	struct FRotator CameraViewportRotation[0x7]; // 0xa8(0x54)
	float CameraOrbitDistance; // 0xfc(0x04)
	float CameraFOV; // 0x100(0x04)
	float CameraOrthoWidth; // 0x104(0x04)
	char bUseCameraAspectRatio : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float CameraAspectRatio; // 0x10c(0x04)
	char bRenderComponentOnly : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// Class Niagara.NiagaraComponent
// Size: 0x5f0 (Inherited: 0x450)
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; // 0x448(0x08)
	enum class ENiagaraTickBehavior TickBehavior; // 0x450(0x01)
	int32_t RandomSeedOffset; // 0x454(0x04)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x458(0xc8)
	char bForceSolo : 1; // 0x520(0x01)
	char bEnableGpuComputeDebug : 1; // 0x520(0x01)
	char pad_525_2 : 6; // 0x525(0x01)
	char pad_526[0x32]; // 0x526(0x32)
	char bAutoDestroy : 1; // 0x558(0x01)
	char bRenderingEnabled : 1; // 0x558(0x01)
	char bAutoManageAttachment : 1; // 0x558(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x558(0x01)
	char pad_558_4 : 4; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	float MaxTimeBeforeForceUpdateTransform; // 0x55c(0x04)
	char pad_560[0x8]; // 0x560(0x08)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x568(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x578(0x08)
	struct FName AutoAttachSocketName; // 0x580(0x08)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x588(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x589(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x58a(0x01)
	char pad_58B[0x65]; // 0x58b(0x65)

	void SetVariableVec4(struct FName InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraComponent.SetVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c8ed08
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x1e5a904
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c8ec24
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget); // Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8eb3c
	void SetVariableTexture(struct FName InVariableName, struct UTexture* Texture); // Function Niagara.NiagaraComponent.SetVariableTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8e9b8
	void SetVariableQuat(struct FName InVariableName, struct FQuat InValue); // Function Niagara.NiagaraComponent.SetVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c8e8bc
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8e7d4
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x213bec4
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x177db98
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0x18c05d0
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x1d371a8
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0x1d28d88
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8e7d4
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior); // Function Niagara.NiagaraComponent.SetTickBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8e73c
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8e69c
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8e5f8
	void SetRandomSeedOffset(int32_t NewRandomSeedOffset); // Function Niagara.NiagaraComponent.SetRandomSeedOffset // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8e554
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8e47c
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8e3e0
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c8e2c8
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c8e1b4
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c8e090
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c8df64
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8da10
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c8de38
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8dd30
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8dc24
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8db18
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8da10
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d970
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock); // Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d8d8
	void SetGpuComputeDebug(bool bEnableDebug); // Function Niagara.NiagaraComponent.SetGpuComputeDebug // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d824
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d788
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d6ec
	void SetCustomTimeDilation(float Dilation); // Function Niagara.NiagaraComponent.SetCustomTimeDilation // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d64c
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d5b4
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d51c
	void SetAsset(struct UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters); // Function Niagara.NiagaraComponent.SetAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x21e4404
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d480
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d3ec
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d344
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d328
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d314
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8d2e0
	void InitForPerformanceBaseline(); // Function Niagara.NiagaraComponent.InitForPerformanceBaseline // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d2c4
	enum class ENiagaraTickBehavior GetTickBehavior(); // Function Niagara.NiagaraComponent.GetTickBehavior // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8d2ac
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8d294
	int32_t GetRandomSeedOffset(); // Function Niagara.NiagaraComponent.GetRandomSeedOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8d27c
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1db0504
	float GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8d268
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8cfdc
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8d124
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8cf08
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8cef0
	bool GetLockDesiredAgeDeltaTimeToSeekDelta(); // Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8ced8
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8cebc
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8cea4
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8cdb4
	float GetCustomTimeDilation(); // Function Niagara.NiagaraComponent.GetCustomTimeDilation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8cd9c
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f4fac4
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8cd84
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8cc78
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0x3c8cac4
};

// Class Niagara.NiagaraComponentPool
// Size: 0x80 (Inherited: 0x28)
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class Niagara.NiagaraRendererProperties
// Size: 0x88 (Inherited: 0x28)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	struct FNiagaraPlatformSet Platforms; // 0x28(0x30)
	int32_t SortOrderHint; // 0x58(0x04)
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting; // 0x5c(0x04)
	bool bIsEnabled; // 0x60(0x01)
	bool bMotionBlurEnabled; // 0x61(0x01)
	char pad_62[0x26]; // 0x62(0x26)
};

// Class Niagara.NiagaraComponentRendererProperties
// Size: 0x1c0 (Inherited: 0x88)
struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties {
	struct USceneComponent* ComponentType; // 0x88(0x08)
	uint32_t ComponentCountLimit; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0x98(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0xf0(0x58)
	bool bAssignComponentsOnParticleID; // 0x148(0x01)
	bool bOnlyCreateComponentsOnParticleSpawn; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	int32_t RendererVisibility; // 0x14c(0x04)
	struct USceneComponent* TemplateComponent; // 0x150(0x08)
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings; // 0x158(0x10)
	char pad_168[0x58]; // 0x168(0x58)
};

// Class Niagara.NiagaraComponentSettings
// Size: 0x118 (Inherited: 0x28)
struct UNiagaraComponentSettings : UObject {
	struct TSet<struct FName> SuppressActivationList; // 0x28(0x50)
	struct TSet<struct FName> ForceAutoPooolingList; // 0x78(0x50)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8(0x50)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraDataInterface2DArrayTexture
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	struct UTexture2DArray* Texture; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class Niagara.NiagaraDataInterfaceArray
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceArray : UNiagaraDataInterface {
	char pad_38[0x8]; // 0x38(0x08)
	int32_t MaxElements; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	struct TArray<float> FloatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat2
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector2D> FloatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat3
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector> FloatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat4
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector4> FloatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayColor
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	struct TArray<struct FLinearColor> ColorData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayQuat
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	struct TArray<struct FQuat> QuatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary {

	void SetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c92004
	void SetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector4 Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c91c80
	void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4 // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3c91af0
	void SetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FVector2D Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c91908
	void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3c91778
	void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3c91e74
	void SetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FQuat Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c91590
	void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3c91400
	void SetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c911cc
	void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32 // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3c9103c
	void SetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c90df4
	void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3c90c64
	void SetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, struct FLinearColor Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue // (Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c90a7c
	void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3c908ec
	void SetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index, bool Value, bool bSizeToFit); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3c906ac
	void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3c9051c
	struct FVector GetNiagaraArrayVectorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0x3c90268
	struct FVector4 GetNiagaraArrayVector4Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0x3c8fff0
	struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4 // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8feb0
	struct FVector2D GetNiagaraArrayVector2DValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0x3c8fd2c
	struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8fbec
	struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c90128
	struct FQuat GetNiagaraArrayQuatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0x3c8fa68
	struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8f928
	int32_t GetNiagaraArrayInt32Value(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8f7c4
	struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32 // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8f684
	float GetNiagaraArrayFloatValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8f554
	struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8f414
	struct FLinearColor GetNiagaraArrayColorValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue // (Final|Native|Static|Private|HasDefaults|BlueprintCallable) // @ game+0x3c8f290
	struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8f150
	bool GetNiagaraArrayBoolValue(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, int32_t Index); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8efec
	struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3c8eee8
};

// Class Niagara.NiagaraDataInterfaceArrayInt32
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	struct TArray<int32_t> IntData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayBool
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	struct TArray<bool> BoolData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
	int32_t Resolution; // 0x40(0x04)
	float ScopeInMilliseconds; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceAudioPlayer
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface {
	struct USoundBase* SoundToPlay; // 0x38(0x08)
	struct USoundAttenuation* Attenuation; // 0x40(0x08)
	struct USoundConcurrency* Concurrency; // 0x48(0x08)
	struct TArray<struct FName> ParameterNames; // 0x50(0x10)
	bool bLimitPlaysPerTick; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t MaxPlaysPerTick; // 0x64(0x04)
	bool bStopWhenComponentIsDestroyed; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40(0x04)
	float MinimumFrequency; // 0x44(0x04)
	float MaximumFrequency; // 0x48(0x04)
	float NoiseFloorDb; // 0x4c(0x04)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38(0x04)
	bool bRequireCurrentFrameData; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; // 0x38(0x10)
	float LUTMinTime; // 0x48(0x04)
	float LUTMaxTime; // 0x4c(0x04)
	float LUTInvTimeRange; // 0x50(0x04)
	float LUTNumSamplesMinusOne; // 0x54(0x04)
	char bUseLUT : 1; // 0x58(0x01)
	char bExposeCurve : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName ExposedName; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture2D* ExposedTexture; // 0x68(0x08)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; // 0x70(0x80)
	struct FRichCurve GreenCurve; // 0xf0(0x80)
	struct FRichCurve BlueCurve; // 0x170(0x80)
	struct FRichCurve AlphaCurve; // 0x1f0(0x80)
};

// Class Niagara.NiagaraDataInterfaceCubeTexture
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceCubeTexture : UNiagaraDataInterface {
	struct UTextureCube* Texture; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xf0 (Inherited: 0x70)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; // 0x70(0x80)
};

// Class Niagara.NiagaraDataInterfaceDebugDraw
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceDebugDraw : UNiagaraDataInterface {
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData> Data, struct UNiagaraSystem* NiagaraSystem); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x3c90400
};

// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38(0x20)
	enum class ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t GPUAllocationFixedSize; // 0x5c(0x04)
	float GPUAllocationPerParticleSize; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Niagara.NiagaraDataInterfaceGBuffer
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0xd8 (Inherited: 0x38)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	struct TSet<int32_t> OutputShaderStages; // 0x38(0x50)
	struct TSet<int32_t> IterationShaderStages; // 0x88(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0xf8 (Inherited: 0xd8)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd8(0x04)
	int32_t NumCellsY; // 0xdc(0x04)
	int32_t NumCellsMaxAxis; // 0xe0(0x04)
	int32_t NumAttributes; // 0xe4(0x04)
	bool SetGridFromMaxAxis; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector2D WorldBBoxSize; // 0xec(0x08)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x1c0 (Inherited: 0xf8)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8(0x20)
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118(0x01)
	char bOverrideFormat : 1; // 0x119(0x01)
	char pad_119_1 : 7; // 0x119(0x01)
	char pad_11A[0x56]; // 0x11a(0x56)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170(0x50)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c92c60
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c9295c
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D // (Native|Public|BlueprintCallable) // @ game+0x3c92818
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t TilesX, int32_t TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c92460
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Size: 0x168 (Inherited: 0xf8)
struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D {
	struct FString EmitterName; // 0xf8(0x10)
	struct FString DIName; // 0x108(0x10)
	char pad_118[0x50]; // 0x118(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x100 (Inherited: 0xd8)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumCells; // 0xd8(0x0c)
	float CellSize; // 0xe4(0x04)
	int32_t NumCellsMaxAxis; // 0xe8(0x04)
	enum class ESetResolutionMethod SetResolutionMethod; // 0xec(0x04)
	struct FVector WorldBBoxSize; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// Size: 0x180 (Inherited: 0x100)
struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108(0x20)
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x128(0x01)
	char bOverrideFormat : 1; // 0x129(0x01)
	char pad_129_1 : 7; // 0x129(0x01)
	char pad_12A[0x56]; // 0x12a(0x56)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY, int32_t SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c92db4
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY, int32_t SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c92ab0
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture // (Native|Public|BlueprintCallable) // @ game+0x3c92818
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t TilesX, int32_t TilesY, int32_t TileZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c92608
};

// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
// Size: 0x150 (Inherited: 0xd8)
struct UNiagaraDataInterfaceIntRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; // 0xd8(0x08)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe0(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0x100(0x50)
};

// Class Niagara.NiagaraDataInterfaceLandscape
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	struct AActor* SourceLandscape; // 0x38(0x08)
	enum class ENDILandscape_SourceMode SourceMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct UPhysicalMaterial*> PhysicalMaterials; // 0x48(0x10)
};

// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceMeshRendererInfo : UNiagaraDataInterface {
	struct UNiagaraMeshRendererProperties* MeshRenderer; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x108 (Inherited: 0x100)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0xe8 (Inherited: 0xd8)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	struct FString EmitterName; // 0xd8(0x10)
};

// Class Niagara.NiagaraDataInterfacePlatformSet
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	struct FNiagaraPlatformSet Platforms; // 0x38(0x30)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// Size: 0x1a8 (Inherited: 0xd8)
struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; // 0xd8(0x08)
	enum class ENiagaraMipMapGeneration MipMapGeneration; // 0xe0(0x01)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe1(0x01)
	char bInheritUserParameterSettings : 1; // 0xe2(0x01)
	char bOverrideFormat : 1; // 0xe2(0x01)
	char pad_E2_2 : 6; // 0xe2(0x01)
	char pad_E3[0x5]; // 0xe3(0x05)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8(0x20)
	char pad_108[0x50]; // 0x108(0x50)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0x158(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Size: 0x158 (Inherited: 0xd8)
struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0xd8(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4(0x01)
	char bInheritUserParameterSettings : 1; // 0xe5(0x01)
	char bOverrideFormat : 1; // 0xe5(0x01)
	char pad_E5_2 : 6; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTargetCube
// Size: 0x150 (Inherited: 0xd8)
struct UNiagaraDataInterfaceRenderTargetCube : UNiagaraDataInterfaceRWBase {
	int32_t Size; // 0xd8(0x04)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xdc(0x01)
	char bInheritUserParameterSettings : 1; // 0xdd(0x01)
	char bOverrideFormat : 1; // 0xdd(0x01)
	char pad_DD_2 : 6; // 0xdd(0x01)
	char pad_DE[0x2]; // 0xde(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe0(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetCube*> ManagedRenderTargets; // 0x100(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// Size: 0x158 (Inherited: 0xd8)
struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0xd8(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4(0x01)
	char bInheritUserParameterSettings : 1; // 0xe5(0x01)
	char bOverrideFormat : 1; // 0xe5(0x01)
	char pad_E5_2 : 6; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108(0x50)
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xc8 (Inherited: 0x38)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	enum class ENDISkeletalMesh_SourceMode SourceMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct AActor* Source; // 0x40(0x08)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x48(0x20)
	struct USkeletalMeshComponent* SourceComponent; // 0x68(0x08)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FName> SamplingRegions; // 0x78(0x10)
	int32_t WholeMeshLOD; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FName> FilteredBones; // 0x90(0x10)
	struct TArray<struct FName> FilteredSockets; // 0xa0(0x10)
	struct FName ExcludeBoneName; // 0xb0(0x08)
	char bExcludeBone : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	int32_t UvSetIndex; // 0xbc(0x04)
	bool bRequireCurrentFrameData; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x38(0x08)
	struct FNiagaraUserParameterBinding SplineUserParameter; // 0x40(0x20)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x88 (Inherited: 0x38)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	enum class ENDIStaticMesh_SourceMode SourceMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* DefaultMesh; // 0x40(0x08)
	struct AActor* Source; // 0x48(0x08)
	struct UStaticMeshComponent* SourceComponent; // 0x50(0x08)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x58(0x10)
	bool bUsePhysicsBodyVelocity; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FName> FilteredSockets; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x38(0x08)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x170 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
	struct FRichCurve WCurve; // 0x1f0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1f0 (Inherited: 0x70)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; // 0x38(0x08)
	bool bTileX; // 0x40(0x01)
	bool bTileY; // 0x41(0x01)
	bool bTileZ; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UVolumeTexture* Texture; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class Niagara.NiagaraDebugHUDSettings
// Size: 0x128 (Inherited: 0x28)
struct UNiagaraDebugHUDSettings : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct FNiagaraDebugHUDSettingsData Data; // 0x48(0xe0)
};

// Class Niagara.NiagaraEditorDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraEditorParametersAdapterBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorParametersAdapterBase : UObject {
};

// Class Niagara.NiagaraSignificanceHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandler : UObject {
};

// Class Niagara.NiagaraSignificanceHandlerDistance
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraSignificanceHandlerAge
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraEffectType
// Size: 0x98 (Inherited: 0x28)
struct UNiagaraEffectType : UObject {
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28(0x04)
	enum class ENiagaraCullReaction CullReaction; // 0x2c(0x04)
	struct UNiagaraSignificanceHandler* SignificanceHandler; // 0x30(0x08)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58(0x10)
	char pad_68[0x8]; // 0x68(0x08)
	struct UNiagaraBaselineController* PerformanceBaselineController; // 0x70(0x08)
	struct FNiagaraPerfBaselineStats PerfBaselineStats; // 0x78(0x10)
	struct FGuid PerfBaselineVersion; // 0x88(0x10)
};

// Class Niagara.NiagaraEmitter
// Size: 0x248 (Inherited: 0x28)
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x28(0x01)
	bool bDeterminism; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t RandomSeed; // 0x2c(0x04)
	enum class EParticleAllocationMode AllocationMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t PreAllocationCount; // 0x34(0x04)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60(0x28)
	enum class ENiagaraSimTarget SimTarget; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FBox FixedBounds; // 0x8c(0x1c)
	int32_t MinDetailLevel; // 0xa8(0x04)
	int32_t MaxDetailLevel; // 0xac(0x04)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0xb0(0x14)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FNiagaraPlatformSet Platforms; // 0xc8(0x30)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0xf8(0x10)
	char bInterpolatedSpawning : 1; // 0x108(0x01)
	char bFixedBounds : 1; // 0x108(0x01)
	char bUseMinDetailLevel : 1; // 0x108(0x01)
	char bUseMaxDetailLevel : 1; // 0x108(0x01)
	char bOverrideGlobalSpawnCountScale : 1; // 0x108(0x01)
	char bRequiresPersistentIDs : 1; // 0x108(0x01)
	char bCombineEventSpawn : 1; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float MaxDeltaTimePerTick; // 0x10c(0x04)
	char bDeprecatedShaderStagesEnabled : 1; // 0x110(0x01)
	char bSimulationStagesEnabled : 1; // 0x110(0x01)
	char bLimitDeltaTime : 1; // 0x110(0x01)
	char pad_110_3 : 5; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FString UniqueEmitterName; // 0x118(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x128(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x138(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x148(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x158(0x08)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x160(0x10)
	char pad_170[0xd8]; // 0x170(0xd8)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Niagara.NiagaraFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x1dafc38
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xe572f0
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c974ec
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c96cb4
	void SetTexture2DArrayObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture2DArray* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c967a8
	void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName> SamplingRegions); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3c96434
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c959ec
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c954e0
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1671c84
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3c950f0
};

// Class Niagara.NiagaraLensEffectBase
// Size: 0x290 (Inherited: 0x230)
struct ANiagaraLensEffectBase : ANiagaraActor {
	char pad_230[0x10]; // 0x230(0x10)
	struct FTransform DesiredRelativeTransform; // 0x240(0x30)
	float BaseAuthoredFOV; // 0x270(0x04)
	char bAllowMultipleInstances : 1; // 0x274(0x01)
	char bResetWhenRetriggered : 1; // 0x274(0x01)
	char pad_274_2 : 6; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct TArray<struct AActor*> EmittersToTreatAsSame; // 0x278(0x10)
	struct APlayerCameraManager* OwningCameraManager; // 0x288(0x08)
};

// Class Niagara.NiagaraLightRendererProperties
// Size: 0x340 (Inherited: 0x88)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x88(0x01)
	char bAffectsTranslucency : 1; // 0x88(0x01)
	char bAlphaScalesBrightness : 1; // 0x88(0x01)
	char pad_88_3 : 5; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float RadiusScale; // 0x8c(0x04)
	float DefaultExponent; // 0x90(0x04)
	struct FVector ColorAdd; // 0x94(0x0c)
	int32_t RendererVisibility; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0xa8(0x58)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0x100(0x58)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x158(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1b0(0x58)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x208(0x58)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x260(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x2b8(0x58)
	char pad_310[0x30]; // 0x310(0x30)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x8a8 (Inherited: 0x88)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct TArray<struct FNiagaraMeshRendererMeshProperties> Meshes; // 0x88(0x10)
	enum class ENiagaraRendererSourceDataMode SourceMode; // 0x98(0x01)
	enum class ENiagaraSortMode SortMode; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	char bOverrideMaterials : 1; // 0x9c(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x9c(0x01)
	char bSubImageBlend : 1; // 0x9c(0x01)
	char bEnableFrustumCulling : 1; // 0x9c(0x01)
	char bEnableCameraDistanceCulling : 1; // 0x9c(0x01)
	char bEnableMeshFlipbook : 1; // 0x9c(0x01)
	char pad_9C_6 : 2; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0xa0(0x10)
	struct FVector2D SubImageSize; // 0xb0(0x08)
	enum class ENiagaraMeshFacingMode FacingMode; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	char bLockedAxisEnable : 1; // 0xbc(0x01)
	char pad_BC_1 : 7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct FVector LockedAxis; // 0xc0(0x0c)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	float MinCameraDistance; // 0xd0(0x04)
	float MaxCameraDistance; // 0xd4(0x04)
	uint32_t RendererVisibility; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xe0(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x138(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x190(0x58)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1e8(0x58)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x240(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x298(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2f0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x348(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x3a0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x3f8(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x450(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x4a8(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x500(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x558(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5b0(0x58)
	struct FNiagaraVariableAttributeBinding MeshIndexBinding; // 0x608(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x660(0x10)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x670(0x58)
	struct FNiagaraVariableAttributeBinding PrevScaleBinding; // 0x6c8(0x58)
	struct FNiagaraVariableAttributeBinding PrevMeshOrientationBinding; // 0x720(0x58)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x778(0x58)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7d0(0x58)
	char pad_828[0x68]; // 0x828(0x68)
	struct UStaticMesh* ParticleMesh; // 0x890(0x08)
	struct FVector PivotOffset; // 0x898(0x0c)
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x8a4(0x01)
	char pad_8A5[0x3]; // 0x8a5(0x03)
};

// Class Niagara.NiagaraMessageDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraMessageDataBase : UObject {
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0xe0 (Inherited: 0x28)
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; // 0x28(0x08)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x30(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x40(0x78)
	char pad_B8[0x28]; // 0xb8(0x28)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c973d8
	void SetVector4Parameter(struct FString InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c972c0
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c971c0
	void SetQuatParameter(struct FString InVariableName, struct FQuat InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3c96328
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3c96220
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3c96114
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c96008
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3c95efc
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c95418
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c95358
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c95298
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c951d8
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3c95038
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3c94f80
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3c94ec0
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x3c94e08
};

// Class Niagara.NiagaraParameterCollection
// Size: 0x60 (Inherited: 0x28)
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; // 0x28(0x08)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x30(0x10)
	struct UMaterialParameterCollection* SourceMaterialCollection; // 0x40(0x08)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48(0x08)
	struct FGuid CompileId; // 0x50(0x10)
};

// Class Niagara.NiagaraParameterDefinitionsBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraParameterDefinitionsBase : UObject {
};

// Class Niagara.NiagaraBaselineController
// Size: 0x68 (Inherited: 0x28)
struct UNiagaraBaselineController : UObject {
	float TestDuration; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UNiagaraEffectType* EffectType; // 0x30(0x08)
	struct ANiagaraPerfBaselineActor* Owner; // 0x38(0x08)
	struct TSoftObjectPtr<struct UNiagaraSystem> System; // 0x40(0x28)

	bool OnTickTest(); // Function Niagara.NiagaraBaselineController.OnTickTest // (Native|Event|Public|BlueprintEvent) // @ game+0x3c9835c
	void OnOwnerTick(float DeltaTime); // Function Niagara.NiagaraBaselineController.OnOwnerTick // (Native|Event|Public|BlueprintEvent) // @ game+0x3c982b8
	void OnEndTest(struct FNiagaraPerfBaselineStats Stats); // Function Niagara.NiagaraBaselineController.OnEndTest // (Native|Event|Public|BlueprintEvent) // @ game+0x3c9820c
	void OnBeginTest(); // Function Niagara.NiagaraBaselineController.OnBeginTest // (Native|Event|Public|BlueprintEvent) // @ game+0x20a4c4c
	struct UNiagaraSystem* GetSystem(); // Function Niagara.NiagaraBaselineController.GetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x3c981d0
};

// Class Niagara.NiagaraBaselineController_Basic
// Size: 0x80 (Inherited: 0x68)
struct UNiagaraBaselineController_Basic : UNiagaraBaselineController {
	int32_t NumInstances; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UNiagaraComponent*> SpawnedComponents; // 0x70(0x10)
};

// Class Niagara.NiagaraPerfBaselineActor
// Size: 0x230 (Inherited: 0x220)
struct ANiagaraPerfBaselineActor : AActor {
	struct UNiagaraBaselineController* Controller; // 0x220(0x08)
	struct UTextRenderComponent* Label; // 0x228(0x08)
};

// Class Niagara.NiagaraPrecompileContainer
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; // 0x28(0x10)
	struct UNiagaraSystem* System; // 0x38(0x08)
};

// Class Niagara.NiagaraPreviewBase
// Size: 0x220 (Inherited: 0x220)
struct ANiagaraPreviewBase : AActor {

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetLabelText(struct FText InXAxisText, struct FText InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

// Class Niagara.NiagaraPreviewAxis
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraPreviewAxis : UObject {

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num // (Native|Event|Public|BlueprintEvent) // @ game+0x3c981e4
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x3c97f58
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; // 0x28(0x08)
	int32_t Count; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t min; // 0x38(0x04)
	int32_t max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float min; // 0x38(0x04)
	float max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D min; // 0x38(0x08)
	struct FVector2D max; // 0x40(0x08)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector min; // 0x38(0x0c)
	struct FVector max; // 0x44(0x0c)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 min; // 0x40(0x10)
	struct FVector4 max; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor min; // 0x38(0x10)
	struct FLinearColor max; // 0x48(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size: 0x270 (Inherited: 0x220)
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; // 0x220(0x08)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x230(0x08)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x238(0x08)
	struct ANiagaraPreviewBase* PreviewClass; // 0x240(0x08)
	float SpacingX; // 0x248(0x04)
	float SpacingY; // 0x24c(0x04)
	int32_t NumX; // 0x250(0x04)
	int32_t NumY; // 0x254(0x04)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x258(0x10)
	char pad_268[0x8]; // 0x268(0x08)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x3c98384
	void GetPreviews(struct TArray<struct UNiagaraComponent*> OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3c98120
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0x3c9810c
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0x3c97ec4
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x870 (Inherited: 0x88)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x88(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x90(0x20)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FNiagaraRibbonUVSettings UV0Settings; // 0xb4(0x24)
	struct FNiagaraRibbonUVSettings UV1Settings; // 0xd8(0x24)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0xfc(0x01)
	enum class ENiagaraRibbonShapeMode Shape; // 0xfd(0x01)
	bool bEnableAccurateGeometry; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	int32_t WidthSegmentationCount; // 0x100(0x04)
	int32_t MultiPlaneCount; // 0x104(0x04)
	int32_t TubeSubdivisions; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices; // 0x110(0x10)
	float CurveTension; // 0x120(0x04)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	int32_t TessellationFactor; // 0x128(0x04)
	bool bUseConstantFactor; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	float TessellationAngle; // 0x130(0x04)
	bool bScreenSpaceTessellation; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x138(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x190(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1e8(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x240(0x58)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x298(0x58)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2f0(0x58)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x348(0x58)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x3a0(0x58)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3f8(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x450(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x4a8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x500(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x558(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5b0(0x58)
	struct FNiagaraVariableAttributeBinding RibbonUVDistance; // 0x608(0x58)
	struct FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x660(0x58)
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x6b8(0x58)
	struct FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x710(0x58)
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x768(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x7c0(0x10)
	char pad_7D0[0xa0]; // 0x7d0(0xa0)
};

// Class Niagara.NiagaraScript
// Size: 0x2e0 (Inherited: 0x28)
struct UNiagaraScript : UNiagaraScriptBase {
	enum class ENiagaraScriptUsage Usage; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGuid UsageId; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x40(0x78)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xb8(0x98)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x150(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x160(0x58)
	char pad_1B8[0x10]; // 0x1b8(0x10)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x1c8(0xf0)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x2b8(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x2c8(0x10)
	char pad_2D8[0x8]; // 0x2d8(0x08)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete // (Final|Native|Public) // @ game+0x203d3e0
};

// Class Niagara.NiagaraScriptSourceBase
// Size: 0x48 (Inherited: 0x28)
struct UNiagaraScriptSourceBase : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0xd0 (Inherited: 0x38)
struct UNiagaraSettings : UDeveloperSettings {
	struct FSoftObjectPath DefaultEffectType; // 0x38(0x18)
	struct TArray<struct FSoftObjectPath> DefaultLinkedParameterDefinitions; // 0x50(0x10)
	struct TArray<struct FText> QualityLevels; // 0x60(0x10)
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass; // 0x70(0x50)
	enum class ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xc0(0x01)
	enum class ENiagaraGpuBufferFormat DefaultGridFormat; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xc4(0x04)
	enum class ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences; // 0xc8(0x01)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat; // 0xc9(0x01)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat; // 0xca(0x01)
	char pad_CB[0x5]; // 0xcb(0x05)
};

// Class Niagara.NiagaraSimulationStageBase
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; // 0x28(0x08)
	struct FName SimulationStageName; // 0x30(0x08)
	char bEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x70 (Inherited: 0x40)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	enum class ENiagaraIterationSource IterationSource; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t Iterations; // 0x44(0x04)
	char bSpawnOnly : 1; // 0x48(0x01)
	char bDisablePartialParticleUpdate : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50(0x20)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0xac0 (Inherited: 0x88)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x88(0x08)
	enum class ENiagaraRendererSourceDataMode SourceMode; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x98(0x20)
	enum class ENiagaraSpriteAlignment Alignment; // 0xb8(0x01)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	struct FVector2D PivotInUVSpace; // 0xbc(0x08)
	enum class ENiagaraSortMode SortMode; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct FVector2D SubImageSize; // 0xc8(0x08)
	char bSubImageBlend : 1; // 0xd0(0x01)
	char bRemoveHMDRollInVR : 1; // 0xd0(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0xd0(0x01)
	char bGpuLowLatencyTranslucency : 1; // 0xd0(0x01)
	char pad_D0_4 : 4; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float MinFacingCameraBlendDistance; // 0xd4(0x04)
	float MaxFacingCameraBlendDistance; // 0xd8(0x04)
	char bEnableCameraDistanceCulling : 1; // 0xdc(0x01)
	char pad_DC_1 : 7; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	float MinCameraDistance; // 0xe0(0x04)
	float MaxCameraDistance; // 0xe4(0x04)
	uint32_t RendererVisibility; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xf0(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x148(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1a0(0x58)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x1f8(0x58)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x250(0x58)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x2a8(0x58)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x300(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x358(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x3b0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x408(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x460(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4b8(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x510(0x58)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x568(0x58)
	struct FNiagaraVariableAttributeBinding PivotOffsetBinding; // 0x5c0(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x618(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x670(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x6c8(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x720(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x778(0x10)
	struct FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x788(0x58)
	struct FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7e0(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteRotationBinding; // 0x838(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteSizeBinding; // 0x890(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteFacingBinding; // 0x8e8(0x58)
	struct FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding; // 0x940(0x58)
	struct FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x998(0x58)
	struct FNiagaraVariableAttributeBinding PrevPivotOffsetBinding; // 0x9f0(0x58)
	char pad_A48[0x78]; // 0xa48(0x78)
};

// Class Niagara.NiagaraSystem
// Size: 0x498 (Inherited: 0x30)
struct UNiagaraSystem : UFXSystemAsset {
	bool bDumpDebugSystemInfo; // 0x30(0x01)
	bool bDumpDebugEmitterInfo; // 0x31(0x01)
	bool bRequireCurrentFrameData; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	char bFixedBounds : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UNiagaraEffectType* EffectType; // 0x38(0x08)
	bool bOverrideScalabilitySettings; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x68(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x78(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x88(0x08)
	struct UNiagaraScript* SystemUpdateScript; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xa8(0x218)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x2c0(0xc8)
	struct FBox FixedBounds; // 0x388(0x1c)
	bool bAutoDeactivate; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	float WarmupTime; // 0x3a8(0x04)
	int32_t WarmupTickCount; // 0x3ac(0x04)
	float WarmupTickDelta; // 0x3b0(0x04)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x3b4(0x01)
	bool bNeedsGPUContextInitForDataInterfaces; // 0x3b5(0x01)
	char pad_3B6[0x2]; // 0x3b6(0x02)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x3b8(0x10)
	char pad_3C8[0xd0]; // 0x3c8(0xd0)
};

