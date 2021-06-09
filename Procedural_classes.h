// Class Procedural.HISMBuilderSettings
// Size: 0x1d0 (Inherited: 0x28)
struct UHISMBuilderSettings : UObject {
	enum class EComponentMobility Mobility; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FInt32Interval CullDistance; // 0x2c(0x08)
	char bCastShadow : 1; // 0x34(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x34(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x34(0x01)
	char bCastDynamicShadow : 1; // 0x34(0x01)
	char bCastStaticShadow : 1; // 0x34(0x01)
	char bCastShadowAsTwoSided : 1; // 0x34(0x01)
	char bReceivesDecals : 1; // 0x34(0x01)
	char bOverrideLightMapRes : 1; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t OverriddenLightMapRes; // 0x38(0x04)
	enum class ELightmapType LightmapType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	char bUseAsOccluder : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FBodyInstance BodyInstance; // 0x48(0x158)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x1a0(0x01)
	struct FLightingChannels LightingChannels; // 0x1a1(0x01)
	char pad_1A2[0x2]; // 0x1a2(0x02)
	char bRenderCustomDepth : 1; // 0x1a4(0x01)
	char pad_1A4_1 : 7; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	int32_t CustomDepthStencilValue; // 0x1ac(0x04)
	int32_t TranslucencySortPriority; // 0x1b0(0x04)
	char bEnableDensityScaling : 1; // 0x1b4(0x01)
	char pad_1B4_1 : 7; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x1b8(0x10)
	int32_t VirtualTextureCullMips; // 0x1c8(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x1cc(0x01)
	char pad_1CD[0x3]; // 0x1cd(0x03)

	void SetOverriddenLightMapRes(int32_t Value); // Function Procedural.HISMBuilderSettings.SetOverriddenLightMapRes // (Final|Native|Public|BlueprintCallable) // @ game+0x42de5f4
	int32_t GetOverriddenLightMapRes(); // Function Procedural.HISMBuilderSettings.GetOverriddenLightMapRes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d58c34
};

// Class Procedural.ProceduralParameterModifier
// Size: 0x38 (Inherited: 0x28)
struct UProceduralParameterModifier : UObject {
	bool bEnabled; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Contribution; // 0x2c(0x04)
	enum class EProceduralParameterModifierBlendMode BlendMode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)

	float GetContribution(); // Function Procedural.ProceduralParameterModifier.GetContribution // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de21c
};

// Class Procedural.ProceduralContentVariationsWeightsModifier
// Size: 0x38 (Inherited: 0x38)
struct UProceduralContentVariationsWeightsModifier : UProceduralParameterModifier {
};

// Class Procedural.ProceduralContentVariationsWeightsMapModifier
// Size: 0x48 (Inherited: 0x38)
struct UProceduralContentVariationsWeightsMapModifier : UProceduralContentVariationsWeightsModifier {
	struct TArray<struct FProceduralContentVariationMap> VariationsMaps; // 0x38(0x10)
};

