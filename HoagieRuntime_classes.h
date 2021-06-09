// Class HoagieRuntime.FortCameraMode_Hoagie
// Size: 0xe20 (Inherited: 0xde0)
struct UFortCameraMode_Hoagie : UFortCameraMode_AthenaVehicle {
	float CurrentRollMultiplier; // 0xdd8(0x04)
	float CurrentPitchMultiplier; // 0xddc(0x04)
	struct FVector LastOrigin; // 0xde0(0x0c)
	struct FVector CurrentInterpSpeed; // 0xdec(0x0c)
	struct FVector BoostInterpSpeed; // 0xdf8(0x0c)
	float BaseRollMultiplier; // 0xe04(0x04)
	float BasePitchMultiplier; // 0xe08(0x04)
	float BoostRollMultiplier; // 0xe0c(0x04)
	float BoostPitchMultiplier; // 0xe10(0x04)
	float BoostRollDampFactor; // 0xe14(0x04)
	float BoostRollRecoveryDampFactor; // 0xe18(0x04)
	float BoostRecoveryInterpSpeed; // 0xe1c(0x04)
};

// Class HoagieRuntime.FortHoagieAudioController
// Size: 0x270 (Inherited: 0x220)
struct AFortHoagieAudioController : AActor {
	bool bHighQualityOverride; // 0x220(0x01)
	bool bLocalPlayerInHoagie; // 0x221(0x01)
	bool bCriticalDamageNative; // 0x222(0x01)
	bool bRotorHitNative; // 0x223(0x01)
	bool bIsRotorWashActiveNative; // 0x224(0x01)
	char pad_225[0x3]; // 0x225(0x03)
	float RotorWashRelativeZOffset; // 0x228(0x04)
	struct TWeakObjectPtr<struct AFortHoagieVehicle> Vehicle; // 0x22c(0x08)
	char pad_234[0x4]; // 0x234(0x04)
	struct UFortLayeredAudioComponent* EngineAudio; // 0x238(0x08)
	struct UFortLayeredAudioComponent* RotorAudio; // 0x240(0x08)
	char pad_248[0x28]; // 0x248(0x28)

	void Update(); // Function HoagieRuntime.FortHoagieAudioController.Update // (Final|Native|Public|BlueprintCallable) // @ game+0x3cd35d4
	void CacheHoagieVehicle(struct AFortHoagieVehicle* InVehicle); // Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x3cd2efc
	void CacheAudioComponents(struct UFortLayeredAudioComponent* InEngine, struct UFortLayeredAudioComponent* InRotor); // Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x3cd2e0c
};

// Class HoagieRuntime.FortHoagieDriverAnimInstance
// Size: 0x6c0 (Inherited: 0x670)
struct UFortHoagieDriverAnimInstance : UFortVehicleOccupantAnimInstance {
	struct FVector LeftHandIKPositionOffset; // 0x668(0x0c)
	struct FVector RightHandIKPositionOffset; // 0x674(0x0c)
	struct FRotator LeftHandIKRotationOffset; // 0x680(0x0c)
	struct FRotator RightHandIKRotationOffset; // 0x68c(0x0c)
	enum class EFortCardinalDirection BoostCardinalDirection; // 0x698(0x01)
	float NormalizedAcceleration; // 0x69c(0x04)
	float VehicleRoll; // 0x6a0(0x04)
	float VehicleYaw; // 0x6a4(0x04)
	float ForwardSpeed; // 0x6a8(0x04)
	bool bIsMovingAnyDirection; // 0x6ac(0x01)
	bool bIsMovingFastAnyDirection; // 0x6ad(0x01)
	bool bShouldReverse; // 0x6ae(0x01)
	bool bShouldGoBackToIdle; // 0x6af(0x01)
	bool bTransition_Default_ReverseStart; // 0x6b0(0x01)
	bool bTransition_BoostLoop_Reverse; // 0x6b1(0x01)
	char pad_6B7[0x9]; // 0x6b7(0x09)
};

