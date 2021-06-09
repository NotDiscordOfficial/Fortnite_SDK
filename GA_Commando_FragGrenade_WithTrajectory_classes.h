// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
// Size: 0xe8c (Inherited: 0xb72)
struct UGA_Commando_FragGrenade_WithTrajectory_C : UGAT_CommandoActiveAbility_C {
	char pad_B72[0x6]; // 0xb72(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb78(0x08)
	struct AFortProjectileBase* Prj_Grenade; // 0xb80(0x08)
	float GrenadeSpeedMin; // 0xb88(0x04)
	float GrenadeSpeedMax; // 0xb8c(0x04)
	float GravityScale; // 0xb90(0x04)
	char pad_B94[0x4]; // 0xb94(0x04)
	struct FGameplayTagContainer TC_ClusterBomb; // 0xb98(0x20)
	struct FGameplayTagContainer TC_BiggerIsBetter; // 0xbb8(0x20)
	struct FGameplayTag T_GEContainer_Explosion; // 0xbd8(0x08)
	float ExplosionRadius; // 0xbe0(0x04)
	float AdditionalThrowAngle; // 0xbe4(0x04)
	struct FGameplayTag EC_ClusterExplosion; // 0xbe8(0x08)
	struct FFortFeedbackHandle GrenadeDialogFeedback; // 0xbf0(0x18)
	struct FGameplayTagContainer TC_KeepOut; // 0xc08(0x20)
	struct FGameplayTag EC_KeepOut; // 0xc28(0x08)
	bool BiggerIsBetter; // 0xc30(0x01)
	bool ClusterBomb; // 0xc31(0x01)
	bool KeepOut; // 0xc32(0x01)
	char pad_C33[0x5]; // 0xc33(0x05)
	struct FGameplayTagContainer TC_GrenadeAmmo; // 0xc38(0x20)
	struct FGameplayTagContainer TC_GrenadeCost; // 0xc58(0x20)
	struct FGameplayTagContainer TC_GrenadeDamage; // 0xc78(0x20)
	bool GrenadeAmmo; // 0xc98(0x01)
	bool GrenadeCost; // 0xc99(0x01)
	bool GrenadeDamage; // 0xc9a(0x01)
	char pad_C9B[0x1]; // 0xc9b(0x01)
	int32_t GrenadeAmmoUpgrade; // 0xc9c(0x04)
	int32_t GrenadeAmmoDefault; // 0xca0(0x04)
	int32_t MaxGrenadeAmmo; // 0xca4(0x04)
	int32_t ExplosionRadiusTooltip; // 0xca8(0x04)
	int32_t ExplosionRadiusDefault; // 0xcac(0x04)
	int32_t ExplosionRadiusUpgrade; // 0xcb0(0x04)
	char pad_CB4[0x4]; // 0xcb4(0x04)
	struct FGameplayTagContainer TC_PlasmaGrenades; // 0xcb8(0x20)
	bool PlasmaGrenades; // 0xcd8(0x01)
	char pad_CD9[0x7]; // 0xcd9(0x07)
	struct FGameplayTagContainer TC_Flashbang; // 0xce0(0x20)
	bool Flashbang; // 0xd00(0x01)
	char pad_D01[0x3]; // 0xd01(0x03)
	struct FVector GrenadeTargetingOriginOffset; // 0xd04(0x0c)
	struct AFortProjectileBase* DummyProjectile; // 0xd10(0x08)
	bool DummyShouldBounce; // 0xd18(0x01)
	char pad_D19[0x3]; // 0xd19(0x03)
	float DummyBounciness; // 0xd1c(0x04)
	float DummyFriction; // 0xd20(0x04)
	float TrajectoryUpdateInterval; // 0xd24(0x04)
	float DummyMaxSpeed; // 0xd28(0x04)
	float DummyGravity; // 0xd2c(0x04)
	float DummyTimeStep; // 0xd30(0x04)
	float DummyExtent; // 0xd34(0x04)
	bool InThrowWindup; // 0xd38(0x01)
	char pad_D39[0x7]; // 0xd39(0x07)
	struct ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xd40(0x08)
	struct AActor* TrajectoryIndicatorClass; // 0xd48(0x08)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xd50(0x58)
	bool AbilityKeyPressed; // 0xda8(0x01)
	char pad_DA9[0x3]; // 0xda9(0x03)
	float MaxSpeedPitch; // 0xdac(0x04)
	float MinSpeedPitch; // 0xdb0(0x04)
	float MaxTossPitch; // 0xdb4(0x04)
	int32_t MaxTrajectoryBounces; // 0xdb8(0x04)
	char pad_DBC[0x4]; // 0xdbc(0x04)
	struct FGameplayTagContainer TC_Tactical_Clusterbomb; // 0xdc0(0x20)
	bool Tactical_Clusterbomb; // 0xde0(0x01)
	char pad_DE1[0x3]; // 0xde1(0x03)
	struct FGameplayTag EC_ClusterExplosion_Tactical; // 0xde4(0x08)
	float F_FrameDelay; // 0xdec(0x04)
	bool BiggerIsBetter_T01; // 0xdf0(0x01)
	bool BiggerIsBetter_T02; // 0xdf1(0x01)
	bool ClusterBomb_T01; // 0xdf2(0x01)
	bool ClusterBomb_T02; // 0xdf3(0x01)
	struct FGameplayTag T_BiggerIsBetter_T01; // 0xdf4(0x08)
	struct FGameplayTag T_BiggerIsBetter_T02; // 0xdfc(0x08)
	struct FGameplayTag T_ClusterBomb_T01; // 0xe04(0x08)
	struct FGameplayTag T_ClusterBomb_T02; // 0xe0c(0x08)
	char pad_E14[0x4]; // 0xe14(0x04)
	struct FScalableFloat SF_BiggerIsBetterRadius_T01; // 0xe18(0x28)
	struct UAnimMontage* ThrowMontage; // 0xe40(0x08)
	struct FGameplayTag T_Event_Activate; // 0xe48(0x08)
	struct FGameplayTag T_Event_Deactivate; // 0xe50(0x08)
	struct FScalableFloat SF_BiggerIsBetterRadius_T02; // 0xe58(0x28)
	enum class ECollisionChannel DummyCollisionChannel; // 0xe80(0x01)
	char pad_E81[0x3]; // 0xe81(0x03)
	struct FGameplayTag ThrowCue; // 0xe84(0x08)

