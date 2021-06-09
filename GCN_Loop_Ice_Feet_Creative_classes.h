// BlueprintGeneratedClass GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C
// Size: 0x820 (Inherited: 0x7d0)
struct AGCN_Loop_Ice_Feet_Creative_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct AFortPlayerPawn* TargetPlayer; // 0x7d8(0x08)
	struct USoundBase* SC_Footstep_Local; // 0x7e0(0x08)
	struct USoundBase* SC_Footstep_Remote; // 0x7e8(0x08)
	struct USoundBase* SC_Collision; // 0x7f0(0x08)
	struct UFortCollisionAudioComponent* CollisionAudioComp; // 0x7f8(0x08)
	struct TArray<struct UAudioComponent*> SpawnedAudioComps; // 0x800(0x10)
	struct USoundBase* SC_OnJumpOrBeginFalling; // 0x810(0x08)
	struct USoundBase* SC_OnLand; // 0x818(0x08)

	void On Player Step(); // Function GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C.On Player Step // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void On Target Pawn Hit Event(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C.On Target Pawn Hit Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void On Target Pawn Landed(struct FHitResult Hit); // Function GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C.On Target Pawn Landed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void On Target Pawn Movement Mode Changed(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C.On Target Pawn Movement Mode Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_Creative(int32_t EntryPoint); // Function GCN_Loop_Ice_Feet_Creative.GCN_Loop_Ice_Feet_Creative_C.ExecuteUbergraph_GCN_Loop_Ice_Feet_Creative // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

