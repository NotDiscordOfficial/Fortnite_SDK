// BlueprintGeneratedClass GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C
// Size: 0xd08 (Inherited: 0xa70)
struct UGA_Athena_Knockback_Parent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AActor* Launcher; // 0xa78(0x08)
	struct AActor* Target; // 0xa80(0x08)
	struct FGameplayTagContainer TC_TagsToIgnore; // 0xa88(0x20)
	struct FScalableFloat Row_XYKnockMag; // 0xaa8(0x28)
	struct FScalableFloat Row_ZKnockMag; // 0xad0(0x28)
	struct FScalableFloat Row_ZAdd; // 0xaf8(0x28)
	bool ZAlwayzPositive; // 0xb20(0x01)
	bool KnockTowardsLauncher; // 0xb21(0x01)
	char pad_B22[0x6]; // 0xb22(0x06)
	struct FScalableFloat Row_ZVelPercentMaintained; // 0xb28(0x28)
	struct FScalableFloat Row_XYVelPercentMaintained; // 0xb50(0x28)
	struct FScalableFloat Row_PhysicsObjectImpulseMultiplier; // 0xb78(0x28)
	struct FGameplayTagContainer DefaultTags; // 0xba0(0x20)
	struct FVector FinalLaunchVel; // 0xbc0(0x0c)
	float DistanceMagMult; // 0xbcc(0x04)
	float Distance; // 0xbd0(0x04)
	float LaunchDuration; // 0xbd4(0x04)
	bool XYMagUsesInstigatorDistanceMod; // 0xbd8(0x01)
	bool ZMagUsesInstigatorDistanceMod; // 0xbd9(0x01)
	char pad_BDA[0x6]; // 0xbda(0x06)
	struct FScalableFloat Row_MinDistance; // 0xbe0(0x28)
	struct FScalableFloat Row_MaxDistance; // 0xc08(0x28)
	bool ResetFallHeight; // 0xc30(0x01)
	bool ImpulseMustBePositiveForReset; // 0xc31(0x01)
	enum class Athena_Knockback_Parent_Type LaunchType; // 0xc32(0x01)
	bool KnocksVehicles; // 0xc33(0x01)
	char pad_C34[0x4]; // 0xc34(0x04)
	struct FScalableFloat Row_VehicleXYMult; // 0xc38(0x28)
	struct FScalableFloat Row_VehicleZMult; // 0xc60(0x28)
	enum class ERootMotionFinishVelocityMode VelocityOnFinish; // 0xc88(0x01)
	char pad_C89[0x3]; // 0xc89(0x03)
	struct FVector SetVelocityOnFinish; // 0xc8c(0x0c)
	float ClampVelocityOnFinish; // 0xc98(0x04)
	bool UsesGravity; // 0xc9c(0x01)
	bool AccountsForGravityZScale; // 0xc9d(0x01)
	char pad_C9E[0x2]; // 0xc9e(0x02)
	float LowZGravityDampenerIntensity; // 0xca0(0x04)
	float HighZGravityMultiplierIntensity; // 0xca4(0x04)
	struct UCurveFloat* Curve_StrengthOverTime; // 0xca8(0x08)
	struct UCurveVector* Curve_PathOffset; // 0xcb0(0x08)
	struct UGameplayEffect* GE_Knockback_Status; // 0xcb8(0x08)
	bool ShouldApplyKnockbackStatus; // 0xcc0(0x01)
	bool SetKnockbackDurationEqualToLaunchDuration; // 0xcc1(0x01)
	char pad_CC2[0x6]; // 0xcc2(0x06)
	struct FScalableFloat Row_KnockbackDuration; // 0xcc8(0x28)
	float LocalGravityScale; // 0xcf0(0x04)
	struct FGameplayTag Tag_BuildingPhysics; // 0xcf4(0x08)
	float FailsafeDelay; // 0xcfc(0x04)
	struct FGameplayTag KnockbackTypeTag; // 0xd00(0x08)

	float CheckGravityScale(struct FGameplayAttribute Attribute Gravity Scale); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.CheckGravityScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Find Launcher(struct AActor* DefaultLauncher, struct AActor* LauncherOut); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.Find Launcher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FVector GetTargetLocation(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.GetTargetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FVector CalcVehicleMult(struct FVector InVec); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.CalcVehicleMult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void CalculateDistanceMod(struct FVector TargetLocation, struct FVector KnockOrigin, float ModAmount, bool AboveMax); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.CalculateDistanceMod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FVector GetKnockbackOrigin(struct AActor* OriginActor); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.GetKnockbackOrigin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Get Initial Knock Mag(struct FVector Direction, struct FVector LaunchMag); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.Get Initial Knock Mag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void CalculateVelocityMaintained(struct AActor* LaunchTarget, struct FVector LaunchMagIn, struct FVector ModifiedLaunchSpeed); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.CalculateVelocityMaintained // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnFinish_78B7A0C144DB79535B9890B75AE5F853(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.OnFinish_78B7A0C144DB79535B9890B75AE5F853 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTimedOutAndDestinationReached_C8C9B5D948887DE06B469CAFC5621C02(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.OnTimedOutAndDestinationReached_C8C9B5D948887DE06B469CAFC5621C02 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTimedOut_C8C9B5D948887DE06B469CAFC5621C02(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.OnTimedOut_C8C9B5D948887DE06B469CAFC5621C02 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DoLaunch(struct FVector vel); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.DoLaunch // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LaunchFinished(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.LaunchFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LaunchBuldingActors(struct AActor* Actor); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.LaunchBuldingActors // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OwningPawnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.OwningPawnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FailsafeEndAbility(); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.FailsafeEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Knockback_Parent(int32_t EntryPoint); // Function GA_Athena_Knockback_Parent.GA_Athena_Knockback_Parent_C.ExecuteUbergraph_GA_Athena_Knockback_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