// Class Procedural.ProceduralGenerator
// Size: 0x38 (Inherited: 0x28)
struct UProceduralGenerator : UObject {
	struct FProceduralDebugSettings DebugSettings; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Procedural.ProceduralCustomGenerator
// Size: 0x48 (Inherited: 0x38)
struct UProceduralCustomGenerator : UProceduralGenerator {
	struct UProceduralGeneratorContext* GeneratorContextClass; // 0x38(0x08)
	struct UProceduralGeneratorContext* GeneratorContext; // 0x40(0x08)
};

// Class Procedural.ProceduralDataMap
// Size: 0x30 (Inherited: 0x28)
struct UProceduralDataMap : UObject {
	bool bUseRemapCurve; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class Procedural.ProceduralFloatDataMap
// Size: 0xb8 (Inherited: 0x30)
struct UProceduralFloatDataMap : UProceduralDataMap {
	struct FProceduralRemapFloatCurve RemapCurve; // 0x30(0x88)
};

// Class Procedural.ProceduralVectorDataMap
// Size: 0x238 (Inherited: 0x30)
struct UProceduralVectorDataMap : UProceduralDataMap {
	struct FProceduralRemapVectorCurve RemapCurve; // 0x30(0x208)
};

// Class Procedural.ProceduralDensityModifier
// Size: 0x38 (Inherited: 0x38)
struct UProceduralDensityModifier : UProceduralParameterModifier {
};

// Class Procedural.ProceduralDensityMapModifier
// Size: 0x40 (Inherited: 0x38)
struct UProceduralDensityMapModifier : UProceduralDensityModifier {
	struct UProceduralFloatDataMap* Map; // 0x38(0x08)
};

// Class Procedural.ProceduralGenerationBlockingVolume
// Size: 0x268 (Inherited: 0x258)
struct AProceduralGenerationBlockingVolume : AVolume {
	struct TArray<struct AProceduralGenerationVolume*> BlockedVolumes; // 0x258(0x10)
};

// Class Procedural.ProceduralGenerationComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UProceduralGenerationComponent : UActorComponent {
	struct UProceduralGenerator* Generator; // 0xb0(0x08)
	bool bShowDebugVisualization; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FGuid ProceduralGenerationGuid; // 0xbc(0x10)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct AVolume* GenerationVolume; // 0xd0(0x08)
	struct UProceduralGenerationContext* GenerationContext; // 0xd8(0x08)
};

// Class Procedural.ProceduralGenerationContext
// Size: 0xf0 (Inherited: 0x28)
struct UProceduralGenerationContext : UObject {
	struct UProceduralGeneratorContext* GeneratorContext; // 0x28(0x08)
	struct TArray<struct UProceduralGeneratorContext*> GeneratedContexts; // 0x30(0x10)
	struct TArray<struct UProceduralGeneratorContext*> RegisteredContexts; // 0x40(0x10)
	struct TMap<struct FGuid, struct UProceduralGeneratorContext*> GeneratorContexts; // 0x50(0x50)
	char pad_A0[0x50]; // 0xa0(0x50)

	struct AVolume* GetGenerationVolume(); // Function Procedural.ProceduralGenerationContext.GetGenerationVolume // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de324
	struct UProceduralGenerationComponent* GetGenerationComponent(); // Function Procedural.ProceduralGenerationContext.GetGenerationComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de2dc
};

// Class Procedural.ProceduralGenerationVolume
// Size: 0x260 (Inherited: 0x258)
struct AProceduralGenerationVolume : AVolume {
	struct UProceduralGenerationComponent* ProceduralComponent; // 0x258(0x08)

	void Generate(); // Function Procedural.ProceduralGenerationVolume.Generate // (Final|Native|Public|BlueprintCallable) // @ game+0x42de1dc
	void ClearGeneratedContent(); // Function Procedural.ProceduralGenerationVolume.ClearGeneratedContent // (Final|Native|Public|BlueprintCallable) // @ game+0x42de130
};

// Class Procedural.ProceduralGeneratorContext
// Size: 0x58 (Inherited: 0x28)
struct UProceduralGeneratorContext : UObject {
	struct UProceduralGenerator* Generator; // 0x28(0x08)
	struct UProceduralGenerationContext* GenerationContext; // 0x30(0x08)
	struct UProceduralGeneratorContext* OwnerContext; // 0x38(0x08)
	struct TArray<struct UObject*> GeneratedObjects; // 0x40(0x10)
	struct UProceduralPointCloud* ExportedPointCloud; // 0x50(0x08)