// Class HoagieRuntime.FortHoagieVehicle
// Size: 0x1670 (Inherited: 0x12a0)
struct AFortHoagieVehicle : AFortAthenaSKVehicle {
	struct FName PassengerCollision; // 0x1298(0x08)
	float CameraBoomDistance; // 0x12a0(0x04)
	float CameraBoomHeight; // 0x12a4(0x04)
	struct FMulticastInlineDelegate OnBoostStateChanged; // 0x12a8(0x10)
	struct FMulticastInlineDelegate OnAltimeterTraceUpdated; // 0x12b8(0x10)
	struct FMulticastInlineDelegate OnCrashingStateEntered; // 0x12c8(0x10)
	bool bEngineAudioDisabled; // 0x12d8(0x01)
	float LiftRumbleTimer; // 0x12dc(0x04)
	bool bLiftUp; // 0x12e0(0x01)
	char pad_12E6[0x2]; // 0x12e6(0x02)
	uint64_t LiftForceFeedbackHandle; // 0x12e8(0x08)
	uint64_t PassiveForceFeedbackHandle; // 0x12f0(0x08)
	float Theta_Native; // 0x12f8(0x04)
	float WashAltAlpha_Native; // 0x12fc(0x04)
	float RotorWashTickTimer; // 0x1300(0x04)
	char pad_1304[0x4]; // 0x1304(0x04)
	struct TArray<struct FVector> RotorTraceArray; // 0x1308(0x10)
	struct TArray<enum class EObjectTypeQuery> RotorWashObjectsTypes; // 0x1318(0x10)
	struct UFortHoagieVehicleConfigs* FortHoagieVehicleConfigs; // 0x1328(0x08)
	struct TArray<struct FVehicleSpecificUIDetails> CustomUI; // 0x1330(0x10)
	struct TArray<struct FVehicleSpecificUIDetails> CustomFuelUI; // 0x1340(0x10)
	struct UCurveFloat* RumbleIntensity; // 0x1350(0x08)
	struct TArray<struct FActiveVehicleUI> ActiveUI; // 0x1358(0x10)
	struct FFortHeliFlightModel FlightModel; // 0x1368(0x110)
	bool bClearPitchInput; // 0x1478(0x01)
	bool bBoosting; // 0x1479(0x01)
	char pad_147A[0x2]; // 0x147a(0x02)
	float BoostTimeLeft; // 0x147c(0x04)
	float BoostBrakingTimeLeft; // 0x1480(0x04)
	float BoostCooldown; // 0x1484(0x04)
	float ShutdownTimer; // 0x1488(0x04)
	float FoliageDestructionTimer; // 0x148c(0x04)
	float CrashingScrapingTimer; // 0x1490(0x04)
	float CrashingNotMovingTimer; // 0x1494(0x04)
	bool bCanSleep; // 0x1498(0x01)
	bool bHasAppliedCrashDamage; // 0x1499(0x01)
	bool bOrientedForLanding; // 0x149a(0x01)
	bool bForceNegativeLift; // 0x149b(0x01)
	bool bExploded; // 0x149c(0x01)
	char pad_149D[0x3]; // 0x149d(0x03)
	float AltimeterTraceTimer; // 0x14a0(0x04)
	float LastRotorImpulseTime; // 0x14a4(0x04)
	float CriticalExplodeTimer; // 0x14a8(0x04)
	float TimeWhileCritical; // 0x14ac(0x04)
	float TimeWhileLanding; // 0x14b0(0x04)
	float LiftFromOverrideButton; // 0x14b4(0x04)
	struct FVector BoostDirection; // 0x14b8(0x0c)
	struct FVector LastRotorSweepDirection; // 0x14c4(0x0c)
	struct FHitResult AltimeterTraceResult; // 0x14d0(0x88)
	int32_t HoagieStateRep; // 0x1558(0x04)
	enum class EHoagieState CurrentHoagieState; // 0x155c(0x04)
	float CurrentRotorSpeed; // 0x1560(0x04)
	float CurrentRotorAngle; // 0x1564(0x04)
	float RotorImpactTraceAngle; // 0x1568(0x04)
	struct FVehicleGamepadLiftInputs LiftInputs; // 0x156c(0x08)
	float ServerCriticalHealth; // 0x1574(0x04)
	struct TArray<struct FRotorHit> RotorHits; // 0x1578(0x10)
	struct TArray<struct FCachedSeatCollision> CachedSeatCollision; // 0x1588(0x10)
	struct UFortAthenaVehicleFuelComponent* FuelComponent; // 0x1598(0x08)
	struct FVector RotorHitLinearImpulse; // 0x15a0(0x0c)
	struct FVector RotorHitAngularImpulse; // 0x15ac(0x0c)
	enum class EVehicleFuelState VehicleFuelSystemState; // 0x15b8(0x01)
	char pad_15B9[0x7]; // 0x15b9(0x07)
	struct UNiagaraComponent* HoagieIdleFX_Native; // 0x15c0(0x08)
	struct UNiagaraComponent* DamageFX_Native; // 0x15c8(0x08)
	struct UNiagaraComponent* RotorWashFX_Native; // 0x15d0(0x08)
	struct UFortHoagieVehicleAnimInstance* HoagieAnimBP_Native; // 0x15d8(0x08)
	struct UFortHoagieVehicleConfigs* FortHoagieVehicleConfigsClass; // 0x15e0(0x08)
	struct UFortHoagieVehicleConfigs* FortHoagieVehicleSyncConfigsClass; // 0x15e8(0x08)
	struct FName AltimeterTraceSocketName; // 0x15f0(0x08)
	struct FName RotorDamageTraceSocketName; // 0x15f8(0x08)
	struct FName MainRotorCritSocketName; // 0x1600(0x08)
	struct FName TailRotorCritSocketName; // 0x1608(0x08)
	struct UAnimMontage* SeatTransition_ToDriver; // 0x1610(0x08)
	struct UAnimMontage* SeatTransition_ToPassenger; // 0x1618(0x08)
	struct FName RotorTraceProfile; // 0x1620(0x08)
	struct FName FoliageOverlapsBoxTag; // 0x1628(0x08)
	struct TWeakObjectPtr<struct AController> KillerController; // 0x1630(0x08)
	struct TWeakObjectPtr<struct AActor> KillerCauser; // 0x1638(0x08)
	struct FReplicatedHeliControlState ControlState; // 0x1640(0x18)
	float CurrentViewDistanceScale; // 0x1658(0x04)
	float CurrentHLODDistanceOverrideScale; // 0x165c(0x04)
	float CurrentHLODMaxDrawDistanceScale; // 0x1660(0x04)
	char pad_1664[0xc]; // 0x1664(0x0c)

