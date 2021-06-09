// Class Water.BuoyancyComponent
// Size: 0x1d8 (Inherited: 0xb0)
struct UBuoyancyComponent : UActorComponent {
	struct TArray<struct FSphericalPontoon> Pontoons; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnEnteredWaterDelegate; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnExitedWaterDelegate; // 0xd0(0x10)
	struct FBuoyancyData BuoyancyData; // 0xe0(0x50)
	struct TArray<struct AWaterBody*> CurrentWaterBodies; // 0x130(0x10)
	struct UPrimitiveComponent* SimulatingComponent; // 0x140(0x08)
	char pad_148[0x90]; // 0x148(0x90)

	void OnPontoonExitedWater(struct FSphericalPontoon Pontoon); // Function Water.BuoyancyComponent.OnPontoonExitedWater // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b673a0
	void OnPontoonEnteredWater(struct FSphericalPontoon Pontoon); // Function Water.BuoyancyComponent.OnPontoonEnteredWater // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b67290
	bool IsInWaterBody(); // Function Water.BuoyancyComponent.IsInWaterBody // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b67238
	void GetLastWaterSurfaceInfo(struct FVector OutWaterPlaneLocation, struct FVector OutWaterPlaneNormal, struct FVector OutWaterSurfacePosition, float OutWaterDepth, int32_t OutWaterBodyIdx, struct FVector OutWaterVelocity); // Function Water.BuoyancyComponent.GetLastWaterSurfaceInfo // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3b66e3c
};

// Class Water.BuoyancyManager
// Size: 0x2d8 (Inherited: 0x220)
struct ABuoyancyManager : AActor {
	char pad_220[0x50]; // 0x220(0x50)
	struct TArray<struct UBuoyancyComponent*> BuoyancyComponents; // 0x270(0x10)
	char pad_280[0x58]; // 0x280(0x58)

	bool GetBuoyancyComponentManager(struct UObject* WorldContextObject, struct ABuoyancyManager* Manager); // Function Water.BuoyancyManager.GetBuoyancyComponentManager // (Final|Native|Static|Public|HasOutParms) // @ game+0x3b66c18
};

// Class Water.ConvertWaterBodyActorsCommandlet
// Size: 0x80 (Inherited: 0x80)
struct UConvertWaterBodyActorsCommandlet : UCommandlet {
};

// Class Water.EnvQueryTest_InsideWaterBody
// Size: 0x200 (Inherited: 0x1f8)
struct UEnvQueryTest_InsideWaterBody : UEnvQueryTest {
	bool bIncludeWaves; // 0x1f8(0x01)
	bool bSimpleWaves; // 0x1f9(0x01)
	bool bIgnoreExclusionVolumes; // 0x1fa(0x01)
	char pad_1FB[0x5]; // 0x1fb(0x05)
};

// Class Water.GerstnerWaterWaveGeneratorBase
// Size: 0x28 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorBase : UObject {

	void GenerateGerstnerWaves(struct TArray<struct FGerstnerWave> OutWaves); // Function Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x3b66b64
};

// Class Water.GerstnerWaterWaveGeneratorSimple
// Size: 0x60 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSimple : UGerstnerWaterWaveGeneratorBase {
	int32_t NumWaves; // 0x28(0x04)
	int32_t Seed; // 0x2c(0x04)
	float Randomness; // 0x30(0x04)
	float MinWavelength; // 0x34(0x04)
	float MaxWavelength; // 0x38(0x04)
	float WavelengthFalloff; // 0x3c(0x04)
	float MinAmplitude; // 0x40(0x04)
	float MaxAmplitude; // 0x44(0x04)
	float AmplitudeFalloff; // 0x48(0x04)
	float WindAngleDeg; // 0x4c(0x04)
	float DirectionAngularSpreadDeg; // 0x50(0x04)
	float SmallWaveSteepness; // 0x54(0x04)
	float LargeWaveSteepness; // 0x58(0x04)
	float SteepnessFalloff; // 0x5c(0x04)
};

