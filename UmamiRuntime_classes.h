// Class UmamiRuntime.FortAthenaAIBotEvaluator_UmamiFlyingAttack
// Size: 0x300 (Inherited: 0x1c8)
struct UFortAthenaAIBotEvaluator_UmamiFlyingAttack : UFortAthenaAIBotEvaluator_Attack {
	struct FName WeaponFireName; // 0x1c8(0x08)
	char pad_1D0[0x4]; // 0x1d0(0x04)
	struct FName WeaponTargetingName; // 0x1d4(0x08)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct FName TargetActorName; // 0x1e0(0x08)
	char pad_1E8[0x4]; // 0x1e8(0x04)
	struct FName AggressivenessName; // 0x1ec(0x08)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct FName HasLoSOnThreatName; // 0x1f8(0x08)
	char pad_200[0x4]; // 0x200(0x04)
	struct FName MovementModeKeyName; // 0x204(0x08)
	char pad_20C[0x1]; // 0x20c(0x01)
	enum class EFlyingEvasiveManeuversMode FlyingEvasiveManeuversModeWhenInRange; // 0x20d(0x01)
	char pad_20E[0x2]; // 0x20e(0x02)
	struct TArray<struct FEvasiveManeuver_Step> FlyingEvasiveManeuversConfiguration; // 0x210(0x10)
	char pad_220[0xb8]; // 0x220(0xb8)
	struct UFortAthenaAIBotRangeAttackDigestedSkillSet* CachedRangeAttackDigestedSkillSet; // 0x2d8(0x08)
	struct UFortAthenaAIBotAimingDigestedSkillSet* CachedAimingDigestedSkillSet; // 0x2e0(0x08)
	struct UFortAthenaAIBotPerceptionDigestedSkillSet* CachedPerceptionDigestedSkillSet; // 0x2e8(0x08)
	struct UFortAthenaUmamiFlyingAttackDigestedSkillSet* CachedFlyingAttackDigestedSkillSet; // 0x2f0(0x08)
	struct UFortAthenaUmamiFlyingVehicleDigestedSkillSet* CachedFlyingVehicleDigestedSkillSet; // 0x2f8(0x08)
};

// Class UmamiRuntime.FortAthenaAISpawnerDataComponent_UmamiSkillset
// Size: 0x110 (Inherited: 0xf0)
struct UFortAthenaAISpawnerDataComponent_UmamiSkillset : UFortAthenaAISpawnerDataComponent_AIBotSkillset {
	struct UFortAthenaUmamiFlyingVehicleSkillSet* UmamiFlyingVehicleSkillSet; // 0xf0(0x08)
	struct UFortAthenaUmamiKidnapSkillSet* UmamiKidnapSkillSet; // 0xf8(0x08)
	struct UFortAthenaUmamiFlyingAttackSkillSet* UmamiFlyingAttackSkillSet; // 0x100(0x08)
	struct UFortAthenaUmamiFlyingDestroyBlockerSkillSet* UmamiFlyingDestroyBlockerSkillSet; // 0x108(0x08)
};

// Class UmamiRuntime.FortAthenaAISpawnerDataComponent_UmamiVehicle
// Size: 0xc8 (Inherited: 0x50)
struct UFortAthenaAISpawnerDataComponent_UmamiVehicle : UFortAthenaAISpawnerDataComponent_Vehicle {
	struct FHotfixableUmami3DAgentConfiguration Umami3DAgentConfiguration; // 0x50(0x78)
};

