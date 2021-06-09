// Enum ValetRuntime.ETireStates
enum class ETireStates : uint8 {
	Default,
	Popped,
	ETireStates_MAX,
};

// Enum ValetRuntime.ETireSurfaces
enum class ETireSurfaces : uint8 {
	Road,
	Dirt,
	Grass,
	Air,
	Water,
	ETireSurfaces_MAX,
};

// Enum ValetRuntime.EFortDagwoodSimEvent
enum class EFortDagwoodSimEvent : uint8 {
	EnterLandscape,
	ExitLandscape,
	EnterRoad,
	ExitRoad,
	Explode,
	FlipImpact,
	StartBoost,
	FinishBoost,
	EFortDagwoodSimEvent_MAX,
};

// Enum ValetRuntime.EVehicleClass
enum class EVehicleClass : uint8 {
	Sedan,
	Sport,
	PickupTruck,
	SemiTruck,
	EVehicleClass_MAX,
};

// Enum ValetRuntime.ETireLocations
enum class ETireLocations : uint8 {
	FrontRight,
	FrontLeft,
	BackRight,
	BackLeft,
	ETireLocations_MAX,
};

// Enum ValetRuntime.EPoppedTireReactionStates
enum class EPoppedTireReactionStates : uint8 {
	None,
	VeerLeft,
	VeerRight,
	Wiggle,
	Yaw90,
	FlipPitch,
	FlipRoll,
	EPoppedTireReactionStates_MAX,
};

// Enum ValetRuntime.EFuelLeakType
enum class EFuelLeakType : uint8 {
	None,
	GenericFromBetweenRearTires,
	EFuelLeakType_MAX,
};

// Enum ValetRuntime.EControlsPrototypes
enum class EControlsPrototypes : uint8 {
	CameraSteering,
	NonCameraSteering,
	HybridCameraSteering,
	MaxCount,
	EControlsPrototypes_MAX,
};

