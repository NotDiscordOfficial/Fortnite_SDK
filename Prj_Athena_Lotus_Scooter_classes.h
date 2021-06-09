// BlueprintGeneratedClass Prj_Athena_Lotus_Scooter.Prj_Athena_Lotus_Scooter_C
// Size: 0xa98 (Inherited: 0x880)
struct APrj_Athena_Lotus_Scooter_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UStaticMeshComponent* Mesh; // 0x888(0x08)
	struct UParticleSystemComponent* TeamColoredFX; // 0x890(0x08)
	struct UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0x898(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x8a0(0x08)
	struct FLinearColor Beacon Streak Color (Friendly); // 0x8a8(0x10)
	struct FLinearColor Beacon Streak Color (Enemy); // 0x8b8(0x10)
	bool IsDead?; // 0x8c8(0x01)
	char pad_8C9[0x3]; // 0x8c9(0x03)
	struct FLinearColor Beacon Core Color (Friendly); // 0x8cc(0x10)
	struct FLinearColor Beacon Core Color (Enemy); // 0x8dc(0x10)
	struct FVector HitNormal; // 0x8ec(0x0c)
	struct AFortPawn* StuckToPawn; // 0x8f8(0x08)
	struct USoundBase* Audio_StuckToEnvironment; // 0x900(0x08)
	struct USoundBase* Audio_StuckToPlayer; // 0x908(0x08)
	struct FVector HitLocation; // 0x910(0x0c)
	bool bHasStopped; // 0x91c(0x01)
	char pad_91D[0x3]; // 0x91d(0x03)
	struct UMaterialInstance* EnemyMeshMaterial; // 0x920(0x08)
	struct UMaterialInstance* FriendlyMeshMaterial; // 0x928(0x08)
	struct FGameplayTagContainer TC_ActorTagsThatShouldExplodeOnOverlap; // 0x930(0x20)
	struct TSet<struct AActor*> Ignore; // 0x950(0x50)
	struct UParticleSystemComponent* PulsingFX; // 0x9a0(0x08)
	bool HasMark; // 0x9a8(0x01)
	char pad_9A9[0x7]; // 0x9a9(0x07)
	struct FString IndicatorGroup; // 0x9b0(0x10)
	struct AAthena_PlayerController_C* AthenaPlayerControler; // 0x9c0(0x08)
	int32_t MarkActorInt; // 0x9c8(0x04)
	char pad_9CC[0x4]; // 0x9cc(0x04)
	struct UParticleSystem* IndicatedPS; // 0x9d0(0x08)
	struct FName ParticleSystemParamName; // 0x9d8(0x08)
	struct FVector PSOffset; // 0x9e0(0x0c)
	struct FName PSVectorParamName; // 0x9ec(0x08)
	struct FVector PSDBNOOffset; // 0x9f4(0x0c)
	struct TArray<struct FIndicatedActorDataWithFilter> IndicatedActorFilters; // 0xa00(0x10)
	struct FTimerHandle PulseTimer; // 0xa10(0x08)
	float Mark Duration; // 0xa18(0x04)
	char pad_A1C[0x4]; // 0xa1c(0x04)
	struct USoundBase* PingSound; // 0xa20(0x08)
	float PulseTime; // 0xa28(0x04)
	float Step Time; // 0xa2c(0x04)
	struct UNiagaraComponent* Pulsing NS FX; // 0xa30(0x08)
	struct TArray<struct AActor*> MarkedPlayers; // 0xa38(0x10)
	struct FScalableFloat MarkRadius; // 0xa48(0x28)
	struct FScalableFloat IndividualMarkDuration; // 0xa70(0x28)

	void On Actor Removed(struct AActor* IndicatedActor); // Function Prj_Athena_Lotus_Scooter.Prj_Athena_Lotus_Scooter_C.On Actor Removed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Actor Added(struct AActor* IndicatedActor); // Function Prj_Athena_Lotus_Scooter.Prj_Athena_Lotus_Scooter_C.On Actor Added // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PulseMarkers(); // Function Prj_Athena_Lotus_Scooter.Prj_Athena_Lotus_Scooter_C.PulseMarkers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateModifiedIndicatedActorFilter(struct FIndicatedActorDataWithFilter NewParam, struct FIndicatedActorDataWithFilter NewParam1); // Function Prj_Athena_Lotus_Scooter.Prj_Athena_Lotus_Scooter_C.CreateModifiedIndicatedActorFilter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UserConstructionScript(); // Function Prj_Athena_Lotus_Scooter.Prj_Athena_Lotus_Scooter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Event_Building_Actor_Destroyed(); // Function Prj_Athena_Lotus_Scooter.Prj_Athena_Lotus_Scooter_C.Event_Building_Actor_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Prj_Athena_Lotus_Scooter.Prj_Athena_Lotus_Scooter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Prj_Athena_Lotus_Scooter(int32_t EntryPoint); // Function Prj_Athena_Lotus_Scooter.Prj_Athena_Lotus_Scooter_C.ExecuteUbergraph_Prj_Athena_Lotus_Scooter // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