// Class UmamiRuntime.FortAthenaBTService_EscapeWithKidnapped
// Size: 0xd8 (Inherited: 0x70)
struct UFortAthenaBTService_EscapeWithKidnapped : UBTService {
	struct FName KidnappedTargetKeyName; // 0x70(0x08)
	char pad_78[0x4]; // 0x78(0x04)
	struct FName KidnappedOriginKeyName; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct FName KidnappedModeKeyName; // 0x88(0x08)
	char pad_90[0x4]; // 0x90(0x04)
	struct FName EscapeMovementKeyName; // 0x94(0x08)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FName EscapeDestinationKeyName; // 0xa0(0x08)
	char pad_A8[0x4]; // 0xa8(0x04)
	struct FName EscapeReachedPointsKeyName; // 0xac(0x08)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FName EscapeIsUsingGraveyardKeyName; // 0xb8(0x08)
	char pad_C0[0x4]; // 0xc0(0x04)
	struct FName EscapeGraveyardPointKeyName; // 0xc4(0x08)
	struct FGameplayTag SharedBBTag; // 0xcc(0x08)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// Class UmamiRuntime.FortAthenaBTService_FlyingDestroyBlocker
// Size: 0x98 (Inherited: 0x70)
struct UFortAthenaBTService_FlyingDestroyBlocker : UBTService {
	struct FName DestroyBlockerExecutionStatusKeyName; // 0x70(0x08)
	char pad_78[0x4]; // 0x78(0x04)
	struct FName DestroyBlockerTargetKeyName; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct FName WeaponFireStatusKeyName; // 0x88(0x08)
	char pad_90[0x8]; // 0x90(0x08)
};

// Class UmamiRuntime.FortAthenaBTService_FlyingEvasiveManeuvers
// Size: 0x88 (Inherited: 0x70)
struct UFortAthenaBTService_FlyingEvasiveManeuvers : UBTService {
	enum class EFlyingEvasiveManeuversMode FlyingEvasiveManeuversMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FEvasiveManeuver_Step> FlyingEvasiveManeuversConfiguration; // 0x78(0x10)
};

// Class UmamiRuntime.FortAthenaBTService_FlyingVerticalMovementFirst
// Size: 0x70 (Inherited: 0x70)
struct UFortAthenaBTService_FlyingVerticalMovementFirst : UBTService {
};

// Class UmamiRuntime.FortAthenaBTService_Kidnap
// Size: 0x100 (Inherited: 0x70)
struct UFortAthenaBTService_Kidnap : UBTService {
	struct FName KidnapKeyName; // 0x70(0x08)
	char pad_78[0x4]; // 0x78(0x04)
	struct FName KidnapMovementName; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct FName KidnapTargetKeyName; // 0x88(0x08)
	char pad_90[0x4]; // 0x90(0x04)
	struct FName KidnappedTargetKeyName; // 0x94(0x08)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FName KidnappedOriginKeyName; // 0xa0(0x08)
	char pad_A8[0x4]; // 0xa8(0x04)
	struct FName KidnapRetrievalDestinationKeyName; // 0xac(0x08)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FName KidnapLastFailedRetrievalDestinationKeyName; // 0xb8(0x08)
	char pad_C0[0x4]; // 0xc0(0x04)
	struct FName KidnapRetrievalActionKeyName; // 0xc4(0x08)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FName KidnapTractorBeamStateKeyName; // 0xd0(0x08)
	char pad_D8[0x4]; // 0xd8(0x04)
	struct FName FocusActorName; // 0xdc(0x08)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FName FocalPointName; // 0xe8(0x08)
	char pad_F0[0x4]; // 0xf0(0x04)
	struct FGameplayTag BlacklistTargetsWithThisGameplayTag; // 0xf4(0x08)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class UmamiRuntime.FortAthenaBTService_UmamiFlyingAttack
// Size: 0x98 (Inherited: 0x70)
struct UFortAthenaBTService_UmamiFlyingAttack : UBTService {
	struct FName FlyingAttackExecutionStatusKeyName; // 0x70(0x08)
	char pad_78[0x4]; // 0x78(0x04)
	struct FName SuccessPendingKeyName; // 0x7c(0x08)
	char pad_84[0x4]; // 0x84(0x04)
	struct FName WeaponFireName; // 0x88(0x08)
	char pad_90[0x8]; // 0x90(0x08)
};

// Class UmamiRuntime.FortAthenaBTTask_FlyToPosition
// Size: 0x168 (Inherited: 0xc0)
struct UFortAthenaBTTask_FlyToPosition : UFortAthenaBTTask_BotMoveTo {
	char bShouldSlowdownWhenApproachingGoal : 1; // 0xc0(0x01)
	char bProjectStartOnNavArea : 1; // 0xc0(0x01)
	char bDirectMovementOnProjectionFailure : 1; // 0xc0(0x01)
	char pad_C0_3 : 5; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FScalableFloat LinearForwardDivisorMultiplier; // 0xc8(0x28)
	struct FScalableFloat LinearElevationDivisorMultiplier; // 0xf0(0x28)
	struct FScalableFloat MaxForwardSpeedOverride; // 0x118(0x28)
	struct FScalableFloat MaxElevationSpeedOverride; // 0x140(0x28)
};

// Class UmamiRuntime.FortAthenaNpcEvaluator_FlyingDestroyBlocker
// Size: 0x270 (Inherited: 0x1c8)
struct UFortAthenaNpcEvaluator_FlyingDestroyBlocker : UFortAthenaAIBotEvaluator_Attack {
	struct FName UnstuckLastBlockedByActorLocationKeyName; // 0x1c8(0x08)
	char pad_1D0[0x4]; // 0x1d0(0x04)
	struct FName DestroyBlockerExecutionStatusKeyName; // 0x1d4(0x08)
	struct FName DestroyBlockerMovementStateKeyName; // 0x1dc(0x08)
	struct FName DestroyBlockerDestinationKeyName; // 0x1e4(0x08)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct FName DestroyBlockerTargetKeyName; // 0x1f0(0x08)
	char pad_1F8[0x4]; // 0x1f8(0x04)
	struct FName WeaponFireStatusKeyName; // 0x1fc(0x08)
	char pad_204[0x4]; // 0x204(0x04)
	struct FName FocusActorName; // 0x208(0x08)
	char pad_210[0x4]; // 0x210(0x04)
	struct FName FocalPointName; // 0x214(0x08)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct TArray<struct FDestroyBlockerOffsetConfiguration> OffsetConfigurations; // 0x220(0x10)
	struct FGameplayTagContainer WhitelistBuildingTypesToDestroy; // 0x230(0x20)
	char pad_250[0x18]; // 0x250(0x18)
	struct UFortAthenaUmamiFlyingDestroyBlockerDigestedSkillSet* CachedFlyingDestroyBlockerDigestedSkillSet; // 0x268(0x08)
};

// Class UmamiRuntime.FortAthenaNpcEvaluator_Kidnap
// Size: 0x330 (Inherited: 0x188)
struct UFortAthenaNpcEvaluator_Kidnap : UFortAthenaAIBotEvaluator_Movement {
	struct FName KidnapKeyName; // 0x188(0x08)
	struct FName KidnapMovementName; // 0x190(0x08)
	struct FName TryToKidnapMovementKeyName; // 0x198(0x08)
	char pad_1A0[0x4]; // 0x1a0(0x04)
	struct FName KidnapTargetKeyName; // 0x1a4(0x08)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct FName KidnappedTargetKeyName; // 0x1b0(0x08)
	char pad_1B8[0x4]; // 0x1b8(0x04)
	struct FName KidnappedTimeKeyName; // 0x1bc(0x08)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct FName KidnappedModeKeyName; // 0x1c8(0x08)
	char pad_1D0[0x4]; // 0x1d0(0x04)
	struct FName KidnapRetrievalDestinationKeyName; // 0x1d4(0x08)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct FName KidnapLastFailedRetrievalDestinationKeyName; // 0x1e0(0x08)
	char pad_1E8[0x4]; // 0x1e8(0x04)
	struct FName KidnapRetrievalActionKeyName; // 0x1ec(0x08)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct FName KidnapTractorBeamStateKeyName; // 0x1f8(0x08)
	char pad_200[0x4]; // 0x200(0x04)
	struct FName KidnapEscapeReachedPointsKeyName; // 0x204(0x08)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct FName DestroyBlockerExecutionStatusKeyName; // 0x210(0x08)
	char pad_218[0x4]; // 0x218(0x04)
	struct FGameplayTag PlayerBeingTargetedByUmamiDefensivelyTag; // 0x21c(0x08)
	struct FGameplayTag RequiredTagForHighPriorityObjectTracking; // 0x224(0x08)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct TArray<struct FKidnapCustomTargetWeightConfiguration> CustomTargetWeightConfigurations; // 0x230(0x10)
	struct UGameplayEffect* KidnappedByAIGE; // 0x240(0x08)
	struct FGameplayTag GameplayTagAppliedByKidnappedByAIGE; // 0x248(0x08)
	struct FGameplayTag BlacklistTargetsWithThisGameplayTag; // 0x250(0x08)
	char pad_258[0xd0]; // 0x258(0xd0)
	struct UFortAthenaUmamiKidnapDigestedSkillSet* CachedKidnapSkillSet; // 0x328(0x08)
};

// Class UmamiRuntime.FortAthenaNpcEvaluator_NevadaVehicle
// Size: 0x98 (Inherited: 0x90)
struct UFortAthenaNpcEvaluator_NevadaVehicle : UFortAthenaAIBotEvaluator {
	char pad_90[0x8]; // 0x90(0x08)
};

// Class UmamiRuntime.FortAthenaNpcEvaluator_UmamiPatrolAround
// Size: 0x198 (Inherited: 0x188)
struct UFortAthenaNpcEvaluator_UmamiPatrolAround : UFortAthenaAIBotEvaluator_Movement {
	struct FName PatrolDestinationName; // 0x188(0x08)
	char pad_190[0x8]; // 0x190(0x08)
};

// Class UmamiRuntime.FortAthenaNpcEvaluator_UmamiPatrolling
// Size: 0x1e8 (Inherited: 0x1e0)
struct UFortAthenaNpcEvaluator_UmamiPatrolling : UFortAthenaNpcEvaluator_Patrolling {
	char pad_1E0[0x8]; // 0x1e0(0x08)
};

// Class UmamiRuntime.FortAthenaNpcEvaluator_UmamiPatrolReservation
// Size: 0xd0 (Inherited: 0x90)
struct UFortAthenaNpcEvaluator_UmamiPatrolReservation : UFortAthenaAIBotEvaluator {
	struct FGameplayTag RequiredGameplayTagOnPatrolPath; // 0x90(0x08)
	struct FScalableFloat MaximumDistanceFromPatrolPath; // 0x98(0x28)
	struct UFortAthenaNpcPatrollingComponent* CachedNpcPatrollingComponent; // 0xc0(0x08)
	struct AFortAthenaPatrolPath* ReservedPatrolPath; // 0xc8(0x08)
};

// Class UmamiRuntime.FortAthenaUmamiFlyingAttackDigestedSkillSet
// Size: 0xc0 (Inherited: 0x30)
struct UFortAthenaUmamiFlyingAttackDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float OverriddenAttackDistance; // 0x34(0x04)
	float OverriddenAttackDistanceAfterBeingInRange; // 0x38(0x04)
	float MinimumZOffsetWithTarget; // 0x3c(0x04)
	float EvasiveManeuverMinDotToKeepLoop; // 0x40(0x04)
	float MoveInRangeBlacklistTime; // 0x44(0x04)
	float EvadeBlacklistTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FAIScalableFloat OverriddenDelayBetweenShots; // 0x50(0x38)
	struct FAIScalableFloat OverriddenDelayDeviationTimeBetweenShots; // 0x88(0x38)
};

// Class UmamiRuntime.FortAthenaUmamiFlyingAttackSkillSet
// Size: 0x1b8 (Inherited: 0x30)
struct UFortAthenaUmamiFlyingAttackSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat bEnabled; // 0x30(0x28)
	struct FScalableFloat OverriddenAttackDistance; // 0x58(0x28)
	struct FScalableFloat OverriddenAttackDistanceAfterBeingInRange; // 0x80(0x28)
	struct FScalableFloat MinimumZOffsetWithTarget; // 0xa8(0x28)
	struct FScalableFloat EvasiveManeuverMinDotToKeepLoop; // 0xd0(0x28)
	struct FScalableFloat MoveInRangeBlacklistTime; // 0xf8(0x28)
	struct FScalableFloat EvadeBlacklistTime; // 0x120(0x28)
	struct FAIScalableFloat OverriddenDelayBetweenShots; // 0x148(0x38)
	struct FAIScalableFloat OverriddenDelayDeviationTimeBetweenShots; // 0x180(0x38)
};

