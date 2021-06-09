// BlueprintGeneratedClass B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C
// Size: 0xaa0 (Inherited: 0x880)
struct AB_Prj_Ranged_Rocket_Athena_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0x888(0x08)
	struct UAudioComponent* Rocket_AudioComponent; // 0x890(0x08)
	struct UStaticMeshComponent* Mesh; // 0x898(0x08)
	struct UStaticMeshComponent* CollisionMesh; // 0x8a0(0x08)
	struct UPostProcessComponent* PP_Explode; // 0x8a8(0x08)
	float PPFader_PPFade_6840155342A20C80B8C71EB25DE77BD9; // 0x8b0(0x04)
	enum class ETimelineDirection PPFader__Direction_6840155342A20C80B8C71EB25DE77BD9; // 0x8b4(0x01)
	char pad_8B5[0x3]; // 0x8b5(0x03)
	struct UTimelineComponent* PPFader; // 0x8b8(0x08)
	struct UParticleSystemComponent* Ribbon_Trail_PSC; // 0x8c0(0x08)
	struct UParticleSystemComponent* Water_Explosion_PSC; // 0x8c8(0x08)
	struct UParticleSystem* Ribbon_Trail_PS; // 0x8d0(0x08)
	struct UParticleSystem* Water_Explosion_PS; // 0x8d8(0x08)
	struct UParticleSystemComponent* Explosion_Generic_PSC; // 0x8e0(0x08)
	struct USoundBase* Rocket_Projectile_Explosion_Sound; // 0x8e8(0x08)
	struct FVector StopLocation; // 0x8f0(0x0c)
	char pad_8FC[0x4]; // 0x8fc(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectsToTraceAgainst; // 0x900(0x10)
	struct UParticleSystem* Explosion_Flesh_Damage_PS; // 0x910(0x08)
	struct FRotator StopRotZ; // 0x918(0x0c)
	float TrailLifetime; // 0x924(0x04)
	struct UParticleSystemComponent* Explosion_Flesh_Damage_PSC; // 0x928(0x08)
	struct USoundBase* Rocket_Projectile_Explosion_Water_Sound; // 0x930(0x08)
	struct USoundBase* Rocket_Projectile_InAir_Sound; // 0x938(0x08)
	struct UParticleSystemComponent* RocketTrailPS; // 0x940(0x08)
	float Tick Delta; // 0x948(0x04)
	float RocketSpinRate; // 0x94c(0x04)
	float Explosion Impact Offset; // 0x950(0x04)
	struct FRotator RocketSpin; // 0x954(0x0c)
	struct FVector RocketScale; // 0x960(0x0c)
	bool TimerMaxReached?; // 0x96c(0x01)
	char pad_96D[0x3]; // 0x96d(0x03)
	struct UMaterialInterface* Ground Decal; // 0x970(0x08)
	struct UMaterialInstanceDynamic* Ground Decal MID; // 0x978(0x08)
	float Decal Size Max; // 0x980(0x04)
	float Decal Size Min; // 0x984(0x04)
	struct FVector DecalLocation; // 0x988(0x0c)
	enum class EPhysicalSurface SurfaceType; // 0x994(0x01)
	char pad_995[0x3]; // 0x995(0x03)
	struct UParticleSystemComponent* Explosion PS; // 0x998(0x08)
	struct FGameplayTag FeedbackCue; // 0x9a0(0x08)
	float WaterInteractionDelay; // 0x9a8(0x04)
	char pad_9AC[0x4]; // 0x9ac(0x04)
	struct UNiagaraComponent* RocketTrailPS_Niagara; // 0x9b0(0x08)
	struct UFXSystemComponent* Grenade Explosion FX System; // 0x9b8(0x08)
	struct FFortPortableSoftParticles Grenade Explosion Asset; // 0x9c0(0x58)
	struct UFXSystemAsset* Explosion Asset; // 0xa18(0x08)
	struct FFortPortableSoftParticles Rocket Trail Asset; // 0xa20(0x58)
	struct UFXSystemAsset* Rocket Trial Asset; // 0xa78(0x08)
	bool IsNiagaraEnabled; // 0xa80(0x01)
	char pad_A81[0x3]; // 0xa81(0x03)
	float PlayRate; // 0xa84(0x04)
	float Radius; // 0xa88(0x04)
	float Strength; // 0xa8c(0x04)
	float Time Decay; // 0xa90(0x04)
	char pad_A94[0x4]; // 0xa94(0x04)
	struct UFXSystemAsset* Explosion Asset_Water; // 0xa98(0x08)

	void UserConstructionScript(); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PPFader__FinishedFunc(); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.PPFader__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void PPFader__UpdateFunc(); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.PPFader__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void FuseTimerMax(); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.FuseTimerMax // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult HitResult, bool bIsOverlap); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void RocketWaterDelay(); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.RocketWaterDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena(int32_t EntryPoint); // Function B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

