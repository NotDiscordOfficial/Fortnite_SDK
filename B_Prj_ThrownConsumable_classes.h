// BlueprintGeneratedClass B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C
// Size: 0x91c (Inherited: 0x892)
struct AB_Prj_ThrownConsumable_C : AB_Prj_ThrownConsumable_Parent_C {
	char pad_892[0x6]; // 0x892(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x8a0(0x08)
	struct UFortCollisionAudioComponent* FortCollisionAudio; // 0x8a8(0x08)
	struct UParticleSystemComponent* Fuse_Particle; // 0x8b0(0x08)
	struct UStaticMeshComponent* Mesh; // 0x8b8(0x08)
	struct UAudioComponent* GrenadeFuse_AudioComponent; // 0x8c0(0x08)
	struct UParticleSystem* P_Explosion; // 0x8c8(0x08)
	float ExplosionRadius; // 0x8d0(0x04)
	char pad_8D4[0x4]; // 0x8d4(0x04)
	struct UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0x8d8(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0x8e0(0x08)
	struct UMatineeCameraShake* ExplosionCameraShake; // 0x8e8(0x08)
	struct USoundBase* Cue_GrenadeFuseSound; // 0x8f0(0x08)
	struct USoundBase* Cue_CloseSound; // 0x8f8(0x08)
	struct USoundBase* Cue_DistantSound; // 0x900(0x08)
	struct USoundBase* Cue_Bounce; // 0x908(0x08)
	struct FRotator ExplosionRotation; // 0x910(0x0c)

	void UserConstructionScript(); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnBounce(struct FHitResult Hit); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ResetSimulatedComponents(); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ResetSimulatedComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_ThrownConsumable(int32_t EntryPoint); // Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ExecuteUbergraph_B_Prj_ThrownConsumable // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

