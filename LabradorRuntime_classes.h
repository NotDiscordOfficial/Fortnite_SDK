// Class LabradorRuntime.FortAIFaunaAnimInstance_Labrador
// Size: 0x4e0 (Inherited: 0x490)
struct UFortAIFaunaAnimInstance_Labrador : UFortAIFaunaAnimInstance {
	bool bHighVelocity; // 0x488(0x01)
	bool bIsInterruptible; // 0x489(0x01)
	bool bLocoToIdle; // 0x48a(0x01)
	bool bIdleToLoco; // 0x48b(0x01)
	bool bJumpStartToJumpLoop; // 0x48c(0x01)
	bool bJumpLandToMovement; // 0x48d(0x01)
	bool bIsRunning; // 0x48e(0x01)
	bool bIdleToFalling; // 0x48f(0x01)
	bool bToppledOnGround; // 0x490(0x01)
	bool bTransitionToLand; // 0x491(0x01)
	float TargetDistance; // 0x494(0x04)
	bool bTargetIsClose; // 0x498(0x01)
	bool bIsInTractorBeam; // 0x499(0x01)
	bool bIsFloating; // 0x49a(0x01)
	bool bIsToppled; // 0x49b(0x01)
	bool bIsLeaking; // 0x49c(0x01)
	float MinHighVelocityMagnitude; // 0x4a0(0x04)
	float MaxInterruptibleCurveValue; // 0x4a4(0x04)
	float LocoIdleTransitionThreshold; // 0x4a8(0x04)
	float RunSpeedThreshold; // 0x4ac(0x04)
	float JumpLandToMovementInterruptibleThreshold; // 0x4b0(0x04)
	float MinTargetIsCloseDistance; // 0x4b4(0x04)
	struct FName CurveName_Interruptible; // 0x4b8(0x08)
	struct FGameplayTagContainer TractorBeamStatusTags; // 0x4c0(0x20)
};

// Class LabradorRuntime.FortLabradorComponent_Telemetry
// Size: 0x128 (Inherited: 0x108)
struct UFortLabradorComponent_Telemetry : UFortAIComponent_Telemetry {
	bool bWasAwake; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FString InstigatorAwakeNetIDString; // 0x110(0x10)
	enum class ELabradorDespawnReason DespawnReason; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)

	void OnWakeUp(struct AActor* GoalActor); // Function LabradorRuntime.FortLabradorComponent_Telemetry.OnWakeUp // (Final|Native|Public|BlueprintCallable) // @ game+0x3da3614
	void OnTeleport(); // Function LabradorRuntime.FortLabradorComponent_Telemetry.OnTeleport // (Final|Native|Public|BlueprintCallable) // @ game+0x3da35fc
};

