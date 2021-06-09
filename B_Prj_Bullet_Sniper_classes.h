// BlueprintGeneratedClass B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C
// Size: 0xac1 (Inherited: 0x9a0)
struct AB_Prj_Bullet_Sniper_C : AFortProjectileAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a0(0x08)
	struct UStaticMeshComponent* TracerMesh; // 0x9a8(0x08)
	struct UParticleSystemComponent* P_Sniper_Bullet_Trail; // 0x9b0(0x08)
	struct USoundBase* Sniper_Rifle_SurfaceImpactSound; // 0x9b8(0x08)
	struct USoundBase* Sniper_Rifle_PlayerImpactSound; // 0x9c0(0x08)
	struct FVector DecalSize; // 0x9c8(0x0c)
	char pad_9D4[0x4]; // 0x9d4(0x04)
	struct FScalableFloat ProjectileGravityScale; // 0x9d8(0x28)
	struct UParticleSystem* WaterImpactFX; // 0xa00(0x08)
	struct FHitResult WaterHit; // 0xa08(0x88)
	struct UPhysicalMaterial* WaterHitMat; // 0xa90(0x08)
	float WaterDepthTrace; // 0xa98(0x04)
	int32_t WaterIndexTrace; // 0xa9c(0x04)
	struct FVector TraceImpactLocation; // 0xaa0(0x0c)
	struct FVector TraceImpactNormal; // 0xaac(0x0c)
	struct USoundBase* Sniper_Rifle_WaterImpactSound; // 0xab8(0x08)
	bool bHasPlayedWaterSound; // 0xac0(0x01)

	void PlayImpactSFX(bool IsPlayer, bool IsWater); // Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.PlayImpactSFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult HitResult, bool bIsOverlap); // Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnSniperTraceWaterHit(struct FHitResult WaterHit, struct AFortWaterBodyActor* WaterBody); // Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnSniperTraceWaterHit // (BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Bullet_Sniper(int32_t EntryPoint); // Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ExecuteUbergraph_B_Prj_Bullet_Sniper // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