// Class UmamiRuntime.FortAthenaUmamiFlyingController
// Size: 0xf60 (Inherited: 0xf30)
struct AFortAthenaUmamiFlyingController : AFortAthenaAIBotController {
	char pad_F30[0x28]; // 0xf30(0x28)
	struct UFortAthenaUmamiKidnapDigestedSkillSet* CacheKidnapSkillSet; // 0xf58(0x08)
};

// Class UmamiRuntime.FortAthenaUmamiFlyingDestroyBlockerDigestedSkillSet
// Size: 0x38 (Inherited: 0x30)
struct UFortAthenaUmamiFlyingDestroyBlockerDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	bool bEnabled; // 0x30(0x01)
	bool bCanDestroyOnlyBuildingActors; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// Class UmamiRuntime.FortAthenaUmamiFlyingDestroyBlockerSkillSet
// Size: 0x80 (Inherited: 0x30)
struct UFortAthenaUmamiFlyingDestroyBlockerSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat bEnabled; // 0x30(0x28)
	struct FScalableFloat bCanDestroyOnlyBuildingActors; // 0x58(0x28)
};

// Class UmamiRuntime.FortAthenaUmamiFlyingPathFollowingComponent
// Size: 0x498 (Inherited: 0x390)
struct UFortAthenaUmamiFlyingPathFollowingComponent : UFortAthenaAIBotPathFollowingComponent {
	char pad_390[0x78]; // 0x390(0x78)
	struct UFortAthenaUmamiFlyingVehicleDigestedSkillSet* CachedFlyingVehicleDigestedSkillSet; // 0x408(0x08)
	char pad_410[0x88]; // 0x410(0x88)
};