// Class Water.GerstnerWaterWaveGeneratorSpectrum
// Size: 0x40 (Inherited: 0x28)
struct UGerstnerWaterWaveGeneratorSpectrum : UGerstnerWaterWaveGeneratorBase {
	enum class EWaveSpectrumType SpectrumType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FGerstnerWaveOctave> Octaves; // 0x30(0x10)
};

// Class Water.WaterWavesBase
// Size: 0x28 (Inherited: 0x28)
struct UWaterWavesBase : UObject {
};

// Class Water.WaterWaves
// Size: 0x28 (Inherited: 0x28)
struct UWaterWaves : UWaterWavesBase {
};

// Class Water.GerstnerWaterWaves
// Size: 0x48 (Inherited: 0x28)
struct UGerstnerWaterWaves : UWaterWaves {
	struct UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator; // 0x28(0x08)
	struct TArray<struct FGerstnerWave> GerstnerWaves; // 0x30(0x10)
	float MaxWaveHeight; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Water.GerstnerWaterWaveSubsystem
// Size: 0x48 (Inherited: 0x30)
struct UGerstnerWaterWaveSubsystem : UEngineSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Water.LakeCollisionComponent
// Size: 0x460 (Inherited: 0x450)
struct ULakeCollisionComponent : UPrimitiveComponent {
	struct UBodySetup* CachedBodySetup; // 0x448(0x08)
	struct FVector BoxExtent; // 0x450(0x0c)
};

// Class Water.NiagaraDataInterfaceWater
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceWater : UNiagaraDataInterface {
	struct AWaterBody* SourceBody; // 0x38(0x08)
};

// Class Water.NiagaraWaterFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraWaterFunctionLibrary : UBlueprintFunctionLibrary {

	void SetWaterBody(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct AWaterBody* WaterBody); // Function Water.NiagaraWaterFunctionLibrary.SetWaterBody // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3b6760c
};

// Class Water.OceanCollisionComponent
// Size: 0x470 (Inherited: 0x450)
struct UOceanCollisionComponent : UPrimitiveComponent {
	struct UBodySetup* CachedBodySetup; // 0x448(0x08)
	char pad_458[0x18]; // 0x458(0x18)
};

// Class Water.OceanBoxCollisionComponent
// Size: 0x470 (Inherited: 0x470)
struct UOceanBoxCollisionComponent : UBoxComponent {
};

