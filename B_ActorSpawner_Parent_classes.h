// BlueprintGeneratedClass B_ActorSpawner_Parent.B_ActorSpawner_Parent_C
// Size: 0x388 (Inherited: 0x230)
struct AB_ActorSpawner_Parent_C : AFortEQSPrevisActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UTextRenderComponent* EditorText-AmountToSpawn; // 0x238(0x08)
	struct UStaticMeshComponent* PreVisMesh; // 0x240(0x08)
	struct AActor* ClassToSpawn; // 0x248(0x08)
	bool UseWeightedSpawnClassList; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FFortWeightedActorTypeList WeightedSpawnClassList; // 0x258(0x50)
	struct FScalableFloat Row_Enabled; // 0x2a8(0x28)
	struct FScalableFloat Row_SpawnChance; // 0x2d0(0x28)
	struct FScalableFloat Row_EQS_SpawnDensity; // 0x2f8(0x28)
	float SpawnDelayMin; // 0x320(0x04)
	float SpawnDelayMax; // 0x324(0x04)
	bool DestroyAfterSpawn; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	float DestroySelfLifeMin; // 0x32c(0x04)
	float DestroySelfLifeMax; // 0x330(0x04)
	bool DestroyOnFailSpawnChance; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct FVector SpawnLocationOffset; // 0x338(0x0c)
	bool UsePrevisMeshScale; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	int32_t cachedSpawnAmount; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UEnvQueryInstanceBlueprintWrapper* QueryInstance; // 0x350(0x08)
	struct TArray<struct FVector> LocationsToSpawn; // 0x358(0x10)
	bool EQS_Enabled_MultiSpawn; // 0x368(0x01)
	bool EQS_RandomYaw; // 0x369(0x01)
	bool EQS_AlignToSurfaceNormal; // 0x36a(0x01)
	char pad_36B[0x1]; // 0x36b(0x01)
	int32_t EQS_NumtoSpawnMIN; // 0x36c(0x04)
	int32_t EQS_NumtoSpawnMAX; // 0x370(0x04)
	float EQS_ScaleMAX; // 0x374(0x04)
	float EQS_ScaleMIN; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct UEnvQuery* EQS_QueryTemplate; // 0x380(0x08)

	struct AActor* GetActorClassToSpawn(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.GetActorClassToSpawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReady_3020151C426C42F77FE60292E2524DFC(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.OnReady_3020151C426C42F77FE60292E2524DFC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ServerActorSpawned(struct AActor* Actor); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.ServerActorSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EQS Finished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.EQS Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartEQSSpawnLoop(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.StartEQSSpawnLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnActor(struct FTransform New Transform); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.SpawnActor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DestroySpawner(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.DestroySpawner // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PrepForPrevis(); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.PrepForPrevis // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_ActorSpawner_Parent(int32_t EntryPoint); // Function B_ActorSpawner_Parent.B_ActorSpawner_Parent_C.ExecuteUbergraph_B_ActorSpawner_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