// Class UmamiRuntime.FortAthenaUmamiFlyingVehicleDigestedSkillSet
// Size: 0xc0 (Inherited: 0x30)
struct UFortAthenaUmamiFlyingVehicleDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	float MaxForwardSpeed; // 0x30(0x04)
	float MaxElevationSpeed; // 0x34(0x04)
	struct UCurveFloat* ForwardSpeedCurve; // 0x38(0x08)
	struct UCurveFloat* ElevationSpeedCurve; // 0x40(0x08)
	float AlphasDeadZones; // 0x48(0x04)
	float LookAheadMaxDistance; // 0x4c(0x04)
	float Min2DGoalDistanceForHeighfieldClamp; // 0x50(0x04)
	float Min2DGoalDistanceForBuildingActorsClamp; // 0x54(0x04)
	float ZOffsetForBuildingActorsClamp; // 0x58(0x04)
	float MaximumStuckTime; // 0x5c(0x04)
	struct TArray<struct FUmamiMaximumStuckTimePerBuildingTypeDigested> MaximumStuckTimePerBuildingType; // 0x60(0x10)
	float MinimumProgressPercentageForStuck; // 0x70(0x04)
	float VerticalMovementFirst_MinZDelta; // 0x74(0x04)
	float VerticalMovementFirst_MaxXYDelta; // 0x78(0x04)
	float EvasiveManeuver_DistanceToFinish; // 0x7c(0x04)
	float EvasiveManeuver_DistanceToFinishSquared; // 0x80(0x04)
	float EvasiveManeuver_MinDotDifferenceOnTargetToKeepPreviousManeuver; // 0x84(0x04)
	float EvasiveManeuver_MinDotDifferenceBetweenStartAndCurrentLocationToKeepPreviousManeuver; // 0x88(0x04)
	float EvasiveManeuver_MinDistanceFromGoalToApply; // 0x8c(0x04)
	float EvasiveManeuver_MinDistanceFromGoalToApplySquared; // 0x90(0x04)
	float EvasiveManeuver_ForwardDistance; // 0x94(0x04)
	float EvasiveManeuver_RightDistance; // 0x98(0x04)
	float EvasiveManeuver_UpDistance; // 0x9c(0x04)
	float Avoidance_Strength; // 0xa0(0x04)
	float Avoidance_Min2DGoalDistance; // 0xa4(0x04)
	float Avoidance_MinDistanceToOther; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	float Avoidance_SelfLookAheadTime; // 0xb0(0x04)
	float Avoidance_OthersLookAheadTime; // 0xb4(0x04)
	float Avoidance_SelfRadius; // 0xb8(0x04)
	float Avoidance_OthersRadius; // 0xbc(0x04)
};

