// Class MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
// Size: 0xf0 (Inherited: 0xb8)
struct UFortAbilityTask_ApplyRootMotionMantisForce : UAbilityTask_ApplyRootMotion_Base {
	struct FMulticastInlineDelegate OnFinish; // 0xb8(0x10)
	float Duration; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct UAnimMontage* TechniqueMontage; // 0xd0(0x08)
	struct FFortMantisRootMotionWarpInfo WarpInfo; // 0xd8(0x18)
};

// Class MantisRuntime.FortAnimNotify_Mantis
// Size: 0x40 (Inherited: 0x38)
struct UFortAnimNotify_Mantis : UAnimNotify {
	enum class EFortMantisNotifyEvent MantisNotifyEvent; // 0x38(0x01)
	enum class EFortMantisBranchRule MantisBranchRule; // 0x39(0x01)
	enum class EFortMantisBranchPath MantisBranchPath; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// Class MantisRuntime.FortAnimNotifyState_Mantis
// Size: 0x40 (Inherited: 0x30)
struct UFortAnimNotifyState_Mantis : UAnimNotifyState {
	enum class EFortMantisNotifyWindow MantisNotifyWindow; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FGameplayTag MantisNotifyTag; // 0x34(0x08)
	enum class EFortMantisNotifyRotationWarpRateRule RotationRateWarpRule; // 0x3c(0x01)
	char bWarpRotation : 1; // 0x3d(0x01)
	char bWarpTranslation : 1; // 0x3d(0x01)
	char pad_3D_2 : 6; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// Class MantisRuntime.FortGameplayAbility_Mantis
// Size: 0xa98 (Inherited: 0xa70)
struct UFortGameplayAbility_Mantis : UFortGameplayAbility {
	bool bAllowRootMotionWarping; // 0xa70(0x01)
	char pad_A71[0x7]; // 0xa71(0x07)
	struct UFortMantisPawnComponent* MantisPawnComponent; // 0xa78(0x08)
	struct UAbilityTask_PlayMontageAndWait* MontageTask; // 0xa80(0x08)
	struct UFortAbilityTask_ApplyRootMotionMantisForce* RootMotionTask; // 0xa88(0x08)
	char pad_A90[0x8]; // 0xa90(0x08)

	void OnMontageFinished(); // Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished // (Final|Native|Protected) // @ game+0x3b34ac8
	void OnMontageCancelled(); // Function MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled // (Final|Native|Protected) // @ game+0x3b34a70
	void ConfigureRootMotionWarping(struct AActor* OutTargetActor, bool bOutAllowTranslationWarp, bool bOutAllowRotationWarp, bool bOutSnapshotTargetLocation); // Function MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarping // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x3b347b4
	void BP_OnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle TargetDataHandle, struct FGameplayTag ApplicationTag); // Function MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
};

// Class MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
// Size: 0x3e0 (Inherited: 0x380)
struct UFortItemLayerAnimInstance_UncleBrolly : UFortItemLayerAnimInstance {
	struct FCachedAnimStateArray UmbrellaGliderOpenStateDataArray; // 0x378(0x18)
	struct FVector WrapTranslation; // 0x390(0x0c)
	struct FRotator WrapRotation; // 0x39c(0x0c)
	struct FRotator RootRotationOffset; // 0x3a8(0x0c)
	float LandingPredictedTimer; // 0x3b4(0x04)
	bool bShouldUpdateYawCorrection; // 0x3b8(0x01)
	bool bWasAcceleratingBeforeDodge; // 0x3b9(0x01)
	float UncleBrollyDeployCurveValue; // 0x3bc(0x04)
	float DashChargeTier; // 0x3c0(0x04)
	float DashChargeAdditivePlayrate; // 0x3c4(0x04)
	bool bIsUmbrellaFailing; // 0x3c8(0x01)
	bool bIsMeleeGuarding; // 0x3c9(0x01)
	bool bIsSprinting; // 0x3ca(0x01)
	bool bIsInAir; // 0x3cb(0x01)
	bool bIsLandingPredicted; // 0x3cc(0x01)
	bool bIsJumping; // 0x3cd(0x01)
	bool bIsDodging; // 0x3ce(0x01)
	bool bIsDodgingEast; // 0x3cf(0x01)
	bool bIsDodgingSouth; // 0x3d0(0x01)
	bool bIsDodgingWest; // 0x3d1(0x01)
	bool bIsDashing; // 0x3d2(0x01)
	bool bIsDashCharging; // 0x3d3(0x01)
	bool bIsDashPredictingEnd; // 0x3d4(0x01)
	bool bIsChargeTier1; // 0x3d5(0x01)
	bool bIsChargeTier2; // 0x3d6(0x01)
	bool bIsChargeTier3; // 0x3d7(0x01)
	bool bMeleeGuardingOrUmbrellaFailing; // 0x3d8(0x01)
	bool bTransition_Default_to_GuardLoop; // 0x3d9(0x01)
	bool bTransition_Default_to_GuardIntro; // 0x3da(0x01)
	bool bTransition_GuardIntro_to_Default; // 0x3db(0x01)
	bool bUpperBodyShouldPassThrough; // 0x3dc(0x01)
	bool bUmbrellaGliderIsOpen; // 0x3dd(0x01)
};

// Class MantisRuntime.FortMantisData
// Size: 0x88 (Inherited: 0x30)
struct UFortMantisData : UDataAsset {
	bool bDetachCharacterRotationFromCamera; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ReattachCharacterRotationBlendTime; // 0x34(0x04)
	float ReattachCharacterRotationBlendExponent; // 0x38(0x04)
	float WindupCharacterRotationRate; // 0x3c(0x04)
	float ExecutionCharacterRotationRate; // 0x40(0x04)
	float RecoveryCharacterRotationRate; // 0x44(0x04)
	bool bShowTargetHealthBar; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UFortGameplayAbility_Mantis* TechniqueAbility; // 0x50(0x08)
	struct TArray<struct FFortGameplayEffectContainer> TechniqueAdditionEffectContainers; // 0x58(0x10)
	struct TArray<struct FFortMantisTechniqueData> Techniques; // 0x68(0x10)
	struct TArray<struct FFortMantisTechniqueBranch> Branches; // 0x78(0x10)
};

// Class MantisRuntime.FortMantisPawnComponent
// Size: 0x210 (Inherited: 0xb0)
struct UFortMantisPawnComponent : UPawnComponent {
	char pad_B0[0x60]; // 0xb0(0x60)
	struct TMap<struct UAnimMontage*, struct FFortMantisMontageData> MontageDataMap; // 0x110(0x50)
	struct UFortMantisData* MantisData; // 0x160(0x08)
	struct AFortWeapon* Weapon; // 0x168(0x08)
	char pad_170[0xa0]; // 0x170(0xa0)