// Class Water.WaterBody
// Size: 0xdd0 (Inherited: 0x220)
struct AWaterBody : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x230(0x08)
	float TargetWaveMaskDepth; // 0x238(0x04)
	float MaxWaveHeightOffset; // 0x23c(0x04)
	int32_t WaterBodyIndex; // 0x240(0x04)
	bool bFillCollisionUnderWaterBodiesForNavmesh; // 0x244(0x01)
	char pad_245[0xb]; // 0x245(0x0b)
	struct FUnderwaterPostProcessSettings UnderwaterPostProcessSettings; // 0x250(0x570)
	enum class EWaterBodyType WaterBodyType; // 0x7c0(0x01)
	char pad_7C1[0x7]; // 0x7c1(0x07)
	struct FWaterCurveSettings CurveSettings; // 0x7c8(0x20)
	struct UMaterialInterface* WaterMaterial; // 0x7e8(0x08)
	struct UMaterialInterface* UnderwaterPostProcessMaterial; // 0x7f0(0x08)
	bool bAffectsLandscape; // 0x7f8(0x01)
	bool bGenerateCollisions; // 0x7f9(0x01)
	bool bOverrideWaterMesh; // 0x7fa(0x01)
	char pad_7FB[0x5]; // 0x7fb(0x05)
	struct UStaticMesh* WaterMeshOverride; // 0x800(0x08)
	int32_t OverlapMaterialPriority; // 0x808(0x04)
	struct FName CollisionProfileName; // 0x80c(0x08)
	char pad_814[0x4]; // 0x814(0x04)
	struct UWaterSplineComponent* SplineComp; // 0x818(0x08)
	struct UWaterSplineMetadata* WaterSplineMetadata; // 0x820(0x08)
	struct UMaterialInstanceDynamic* WaterMID; // 0x828(0x08)
	struct UMaterialInstanceDynamic* UnderwaterPostProcessMID; // 0x830(0x08)
	struct TArray<LazyObjectProperty> Islands; // 0x838(0x10)
	struct TArray<LazyObjectProperty> ExclusionVolumes; // 0x848(0x10)
	struct TWeakObjectPtr<struct ALandscapeProxy> Landscape; // 0x858(0x08)
	struct FPostProcessSettings CurrentPostProcessSettings; // 0x860(0x550)
	bool bCanAffectNavigation; // 0xdb0(0x01)
	char pad_DB1[0x7]; // 0xdb1(0x07)
	struct UNavAreaBase* WaterNavAreaClass; // 0xdb8(0x08)
	struct UWaterWavesBase* WaterWaves; // 0xdc0(0x08)
	char pad_DC8[0x8]; // 0xdc8(0x08)

	void SetWaterWaves(struct UWaterWavesBase* InWaterWaves); // Function Water.WaterBody.SetWaterWaves // (Final|Native|Public|BlueprintCallable) // @ game+0x3b67a38
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged); // Function Water.WaterBody.OnWaterBodyChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x3b67478
	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBody.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b671c8
	struct UMaterialInstanceDynamic* GetWaterMaterialInstance(); // Function Water.WaterBody.GetWaterMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x2112c7c
	struct UMaterialInterface* GetWaterMaterial(); // Function Water.WaterBody.GetWaterMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b671b0
	struct UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance(); // Function Water.WaterBody.GetUnderwaterPostProcessMaterialInstance // (Final|Native|Public|BlueprintCallable) // @ game+0x3b67178
	struct UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToOceanTransitionMaterialInstance // (Native|Public|BlueprintCallable) // @ game+0x20c07ec
	struct UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance(); // Function Water.WaterBody.GetRiverToLakeTransitionMaterialInstance // (Native|Public|BlueprintCallable) // @ game+0x20c07a8
	float GetMaxWaveHeight(); // Function Water.WaterBody.GetMaxWaveHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b670bc
	struct TArray<struct AWaterBodyIsland*> GetIslands(); // Function Water.WaterBody.GetIslands // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b66dc8
	struct TArray<struct AWaterBodyExclusionVolume*> GetExclusionVolumes(); // Function Water.WaterBody.GetExclusionVolumes // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b66d54
};

// Class Water.WaterBodyGenerator
// Size: 0x28 (Inherited: 0x28)
struct UWaterBodyGenerator : UObject {
};

// Class Water.CustomMeshGenerator
// Size: 0x30 (Inherited: 0x28)
struct UCustomMeshGenerator : UWaterBodyGenerator {
	struct UStaticMeshComponent* MeshComp; // 0x28(0x08)
};

// Class Water.WaterBodyCustom
// Size: 0xdd0 (Inherited: 0xdd0)
struct AWaterBodyCustom : AWaterBody {
	struct UCustomMeshGenerator* CustomGenerator; // 0xdc8(0x08)
};

// Class Water.WaterBodyExclusionVolume
// Size: 0x280 (Inherited: 0x268)
struct AWaterBodyExclusionVolume : APhysicsVolume {
	bool bIgnoreAllOverlappingWaterBodies; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<struct AWaterBody*> WaterBodiesToIgnore; // 0x270(0x10)
};

// Class Water.WaterBodyIsland
// Size: 0x230 (Inherited: 0x220)
struct AWaterBodyIsland : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct UWaterSplineComponent* SplineComp; // 0x228(0x08)

	struct UWaterSplineComponent* GetWaterSpline(); // Function Water.WaterBodyIsland.GetWaterSpline // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b671e0
};

// Class Water.LakeGenerator
// Size: 0x40 (Inherited: 0x28)
struct ULakeGenerator : UWaterBodyGenerator {
	struct UStaticMeshComponent* LakeMeshComp; // 0x28(0x08)
	struct UBoxComponent* LakeCollisionComp; // 0x30(0x08)
	struct ULakeCollisionComponent* LakeCollision; // 0x38(0x08)
};

