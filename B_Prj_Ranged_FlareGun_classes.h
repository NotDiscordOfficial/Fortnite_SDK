// BlueprintGeneratedClass B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C
// Size: 0x9bc (Inherited: 0x880)
struct AB_Prj_Ranged_FlareGun_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UPostProcessComponent* PP_Explode; // 0x888(0x08)
	struct UAudioComponent* Rocket_AudioComponent; // 0x890(0x08)
	struct UStaticMeshComponent* Mesh; // 0x898(0x08)
	float PPFader_PPFade_83D6A8E24D28C000703E6EB526FEAD3C; // 0x8a0(0x04)
	enum class ETimelineDirection PPFader__Direction_83D6A8E24D28C000703E6EB526FEAD3C; // 0x8a4(0x01)
	char pad_8A5[0x3]; // 0x8a5(0x03)
	struct UTimelineComponent* PPFader; // 0x8a8(0x08)
	struct UParticleSystemComponent* Ribbon_Trail_PSC; // 0x8b0(0x08)
	struct UParticleSystemComponent* Water_Explosion_PSC; // 0x8b8(0x08)
	struct UParticleSystem* Ribbon_Trail_PS; // 0x8c0(0x08)
	struct UParticleSystem* Water_Explosion_PS; // 0x8c8(0x08)
	struct UParticleSystem* Explosion_Generic_PS; // 0x8d0(0x08)
	struct UParticleSystemComponent* Explosion_Generic_PSC; // 0x8d8(0x08)
	struct USoundBase* Rocket_Projectile_Explosion_Sound; // 0x8e0(0x08)
	struct FVector StopLocation; // 0x8e8(0x0c)
	char pad_8F4[0x4]; // 0x8f4(0x04)
	struct UParticleSystem* Explosion_Flesh_Damage_PS; // 0x8f8(0x08)
	struct FRotator StopRotZ; // 0x900(0x0c)
	char pad_90C[0x4]; // 0x90c(0x04)
	struct UParticleSystemComponent* Explosion_Flesh_Damage_PSC; // 0x910(0x08)
	struct USoundBase* Rocket_Projectile_Explosion_Water_Sound; // 0x918(0x08)
	struct UParticleSystemComponent* RocketTrailPS; // 0x920(0x08)
	float Tick Delta; // 0x928(0x04)
	float RocketSpinRate; // 0x92c(0x04)
	float Explosion Impact Offset; // 0x930(0x04)
	struct FRotator RocketSpin; // 0x934(0x0c)
	struct FVector RocketScale; // 0x940(0x0c)
	bool TimerMaxReached?; // 0x94c(0x01)
	char pad_94D[0x3]; // 0x94d(0x03)
	float Decal Size Max; // 0x950(0x04)
	float Decal Size Min; // 0x954(0x04)
	struct FVector DecalLocation; // 0x958(0x0c)
	char pad_964[0x4]; // 0x964(0x04)
	struct UParticleSystem* Rocket Trail Template; // 0x968(0x08)
	enum class EPhysicalSurface SurfaceType; // 0x970(0x01)
	char pad_971[0x7]; // 0x971(0x07)
	struct UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0x978(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0x980(0x08)
	struct FLinearColor BannerPrimaryColor; // 0x988(0x10)
	struct FLinearColor BannerSecondaryColor; // 0x998(0x10)
	struct UTexture2D* BannerIconLarge; // 0x9a8(0x08)
	struct UMaterialInterface* BannerSmokeMaterial; // 0x9b0(0x08)
	float FlareFuseInSecs; // 0x9b8(0x04)

	void UserConstructionScript(); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PPFader__FinishedFunc(); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.PPFader__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void PPFader__UpdateFunc(); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.PPFader__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_615134E044495378BCF0229743AFAF07(struct UObject* Loaded); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnLoaded_615134E044495378BCF0229743AFAF07 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBounce(struct FHitResult Hit); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void FuseTimerMax(); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.FuseTimerMax // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Ranged_FlareGun(int32_t EntryPoint); // Function B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ExecuteUbergraph_B_Prj_Ranged_FlareGun // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

