// Class NevadaRuntime.FortCameraMode_Nevada
// Size: 0xe20 (Inherited: 0xde0)
struct UFortCameraMode_Nevada : UFortCameraMode_AthenaVehicle {
	char pad_DE0[0x10]; // 0xde0(0x10)
	struct FVector TractorBeamCameraOffset; // 0xdf0(0x0c)
	float TractorBeamCameraLerpTime; // 0xdfc(0x04)
	float TractorBeamCameraExtraPitch; // 0xe00(0x04)
	float TractorBeamInactiveCameraExtraPitch; // 0xe04(0x04)
	float TractorBeamCameraPositionResetDelay; // 0xe08(0x04)
	float MinPitchForOffset; // 0xe0c(0x04)
	float MaxPitchForOffset; // 0xe10(0x04)
	struct FVector ExtraOffset; // 0xe14(0x0c)
};

// Class NevadaRuntime.FortNevadaAudioController
// Size: 0x2a0 (Inherited: 0x220)
struct AFortNevadaAudioController : AActor {
	struct FVector2D SpeedRangeMap; // 0x220(0x08)
	struct FVector2D TurningRangeMap; // 0x228(0x08)
	struct FVector2D AcceleratingRangeMap; // 0x230(0x08)
	struct FVector2D BrakingRangeMap; // 0x238(0x08)
	struct FVector2D PassByRangeMap; // 0x240(0x08)
	struct FVector2D LFORangeMap; // 0x248(0x08)
	struct AFortNevadaVehicle* Vehicle; // 0x250(0x08)
	struct UFortLayeredAudioComponent* LayeredAudioComponent; // 0x258(0x08)
	float SpeedParamValue; // 0x260(0x04)
	float SpeedParamValuePrev; // 0x264(0x04)
	float AcceleratingParamValue; // 0x268(0x04)
	float BrakingParamValue; // 0x26c(0x04)
	struct FVector ForwardVector; // 0x270(0x0c)
	struct FVector ForwardVectorPrev; // 0x27c(0x0c)
	float TurningParamValue; // 0x288(0x04)
	float PassByParamValue; // 0x28c(0x04)
	float LocallyControlledParamValue; // 0x290(0x04)
	float LFOParamValue; // 0x294(0x04)
	char pad_298[0x8]; // 0x298(0x08)