// Class Water.WaterBodyLake
// Size: 0xdd0 (Inherited: 0xdd0)
struct AWaterBodyLake : AWaterBody {
	struct ULakeGenerator* LakeGenerator; // 0xdc8(0x08)
};

// Class Water.OceanGenerator
// Size: 0x48 (Inherited: 0x28)
struct UOceanGenerator : UWaterBodyGenerator {
	struct TArray<struct UOceanBoxCollisionComponent*> CollisionBoxes; // 0x28(0x10)
	struct TArray<struct UOceanCollisionComponent*> CollisionHullSets; // 0x38(0x10)
};

// Class Water.WaterBodyOcean
// Size: 0xde0 (Inherited: 0xdd0)
struct AWaterBodyOcean : AWaterBody {
	struct UOceanGenerator* OceanGenerator; // 0xdc8(0x08)
	struct FVector CollisionExtents; // 0xdd0(0x0c)
	float HeightOffset; // 0xddc(0x04)
};

// Class Water.RiverGenerator
// Size: 0x38 (Inherited: 0x28)
struct URiverGenerator : UWaterBodyGenerator {
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0x28(0x10)
};

// Class Water.WaterBodyRiver
// Size: 0xdf0 (Inherited: 0xdd0)
struct AWaterBodyRiver : AWaterBody {
	struct URiverGenerator* RiverGenerator; // 0xdc8(0x08)
	struct UMaterialInterface* LakeTransitionMaterial; // 0xdd0(0x08)
	struct UMaterialInstanceDynamic* LakeTransitionMID; // 0xdd8(0x08)
	struct UMaterialInterface* OceanTransitionMaterial; // 0xde0(0x08)
	struct UMaterialInstanceDynamic* OceanTransitionMID; // 0xde8(0x08)
};

// Class Water.WaterBrushActorInterface
// Size: 0x28 (Inherited: 0x28)
struct UWaterBrushActorInterface : UInterface {
};

// Class Water.WaterMeshActor
// Size: 0x230 (Inherited: 0x220)
struct AWaterMeshActor : AActor {
	struct UTexture2D* WaterVelocityTexture; // 0x220(0x08)
	struct UWaterMeshComponent* WaterMesh; // 0x228(0x08)
};

// Class Water.WaterMeshComponent
// Size: 0x590 (Inherited: 0x470)
struct UWaterMeshComponent : UMeshComponent {
	int32_t ForceCollapseDensityLevel; // 0x470(0x04)
	float TileSize; // 0x474(0x04)
	struct FIntPoint ExtentInTiles; // 0x478(0x08)
	struct UMaterialInterface* FarDistanceMaterial; // 0x480(0x08)
	float FarDistanceMeshExtent; // 0x488(0x04)
	struct FVector RTWorldLocation; // 0x48c(0x0c)
	struct FVector RTWorldSizeVector; // 0x498(0x0c)
	char pad_4A4[0x64]; // 0x4a4(0x64)
	struct TSet<struct UMaterialInterface*> UsedMaterials; // 0x508(0x50)
	char pad_558[0x30]; // 0x558(0x30)
	int32_t TessellationFactor; // 0x588(0x04)
	float LODScale; // 0x58c(0x04)

	bool IsEnabled(); // Function Water.WaterMeshComponent.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b67220
};

// Class Water.WaterRuntimeSettings
// Size: 0x78 (Inherited: 0x38)
struct UWaterRuntimeSettings : UDeveloperSettings {
	enum class ECollisionChannel CollisionChannelForWaterTraces; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TSoftObjectPtr<struct UMaterialParameterCollection> MaterialParameterCollection; // 0x40(0x28)
	float WaterBodyIconWorldSize; // 0x68(0x04)
	float WaterBodyIconWorldZOffset; // 0x6c(0x04)
	struct FName DefaultWaterCollisionProfileName; // 0x70(0x08)
};