	void UpdateHoagieAnimBP(); // Function HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x3cd3688
	void UpdateDamageStateNative(float Damage); // Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative // (Final|Native|Protected|BlueprintCallable) // @ game+0x3cd35e8
	void ShowCooldownCue(struct AFortPlayerPawn* Pawn, float Duration); // Function HoagieRuntime.FortHoagieVehicle.ShowCooldownCue // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetTailRotorRotation(float Degrees); // Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetRotorWashActive(bool bActive); // Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetMainRotorRotation(float Degrees); // Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ServerUpdateControlState(struct FReplicatedHeliControlState InControlState); // Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState // (Final|Net|Native|Event|Private|NetServer) // @ game+0x3cd3524
	void OnTickRotors(float RotorAngleDegrees); // Function HoagieRuntime.FortHoagieVehicle.OnTickRotors // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartupEnd(); // Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartupBegin(); // Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartCriticalHealth(); // Function HoagieRuntime.FortHoagieVehicle.OnStartCriticalHealth // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRotorsStop(); // Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRotorDamagePlayer(struct FHitResult Impact); // Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRotorDamageDealtOuter(struct FHitResult Impact); // Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRotorDamageDealtInner(struct FHitResult Impact); // Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRotorDamageDealt(struct FHitResult Impact, bool bInner); // Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRep_VehicleFuelSystemState(); // Function HoagieRuntime.FortHoagieVehicle.OnRep_VehicleFuelSystemState // (Final|Native|Protected) // @ game+0x3cd3510
	void OnRep_HoagieState(); // Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState // (Final|Native|Protected) // @ game+0x3cd34fc
	void OnRep_ControlState(); // Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState // (Final|Native|Private) // @ game+0x203d3e0
	void OnRefueledFromEmpty(); // Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty // (Final|Native|Protected) // @ game+0x3cd34e8
	void OnImpactWhileCritical(); // Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnImpactOtherHoagie(struct FVector HitLocation, struct FVector NormalImpulse); // Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xda7c34
	void OnExplode(); // Function HoagieRuntime.FortHoagieVehicle.OnExplode // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCritRotor(float Damage, struct FVector ImpactLocation, struct AController* DamageInstigator, struct AActor* DamageCauser, bool bMainRotor); // Function HoagieRuntime.FortHoagieVehicle.OnCritRotor // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xda7c34
	void OnBoostStarted(); // Function HoagieRuntime.FortHoagieVehicle.OnBoostStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBoostReady(); // Function HoagieRuntime.FortHoagieVehicle.OnBoostReady // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBoostFinished(); // Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBoostFailed(); // Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void MulticastRotorImpulse(struct FHitResult RotorHit); // Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse // (Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable) // @ game+0x3cd3428
	bool IsStartingUp(); // Function HoagieRuntime.FortHoagieVehicle.IsStartingUp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd340c
	bool IsShuttingDown(); // Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd33ec
	bool IsScrapingBottom(); // Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd33c8
	float GetVerticalSpeedKmh(); // Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd33a0
	struct FVector GetThrustDirection(bool bWorldSpace); // Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd32e4
	float GetStrafeAlpha(); // Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd30c4
	float GetSteerAlpha(); // Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd32b8
	float GetShutdownTimeLeft(); // Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd32a0
	float GetRotorSpeedPercent(); // Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd3280
	float GetRotorSpeed(); // Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd3268
	struct FVector GetRotorCenterPosition(); // Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd3234
	float GetRotorAngleDegrees(); // Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd321c
	float GetMaxBoostCooldown(); // Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd31fc
	float GetMaxAltitude(); // Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd31dc
	float GetLiftAlpha(); // Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd31b0
	struct AController* GetKillerController(); // Function HoagieRuntime.FortHoagieVehicle.GetKillerController // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd3134
	bool GetIsEngineOn(); // Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd3114
	bool GetIsCriticalHealth(); // Function HoagieRuntime.FortHoagieVehicle.GetIsCriticalHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd30f0
	float GetForwardAlpha(); // Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd30c4
	float GetDistanceToGround(); // Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd30ac
	float GetBoostTimeLeft(); // Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd3094
	float GetBoostDuration(); // Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd3074
	struct FVector GetBoostDirection(); // Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd304c
	float GetBoostCooldown(); // Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd3034
	float GetAltitude(); // Function HoagieRuntime.FortHoagieVehicle.GetAltitude // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3cd301c
};