	void Update(); // Function NevadaRuntime.FortNevadaAudioController.Update // (Final|Native|Public) // @ game+0x3ded4b4
	void Init(struct AFortNevadaVehicle* InVehicle); // Function NevadaRuntime.FortNevadaAudioController.Init // (Final|Native|Public) // @ game+0x3ded014
	struct AFortNevadaVehicle* GetVehicleActor(); // Function NevadaRuntime.FortNevadaAudioController.GetVehicleActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1cf44b0
	void CacheReferences(struct UFortLayeredAudioComponent* InLayeredAudioComponent); // Function NevadaRuntime.FortNevadaAudioController.CacheReferences // (Final|Native|Public|BlueprintCallable) // @ game+0x2334220
	void BP_Update(); // Function NevadaRuntime.FortNevadaAudioController.BP_Update // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_Init(); // Function NevadaRuntime.FortNevadaAudioController.BP_Init // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class NevadaRuntime.FortNevadaVehicle
// Size: 0x15e0 (Inherited: 0x12a0)
struct AFortNevadaVehicle : AFortAthenaSKVehicle {
	struct TWeakObjectPtr<struct AController> KillerController; // 0x1298(0x08)
	struct TWeakObjectPtr<struct AActor> KillerCauser; // 0x12a0(0x08)
	struct FNevadaState ServerReplicatedState; // 0x12a8(0x10)
	struct UFortNevadaVehicleConfigs* FortNevadaVehicleConfigs; // 0x12b8(0x08)
	struct UFortNevadaVehicleConfigs* FortNevadaVehicleConfigsClass; // 0x12c0(0x08)
	struct AFortNevadaAudioController* FortNevadaAudioControllerClass; // 0x12c8(0x08)
	struct UChildActorComponent* AudioControllerActor; // 0x12d0(0x08)
	struct AFortNevadaAudioController* FortNevadaAudioController; // 0x12d8(0x08)
	struct FVehicleGamepadLiftInputs LiftInputs; // 0x12e0(0x08)
	float LastBatteryRegenTickTime; // 0x12e8(0x04)
	bool bBoostThrust; // 0x12ec(0x01)
	bool bBoostDrag; // 0x12ed(0x01)
	bool bBoostInputReleased; // 0x12ee(0x01)
	bool bUseTractorBeamUprightForce; // 0x12ef(0x01)
	bool bDeadBattery; // 0x12f0(0x01)
	float TractorBeamExtraLengthForExtents; // 0x12f4(0x04)
	struct FVector CrashingDesiredUp; // 0x12f8(0x0c)
	float BoostStartTime; // 0x1304(0x04)
	float BoostPitchAlpha; // 0x1308(0x04)
	float BoostChargeProgress; // 0x130c(0x04)
	int32_t BoostChargesAvailable; // 0x1310(0x04)
	struct FVector CachedBoostMoveDir; // 0x1314(0x0c)
	float CurrentStateStartTime; // 0x1320(0x04)
	float HeightAtLandingTime; // 0x1324(0x04)
	float CrashingScrapingTime; // 0x1328(0x04)
	float CrashingNotMovingTimer; // 0x132c(0x04)
	float AltimeterTraceHitDistance; // 0x1330(0x04)
	float TractorBeamAppliedForceMagnitude; // 0x1334(0x04)
	float AnimParamDriverSeatLeftRight; // 0x1338(0x04)
	float AnimParamDriverSeatForwardBack; // 0x133c(0x04)
	bool bForceNegativeLift; // 0x1340(0x01)
	bool bForcePositiveLift; // 0x1341(0x01)
	bool bInitialLift; // 0x1342(0x01)
	enum class ENevadaFlightStates CurrentVehicleState; // 0x1343(0x01)
	char pad_1349[0x2f]; // 0x1349(0x2f)
	struct UFortCameraMode_AthenaVehicle* PassengerCameraModeClass; // 0x1378(0x08)
	struct TArray<struct FVehicleSpecificUIDetails> CustomUI; // 0x1380(0x10)
	struct TArray<struct FActiveVehicleUI> ActiveUI; // 0x1390(0x10)
	char pad_13A0[0x1]; // 0x13a0(0x01)
	bool bTractorBeamChargeStarted; // 0x13a1(0x01)
	char pad_13A2[0x2]; // 0x13a2(0x02)
	struct FTowhookParams TowhookParams; // 0x13a4(0x54)
	struct AFortAthenaVehicle* AttachedPawnHiddenVehicle; // 0x13f8(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> TractorBeamAttachedPrimitive; // 0x1400(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> PreviousTractorBeamAttachedPrimitive; // 0x1408(0x08)
	struct TArray<struct AActor*> TractorBeamTargetedActors; // 0x1410(0x10)
	struct TArray<struct AActor*> PreviouslyTargetedActors; // 0x1420(0x10)
	struct AActor* TractorBeamAttachedActor; // 0x1430(0x08)
	struct AActor* TractorBeamTargetedActor; // 0x1438(0x08)
	struct FVector TractorBeamTargetPosition; // 0x1440(0x0c)
	char pad_144C[0x1]; // 0x144c(0x01)
	bool bBeamButtonReleased; // 0x144d(0x01)
	char pad_144E[0x2]; // 0x144e(0x02)
	struct TArray<enum class EObjectTypeQuery> TractorBeamObjectsTypes; // 0x1450(0x10)
	struct FGameplayTagContainer DisallowedBeamTags; // 0x1460(0x20)
	char pad_1480[0x80]; // 0x1480(0x80)
	struct UNiagaraSystem* TractorBeamFX_Unattached; // 0x1500(0x08)
	struct UNiagaraSystem* TractorBeamFX_Attached; // 0x1508(0x08)
	struct UNiagaraComponent* BeamPSC; // 0x1510(0x08)
	char pad_1518[0x48]; // 0x1518(0x48)
	enum class ETractorBeamState TractorBeamState; // 0x1560(0x01)
	char pad_1561[0x1f]; // 0x1561(0x1f)
	float TractorBeamDeactivationTimestamp; // 0x1580(0x04)
	float TractorBeamDisruptedTimestamp; // 0x1584(0x04)
	char pad_1588[0x58]; // 0x1588(0x58)

