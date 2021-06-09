// BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C
// Size: 0xbb0 (Inherited: 0x9f8)
struct AB_Prj_Athena_Grenade_MolotovCocktail_C : AB_Prj_Athena_Grenade_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9f8(0x08)
	struct UNiagaraComponent* Niagara_Projectile_Particles; // 0xa00(0x08)
	struct FVector Hit Location; // 0xa08(0x0c)
	char pad_A14[0x4]; // 0xa14(0x04)
	struct USoundBase* Bottle Smash Audio Cue; // 0xa18(0x08)
	struct USoundBase* Ignite Audio Cue; // 0xa20(0x08)
	struct FVector Hit Normal; // 0xa28(0x0c)
	char pad_A34[0x4]; // 0xa34(0x04)
	struct TArray<struct FVector> ProjectileSpawnVectors; // 0xa38(0x10)
	struct FScalableFloat SpawnedProjectileMinSpeed; // 0xa48(0x28)
	struct FScalableFloat SpawnedProjectileMaxSpeed; // 0xa70(0x28)
	struct FScalableFloat ConeHalfAngleInDegrees; // 0xa98(0x28)
	struct FScalableFloat FireBallsToSpawn; // 0xac0(0x28)
	bool CurieActivated; // 0xae8(0x01)
	char pad_AE9[0x7]; // 0xae9(0x07)
	struct FScalableFloat DoWeUseHomingProjectile; // 0xaf0(0x28)
	struct FVector ReflectionVector; // 0xb18(0x0c)
	float FireflyProjectileAngleExtreme; // 0xb24(0x04)
	struct FVector FireflyProjectileDirection; // 0xb28(0x0c)
	float FireflyProjectileRadius_Min; // 0xb34(0x04)
	float FireflyProjectileRadius_Max; // 0xb38(0x04)
	struct FVector FireflyProjectileEndPoint; // 0xb3c(0x0c)
	int32_t NumProjectileSpawned; // 0xb48(0x04)
	int32_t NumProjectilesToSpawn; // 0xb4c(0x04)
	struct FVector NewTemp; // 0xb50(0x0c)
	bool EnteredWater; // 0xb5c(0x01)
	bool Hit; // 0xb5d(0x01)
	char pad_B5E[0x2]; // 0xb5e(0x02)
	struct UFXSystemAsset* Sound_EnterWater; // 0xb60(0x08)
	struct UFortWorldItemDefinition* ItemToSpawn_Molotov; // 0xb68(0x08)
	bool CanInteractWithWater; // 0xb70(0x01)
	char pad_B71[0xf]; // 0xb71(0x0f)
	struct FTransform SpawnBGATransform; // 0xb80(0x30)

	void FireflyProjectileLogic(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.FireflyProjectileLogic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Drunk Projectiles(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Drunk Projectiles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurieActive_7575DCC3440AA42836D7988BCA6485E5(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.OnCurieActive_7575DCC3440AA42836D7988BCA6485E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void HasEnteredWater(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.HasEnteredWater // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Defer BGA Spawn(); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Defer BGA Spawn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail(int32_t EntryPoint); // Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