// Class UmamiRuntime.FortAthenaUmamiFlyingVehicleSkillSet
// Size: 0x438 (Inherited: 0x30)
struct UFortAthenaUmamiFlyingVehicleSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat MaxForwardSpeed; // 0x30(0x28)
	struct FScalableFloat MaxElevationSpeed; // 0x58(0x28)
	struct UCurveFloat* ForwardSpeedCurve; // 0x80(0x08)
	struct UCurveFloat* ElevationSpeedCurve; // 0x88(0x08)
	struct FScalableFloat AlphasDeadZones; // 0x90(0x28)
	struct FScalableFloat LookAheadMaxDistance; // 0xb8(0x28)
	struct FScalableFloat Min2DGoalDistanceForHeighfieldClamp; // 0xe0(0x28)
	struct FScalableFloat Min2DGoalDistanceForBuildingActorsClamp; // 0x108(0x28)
	struct FScalableFloat ZOffsetForBuildingActorsClamp; // 0x130(0x28)
	struct FScalableFloat MaximumStuckTime; // 0x158(0x28)
	struct TArray<struct FUmamiMaximumStuckTimePerBuildingType> MaximumStuckTimePerBuildingType; // 0x180(0x10)
	struct FScalableFloat MinimumProgressPercentageForStuck; // 0x190(0x28)
	struct FScalableFloat VerticalMovementFirst_MinZDelta; // 0x1b8(0x28)
	struct FScalableFloat VerticalMovementFirst_MaxXYDelta; // 0x1e0(0x28)
	struct FScalableFloat EvasiveManeuver_DistanceToFinish; // 0x208(0x28)
	struct FScalableFloat EvasiveManeuver_MinDotDifferenceOnTargetToKeepPreviousManeuver; // 0x230(0x28)
	struct FScalableFloat EvasiveManeuver_MinDotDifferenceBetweenStartAndCurrentLocationToKeepPreviousManeuver; // 0x258(0x28)
	struct FScalableFloat EvasiveManeuver_MinDistanceFromGoalToApply; // 0x280(0x28)
	struct FScalableFloat EvasiveManeuver_ForwardDistance; // 0x2a8(0x28)
	struct FScalableFloat EvasiveManeuver_RightDistance; // 0x2d0(0x28)
	struct FScalableFloat EvasiveManeuver_UpDistance; // 0x2f8(0x28)
	struct FScalableFloat Avoidance_Strength; // 0x320(0x28)
	struct FScalableFloat Avoidance_Min2DGoalDistance; // 0x348(0x28)
	struct FScalableFloat Avoidance_MinDistanceToOther; // 0x370(0x28)
	struct FScalableFloat Avoidance_SelfLookAheadTime; // 0x398(0x28)
	struct FScalableFloat Avoidance_OthersLookAheadTime; // 0x3c0(0x28)
	struct FScalableFloat Avoidance_SelfRadius; // 0x3e8(0x28)
	struct FScalableFloat Avoidance_OthersRadius; // 0x410(0x28)
};