	void SetTractorBeamInactive(); // Function NevadaRuntime.FortNevadaVehicle.SetTractorBeamInactive // (Final|Native|Protected|BlueprintCallable) // @ game+0x3ded4a0
	void SetAttachedPawnAddedVelocity(struct FVector AddedVelocity); // Function NevadaRuntime.FortNevadaVehicle.SetAttachedPawnAddedVelocity // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3ded404
	void OnTractorBeamDetached(struct AActor* DetachedActor, struct FVector LastBeamPosition); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDetached // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xda7c34
	void OnTractorBeamDeactivated(struct FVector LastBeamPosition); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamDeactivated // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xda7c34
	void OnTractorBeamChargeStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamChargeStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTractorBeamAttached(); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamAttached // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTractorBeamActivated(); // Function NevadaRuntime.FortNevadaVehicle.OnTractorBeamActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTargetedActorChanged(struct AActor* NewTargetedActor); // Function NevadaRuntime.FortNevadaVehicle.OnTargetedActorChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartDescend(); // Function NevadaRuntime.FortNevadaVehicle.OnStartDescend // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartAscend(); // Function NevadaRuntime.FortNevadaVehicle.OnStartAscend // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRep_TractorBeamState(enum class ETractorBeamState PreviousState); // Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamState // (Final|Native|Protected) // @ game+0x1c5f464
	void OnRep_TractorBeamChargeStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamChargeStarted // (Final|Native|Public) // @ game+0x2e8c780
	void OnRep_TractorBeamAttached(); // Function NevadaRuntime.FortNevadaVehicle.OnRep_TractorBeamAttached // (Final|Native|Protected) // @ game+0x1f44888
	void OnRep_TargetedActorChanged(); // Function NevadaRuntime.FortNevadaVehicle.OnRep_TargetedActorChanged // (Final|Native|Public) // @ game+0x2048684
	void OnRep_ReplicatedTargetedActors(); // Function NevadaRuntime.FortNevadaVehicle.OnRep_ReplicatedTargetedActors // (Final|Native|Public) // @ game+0x1ec8d28
	void OnRep_NevadaState(struct FNevadaState PrevState); // Function NevadaRuntime.FortNevadaVehicle.OnRep_NevadaState // (Final|Native|Protected|HasOutParms) // @ game+0x1db982c
	void OnRebootStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnRebootStarted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnRebootFinished(); // Function NevadaRuntime.FortNevadaVehicle.OnRebootFinished // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnOutOfBattery(); // Function NevadaRuntime.FortNevadaVehicle.OnOutOfBattery // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnNewVehicleState(enum class ENevadaFlightStates NewVehicleState); // Function NevadaRuntime.FortNevadaVehicle.OnNewVehicleState // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnExplode(); // Function NevadaRuntime.FortNevadaVehicle.OnExplode // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCrashingStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnCrashingStarted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCrashedImpact(); // Function NevadaRuntime.FortNevadaVehicle.OnCrashedImpact // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBoostStarted(); // Function NevadaRuntime.FortNevadaVehicle.OnBoostStarted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBoostFinished(); // Function NevadaRuntime.FortNevadaVehicle.OnBoostFinished // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBoostChargeRefilled(); // Function NevadaRuntime.FortNevadaVehicle.OnBoostChargeRefilled // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBatteryRegen(float Newcharge); // Function NevadaRuntime.FortNevadaVehicle.OnBatteryRegen // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnAttachedActorDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function NevadaRuntime.FortNevadaVehicle.OnAttachedActorDied // (Final|Native|Public|HasDefaults) // @ game+0x3ded150
	bool IsTractorBeamDisrupted(); // Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamDisrupted // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ded0d8
	bool IsTractorBeamAttached(); // Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamAttached // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d764e0
	bool IsTractorBeamActive(); // Function NevadaRuntime.FortNevadaVehicle.IsTractorBeamActive // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ded0b0
	struct FVector GetTractorBeamAttachLocation(); // Function NevadaRuntime.FortNevadaVehicle.GetTractorBeamAttachLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3decfe0
	int32_t GetNumRebootsAvailable(); // Function NevadaRuntime.FortNevadaVehicle.GetNumRebootsAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27ef9a0
	float GetEnergyCanonChargePercent(); // Function NevadaRuntime.FortNevadaVehicle.GetEnergyCanonChargePercent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3decfb8
	void GetDriverSeatRotationAnimParams(float OutLeftRight, float OutForwardBack); // Function NevadaRuntime.FortNevadaVehicle.GetDriverSeatRotationAnimParams // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x1cb0df4
	enum class ENevadaFlightStates GetCurrentVehicleState(); // Function NevadaRuntime.FortNevadaVehicle.GetCurrentVehicleState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x242f918
	float GetBoostChargeTimeRemaining(); // Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3decf6c
	int32_t GetBoostChargesAvailable(); // Function NevadaRuntime.FortNevadaVehicle.GetBoostChargesAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3decfa0
	float GetBoostChargeProgress(); // Function NevadaRuntime.FortNevadaVehicle.GetBoostChargeProgress // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3decf4c
	float GetBatteryCharge(); // Function NevadaRuntime.FortNevadaVehicle.GetBatteryCharge // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3decf24
	struct AFortNevadaAudioController* GetAudioController(); // Function NevadaRuntime.FortNevadaVehicle.GetAudioController // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x20849e4
	void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled); // Function NevadaRuntime.FortNevadaVehicle.EnablePilotBubbleCollisionOnServer // (Final|Native|Protected|BlueprintCallable) // @ game+0x21390dc
	void DisruptTractorBeam(); // Function NevadaRuntime.FortNevadaVehicle.DisruptTractorBeam // (Final|Native|Protected|BlueprintCallable) // @ game+0x3deced8
	void AddPhysicsImpulseToTractorBeamAttachedActor(struct FVector Impulse, struct FName BoneName, bool bVelChange); // Function NevadaRuntime.FortNevadaVehicle.AddPhysicsImpulseToTractorBeamAttachedActor // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x2124010
};

