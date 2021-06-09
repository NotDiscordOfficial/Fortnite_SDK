// BlueprintGeneratedClass B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C
// Size: 0x8b9 (Inherited: 0x880)
struct AB_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C : AFortProjectile_DrunkHoming {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UAudioComponent* FireflyProjectileAudio; // 0x888(0x08)
	struct UNiagaraComponent* Fire_Trail_Niagara; // 0x890(0x08)
	float Fire Plane Spawn Offset; // 0x898(0x04)
	bool DoesMeshAngleNeedAdjusted; // 0x89c(0x01)
	char pad_89D[0x3]; // 0x89d(0x03)
	struct ABuildingGameplayActor* BGAToSpawn; // 0x8a0(0x08)
	bool HasHit; // 0x8a8(0x01)
	char pad_8A9[0x7]; // 0x8a9(0x07)
	struct USoundBase* Sound_Explode; // 0x8b0(0x08)
	bool IsHomingToGround; // 0x8b8(0x01)

	struct FTransform Find Mesh Angle(struct FVector HitLoc, struct FVector HitNotmal); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.Find Mesh Angle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Landed In Water(); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.Landed In Water // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HasNotLandedFadeOut(); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.HasNotLandedFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BeginDrunkenMovement(); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.BeginDrunkenMovement // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayClientFX(struct FVector HitLocationData); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.PlayClientFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile(int32_t EntryPoint); // Function B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile.B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile_C.ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_AdditionalProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