// Class Water.WaterSplineComponent
// Size: 0x560 (Inherited: 0x540)
struct UWaterSplineComponent : USplineComponent {
	struct FWaterSplineCurveDefaults WaterSplineDefaults; // 0x540(0x10)
	struct FWaterSplineCurveDefaults PreviousWaterSplineDefaults; // 0x550(0x10)
};

// Class Water.WaterSplineMetadata
// Size: 0xa0 (Inherited: 0x28)
struct UWaterSplineMetadata : USplineMetadata {
	struct FInterpCurveFloat Depth; // 0x28(0x18)
	struct FInterpCurveFloat WaterVelocityScalar; // 0x40(0x18)
	struct FInterpCurveFloat RiverWidth; // 0x58(0x18)
	struct FInterpCurveFloat AudioIntensity; // 0x70(0x18)
	struct FInterpCurveVector WaterVelocity; // 0x88(0x18)
};

// Class Water.WaterSubsystem
// Size: 0x108 (Inherited: 0x30)
struct UWaterSubsystem : UWorldSubsystem {
	char pad_30[0x40]; // 0x30(0x40)
	struct FMulticastInlineDelegate OnCameraUnderwaterStateChanged; // 0x70(0x10)
	struct FMulticastInlineDelegate OnWaterScalabilityChanged; // 0x80(0x10)
	struct UStaticMesh* DefaultRiverMesh; // 0x90(0x08)
	struct UStaticMesh* DefaultLakeMesh; // 0x98(0x08)
	struct ABuoyancyManager* BuoyancyManager; // 0xa0(0x08)
	struct AWaterMeshActor* WaterMeshActor; // 0xa8(0x08)
	char pad_B0[0x30]; // 0xb0(0x30)
	struct UMaterialParameterCollection* MaterialParameterCollection; // 0xe0(0x08)
	char pad_E8[0x20]; // 0xe8(0x20)

	void SetOceanFloodHeight(float InFloodHeight); // Function Water.WaterSubsystem.SetOceanFloodHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x3b6756c
	void PrintToWaterLog(struct FString Message, bool bWarning); // Function Water.WaterSubsystem.PrintToWaterLog // (Final|Native|Public|BlueprintCallable) // @ game+0x27c7114
	bool IsWaterRenderingEnabled(); // Function Water.WaterSubsystem.IsWaterRenderingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b67270
	bool IsUnderwaterPostProcessEnabled(); // Function Water.WaterSubsystem.IsUnderwaterPostProcessEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b67254
	bool IsShallowWaterSimulationEnabled(); // Function Water.WaterSubsystem.IsShallowWaterSimulationEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28102b8
	float GetWaterTimeSeconds(); // Function Water.WaterSubsystem.GetWaterTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b671f8
	float GetSmoothedWorldTimeSeconds(); // Function Water.WaterSubsystem.GetSmoothedWorldTimeSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b67148
	int32_t GetShallowWaterSimulationRenderTargetSize(); // Function Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x29f5ef0
	int32_t GetShallowWaterMaxImpulseForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxImpulseForces // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x26c0574
	int32_t GetShallowWaterMaxDynamicForces(); // Function Water.WaterSubsystem.GetShallowWaterMaxDynamicForces // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1e66ae4
	float GetOceanTotalHeight(); // Function Water.WaterSubsystem.GetOceanTotalHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b6710c
	float GetOceanFloodHeight(); // Function Water.WaterSubsystem.GetOceanFloodHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26dd3f8
	float GetOceanBaseHeight(); // Function Water.WaterSubsystem.GetOceanBaseHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b670e4
	float GetCameraUnderwaterDepth(); // Function Water.WaterSubsystem.GetCameraUnderwaterDepth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b66d3c
};

// Class Water.WaterWavesAsset
// Size: 0x30 (Inherited: 0x28)
struct UWaterWavesAsset : UObject {
	struct UWaterWaves* WaterWaves; // 0x28(0x08)
};

// Class Water.WaterWavesAssetReference
// Size: 0x30 (Inherited: 0x28)
struct UWaterWavesAssetReference : UWaterWavesBase {
	struct UWaterWavesAsset* WaterWavesAsset; // 0x28(0x08)
};