// Class HoagieRuntime.FortHoagieVehicleAnimInstance
// Size: 0x570 (Inherited: 0x440)
struct UFortHoagieVehicleAnimInstance : UFortVehicleAnimInstance {
	char pad_440[0x98]; // 0x440(0x98)
	struct FRotator EngineRotation; // 0x4d8(0x0c)
	struct FRotator MainRotorRotation; // 0x4e4(0x0c)
	struct FRotator TailRotorRotaton; // 0x4f0(0x0c)
	struct FRotator BoosterFanRotation; // 0x4fc(0x0c)
	enum class EFortCardinalDirection BoostCardinalDirection; // 0x508(0x01)
	char pad_509[0x1b]; // 0x509(0x1b)
	float EngineRotationInterpSpeed; // 0x524(0x04)
	float EngineRotationDuringBoostInterpSpeed; // 0x528(0x04)
	float EngineFlipSpeedThreshold; // 0x52c(0x04)
	float BoostDirectionDeadzone; // 0x530(0x04)
	float EngineFlipDeadzone; // 0x534(0x04)
	float DriverRoll; // 0x538(0x04)
	float DriverYaw; // 0x53c(0x04)
	float VerticalSpeed; // 0x540(0x04)
	float FwdSpeed; // 0x544(0x04)
	float LocalBoostDirection; // 0x548(0x04)
	float YawBlendSpaceInput; // 0x54c(0x04)
	float NormalizedAcceleration; // 0x550(0x04)
	char pad_554[0x1]; // 0x554(0x01)
	bool bShouldHideBlades; // 0x555(0x01)
	bool bIsBoostOnCD; // 0x556(0x01)
	bool bIsBoostReady; // 0x557(0x01)
	bool bIsMovingForward; // 0x558(0x01)
	bool bIsReversing; // 0x559(0x01)
	bool bIsMovingAnyDirection; // 0x55a(0x01)
	bool bIsBoosting; // 0x55b(0x01)
	bool bShouldReverse; // 0x55c(0x01)
	bool bShouldGoBackToIdle; // 0x55d(0x01)
	bool bShouldApplyBoostAdditive; // 0x55e(0x01)
	bool bIsEngineShuttingOff; // 0x55f(0x01)
	bool bTransition_Default_ReverseStart; // 0x560(0x01)
	bool bTransition_BoostLoop_Reverse; // 0x561(0x01)
	char pad_562[0xe]; // 0x562(0x0e)
};