	bool OnGenerate(); // Function Procedural.ProceduralGeneratorContext.OnGenerate // (Native|Event|Public|BlueprintEvent) // @ game+0x2773d1c
	void OnDrawVisualization(); // Function Procedural.ProceduralGeneratorContext.OnDrawVisualization // (Event|Public|BlueprintEvent|Const) // @ game+0xda7c34
	void OnClearGeneratedContent(); // Function Procedural.ProceduralGeneratorContext.OnClearGeneratedContent // (Native|Event|Public|BlueprintEvent) // @ game+0x14e081c
	void GetOrCreateGeneratorContext(struct UProceduralGenerator* Generator, struct UProceduralGeneratorContext* Context); // Function Procedural.ProceduralGeneratorContext.GetOrCreateGeneratorContext // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x42de388
	struct TArray<struct UProceduralGeneratorContext*> GetGeneratedContexts(); // Function Procedural.ProceduralGeneratorContext.GetGeneratedContexts // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de23c
	bool Generate(); // Function Procedural.ProceduralGeneratorContext.Generate // (Final|Native|Public|BlueprintCallable) // @ game+0x42de1f8
	void ClearGeneratedContent(); // Function Procedural.ProceduralGeneratorContext.ClearGeneratedContent // (Final|Native|Public|BlueprintCallable) // @ game+0x42de160
};

// Class Procedural.ProceduralGeneratorStack
// Size: 0x48 (Inherited: 0x38)
struct UProceduralGeneratorStack : UProceduralGenerator {
	struct TArray<struct FProceduralGenerationStackElement> Generators; // 0x38(0x10)
};

// Class Procedural.ProceduralGeneratorStackContext
// Size: 0x58 (Inherited: 0x58)
struct UProceduralGeneratorStackContext : UProceduralGeneratorContext {
};

// Class Procedural.ProceduralLandscapeLayerMap
// Size: 0xc8 (Inherited: 0xb8)
struct UProceduralLandscapeLayerMap : UProceduralFloatDataMap {
	struct FName LandscapeLayerName; // 0xb8(0x08)
	struct FName LandscapeEditLayerName; // 0xc0(0x08)
};

// Class Procedural.ProceduralPointCloud
// Size: 0x38 (Inherited: 0x28)
struct UProceduralPointCloud : UObject {
	struct TArray<struct FProceduralPointCloudPoint> Points; // 0x28(0x10)

	struct TArray<struct FProceduralPointCloudPoint> GetPointsByTag(struct FName InTag); // Function Procedural.ProceduralPointCloud.GetPointsByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x42de48c
	void Empty(); // Function Procedural.ProceduralPointCloud.Empty // (Final|Native|Public|BlueprintCallable) // @ game+0x42de174
};

// Class Procedural.ProceduralRotationModifier
// Size: 0x38 (Inherited: 0x38)
struct UProceduralRotationModifier : UProceduralParameterModifier {
};

// Class Procedural.ProceduralRotationMapModifier
// Size: 0x60 (Inherited: 0x38)
struct UProceduralRotationMapModifier : UProceduralRotationModifier {
	struct UProceduralVectorDataMap* Map; // 0x38(0x08)
	enum class EProceduralRotationFormat RotationFormat; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FFloatInterval Roll; // 0x44(0x08)
	struct FFloatInterval Pitch; // 0x4c(0x08)
	struct FFloatInterval Yaw; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)