// Class UmamiRuntime.FortAthenaUmamiKidnapDigestedSkillSet
// Size: 0xf8 (Inherited: 0x30)
struct UFortAthenaUmamiKidnapDigestedSkillSet : UFortAthenaAIBotDigestedSkillSet {
	bool bEnabled; // 0x30(0x01)
	bool bEnableHighPriorityTarget; // 0x31(0x01)
	bool bEnableLowPriorityTarget; // 0x32(0x01)
	bool bEnablePawnTarget; // 0x33(0x01)
	bool bIgnorePawnsWithNoRangedWeapons; // 0x34(0x01)
	bool bIgnoreFortAIPawns; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
	float DesiredZOffsetFromTarget; // 0x38(0x04)
	float MinTimeToReleaseKidnappedPawn; // 0x3c(0x04)
	float MaxTimeToReleaseKidnappedPawn; // 0x40(0x04)
	float MinTimeToReleaseKidnappedObject; // 0x44(0x04)
	float MaxTimeToReleaseKidnappedObject; // 0x48(0x04)
	int32_t ReleaseKidnappedPawnAfterNumberOfPoints; // 0x4c(0x04)
	int32_t ReleaseKidnappedObjectAfterNumberOfPoints; // 0x50(0x04)
	float TimeBetweenPawnKidnaps; // 0x54(0x04)
	float TimeBetweenObjectKidnaps; // 0x58(0x04)
	float KidnapBlacklistTime; // 0x5c(0x04)
	float GlobalKidnapDelay; // 0x60(0x04)
	float GlobalPawnKidnapDelay; // 0x64(0x04)
	float GlobalObjectKidnapDelay; // 0x68(0x04)
	float GlobalNPCKidnapDelay; // 0x6c(0x04)
	float StartingNPCKidnapDelay; // 0x70(0x04)
	float WeightDeltaForPawnsInStorm; // 0x74(0x04)
	float MinimumDistanceFromLastFailedRetrieval; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	float MaximumDistanceForHighPriorityTrackedObject; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	float MaximumDistanceForLowPriorityTrackedObject; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	float MinDelayForLowPriorityTrackedObjectKidnap; // 0x90(0x04)
	float MaxDelayForLowPriorityTrackedObjectKidnap; // 0x94(0x04)
	float LowPriorityTrackedObjectWinPercentage; // 0x98(0x04)
	float UnrestrictedObjectKidnapWinPercentage; // 0x9c(0x04)
	bool bKidnapEnableBlacklistByGameplayTagBeforeBeam; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float MinimumDotWithTargetBeforeBeam; // 0xa4(0x04)
	float MinimumDistanceFromStormWhenEscapingForPawn; // 0xa8(0x04)
	float EscapeCircleRadiusForPawn; // 0xac(0x04)
	float EscapeCircleExclusionRadiusForPawn; // 0xb0(0x04)
	float MinEscapeZExtendForPawn; // 0xb4(0x04)
	float MaxEscapeZExtendForPawn; // 0xb8(0x04)
	float MinimumDistanceFromStormWhenEscapingForObject; // 0xbc(0x04)
	float EscapeCircleRadiusForObject; // 0xc0(0x04)
	float EscapeCircleExclusionRadiusForObject; // 0xc4(0x04)
	float MinEscapeZExtendForObject; // 0xc8(0x04)
	float MaxEscapeZExtendForObject; // 0xcc(0x04)
	float MaximumTimeToTryToKidnap; // 0xd0(0x04)
	int32_t MaximumTryToKidnapBlockedCount; // 0xd4(0x04)
	bool bEnableGraveyard; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float GraveyardPercentageForObject; // 0xdc(0x04)
	float GraveyardPercentageForCreatures; // 0xe0(0x04)
	float GraveyardPercentageForPlayers; // 0xe4(0x04)
	float GraveyardMinDistanceFromStorm; // 0xe8(0x04)
	float GraveyardMinDistanceFromKidnapOrigin; // 0xec(0x04)
	float MinGraveyardDistanceFromKidnapCentre; // 0xf0(0x04)
	float MaxGraveyardDistanceFromKidnapCentre; // 0xf4(0x04)
};