// Class HoagieRuntime.FortHoagieVehicleConfigs
// Size: 0x8d8 (Inherited: 0x6d0)
struct UFortHoagieVehicleConfigs : UFortPhysicsVehicleConfigs {
	float StrafeForce; // 0x6d0(0x04)
	float StrafeForceMin; // 0x6d4(0x04)
	float MaxStrafeSpeedKmh; // 0x6d8(0x04)
	float StrafeTooFastBrakeForce; // 0x6dc(0x04)
	float LandedBrakeForce; // 0x6e0(0x04)
	float LiftForce; // 0x6e4(0x04)
	float MaxLiftSpeedKmh; // 0x6e8(0x04)
	float LiftTooFastBrakeForce; // 0x6ec(0x04)
	float LateralDragCoefficient; // 0x6f0(0x04)
	float LateralDragCoefficient2; // 0x6f4(0x04)
	float LiftDragCoefficient; // 0x6f8(0x04)
	float LiftDragCoefficient2; // 0x6fc(0x04)
	float MaxPitchForCameraYaw; // 0x700(0x04)
	float MaxCameraYawAngle; // 0x704(0x04)
	float CameraYawStiff; // 0x708(0x04)
	float CameraYawDamp; // 0x70c(0x04)
	float CameraYawStrength; // 0x710(0x04)
	float UprightStiff; // 0x714(0x04)
	float UprightDamp; // 0x718(0x04)
	bool bUseVehiclePivotForCameraPitch; // 0x71c(0x01)
	char pad_71D[0x3]; // 0x71d(0x03)
	float ThrustTorqueAnglePercent; // 0x720(0x04)
	float BoostThrustTorqueAnglePercent; // 0x724(0x04)
	float ThrustTorqueStiff; // 0x728(0x04)
	float ThrustTorqueDamp; // 0x72c(0x04)
	float ThrustTorqueMaxAccel; // 0x730(0x04)
	float ThrustTorque; // 0x734(0x04)
	float YawTorque; // 0x738(0x04)
	float YawTorqueDampingSpeed; // 0x73c(0x04)
	float BoostForce; // 0x740(0x04)
	float BoostMaxSpeedKmh; // 0x744(0x04)
	float BoostDuration; // 0x748(0x04)
	float BoostCooldown; // 0x74c(0x04)
	float BoostTorqueStiff; // 0x750(0x04)
	float BoostTorqueDamp; // 0x754(0x04)
	float AfterBoostBrakingForce; // 0x758(0x04)
	float AfterBoostBrakingDuration; // 0x75c(0x04)
	float AfterBoostBrakingMinSpeed; // 0x760(0x04)
	float PitchAngleRequiredForFullThrust; // 0x764(0x04)
	float DistanceToGroundForLanding; // 0x768(0x04)
	float StartupDelay; // 0x76c(0x04)
	float LandingSequenceDelay; // 0x770(0x04)
	float RotorsRadius; // 0x774(0x04)
	float RotorsRadiusInner; // 0x778(0x04)
	float NoDriverBrakeForce; // 0x77c(0x04)
	float TimeBetweenRotorDamageTicks; // 0x780(0x04)
	float AutoLandingForce; // 0x784(0x04)
	float RotorDamageBoxSweepLength; // 0x788(0x04)
	float CriticalStateLiftForce; // 0x78c(0x04)
	float IdleRotationMultiplier; // 0x790(0x04)
	float LiftPitchDegrees; // 0x794(0x04)
	float MinAltitudeForIdleNoise; // 0x798(0x04)
	float DefaultLinearDamp; // 0x79c(0x04)
	float DefaultAngularDamp; // 0x7a0(0x04)
	float LandingLinearDamp; // 0x7a4(0x04)
	float LandingAngularDamp; // 0x7a8(0x04)
	float LandingLiftAlpha; // 0x7ac(0x04)
	float CriticalStateThrustMultiplier; // 0x7b0(0x04)
	float BodyUpDotThresholdForLanding; // 0x7b4(0x04)
	int32_t CriticalHealthThreshold; // 0x7b8(0x04)
	float DamagePerImpulseWhileCritical; // 0x7bc(0x04)
	float RotorImpulseLinear; // 0x7c0(0x04)
	float RotorImpulseAngular; // 0x7c4(0x04)
	float RotorImpulseCooldown; // 0x7c8(0x04)
	float StartupLift; // 0x7cc(0x04)
	float StartupLiftTime; // 0x7d0(0x04)
	float MaxAltitude; // 0x7d4(0x04)
	float AltitudeForSpinning; // 0x7d8(0x04)
	float RotorMaxSpeed; // 0x7dc(0x04)
	float RotorAccel; // 0x7e0(0x04)
	float RotorDecel; // 0x7e4(0x04)
	float MinRotorSpeedForSkippingStartup; // 0x7e8(0x04)
	float RotorSpeedForStartupLift; // 0x7ec(0x04)
	float CriticalLiftForceDecay; // 0x7f0(0x04)
	float CriticalYawTorqueMin; // 0x7f4(0x04)
	float CriticalYawTorqueMax; // 0x7f8(0x04)
	float CriticalYawTorqueRampDuration; // 0x7fc(0x04)
	float RotorTraceRotationSpeed; // 0x800(0x04)
	float RotorTraceBoxSize; // 0x804(0x04)
	float RotorTraceBoxHeight; // 0x808(0x04)
	float MaxCriticalFallForce; // 0x80c(0x04)
	float BoostFOV; // 0x810(0x04)
	float GentleCrashTimeToExplode; // 0x814(0x04)
	float CriticalTimeForGentleCrash; // 0x818(0x04)
	float AutoLandingYawTorque; // 0x81c(0x04)
	float MinHeightForAutoLandingYawTorque; // 0x820(0x04)
	float MinSpeedForScrapingBottom; // 0x824(0x04)
	float CriticalHealth; // 0x828(0x04)
	float FallDamageHeightBuffer; // 0x82c(0x04)
	float TimeBetweenRotorPlayerDamage; // 0x830(0x04)
	float RotorMoveSpeedRequiredToUpdateTraceDirSqr; // 0x834(0x04)
	float FoliageTraceRate; // 0x838(0x04)
	float RotorWashTicksPerFrame; // 0x83c(0x04)
	float CriticalHitRadius; // 0x840(0x04)
	float AngleNormalUpForLockMovement; // 0x844(0x04)
	float MaxAutoLandingTime; // 0x848(0x04)
	float SpeedThresholdForCrashed; // 0x84c(0x04)
	float CritMultiplier; // 0x850(0x04)
	float AltitudeForSprings; // 0x854(0x04)
	float MaxCrashingTime; // 0x858(0x04)
	float MaxCrashingScrapingTime; // 0x85c(0x04)
	float MaxCrashingTimeSpentNotMoving; // 0x860(0x04)
	float LandscapeRotorImpulseMag; // 0x864(0x04)
	float HealthThresholdForLandscapeRotorImpulse; // 0x868(0x04)
	float MaxHeightBuffer; // 0x86c(0x04)
	bool bImpulseOnOuterRotorHitLandscape; // 0x870(0x01)
	bool bSkipRotorImpulses; // 0x871(0x01)
	bool bEnableCVarScaling; // 0x872(0x01)
	char pad_873[0x1]; // 0x873(0x01)
	float CVarScalingInterp; // 0x874(0x04)
	struct FVector FoliageTraceBoxSize; // 0x878(0x0c)
	struct FVector WaterBoxSize; // 0x884(0x0c)
	struct FVector WaterBoxOffset; // 0x890(0x0c)
	struct FVector RotorOffsetFromActorLocationOnServer; // 0x89c(0x0c)
	bool bSkipContactRotations; // 0x8a8(0x01)
	char pad_8A9[0x7]; // 0x8a9(0x07)
	struct FScalableFloat MaxAutoLandHeightWhenOutOfFuel; // 0x8b0(0x28)
};

