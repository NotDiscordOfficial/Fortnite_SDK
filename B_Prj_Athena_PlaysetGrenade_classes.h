// BlueprintGeneratedClass B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C
// Size: 0x958 (Inherited: 0x880)
struct AB_Prj_Athena_PlaysetGrenade_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UAudioComponent* PopupGrenade_ThrowLoop_AudioComponent; // 0x888(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x890(0x08)
	struct UStaticMeshComponent* Mesh; // 0x898(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x8a0(0x08)
	struct FVector BaseDestination; // 0x8a8(0x0c)
	char pad_8B4[0x4]; // 0x8b4(0x04)
	struct UParticleSystem* P_BuildBuilding; // 0x8b8(0x08)
	struct USoundBase* Cue_CloseSound; // 0x8c0(0x08)
	struct USoundBase* Cue_DistantSound; // 0x8c8(0x08)
	struct FVector GridExplosionOffset; // 0x8d0(0x0c)
	float GridSizeXY; // 0x8dc(0x04)
	float GridSizeZ; // 0x8e0(0x04)
	float GridYOffset; // 0x8e4(0x04)
	float GridZOffset; // 0x8e8(0x04)
	enum class ECardinalDirection CardinalDirection; // 0x8ec(0x01)
	char pad_8ED[0x3]; // 0x8ed(0x03)
	struct TMap<enum class ECardinalDirection, float> OrientationYawOffsets; // 0x8f0(0x50)
	float BuildDelay; // 0x940(0x04)
	char pad_944[0x4]; // 0x944(0x04)
	struct UFortPlaysetItemDefinition* CachedPlayset; // 0x948(0x08)
	struct AFortVolumeActor_Base_C* PlayspaceActorToSpawn; // 0x950(0x08)

	void SetPlaysetData(struct UFortPlaysetItemDefinition* NewPlayset); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SetPlaysetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalculateCardinalDirection(); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.CalculateCardinalDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBaseDestination(struct FHitResult Hit); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SetBaseDestination // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_3645F4484F4ECED813C69D92F55C7A1F(struct UObject* Loaded); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnLoaded_3645F4484F4ECED813C69D92F55C7A1F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SpawnPlayspaceServer(struct UFortPlaysetItemDefinition* Playset, struct FVector Location, struct FRotator Rotation); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SpawnPlayspaceServer // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Play Spawn Prefab Sound(struct FVector Location); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.Play Spawn Prefab Sound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade(int32_t EntryPoint); // Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

