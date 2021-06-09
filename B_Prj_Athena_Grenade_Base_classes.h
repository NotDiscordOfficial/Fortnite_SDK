// BlueprintGeneratedClass B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C
// Size: 0x9f8 (Inherited: 0x880)
struct AB_Prj_Athena_Grenade_Base_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UFortCollisionAudioComponent* FortCollisionAudio; // 0x888(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x890(0x08)
	struct UParticleSystemComponent* Fuse_Particle; // 0x898(0x08)
	struct UStaticMeshComponent* Mesh; // 0x8a0(0x08)
	struct UAudioComponent* GrenadeFuse_AudioComponent; // 0x8a8(0x08)
	struct UParticleSystemComponent* Effect_Distance; // 0x8b0(0x08)
	struct TSoftObjectPtr<struct UParticleSystem> P_Explosion; // 0x8b8(0x28)
	struct USoundBase* Cue_ExplosionSound; // 0x8e0(0x08)
	struct TSoftObjectPtr<struct UParticleSystem> P_Explosion_Water; // 0x8e8(0x28)
	int32_t NumberOfBouncesTillExplode; // 0x910(0x04)
	int32_t CurrentNumberOfBounces; // 0x914(0x04)
	struct USoundBase* Cue_GrenadeFuseSound; // 0x918(0x08)
	float BouncePawnAgainstPawnGravityScale; // 0x920(0x04)
	char pad_924[0x4]; // 0x924(0x04)
	struct UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0x928(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0x930(0x08)
	struct USoundBase* Cue_Bounce; // 0x938(0x08)
	struct UMatineeCameraShake* ExplosionCameraShake; // 0x940(0x08)
	float FuseTime; // 0x948(0x04)
	float ExplosionRadius; // 0x94c(0x04)
	struct FRotator Explosion Rotation; // 0x950(0x0c)
	char pad_95C[0x4]; // 0x95c(0x04)
	struct UAudioComponent* WaterFuseAudioComponent; // 0x960(0x08)
	struct USoundBase* Water Debris Explosion; // 0x968(0x08)
	struct USoundBase* Splash Sound; // 0x970(0x08)
	struct UTexture* SoundIndicatorIcon; // 0x978(0x08)
	struct FTimerHandle FuseIndicatorTimer; // 0x980(0x08)
	struct TSoftObjectPtr<struct UNiagaraSystem> NS_Explosion; // 0x988(0x28)
	struct TSoftObjectPtr<struct UNiagaraSystem> NS_Explosion_Water; // 0x9b0(0x28)
	enum class EFXType FXType; // 0x9d8(0x01)
	char pad_9D9[0x7]; // 0x9d9(0x07)
	struct UFXSystemAsset* VFX_Explosion; // 0x9e0(0x08)
	struct UFXSystemAsset* VFX_Explosion_Water; // 0x9e8(0x08)
	struct FTimerHandle FuseTimer_; // 0x9f0(0x08)

	void GetExplosion(bool InWater, struct UFXSystemAsset* FX System); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.GetExplosion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void FuseEnded(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.FuseEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_6A6D02914DCE95902837C994D84D08EA(struct UObject* Loaded); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnLoaded_6A6D02914DCE95902837C994D84D08EA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_6A6D02914DCE95902837C994C3BE7DC5(struct UObject* Loaded); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnLoaded_6A6D02914DCE95902837C994C3BE7DC5 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Stop_Rotation(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.Stop_Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnBounce(struct FHitResult Hit); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnResumeSimulation(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnResumeSimulation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Splash(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.Splash // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Held Water Impact(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.Held Water Impact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowFuseIndicator(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ShowFuseIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AysncLoad(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.AysncLoad // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Athena_Grenade_Base(int32_t EntryPoint); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ExecuteUbergraph_B_Prj_Athena_Grenade_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

