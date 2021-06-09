// BlueprintGeneratedClass GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C
// Size: 0x818 (Inherited: 0x7d0)
struct AGCNL_Creative_GrinderFeet_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UParticleSystemComponent* LeftFootFX; // 0x7d8(0x08)
	struct UParticleSystemComponent* RightFootFX; // 0x7e0(0x08)
	struct UFortCollisionAudioComponent* CollisionAudioComp; // 0x7e8(0x08)
	struct USoundBase* Collision Audio; // 0x7f0(0x08)
	struct AActor* Target Pawn; // 0x7f8(0x08)
	struct UAudioComponent* Current Grind Loop Audio; // 0x800(0x08)
	struct USoundBase* Grind 3p Loop; // 0x808(0x08)
	struct USoundBase* Grind 1p Loop; // 0x810(0x08)

	void DeactivateFootParticles(); // Function GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C.DeactivateFootParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FVector GetPawnTeamNumber(struct AActor* Actor); // Function GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C.GetPawnTeamNumber // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void On Target Pawn Hit Event(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C.On Target Pawn Hit Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Creative_GrinderFeet(int32_t EntryPoint); // Function GCNL_Creative_GrinderFeet.GCNL_Creative_GrinderFeet_C.ExecuteUbergraph_GCNL_Creative_GrinderFeet // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

