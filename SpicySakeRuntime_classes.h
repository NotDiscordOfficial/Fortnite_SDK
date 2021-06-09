// Class SpicySakeRuntime.FortSpicySakeComponent_Telemetry
// Size: 0x108 (Inherited: 0x108)
struct UFortSpicySakeComponent_Telemetry : UFortAIComponent_Telemetry {
};

// Class SpicySakeRuntime.FortSpicySakeGameplayCueNotifyLoop_Alive
// Size: 0x810 (Inherited: 0x7d0)
struct AFortSpicySakeGameplayCueNotifyLoop_Alive : AFortGameplayCueNotify_Loop {
	struct UFXSystemComponent* WaterFX_Native; // 0x7d0(0x08)
	struct UFXSystemComponent* LandFX_Native; // 0x7d8(0x08)
	struct UFortLayeredAudioComponent* FortLayerAudio_Native; // 0x7e0(0x08)
	struct AFortAIPawn* TargetAIPawn_Native; // 0x7e8(0x08)
	bool bComputeWaterDepth; // 0x7f0(0x01)
	char pad_7F1[0x3]; // 0x7f1(0x03)
	float TetheredVolumeMultiplier; // 0x7f4(0x04)
	float SoundSurfaceTypeCount; // 0x7f8(0x04)
	float VelocityClampingMinimum; // 0x7fc(0x04)
	float VelocityClampingMaximum; // 0x800(0x04)
	char pad_804[0xc]; // 0x804(0x0c)
};

// Class SpicySakeRuntime.FortSpicySakeOccupantAnimInstanceLayer
// Size: 0x380 (Inherited: 0x360)
struct UFortSpicySakeOccupantAnimInstanceLayer : UFortBaseLayerAnimInstance {
	float GroundIdleThreshold; // 0x358(0x04)
	float GroundIdleLowThreshold; // 0x35c(0x04)
	float LocalVelocityYawAngleTurnResetThreshold; // 0x360(0x04)
	float LocalVelocityYawAngleTurnTransitionThreshold; // 0x364(0x04)
	float LocalVelocityYawAngle; // 0x368(0x04)
	float PawnSpeed2D; // 0x36c(0x04)
	float PawnVelocityZ; // 0x370(0x04)
	char bIsFemale : 1; // 0x374(0x01)
	char bIsOnGround : 1; // 0x374(0x01)
	char bIsOnWater : 1; // 0x374(0x01)
	char bLandingPredicted : 1; // 0x374(0x01)
	char bTransition_NewFallAditive_NewFallLandAdditive : 1; // 0x374(0x01)
	char bTransitionNewJumpLoopAdditiveToNewFallAdditive : 1; // 0x374(0x01)
	char bShouldApplyIdleAdditive : 1; // 0x374(0x01)
	char bIsTargeting : 1; // 0x374(0x01)
	char bIsPlayerCloseToShark : 1; // 0x375(0x01)
	char bIsBoosting : 1; // 0x375(0x01)
	char bCanTurnLeft : 1; // 0x375(0x01)
	char bCanTurnRight : 1; // 0x375(0x01)
	char bTransition_RideLoop_TurnLeft : 1; // 0x375(0x01)
	char bTransition_RideLoop_TurnRight : 1; // 0x375(0x01)
	char bIsReloading : 1; // 0x375(0x01)
	char bIsPlayingMeleeAnim : 1; // 0x375(0x01)
	char bIsPlayingEmote : 1; // 0x376(0x01)
	char bShouldPlayOnGroundIdle : 1; // 0x376(0x01)
	char bShouldPlayOnGroundIdleLow : 1; // 0x376(0x01)
	char bIsJumping : 1; // 0x376(0x01)
	char bCanUseTargettingStateMachine : 1; // 0x376(0x01)
	char bTransition_SharRideLoop_To_JumpUp : 1; // 0x376(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
};

// Class SpicySakeRuntime.FortSpicySakeVehicleAnimInstance
// Size: 0x380 (Inherited: 0x350)
struct UFortSpicySakeVehicleAnimInstance : UFortBaseAnimInstance {
	struct FRotator OnGroundSlopeRotOffset; // 0x350(0x0c)
	float LocalVelocityYawAngle; // 0x35c(0x04)
	float ForwardSpeed; // 0x360(0x04)
	float UpSpeed; // 0x364(0x04)
	float SmoothJumpPitch; // 0x368(0x04)
	float SmoothJumpPitchDeltaRate; // 0x36c(0x04)
	float CurrentBoostRateScale; // 0x370(0x04)
	char bIsJumping : 1; // 0x374(0x01)
	char bIsSurfaceSwimming : 1; // 0x374(0x01)
	char bIsOnGround : 1; // 0x374(0x01)
	char bIsFalling : 1; // 0x374(0x01)
	char bIsCharging : 1; // 0x374(0x01)
	char bOnGroundNotMoving : 1; // 0x374(0x01)
	char bLanded : 1; // 0x374(0x01)
	char bIsBoosting : 1; // 0x374(0x01)
	char bStartBoosting : 1; // 0x375(0x01)
	char bTransition_Idle_To_Boost : 1; // 0x375(0x01)
	char bTransition_Boost_To_Idle : 1; // 0x375(0x01)
	char pad_375_3 : 5; // 0x375(0x01)
	char pad_376[0xa]; // 0x376(0x0a)
};