// Class NevadaRuntime.FortNevadaVehicleAnimInstance
// Size: 0x540 (Inherited: 0x440)
struct UFortNevadaVehicleAnimInstance : UFortVehicleAnimInstance {
	struct AFortNevadaVehicle* NevadaVehicle; // 0x438(0x08)
	bool bTractorBeam_IsAttached; // 0x440(0x01)
	bool bTractorBeam_IsCharging; // 0x441(0x01)
	bool bTractorBeam_IsActive; // 0x442(0x01)
	bool bTractorBeam_IsInactive; // 0x443(0x01)
	bool bTractorBeam_IsOn; // 0x444(0x01)
	bool bTractorBeam_HasTarget; // 0x445(0x01)
	bool bTractorBeam_ShouldApplyCustomAO; // 0x446(0x01)
	float TractorBeam_LookAtPitch; // 0x448(0x04)
	float TractorBeam_LookAtYaw; // 0x44c(0x04)
	float LeanLeftRight; // 0x450(0x04)
	float LeanForwardBackward; // 0x454(0x04)
	float LeanValue; // 0x458(0x04)
	float PreviousLeanValue; // 0x45c(0x04)
	float VelocityZValue; // 0x460(0x04)
	float LeanDelta; // 0x464(0x04)
	bool bTurnAgain; // 0x468(0x01)
	bool bHadDriver; // 0x469(0x01)
	bool bJustGotDriver; // 0x46a(0x01)
	bool bJustLostDriver; // 0x46b(0x01)
	bool bWasBoosting; // 0x46c(0x01)
	bool bIsBoosting; // 0x46d(0x01)
	int32_t PreviousBoostCount; // 0x470(0x04)
	int32_t BoostCount; // 0x474(0x04)
	bool bIsBoostingAgain; // 0x478(0x01)
	bool bIsMoving; // 0x479(0x01)
	float WingsPlayRate; // 0x47c(0x04)
	float TractorBeamAlpha; // 0x480(0x04)
	float AimPitch; // 0x484(0x04)
	float AimYaw; // 0x488(0x04)
	bool bIsFiringCannon; // 0x48c(0x01)
	float DistanceFromGround; // 0x490(0x04)
	float DistanceFromGroundLeft; // 0x494(0x04)
	float DistanceFromGroundRight; // 0x498(0x04)
	bool bIsLanding; // 0x49c(0x01)
	bool bHasLanded; // 0x49d(0x01)
	char pad_49E[0x2]; // 0x49e(0x02)
	float LandingAlpha; // 0x4a0(0x04)
	bool bNotLandingMode; // 0x4a4(0x01)
	bool bHadBattery; // 0x4a5(0x01)
	bool bOutOfBattery; // 0x4a6(0x01)
	bool bJustGotBattery; // 0x4a7(0x01)
	bool bLaunchToDepart; // 0x4a8(0x01)
	bool bLaunchToIdle; // 0x4a9(0x01)
	bool bIsPartsLanding; // 0x4aa(0x01)
	char pad_4AB[0x1]; // 0x4ab(0x01)
	struct FName TractorBeamSocketName; // 0x4ac(0x08)
	struct FName TractorBeamAimCurveName; // 0x4b4(0x08)
	struct FName NevadaVehicleInterruptName; // 0x4bc(0x08)
	struct FName LandingTraceRightName; // 0x4c4(0x08)
	struct FName LandingTraceLeftName; // 0x4cc(0x08)
	float MaxLeanDeltaInterruptMagnitude; // 0x4d4(0x04)
	float MinForwardSpeedToBeMoving; // 0x4d8(0x04)
	float MinForwardSpeedToPlayWings; // 0x4dc(0x04)
	float MinWingsPlayRate; // 0x4e0(0x04)
	float MaxWingsPlayRate; // 0x4e4(0x04)
	float WingsPlayRateInterpSpeed; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct TSoftObjectPtr<struct UAnimMontage> CannonFiringMontage; // 0x4f0(0x28)
	float LandingGearTraceLength; // 0x518(0x04)
	char pad_51C[0x24]; // 0x51c(0x24)
};