// ScriptStruct ValetRuntime.FortDagwoodCmd
// Size: 0x1c (Inherited: 0x00)
struct FFortDagwoodCmd {
	float ForwardAlpha; // 0x00(0x04)
	float RightAlpha; // 0x04(0x04)
	float AccelerationAlpha; // 0x08(0x04)
	struct FVector_NetQuantize100 MovementDir; // 0x0c(0x0c)
	char bBoost : 1; // 0x18(0x01)
	char bHandbrake : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct ValetRuntime.DagwoodInPersistent
// Size: 0x200 (Inherited: 0x138)
struct FDagwoodInPersistent : FFortVehicleInPersistent {
	struct UFortDagwoodVehicleConfigs* FortDagwoodVehicleConfigs; // 0x138(0x08)
	struct FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties; // 0x140(0x68)
	struct TArray<enum class ETireStates> TireStates; // 0x1a8(0x10)
	char pad_1B8[0x48]; // 0x1b8(0x48)
};

// ScriptStruct ValetRuntime.DagwoodRuntimeModifiers
// Size: 0x68 (Inherited: 0x00)
struct FDagwoodRuntimeModifiers {
	struct FRuntimeBoostInfo BoostInfo; // 0x00(0x18)
	struct FRuntimeFuelInfo FuelInfo; // 0x18(0x0c)
	struct FRuntimeSpringsInfo SpringsInfo; // 0x24(0x18)
	float GravityMultiplier; // 0x3c(0x04)
	float MaxInclineAngle; // 0x40(0x04)
	float MaxTiltAngle; // 0x44(0x04)
	struct TArray<struct FRuntimeGearInfo> GearInfos; // 0x48(0x10)
	struct FGameplayTag TireModTag; // 0x58(0x08)
	char TireModVersion; // 0x60(0x01)
	char DataVersion; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct ValetRuntime.RuntimeGearInfo
// Size: 0x10 (Inherited: 0x00)
struct FRuntimeGearInfo {
	int32_t GearIndex; // 0x00(0x04)
	float TopSpeed; // 0x04(0x04)
	float MinSpeed; // 0x08(0x04)
	float PushForce; // 0x0c(0x04)
};

// ScriptStruct ValetRuntime.RuntimeSpringsInfo
// Size: 0x18 (Inherited: 0x00)
struct FRuntimeSpringsInfo {
	float SpringStiffMultiplier; // 0x00(0x04)
	float SpringDampMultiplier; // 0x04(0x04)
	float SpringLengthMultiplier; // 0x08(0x04)
	float RearSpringLengthMultiplier; // 0x0c(0x04)
	float TireZOffset; // 0x10(0x04)
	float TireZOffset_B; // 0x14(0x04)
};

// ScriptStruct ValetRuntime.RuntimeFuelInfo
// Size: 0x0c (Inherited: 0x00)
struct FRuntimeFuelInfo {
	float MaxFuel; // 0x00(0x04)
	float FuelPerSecondDriving; // 0x04(0x04)
	float FuelPerSecondBoosting; // 0x08(0x04)
};

// ScriptStruct ValetRuntime.RuntimeBoostInfo
// Size: 0x18 (Inherited: 0x00)
struct FRuntimeBoostInfo {
	char bCanBoost : 1; // 0x00(0x01)
	char bUsesRechargeableBoost : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BoostPushForce; // 0x04(0x04)
	float BoostTopSpeedForceMultiplier; // 0x08(0x04)
	float BoostTopSpeedMultiplier; // 0x0c(0x04)
	float RechargeableBoostRateOfRegen; // 0x10(0x04)
	float RechargeableBoostRateOfUse; // 0x14(0x04)
};

// ScriptStruct ValetRuntime.DagwoodState_PT
// Size: 0x150 (Inherited: 0x00)
struct FDagwoodState_PT {
	struct FDagwoodInternal internal; // 0x00(0xe8)
	struct FDagwoodOutPersistent OutPersistent; // 0xe8(0x28)
	struct FDagwoodOutContinuous OutContinuous; // 0x110(0x38)
	bool bOutValid; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// ScriptStruct ValetRuntime.DagwoodOutContinuous
// Size: 0x38 (Inherited: 0x28)
struct FDagwoodOutContinuous : FFortVehicleOutContinuous {
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct ValetRuntime.DagwoodOutPersistent
// Size: 0x28 (Inherited: 0x10)
struct FDagwoodOutPersistent : FFortVehicleOutPersistent {
	bool bOnRoad; // 0x10(0x01)
	bool bOnLandscape; // 0x11(0x01)
	bool bOnDirt; // 0x12(0x01)
	bool bOnVehicle; // 0x13(0x01)
	bool bBoosting; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<enum class ETireSurfaces> TireSurfaces; // 0x18(0x10)
};

// ScriptStruct ValetRuntime.DagwoodInternal
// Size: 0xe8 (Inherited: 0x50)
struct FDagwoodInternal : FFortVehicleInternalPersistent {
	char pad_50[0x98]; // 0x50(0x98)
};

// ScriptStruct ValetRuntime.DagwoodManagedState
// Size: 0x390 (Inherited: 0x00)
struct FDagwoodManagedState {
	int32_t Frame; // 0x00(0x04)
	struct FFortDagwoodCmd InputCmd; // 0x04(0x1c)
	struct FDagwoodInPersistent GT_State; // 0x20(0x200)
	struct FDagwoodState_PT PT_State; // 0x220(0x150)
	struct APlayerController* PC; // 0x370(0x08)
	char pad_378[0x8]; // 0x378(0x08)
	struct TArray<struct FDagwoodFutureClientInput> FutureInputs; // 0x380(0x10)
};

// ScriptStruct ValetRuntime.DagwoodFutureClientInput
// Size: 0x20 (Inherited: 0x00)
struct FDagwoodFutureClientInput {
	int32_t Frame; // 0x00(0x04)
	struct FFortDagwoodCmd InputCmd; // 0x04(0x1c)
};

// ScriptStruct ValetRuntime.VehicleAttachment
// Size: 0x18 (Inherited: 0x00)
struct FVehicleAttachment {
	struct FName ModName; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x10(0x08)
};

// ScriptStruct ValetRuntime.MountedGun
// Size: 0x80 (Inherited: 0x00)
struct FMountedGun {
	struct FWeaponSeatDefinition SeatDefinition; // 0x00(0x40)
	struct USkeletalMesh* SkeletalMesh; // 0x40(0x08)
	struct UAnimInstance* AnimInstanceWeapon; // 0x48(0x08)
	struct FName SocketNameMuzzle; // 0x50(0x08)
	struct FName SocketNameWeaponPawnAttach; // 0x58(0x08)
	struct FName SocketNameVehicle; // 0x60(0x08)
	float AttachmentAngleOffset; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UAnimInstance* AnimInstancePawn; // 0x70(0x08)
	bool bHasApplied; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct ValetRuntime.CachedWaterData
// Size: 0x38 (Inherited: 0x00)
struct FCachedWaterData {
	struct FVector PlaneLocation; // 0x00(0x0c)
	struct FVector PlaneNormal; // 0x0c(0x0c)
	struct FVector SurfacePosition; // 0x18(0x0c)
	struct FVector WaterVelocity; // 0x24(0x0c)
	float Depth; // 0x30(0x04)
	int32_t WaterBodyIndex; // 0x34(0x04)
};

// ScriptStruct ValetRuntime.DagwoodActionDefForUI
// Size: 0x10 (Inherited: 0x00)
struct FDagwoodActionDefForUI {
	struct TArray<struct FActionDefForUI> ActionDefForUI; // 0x00(0x10)
};

// ScriptStruct ValetRuntime.AttachedWheel
// Size: 0x18 (Inherited: 0x00)
struct FAttachedWheel {
	struct UStaticMeshComponent* StaticMeshComponent; // 0x00(0x08)
	struct UMaterialInstanceDynamic* MatInstance; // 0x08(0x08)
	float CurrentHealth; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ValetRuntime.TireInfo
// Size: 0x1a0 (Inherited: 0x00)
struct FTireInfo {
	struct UStaticMesh* TireStaticMesh; // 0x00(0x08)
	struct UStaticMesh* UndercarriageCollisionStaticMesh; // 0x08(0x08)
	struct FRuntimeSpringsInfo SpringTuning; // 0x10(0x18)
	struct FRuntimeTerrainHandlingInfo RoadBehavior; // 0x28(0x10)
	struct FRuntimeTerrainHandlingInfo DirtBehavior; // 0x38(0x10)
	struct FRuntimeTerrainHandlingInfo GrassBehavior; // 0x48(0x10)
	float PoppedTireSpringLength; // 0x58(0x04)
	float PoppedTireSpringStiff; // 0x5c(0x04)
	float PoppedTireSpringDamp; // 0x60(0x04)
	float TireMeshYaw; // 0x64(0x04)
	float TireMeshLateralAdjustment; // 0x68(0x04)
	float TireMeshScaleFront; // 0x6c(0x04)
	float TireMeshScaleRear; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FScalableFloat MaxDriveInclineAngle; // 0x78(0x28)
	float UprightRollStiff; // 0xa0(0x04)
	float UprightRollDamp; // 0xa4(0x04)
	float UprightPitchStiff; // 0xa8(0x04)
	float UprightPitchDamp; // 0xac(0x04)
	float UprightYawStiff; // 0xb0(0x04)
	float UprightYawDamp; // 0xb4(0x04)
	float MidAxleForwardAdjust; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FScalableFloat TireHealth; // 0xc0(0x28)
	struct FScalableFloat WaterTopSpeedMultiplier; // 0xe8(0x28)
	struct FScalableFloat PontoonScaleRadiusPerTick; // 0x110(0x28)
	struct TArray<struct FName> CollisionShapeNames; // 0x138(0x10)
	struct TArray<struct FName> DamageablePartShapeNames; // 0x148(0x10)
	struct FName PoppedTireBoneName; // 0x158(0x08)
	struct FName CollisionBoneName; // 0x160(0x08)
	struct USoundWave* TireDirtLoop; // 0x168(0x08)
	struct USoundWave* TireGrassLoop; // 0x170(0x08)
	struct USoundWave* TireRoadLoop; // 0x178(0x08)
	struct USoundBase* SuspensionLight; // 0x180(0x08)
	struct USoundBase* SuspensionMedium; // 0x188(0x08)
	struct USoundBase* SuspensionHeavy; // 0x190(0x08)
	struct UGameplayEffect* AppliedGameplayEffect; // 0x198(0x08)
};

// ScriptStruct ValetRuntime.RuntimeTerrainHandlingInfo
// Size: 0x10 (Inherited: 0x00)
struct FRuntimeTerrainHandlingInfo {
	float PushForceMultiplier; // 0x00(0x04)
	float TopSpeedMultiplier; // 0x04(0x04)
	float FrontTireFriction; // 0x08(0x04)
	float RearTireFriction; // 0x0c(0x04)
};

// ScriptStruct ValetRuntime.TireSimulationRuntimeData
// Size: 0x1c (Inherited: 0x00)
struct FTireSimulationRuntimeData {
	struct FRuntimeTerrainHandlingInfo HandlingInfo; // 0x00(0x10)
	float PoppedTireSpringLength; // 0x10(0x04)
	float PoppedTireSpringStiff; // 0x14(0x04)
	float PoppedTireSpringDamp; // 0x18(0x04)
};

// ScriptStruct ValetRuntime.ValetUpdateContext
// Size: 0x14 (Inherited: 0x00)
struct FValetUpdateContext {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ValetRuntime.VehiclePropReplacementData
// Size: 0x40 (Inherited: 0x00)
struct FVehiclePropReplacementData {
	struct TSoftObjectPtr<struct UFortVehicleItemDefinition> FortVehicleItemDefinition; // 0x00(0x28)
	struct FVector TransOffset; // 0x28(0x0c)
	struct FRotator RotOffset; // 0x34(0x0c)
};

