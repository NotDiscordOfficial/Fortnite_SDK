// Class IrwinRuntime.FortAIFaunaAnimInstance
// Size: 0x490 (Inherited: 0x450)
struct UFortAIFaunaAnimInstance : UFortAIAnimInstance {
	float AverageSpeed; // 0x448(0x04)
	float AverageSpeedTimeFrame; // 0x44c(0x04)
	bool bHasValidAimTarget; // 0x450(0x01)
	struct FVector AimTargetLocation; // 0x454(0x0c)
	bool bIsSurfaceSwimming; // 0x460(0x01)
	bool bIsMovingOnGround; // 0x461(0x01)
	float LookAtAlpha; // 0x464(0x04)
	float MaxDistanceToPlayerForLookAt; // 0x468(0x04)
	float LookAtTooFarFromPlayerTimeOut; // 0x46c(0x04)
	bool bDisableLookAtDuringMontage; // 0x470(0x01)
	struct FName DisableHeadTrackingCurveName; // 0x474(0x08)
	char pad_47C[0x14]; // 0x47c(0x14)

	void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds); // Function IrwinRuntime.FortAIFaunaAnimInstance.CalculateLookAtAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x1f1fa14
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Burt
// Size: 0x4f0 (Inherited: 0x490)
struct UFortAIFaunaAnimInstance_Burt : UFortAIFaunaAnimInstance {
	float MovingPlayRate; // 0x488(0x04)
	float LocomotionPoseAdditiveAlpha; // 0x48c(0x04)
	bool bEnableHeadTiltUpAdditive; // 0x490(0x01)
	bool bTurnAngleIsNegative; // 0x491(0x01)
	struct FName DisableLocomotionAdditiveCurveName; // 0x494(0x08)
	struct FName InterruptibleCurveName; // 0x49c(0x08)
	bool bCanTransitionIdleToApex; // 0x4a4(0x01)
	bool bCanTransitionIdleToMoving; // 0x4a5(0x01)
	bool bCanTransitionMovingToIdle; // 0x4a6(0x01)
	bool bCanTransitionLandToIdle; // 0x4a7(0x01)
	bool bCanTransitionLandToJumpStart; // 0x4a8(0x01)
	bool bCanTransitionJumpStartToApex; // 0x4a9(0x01)
	bool bCanTransitionApexToFall; // 0x4aa(0x01)
	bool bCanTransitionFallToLand; // 0x4ab(0x01)
	bool bCanTransitionIdleTurnToIdle; // 0x4ac(0x01)
	bool bCanTransitionLocomotionTurnToIdle; // 0x4ad(0x01)
	bool bCanTransitionLocomotionTurnToMoving; // 0x4ae(0x01)
	bool bCanTransitionIdleTurnToMoving; // 0x4af(0x01)
	float MovingPlayRate_SpeedThreshold; // 0x4b0(0x04)
	float MovingPlayRate_SlowSpeedDivisor; // 0x4b4(0x04)
	float MovingPlayRate_FastSpeedDivisor; // 0x4b8(0x04)
	float MovingPlayRate_MinClamp; // 0x4bc(0x04)
	float MovingPlayRate_MaxClamp; // 0x4c0(0x04)
	float MovingPlayRate_InterpSpeed; // 0x4c4(0x04)
	float LocomotionPoseAdditiveAlpha_InterpSpeed; // 0x4c8(0x04)
	float EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier; // 0x4cc(0x04)
	float EnableHeadTiltUpAdditive_ModOperand; // 0x4d0(0x04)
	float InterruptibleCurveValue_LargeThreshold; // 0x4d4(0x04)
	float InterruptibleCurveValue_TurnAngleThreshold; // 0x4d8(0x04)
	float Speed_MovingThreshold; // 0x4dc(0x04)
	float Speed_IdleThreshold; // 0x4e0(0x04)
	float TurnAngle_LargeThreshold; // 0x4e4(0x04)
	char pad_4EE[0x2]; // 0x4ee(0x02)
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Grandma
// Size: 0x510 (Inherited: 0x490)
struct UFortAIFaunaAnimInstance_Grandma : UFortAIFaunaAnimInstance {
	struct AFortAIPawn* AIPawn; // 0x488(0x08)
	float MeshScale; // 0x490(0x04)
	bool bShouldPlayFullBodyInPlace; // 0x494(0x01)
	float BlinkAlpha; // 0x498(0x04)
	float WalkRunPlayRate; // 0x49c(0x04)
	float LocomotionPoseAdditiveAlpha; // 0x4a0(0x04)
	bool bEnableSniffAdditive; // 0x4a4(0x01)
	bool bEnableAlertAdditive; // 0x4a5(0x01)
	bool bIdleStartTurn; // 0x4a6(0x01)
	float MaxSpeedFullBodyInPlace; // 0x4a8(0x04)
	float MinCurveValueFullBodyInPlace; // 0x4ac(0x04)
	float LocomotionPoseAdditiveAlphaInterpRate; // 0x4b0(0x04)
	int32_t SniffAdditiveFrequenceySeconds; // 0x4b4(0x04)
	int32_t AlertAdditiveFrequenceySeconds; // 0x4b8(0x04)
	int32_t PawnIDScale; // 0x4bc(0x04)
	struct FName ShouldPlayFullBodyInPlaceCurveName; // 0x4c0(0x08)
	struct FName BlinkAlphaCurveName; // 0x4c8(0x08)
	float IdleStartTurnInterruptibleThreshold; // 0x4d0(0x04)
	bool bIsMovingOnGroundORIsSurfaceSwimming; // 0x4d4(0x01)
	bool bStateRule_DefaultJump_ToJumpApex; // 0x4d5(0x01)
	bool bStateRule_TurnIdle_Idle; // 0x4d6(0x01)
	bool bStateRule_TurnIdle_Moving; // 0x4d7(0x01)
	bool bStateRule_Moving_TurnIdle; // 0x4d8(0x01)
	bool bStateRule_TurnMoving_Moving; // 0x4d9(0x01)
	bool bStateRule_Moving_TurnMoving; // 0x4da(0x01)
	bool bStateRule_Idle_Moving; // 0x4db(0x01)
	bool bStateRule_Moving_Idle; // 0x4dc(0x01)
	bool bStateRule_JumpLand_Idle; // 0x4dd(0x01)
	bool bStateRule_JumpLand_Moving; // 0x4de(0x01)
	bool bStateRule_JumpStart_JumpApex; // 0x4df(0x01)
	bool bStateRule_SwimIdle_SwimLoco; // 0x4e0(0x01)
	bool bStateRule_SwimLoco_SwimIdle; // 0x4e1(0x01)
	bool bStateRule_SwimTurn_SwimIdle; // 0x4e2(0x01)
	bool bStateRule_SwimTurn_SwimLoco; // 0x4e3(0x01)
	bool bAnimRule_NegativeTurnAngle; // 0x4e4(0x01)
	float InterruptibleMaxCheck; // 0x4e8(0x04)
	float SpeedStopTransition; // 0x4ec(0x04)
	float SpeedIdleMoveTransition; // 0x4f0(0x04)
	float SpeedMovingTurnIdleTransition; // 0x4f4(0x04)
	float SpeedToMoveMin; // 0x4f8(0x04)
	float StateTimeFromEndThreshold; // 0x4fc(0x04)
	float SpeedIdleStartTurnThreshold; // 0x500(0x04)
	char pad_505[0xb]; // 0x505(0x0b)