	void ActiveAbilitySetup(struct UAbilitySystemComponent* AbilitySystemIn, struct UAbilitySystemComponent* AbilitySystemOut); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ActiveAbilitySetup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnFragGrenade(struct AFortProjectileBase* ProjectileClass, struct FVector SpawnLocation, struct FRotator InputPin, struct FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode, float InitialSpeed, float GravityScale); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnFragGrenade // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalcGrenadeSpeedFromPitch(float AimPitch, float GrenadeSpeed); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void UpdateTrajectorySpline(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDummyProjectile(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnLocationAndRotation(struct FVector OutLoc, struct FRotator OutRot); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void SetupAbility(struct UAbilitySystemComponent* AbilitySystemComponentRef); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupGrenade(float AimPitch, struct AFortProjectileBase* Base Grenade, float Projectile Speed, struct FFortGameplayEffectContainerSpec Explosion Gameplay Spec, float Projectile Gravity Scale); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupGrenade // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_F5D87C9E46378707AE4C79B3A42F5A45 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_854170AF4268B06A435A3AA33232C5BF(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCancelled_854170AF4268B06A435A3AA33232C5BF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_854170AF4268B06A435A3AA33232C5BF(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnInterrupted_854170AF4268B06A435A3AA33232C5BF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_854170AF4268B06A435A3AA33232C5BF(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnBlendOut_854170AF4268B06A435A3AA33232C5BF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_854170AF4268B06A435A3AA33232C5BF(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCompleted_854170AF4268B06A435A3AA33232C5BF // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Completed_BF65CDBE4F9E98E9174850B85775A15B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Cancelled_BF65CDBE4F9E98E9174850B85775A15B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Triggered_BF65CDBE4F9E98E9174850B85775A15B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnAbilityInputReleased(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryDisplay(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CleanupTrajectoryDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void TossGrenade(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.TossGrenade // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ServerSpawnProjectile(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ServerSpawnProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int32_t EntryPoint); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