// Class UmamiRuntime.FortAthenaUmamiKidnapSkillSet
// Size: 0x828 (Inherited: 0x30)
struct UFortAthenaUmamiKidnapSkillSet : UFortAthenaAIBotSkillSet {
	struct FScalableFloat bEnabled; // 0x30(0x28)
	struct FScalableFloat bEnableHighPriorityTarget; // 0x58(0x28)
	struct FScalableFloat bEnableLowPriorityTarget; // 0x80(0x28)
	struct FScalableFloat bEnablePawnTarget; // 0xa8(0x28)
	struct FScalableFloat bIgnorePawnsWithNoRangedWeapons; // 0xd0(0x28)
	struct FScalableFloat bIgnoreFortAIPawns; // 0xf8(0x28)
	struct FScalableFloat DesiredZOffsetFromTarget; // 0x120(0x28)
	struct FScalableFloat MinTimeToReleaseKidnappedPawn; // 0x148(0x28)
	struct FScalableFloat MaxTimeToReleaseKidnappedPawn; // 0x170(0x28)
	struct FScalableFloat MinTimeToReleaseKidnappedObject; // 0x198(0x28)
	struct FScalableFloat MaxTimeToReleaseKidnappedObject; // 0x1c0(0x28)
	struct FScalableFloat ReleaseKidnappedPawnAfterNumberOfPoints; // 0x1e8(0x28)
	struct FScalableFloat ReleaseKidnappedObjectAfterNumberOfPoints; // 0x210(0x28)
	struct FScalableFloat TimeBetweenPawnKidnaps; // 0x238(0x28)
	struct FScalableFloat TimeBetweenObjectKidnaps; // 0x260(0x28)
	struct FScalableFloat KidnapBlacklistTime; // 0x288(0x28)
	struct FScalableFloat GlobalKidnapDelay; // 0x2b0(0x28)
	struct FScalableFloat GlobalPawnKidnapDelay; // 0x2d8(0x28)
	struct FScalableFloat GlobalObjectKidnapDelay; // 0x300(0x28)
	struct FScalableFloat GlobalNPCKidnapDelay; // 0x328(0x28)
	struct FScalableFloat StartingNPCKidnapDelay; // 0x350(0x28)
	struct FScalableFloat WeightDeltaForPawnsInStorm; // 0x378(0x28)
	struct FScalableFloat MinimumDistanceFromLastFailedRetrieval; // 0x3a0(0x28)
	struct FScalableFloat MaximumDistanceForHighPriorityTrackedObject; // 0x3c8(0x28)
	struct FScalableFloat MaximumDistanceForLowPriorityTrackedObject; // 0x3f0(0x28)
	struct FScalableFloat MaxDelayForLowPriorityTrackedObjectKidnap; // 0x418(0x28)
	struct FScalableFloat MinDelayForLowPriorityTrackedObjectKidnap; // 0x440(0x28)
	struct FScalableFloat LowPriorityTrackedObjectWinPercentage; // 0x468(0x28)
	struct FScalableFloat UnrestrictedObjectKidnapWinPercentage; // 0x490(0x28)
	struct FScalableFloat KidnapEnableBlacklistByGameplayTagBeforeBeam; // 0x4b8(0x28)
	struct FScalableFloat MinimumDotWithTargetBeforeBeam; // 0x4e0(0x28)
	struct FScalableFloat MaximumTimeToTryToKidnap; // 0x508(0x28)
	struct FScalableFloat MaximumTryToKidnapBlockedCount; // 0x530(0x28)
	struct FScalableFloat MinimumDistanceFromStormWhenEscapingForPawn; // 0x558(0x28)
	struct FScalableFloat EscapeCircleRadiusForPawn; // 0x580(0x28)
	struct FScalableFloat EscapeCircleExclusionRadiusForPawn; // 0x5a8(0x28)
	struct FScalableFloat MinEscapeZExtendForPawn; // 0x5d0(0x28)
	struct FScalableFloat MaxEscapeZExtendForPawn; // 0x5f8(0x28)
	struct FScalableFloat MinimumDistanceFromStormWhenEscapingForObject; // 0x620(0x28)
	struct FScalableFloat EscapeCircleRadiusForObject; // 0x648(0x28)
	struct FScalableFloat EscapeCircleExclusionRadiusForObject; // 0x670(0x28)
	struct FScalableFloat MinEscapeZExtendForObject; // 0x698(0x28)
	struct FScalableFloat MaxEscapeZExtendForObject; // 0x6c0(0x28)
	struct FScalableFloat EnableGraveyard; // 0x6e8(0x28)
	struct FScalableFloat GraveyardPercentageForObject; // 0x710(0x28)
	struct FScalableFloat GraveyardPercentageForCreatures; // 0x738(0x28)
	struct FScalableFloat GraveyardPercentageForPlayers; // 0x760(0x28)
	struct FScalableFloat GraveyardMinDistanceFromStorm; // 0x788(0x28)
	struct FScalableFloat GraveyardMinDistanceFromKidnapOrigin; // 0x7b0(0x28)
	struct FScalableFloat MinGraveyardDistanceFromKidnapCentre; // 0x7d8(0x28)
	struct FScalableFloat MaxGraveyardDistanceFromKidnapCentre; // 0x800(0x28)
};

// Class UmamiRuntime.Umami3DNavigationSystem
// Size: 0xe0 (Inherited: 0x30)
struct UUmami3DNavigationSystem : UWorldSubsystem {
	char pad_30[0xb0]; // 0x30(0xb0)
};

// Class UmamiRuntime.Umami3DNavigationSystemAreaRenderingComponent
// Size: 0x450 (Inherited: 0x450)
struct UUmami3DNavigationSystemAreaRenderingComponent : UPrimitiveComponent {
};

// Class UmamiRuntime.Umami3DNavigationSystemArea
// Size: 0x248 (Inherited: 0x220)
struct AUmami3DNavigationSystemArea : AActor {
	struct TArray<struct AUmami3DNavigationSystemArea*> NavigationNeighbors; // 0x220(0x10)
	struct FVector NavigationBoxExtent; // 0x230(0x0c)
	char pad_23C[0xc]; // 0x23c(0x0c)
};