	void UpdateStateVariables(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9ec58
	void UpdateShouldPlayFullBodyInPlace(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9ec30
	void UpdateMovingRates(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9ec08
	void UpdateMeshScale(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9ebe4
	void UpdateLocomotionPoseAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9ebb8
	void UpdateIdleStartTurn(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9eb14
	void UpdateEnableSniffAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9eaf0
	void UpdateEnableAlertAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9eaa8
	void UpdateBlinkAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9ea7c
	bool DetermineShouldPlayFullBodyInPlace(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9ea58
	bool DetermineIdleStartTurn(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9e9ec
	bool DetermineEnableSniffAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9e9cc
	bool DetermineEnableAlertAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9e98c
	float CalculateWalkRunPlayRate(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9e968
	float CalculateMeshScale(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9e948
	float CalculateLocomotionPoseAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9e920
	float CalculateBlinkAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9e8d0
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Nug
// Size: 0x4f0 (Inherited: 0x490)
struct UFortAIFaunaAnimInstance_Nug : UFortAIFaunaAnimInstance {
	bool bIsBeingHeld; // 0x488(0x01)
	float LowerBodyMaskAlpha; // 0x48c(0x04)
	bool bShouldExitJump; // 0x490(0x01)
	float MovingPlayRate; // 0x494(0x04)
	bool bShouldLean; // 0x498(0x01)
	char pad_49B[0x1]; // 0x49b(0x01)
	float LeanDirection; // 0x49c(0x04)
	bool bTurnAngleIsNegative; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	struct FName InterruptibleCurveName; // 0x4a4(0x08)
	bool bCanTransitionIdleToIdleTurn; // 0x4ac(0x01)
	bool bCanTransitionIdleToLocomotionTurn; // 0x4ad(0x01)
	bool bCanTransitionIdleToMoving; // 0x4ae(0x01)
	bool bCanTransitionIdleToJumpApex; // 0x4af(0x01)
	bool bCanTransitionMovingToIdle; // 0x4b0(0x01)
	bool bCanTransitionJumpStartToJumpApex; // 0x4b1(0x01)
	bool bCanTransitionJumpApexToJumpLoop; // 0x4b2(0x01)
	bool bCanTransitionLocomotionTurnToIdle; // 0x4b3(0x01)
	bool bCanTransitionLocomotionTurnToMoving; // 0x4b4(0x01)
	bool bCanTransitionIdleTurnToMoving; // 0x4b5(0x01)
	bool bCanTransitionIdleTurnToIdle; // 0x4b6(0x01)
	char pad_4B7[0x1]; // 0x4b7(0x01)
	float ShouldExitJump_SpeedThreshold; // 0x4b8(0x04)
	float MovingPlayRate_SpeedThreshold; // 0x4bc(0x04)
	float MovingPlayRate_SlowSpeedDivisor; // 0x4c0(0x04)
	float MovingPlayRate_FastSpeedDivisor; // 0x4c4(0x04)
	float MovingPlayRate_InterpSpeed; // 0x4c8(0x04)
	float MovingPlayRate_MinClamp; // 0x4cc(0x04)
	float MovingPlayRate_MaxClamp; // 0x4d0(0x04)
	float LeanDirection_SpeedThreshold; // 0x4d4(0x04)
	float ShouldLean_SpeedThreshold; // 0x4d8(0x04)
	float InterruptibleCurveValue_LargeThreshold; // 0x4dc(0x04)
	float Speed_MovingThreshold; // 0x4e0(0x04)
	float Speed_IdleThreshold; // 0x4e4(0x04)
	float IdleTurnTransition_SpeedThreshold; // 0x4e8(0x04)
	float LocomotionTurnTransition_SpeedThreshold; // 0x4ec(0x04)
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Robert
// Size: 0x4e0 (Inherited: 0x490)
struct UFortAIFaunaAnimInstance_Robert : UFortAIFaunaAnimInstance {
	struct AFortAIPawn* AIPawn; // 0x490(0x08)
	bool bIdleStartTurn; // 0x498(0x01)
	bool bEnableHeadTiltDownAdditive; // 0x499(0x01)
	bool bIsFullBodyInPlace; // 0x49a(0x01)
	char pad_49B[0x1]; // 0x49b(0x01)
	float LocomotionPoseAdditiveAlpha; // 0x49c(0x04)
	int32_t PawnIDScale; // 0x4a0(0x04)
	int32_t HeadTiltDownAdditiveFrequenceySeconds; // 0x4a4(0x04)
	float ForceFullBodyTransition; // 0x4a8(0x04)
	float LocomotionPoseAdditiveAlphaInterpRate; // 0x4ac(0x04)
	float IdleStartTurnInterruptibleThreshold; // 0x4b0(0x04)
	bool bStateRule_TurnIdle_Idle; // 0x4b4(0x01)
	bool bStateRule_Idle_TurnIdle; // 0x4b5(0x01)
	bool bStateRule_TurnIdle_Moving; // 0x4b6(0x01)
	bool bStateRule_TurnMoving_TurnIdle; // 0x4b7(0x01)
	bool bStateRule_Idle_Moving; // 0x4b8(0x01)
	bool bStateRule_Moving_Idle; // 0x4b9(0x01)
	bool bStateRule_TurnMoving_Moving; // 0x4ba(0x01)
	bool bStateRule_Moving_TurnMoving; // 0x4bb(0x01)
	bool bStateRule_Swimming_Fall; // 0x4bc(0x01)
	bool bStateRule_Land_Idle; // 0x4bd(0x01)
	bool bStateRule_JumpStart_Apex; // 0x4be(0x01)
	bool bStateRule_SwimIdle_SwimLoco; // 0x4bf(0x01)
	bool bStateRule_SwimLoco_SwimIdle; // 0x4c0(0x01)
	bool bStateRule_SwimTurn_SwimIdle; // 0x4c1(0x01)
	bool bStateRule_SwimTurn_SwimLoco; // 0x4c2(0x01)
	bool bAnimRule_NegativeTurnAngle; // 0x4c3(0x01)
	float InterruptibleMaxCheck; // 0x4c4(0x04)
	float SpeedStopTransition; // 0x4c8(0x04)
	float SpeedIdleMoveTransition; // 0x4cc(0x04)
	float SpeedToMoveMin; // 0x4d0(0x04)
	float StateTimeFromEndThreshold; // 0x4d4(0x04)
	char pad_4D8[0x8]; // 0x4d8(0x08)

	void UpdateStateVariables(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9ec6c
	void UpdateLocomotionPoseAdditiveAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9eb8c
	void UpdateIsFullBodyInPlace(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9eb64
	void UpdateIdleStartTurn(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9eb3c
	void UpdateEnableHeadTiltDownAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive // (Final|Native|Public|BlueprintCallable) // @ game+0x3d9eacc
	bool DetermineIsFullBodyInPlace(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9ea34
	bool DetermineIdleStartTurn(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9ea10
	bool DetermineEnableHeadTiltDownAdditive(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9e9ac
	float CalculateLocomotionPoseAdditiveAlpha(); // Function IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3d9e8f8
};

// Class IrwinRuntime.FortAIFaunaAnimInstance_Smackie
// Size: 0x490 (Inherited: 0x490)
struct UFortAIFaunaAnimInstance_Smackie : UFortAIFaunaAnimInstance {
	float SpeedThreshold; // 0x488(0x04)
	bool bCanTransitionIdleToHop; // 0x48c(0x01)
	bool bCanTransitionHopToIdle; // 0x48d(0x01)
};

// Class IrwinRuntime.FortAIFaunaLayerAnimInstance
// Size: 0x360 (Inherited: 0x360)
struct UFortAIFaunaLayerAnimInstance : UFortBaseLayerAnimInstance {
	struct UAnimInstance* MainAnimBP; // 0x358(0x08)
};