// Class NevadaRuntime.FortNevadaVehicleConfigs
// Size: 0xb68 (Inherited: 0x6d0)
struct UFortNevadaVehicleConfigs : UFortPhysicsVehicleConfigs {
	struct FNevadaMoveModeConfig BaseMovement; // 0x6d0(0x14)
	struct FNevadaMoveModeConfig BoostMovement; // 0x6e4(0x14)
	struct FNevadaMoveModeConfig ChargingMovement; // 0x6f8(0x14)
	struct FDampedSpringConfig UprightSpringForce; // 0x70c(0x0c)
	float DebaseLaunchspeed; // 0x718(0x04)
	float MaxHeight; // 0x71c(0x04)
	float MinHeight; // 0x720(0x04)
	float OnEnterPitchAlpha; // 0x724(0x04)
	float FallDamageHeightBuffer; // 0x728(0x04)
	float TurningForce; // 0x72c(0x04)
	float ThrustRotationAlpha; // 0x730(0x04)
	float PitchDrag; // 0x734(0x04)
	float YawDrag; // 0x738(0x04)
	float RollDrag; // 0x73c(0x04)
	float BoostThrustDuration; // 0x740(0x04)
	float BoostDragDuration; // 0x744(0x04)
	int32_t NumBoostCharges; // 0x748(0x04)
	float BoostChargeDuration; // 0x74c(0x04)
	float BoostChargeDelay; // 0x750(0x04)
	float BoostDragFinishSpeed; // 0x754(0x04)
	float TractorBeamRadius; // 0x758(0x04)
	float TractorBeamWithTargetRadius; // 0x75c(0x04)
	struct FScalableFloat TractorBeamSweepLength; // 0x760(0x28)
	struct FScalableFloat TractorBeamChargeTime; // 0x788(0x28)
	struct FScalableFloat TractorBeamDurationTime; // 0x7b0(0x28)
	struct FScalableFloat TractorBeamTossImpulseStrengthForward; // 0x7d8(0x28)
	struct FScalableFloat TractorBeamTossImpulseStrengthUpward; // 0x800(0x28)
	float TractorBeamShutdownTime; // 0x828(0x04)
	char pad_82C[0x4]; // 0x82c(0x04)
	struct FScalableFloat TractorBeamTurnOffDamage; // 0x830(0x28)
	struct FScalableFloat AllowTractorBeamAIPawns; // 0x858(0x28)
	float TractorBeamBreakForceMagnitude; // 0x880(0x04)
	char pad_884[0x4]; // 0x884(0x04)
	struct FScalableFloat TractorBeamActive; // 0x888(0x28)
	struct FScalableFloat TractorBeamCooldown; // 0x8b0(0x28)
	struct FScalableFloat TractorBeamDisruptionCooldown; // 0x8d8(0x28)
	struct FName TractorBeamSocket; // 0x900(0x08)
	struct FVector TractorBeamAttachPositionOffset; // 0x908(0x0c)
	struct FRigidBodyErrorCorrection TractorBeamTargetOverridenErrorCorrection; // 0x914(0x34)
	float VictimPitchDrag; // 0x948(0x04)
	float VictimYawDrag; // 0x94c(0x04)
	float VictimRollDrag; // 0x950(0x04)
	struct FDampedSpringConfig TractorBeamVictimUprightForce; // 0x954(0x0c)
	int32_t NumReboots; // 0x960(0x04)
	float MaxCrashingTime; // 0x964(0x04)
	float MaxCrashingScrapingTime; // 0x968(0x04)
	float MaxCrashingTimeSpentNotMoving; // 0x96c(0x04)
	float SpeedThresholdForCrashed; // 0x970(0x04)
	char pad_974[0x4]; // 0x974(0x04)
	struct FScalableFloat RebootDuration; // 0x978(0x28)
	struct FScalableFloat RebootDelay; // 0x9a0(0x28)
	float LandingTraceRange; // 0x9c8(0x04)
	float DesiredLandingDistance; // 0x9cc(0x04)
	float LandingDelay_Max; // 0x9d0(0x04)
	float LandingDelay_Min; // 0x9d4(0x04)
	float HeightForMinLandingDelay; // 0x9d8(0x04)
	float HeightForMaxLandingDelay; // 0x9dc(0x04)
	float LandingPitchAlphaMax; // 0x9e0(0x04)
	float LandingPitchAlphaMin; // 0x9e4(0x04)
	float DriverSeatRotationAnimBlendSpeed; // 0x9e8(0x04)
	float CrashingDesiredUpLerpFactor; // 0x9ec(0x04)
	float CrashedLinearDrag; // 0x9f0(0x04)
	float LandedDragCoef; // 0x9f4(0x04)
	float LandedDragCoef2; // 0x9f8(0x04)
	float LandedMaxDragSpeed; // 0x9fc(0x04)
	float CrashedAngularDragMultiplier; // 0xa00(0x04)
	float BoostFOV; // 0xa04(0x04)
	float ExtraTraceInteractRange; // 0xa08(0x04)
	float AntiGravityMult; // 0xa0c(0x04)
	float InitialLiftDuration; // 0xa10(0x04)
	char pad_A14[0x4]; // 0xa14(0x04)
	struct FScalableFloat BatteryCostDuringFlight; // 0xa18(0x28)
	struct FScalableFloat BatteryRegenDelay; // 0xa40(0x28)
	struct FScalableFloat BatteryRegenTickRate; // 0xa68(0x28)
	struct FScalableFloat BatteryRegenAmount; // 0xa90(0x28)
	struct FScalableFloat MaxBattery; // 0xab8(0x28)
	struct FScalableFloat MinBatteryForFlight; // 0xae0(0x28)
	struct TArray<struct FName> CockpitShapeNames; // 0xb08(0x10)
	struct FScalableFloat CockpitDamageMult; // 0xb18(0x28)
	struct FScalableFloat CockpitHealth; // 0xb40(0x28)
};