	void OnPostPhysicsRotation(struct UCharacterMovementComponent* CharMoveComp, float DeltaSeconds); // Function MantisRuntime.FortMantisPawnComponent.OnPostPhysicsRotation // (Final|Native|Protected) // @ game+0x3b34adc
	void OnCharacterMovementPreUpdate(struct UCharacterMovementComponent* CharMoveComp, float DeltaSeconds); // Function MantisRuntime.FortMantisPawnComponent.OnCharacterMovementPreUpdate // (Final|Native|Protected) // @ game+0x3b34980
};

// Class MantisRuntime.FortMantisWeaponComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UFortMantisWeaponComponent : UFortWeaponComponent {
	struct UFortMantisData* MantisData; // 0xb0(0x08)
	struct UFortMantisPawnComponent* MantisPawnComponent; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class MantisRuntime.UncleBrollyWeaponAnimInstance
// Size: 0x2f0 (Inherited: 0x2c0)
struct UUncleBrollyWeaponAnimInstance : UAnimInstance {
	struct UAnimInstance* UncleBrollyItemLayer; // 0x2b8(0x08)
	struct FRotator UmbrellaRotation; // 0x2c0(0x0c)
	float UmbrellaSpinSpeed; // 0x2cc(0x04)
	float BlockDeployEndPlayrate; // 0x2d0(0x04)
	float BlockDeployEndStartPosition; // 0x2d4(0x04)
	bool bIsDodging; // 0x2d8(0x01)
	bool bIsPlayingMeleeAnim; // 0x2d9(0x01)
	bool bIsUmbrellaFailing; // 0x2da(0x01)
	bool bIsMeleeGuarding; // 0x2db(0x01)
	bool bIsInAir; // 0x2dc(0x01)
	bool bIsDashing; // 0x2dd(0x01)
	bool bIsSprinting; // 0x2de(0x01)
	bool bIsPredictingEnd; // 0x2df(0x01)
	bool bIsDashCharging; // 0x2e0(0x01)
	bool bIsDashPredictingEnd; // 0x2e1(0x01)
	bool bInAirAndMeleeGuarding; // 0x2e2(0x01)
	bool bTransition_Default_to_DeployStart; // 0x2e3(0x01)
	bool bTransition_DeployStart_to_Default; // 0x2e4(0x01)
	bool bTransition_Fail_to_FailToDeploy; // 0x2e5(0x01)
	bool bTransition_FailLoop_to_DeployEnd; // 0x2e6(0x01)
	char pad_2EF[0x1]; // 0x2ef(0x01)
};

