// BlueprintGeneratedClass BP_SprayDecal.BP_SprayDecal_C
// Size: 0xc66 (Inherited: 0xbb0)
struct ABP_SprayDecal_C : AFortSprayDecalInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbb0(0x08)
	float DecalFadeoutTime; // 0xbb8(0x04)
	char pad_BBC[0x4]; // 0xbbc(0x04)
	struct UDecalComponent* EmissiveDecal; // 0xbc0(0x08)
	struct UMaterialInstanceDynamic* EmissiveDecalMID; // 0xbc8(0x08)
	float DecalSize; // 0xbd0(0x04)
	char pad_BD4[0x4]; // 0xbd4(0x04)
	struct UMaterialInterface* EmissiveMatSource; // 0xbd8(0x08)
	float DecalDepth; // 0xbe0(0x04)
	char pad_BE4[0x4]; // 0xbe4(0x04)
	struct UAthenaSprayItemDefinition* SprayAsset; // 0xbe8(0x08)
	int32_t LoadsOutstanding; // 0xbf0(0x04)
	char pad_BF4[0x4]; // 0xbf4(0x04)
	struct TSoftObjectPtr<struct UTexture2D> DecalTextureOverrideSoft; // 0xbf8(0x28)
	struct UTexture2D* DecalTextureOverride; // 0xc20(0x08)
	struct FLinearColor BannerPrimaryColor; // 0xc28(0x10)
	struct FLinearColor BannerSecondaryColor; // 0xc38(0x10)
	struct AFortPlayerController* SpawningPlayerController; // 0xc48(0x08)
	struct TArray<struct AActor*> NearbyBuildingActors; // 0xc50(0x10)
	float SpawnStartTimeDelay; // 0xc60(0x04)
	bool bIsFrontEndPreview; // 0xc64(0x01)
	bool bDestroyOnTrapPlaced; // 0xc65(0x01)

	void AddBoxCollisionForCreative(); // Function BP_SprayDecal.BP_SprayDecal_C.AddBoxCollisionForCreative // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FindNearbyBuildingActorsAndBindDelegates(); // Function BP_SprayDecal.BP_SprayDecal_C.FindNearbyBuildingActorsAndBindDelegates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnbindAndClearNearbyBuildingActors(); // Function BP_SprayDecal.BP_SprayDecal_C.UnbindAndClearNearbyBuildingActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_DecalFadeoutTime(); // Function BP_SprayDecal.BP_SprayDecal_C.OnRep_DecalFadeoutTime // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FUniqueNetIdRepl GetInstigatorPlayerId(); // Function BP_SprayDecal.BP_SprayDecal_C.GetInstigatorPlayerId // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateDecalComponents(); // Function BP_SprayDecal.BP_SprayDecal_C.CreateDecalComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_SprayDecal.BP_SprayDecal_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA(struct UObject* Loaded); // Function BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_F925FF00475A018319C73E9FB1540BC6(struct UObject* Loaded); // Function BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F925FF00475A018319C73E9FB1540BC6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReady_B252FED346EAB98D54D786BD15C1CC7B(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function BP_SprayDecal.BP_SprayDecal_C.OnReady_B252FED346EAB98D54D786BD15C1CC7B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_SprayDecal.BP_SprayDecal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSprayAssetReplicatedDown(); // Function BP_SprayDecal.BP_SprayDecal_C.OnSprayAssetReplicatedDown // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSprayInfoReady(); // Function BP_SprayDecal.BP_SprayDecal_C.OnSprayInfoReady // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void StartSprayFadeOutDueToNewPlacement(); // Function BP_SprayDecal.BP_SprayDecal_C.StartSprayFadeOutDueToNewPlacement // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNearbyWallDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNearbyWallDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBounceOccurs(); // Function BP_SprayDecal.BP_SprayDecal_C.OnBounceOccurs // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnNearbyTrapPlaced(struct ABuildingTrap* Trap, bool bDetatched); // Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyTrapPlaced // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PostLevelSaveSpawnCleanup(); // Function BP_SprayDecal.BP_SprayDecal_C.PostLevelSaveSpawnCleanup // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnWallDestoryed(struct AActor* DestroyedActor); // Function BP_SprayDecal.BP_SprayDecal_C.OnWallDestoryed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_SprayDecal(int32_t EntryPoint); // Function BP_SprayDecal.BP_SprayDecal_C.ExecuteUbergraph_BP_SprayDecal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