	void SetYawMin(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetYawMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42deb4c
	void SetYawMax(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetYawMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42deaa0
	void SetRollMin(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetRollMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42deca4
	void SetRollMax(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetRollMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42debf8
	void SetPitchMin(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetPitchMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42de744
	void SetPitchMax(float InValue); // Function Procedural.ProceduralRotationMapModifier.SetPitchMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42de698
	float GetYawMin(); // Function Procedural.ProceduralRotationMapModifier.GetYawMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de5e0
	float GetYawMax(); // Function Procedural.ProceduralRotationMapModifier.GetYawMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de5cc
	float GetRollMin(); // Function Procedural.ProceduralRotationMapModifier.GetRollMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26b88a8
	float GetRollMax(); // Function Procedural.ProceduralRotationMapModifier.GetRollMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d604e8
	float GetPitchMin(); // Function Procedural.ProceduralRotationMapModifier.GetPitchMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de478
	float GetPitchMax(); // Function Procedural.ProceduralRotationMapModifier.GetPitchMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42889a8
};

// Class Procedural.ProceduralRotationNoiseModifier
// Size: 0x60 (Inherited: 0x38)
struct UProceduralRotationNoiseModifier : UProceduralRotationModifier {
	char bRandomRoll : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FFloatInterval RandomRoll; // 0x3c(0x08)
	char bRandomPitch : 1; // 0x44(0x01)
	char pad_44_1 : 7; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FFloatInterval RandomPitch; // 0x48(0x08)
	char bRandomYaw : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	struct FFloatInterval RandomYaw; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)

	void SetRandomYawMin(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42deb4c
	void SetRandomYawMax(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42deaa0
	void SetRandomRollMin(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42de9f4
	void SetRandomRollMax(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42de948
	void SetRandomPitchMin(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42de89c
	void SetRandomPitchMax(float InValue); // Function Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42de7f0
	float GetRandomYawMin(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de5e0
	float GetRandomYawMax(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de5cc
	float GetRandomRollMin(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x217aacc
	float GetRandomRollMax(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x270c2b0
	float GetRandomPitchMin(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d604e8
	float GetRandomPitchMax(); // Function Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42de478
};

// Class Procedural.ProceduralScaleModifier
// Size: 0x38 (Inherited: 0x38)
struct UProceduralScaleModifier : UProceduralParameterModifier {
};

// Class Procedural.ProceduralScaleMapModifier
// Size: 0x50 (Inherited: 0x38)
struct UProceduralScaleMapModifier : UProceduralScaleModifier {
	bool bRemapScale; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FFloatInterval RemapScale; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct UProceduralFloatDataMap* Map; // 0x48(0x08)

	void SetRemapScaleMin(float InValue); // Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42de9f4
	void SetRemapScaleMax(float InValue); // Function Procedural.ProceduralScaleMapModifier.SetRemapScaleMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42de948
	float GetRemapScaleMin(); // Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x217aacc
	float GetRemapScaleMax(); // Function Procedural.ProceduralScaleMapModifier.GetRemapScaleMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x270c2b0
};

// Class Procedural.ProceduralScaleNoiseModifier
// Size: 0x40 (Inherited: 0x38)
struct UProceduralScaleNoiseModifier : UProceduralScaleModifier {
	struct FFloatInterval Scale; // 0x38(0x08)

	void SetScaleMin(float InValue); // Function Procedural.ProceduralScaleNoiseModifier.SetScaleMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42df1a4
	void SetScaleMax(float InValue); // Function Procedural.ProceduralScaleNoiseModifier.SetScaleMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42df0f8
	float GetScaleMin(); // Function Procedural.ProceduralScaleNoiseModifier.GetScaleMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d58c34
	float GetScaleMax(); // Function Procedural.ProceduralScaleNoiseModifier.GetScaleMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x217aacc
};

// Class Procedural.ProceduralScatterContentVariation
// Size: 0x98 (Inherited: 0x28)
struct UProceduralScatterContentVariation : UObject {
	float Weight; // 0x28(0x04)
	enum class EProceduralScatterContentPivotMode PivotMode; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FVector AdditionalPivotOffset; // 0x30(0x0c)
	float FootprintBoundingBoxRatio; // 0x3c(0x04)
	struct TArray<struct FName> SetActorTags; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)
};

// Class Procedural.ProceduralScatterActorContentVariation
// Size: 0xa0 (Inherited: 0x98)
struct UProceduralScatterActorContentVariation : UProceduralScatterContentVariation {
	struct AActor* ActorClass; // 0x98(0x08)
};

// Class Procedural.ProceduralScatterContentSettings
// Size: 0x68 (Inherited: 0x28)
struct UProceduralScatterContentSettings : UObject {
	struct TArray<struct FName> SetActorTags; // 0x28(0x10)
	struct TArray<struct UProceduralScatterContentVariation*> Variations; // 0x38(0x10)
	char pad_48[0x20]; // 0x48(0x20)
};

// Class Procedural.ProceduralScatterActorContentSettings
// Size: 0x70 (Inherited: 0x68)
struct UProceduralScatterActorContentSettings : UProceduralScatterContentSettings {
	bool bHideFromWorldOutliner; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Procedural.ProceduralScatterGenerator
// Size: 0xc0 (Inherited: 0x38)
struct UProceduralScatterGenerator : UProceduralGenerator {
	enum class EProceduralScatterMethod ScatterMethod; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FProceduralScatterTileSettings TileSettings; // 0x3c(0x14)
	int32_t RandomSeed; // 0x50(0x04)
	int32_t NumUniqueSourcePointPatterns; // 0x54(0x04)
	struct FVector2D GridSize; // 0x58(0x08)
	struct FVector2D GridJitter; // 0x60(0x08)
	float GridRotation; // 0x68(0x04)
	struct FVector2D GridOffset; // 0x6c(0x08)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FProceduralScatterSettingsElement> ScatterSettingsElements; // 0x78(0x10)
	struct TArray<struct FName> BlockingActorTags; // 0x88(0x10)
	bool bAllScatterPointsBlocking; // 0x98(0x01)
	bool bLocalDistribution; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct TArray<struct FName> BlockingScatterPointTags; // 0xa0(0x10)
	struct FProceduralScatterDebugSettings ScatterDebugSettings; // 0xb0(0x0c)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class Procedural.ProceduralScatterGeneratorContext
// Size: 0x290 (Inherited: 0x58)
struct UProceduralScatterGeneratorContext : UProceduralGeneratorContext {
	struct FScatteredPointCloud ScatteredPointCloud; // 0x58(0x10)
	struct TArray<struct UProceduralScatterGeneratorTile*> UniqueTiles; // 0x68(0x10)
	struct TArray<struct FSourcePointGenerator> SourcePointGenerators; // 0x78(0x10)
	struct TArray<struct FProceduralScatterProjectionPoint> ProjectionPointCloud; // 0x88(0x10)
	struct UProceduralPointCloud* SourcePointCloud; // 0x98(0x08)
	struct UProceduralPointCloud* BlockerPointCloud; // 0xa0(0x08)
	struct UMaterialInstanceDynamic* ProjectionVectorMaterial; // 0xa8(0x08)
	char pad_B0[0x1e0]; // 0xb0(0x1e0)
};

// Class Procedural.ProceduralScatterGeneratorTile
// Size: 0x150 (Inherited: 0x28)
struct UProceduralScatterGeneratorTile : UObject {
	struct UProceduralScatterGenerator* Generator; // 0x28(0x08)
	struct TArray<struct FProceduralScatter2DPoint> GeneratedPoints; // 0x30(0x10)
	char pad_40[0x110]; // 0x40(0x110)
};

// Class Procedural.ProceduralScatterSettings
// Size: 0x1d0 (Inherited: 0x28)
struct UProceduralScatterSettings : UObject {
	struct UProceduralScatterContentSettings* Content; // 0x28(0x08)
	char bContentVariationsModifiersEnabled : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FProceduralContentVariationsModifiers ContentVariationsModifiers; // 0x38(0x10)
	struct TArray<struct FName> SetPointTags; // 0x48(0x10)
	float CollisionRadius; // 0x58(0x04)
	char bAutomaticCollisionRadius : 1; // 0x5c(0x01)
	char bUseSphericalBoundsForAutomaticCollisionRadius : 1; // 0x5c(0x01)
	char pad_5C_2 : 6; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float AutomaticCollisionRadiusScaleFactor; // 0x60(0x04)
	int32_t DistributionSeed; // 0x64(0x04)
	char bDensityModifiersEnabled : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FProceduralDensityModifiers DensityModifiers; // 0x70(0x10)
	float Density; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct TArray<struct FName> SourcePointTagIncludes; // 0x88(0x10)
	struct TArray<struct FName> SourcePointTagExcludes; // 0x98(0x10)
	struct TArray<struct FName> SourceActorTagIncludes; // 0xa8(0x10)
	struct TArray<struct FName> SourceActorTagExcludes; // 0xb8(0x10)
	struct TArray<struct FName> SourceComponentTagIncludes; // 0xc8(0x10)
	struct TArray<struct FName> SourceComponentTagExcludes; // 0xd8(0x10)
	struct FFloatInterval SourcePointDistance; // 0xe8(0x08)
	char bUseSourcePointExactNumber : 1; // 0xf0(0x01)
	char pad_F0_1 : 7; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t SourcePointExactNumber; // 0xf4(0x04)
	char bScaleModifiersEnabled : 1; // 0xf8(0x01)
	char pad_F8_1 : 7; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FProceduralScaleModifiers ScaleModifiers; // 0x100(0x20)
	char bRotationModifiersEnabled : 1; // 0x120(0x01)
	char pad_120_1 : 7; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FProceduralRotationModifiers RotationModifiers; // 0x128(0x10)
	char bAlignToNormal : 1; // 0x138(0x01)
	char pad_138_1 : 7; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float AlignMaxAngle; // 0x13c(0x04)
	struct FProceduralScatterTargetSurface TargetSurface; // 0x140(0x48)
	char bDetectOverhangingLedge : 1; // 0x188(0x01)
	char pad_188_1 : 7; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	int32_t OverhangingLedgeDetectionRayCount; // 0x18c(0x04)
	float OverhangingLedgeDetectionLength; // 0x190(0x04)
	float OverhangingLedgeDetectionVerticalThreshold; // 0x194(0x04)
	float OverhangingLedgeDetectionRadiusScale; // 0x198(0x04)
	float FilterMinimumScale; // 0x19c(0x04)
	float OverlapPriority; // 0x1a0(0x04)
	char bCollisionWithWorld : 1; // 0x1a4(0x01)
	char pad_1A4_1 : 7; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct FVector CollisionScale; // 0x1a8(0x0c)
	struct FColor DebugColor; // 0x1b4(0x04)
	char pad_1B8[0x18]; // 0x1b8(0x18)

	void SetSourcePointDistanceMin(float InValue); // Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42df304
	void SetSourcePointDistanceMax(float InValue); // Function Procedural.ProceduralScatterSettings.SetSourcePointDistanceMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42df250
	float GetSourcePointDistanceMin(); // Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42df0e0
	float GetSourcePointDistanceMax(); // Function Procedural.ProceduralScatterSettings.GetSourcePointDistanceMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42df0c8
};

// Class Procedural.ProceduralScatterStaticMeshContentVariation
// Size: 0x118 (Inherited: 0x98)
struct UProceduralScatterStaticMeshContentVariation : UProceduralScatterContentVariation {
	enum class EProceduralScatterStaticMeshMode StaticMeshMode; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct UStaticMesh* Mesh; // 0xa0(0x08)
	struct AActor* ActorClass; // 0xa8(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0xb0(0x10)
	struct UHISMBuilderSettings* OverrideInstancingSettings; // 0xc0(0x08)
	char pad_C8[0x50]; // 0xc8(0x50)
};

// Class Procedural.ProceduralScatterStaticMeshContentSettings
// Size: 0x80 (Inherited: 0x68)
struct UProceduralScatterStaticMeshContentSettings : UProceduralScatterContentSettings {
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x68(0x08)
	struct FName ComponentTag; // 0x70(0x08)
	struct UHISMBuilderSettings* VariationsInstancingSettings; // 0x78(0x08)
};

// Class Procedural.ProceduralSurfaceHeightMap
// Size: 0xc8 (Inherited: 0xb8)
struct UProceduralSurfaceHeightMap : UProceduralFloatDataMap {
	bool bNormalizedHeight; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FFloatInterval HeightRange; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)

	void SetHeightRangeMin(float InValue); // Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42df568
	void SetHeightRangeMax(float InValue); // Function Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42df4b4
	float GetValue(float InHeight); // Function Procedural.ProceduralSurfaceHeightMap.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42df404
	float GetHeightRangeMin(); // Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b66d3c
	float GetHeightRangeMax(); // Function Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d08474
};

// Class Procedural.ProceduralSurfaceSlopeAngleMap
// Size: 0xc8 (Inherited: 0xb8)
struct UProceduralSurfaceSlopeAngleMap : UProceduralFloatDataMap {
	bool bNormalizedSlopeAngle; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FFloatInterval SlopeAngleRange; // 0xbc(0x08)
	char pad_C4[0x4]; // 0xc4(0x04)

	void SetSlopeAngleRangeMin(float InValue); // Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin // (Final|Native|Public|BlueprintCallable) // @ game+0x42df568
	void SetSlopeAngleRangeMax(float InValue); // Function Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax // (Final|Native|Public|BlueprintCallable) // @ game+0x42df4b4
	float GetValue(float InSlopeAngle); // Function Procedural.ProceduralSurfaceSlopeAngleMap.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x42df404
	float GetSlopeAngleRangeMin(); // Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b66d3c
	float GetSlopeAngleRangeMax(); // Function Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d08474
};

// Class Procedural.ProceduralTextureFloatMap
// Size: 0xf8 (Inherited: 0xb8)
struct UProceduralTextureFloatMap : UProceduralFloatDataMap {
	enum class EProceduralTextureColorChannel Channel; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FProceduralTextureSource Source; // 0xc0(0x38)
};

// Class Procedural.ProceduralTextureVectorMap
// Size: 0x270 (Inherited: 0x238)
struct UProceduralTextureVectorMap : UProceduralVectorDataMap {
	struct FProceduralTextureSource Source; // 0x238(0x38)
};

// Class Procedural.ProceduralVertexColorMap
// Size: 0xc0 (Inherited: 0xb8)
struct UProceduralVertexColorMap : UProceduralFloatDataMap {
	enum class EProceduralTextureColorChannel Channel; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