// Class NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
// Size: 0x1e80 (Inherited: 0x1d90)
struct UFortPlayerAnimInstance_NevadaDriver : UFortPlayerAnimInstance_OctopusDriver {
	struct AFortNevadaVehicle* NevadaVehicle; // 0x1d90(0x08)
	float AnimLeftRight; // 0x1d98(0x04)
	float AnimForwardBackward; // 0x1d9c(0x04)
	struct FVector RootAttachmentLoc; // 0x1da0(0x0c)
	struct FRotator RootAttachmentRot; // 0x1dac(0x0c)
	int32_t BoostCount; // 0x1db8(0x04)
	int32_t PreviousBoostCount; // 0x1dbc(0x04)
	bool bIsBoostingAgain; // 0x1dc0(0x01)
	bool bIsMoving; // 0x1dc1(0x01)
	char pad_1DC2[0x2]; // 0x1dc2(0x02)
	float MinVehicleVelocityToBeMoving; // 0x1dc4(0x04)
	struct FName DriverSocketName; // 0x1dc8(0x08)
	struct FName RightHandAttachmentSocketName; // 0x1dd0(0x08)
	struct FName LeftHandAttachmentSocketName; // 0x1dd8(0x08)
	struct FName RightFootAttachmentSocketName; // 0x1de0(0x08)
	struct FName LeftFootAttachementSocketName; // 0x1de8(0x08)
	struct FRotator RightHandRotationOffset; // 0x1df0(0x0c)
	struct FRotator LeftHandRotationOffset; // 0x1dfc(0x0c)
	struct FRotator RightFootRotationOffset; // 0x1e08(0x0c)
	struct FRotator LeftFootRotationOffset; // 0x1e14(0x0c)
	struct FVector RootAttachmentOffset; // 0x1e20(0x0c)
	char pad_1E2C[0x54]; // 0x1e2c(0x54)
};

// Class NevadaRuntime.NevadaGlobals
// Size: 0x28 (Inherited: 0x28)
struct UNevadaGlobals : UObject {
};

