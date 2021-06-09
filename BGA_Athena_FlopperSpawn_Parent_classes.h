// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C
// Size: 0xd18 (Inherited: 0x898)
struct ABGA_Athena_FlopperSpawn_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UBoxComponent* OverlapVolume; // 0x8a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x8a8(0x08)
	struct FScalableFloat Row_MaxUses; // 0x8b0(0x28)
	struct FScalableFloat Row_MinUses; // 0x8d8(0x28)
	int32_t Uses; // 0x900(0x04)
	float AfterHideLifeSpan; // 0x904(0x04)
	struct FName ItemsToDrop; // 0x908(0x08)
	struct FGameplayTag GC_Spawn; // 0x910(0x08)
	struct FScalableFloat Row_SpawnChanceMax; // 0x918(0x28)
	bool IsWorldSpawner; // 0x940(0x01)
	char pad_941[0x7]; // 0x941(0x07)
	struct FScalableFloat Row_SpawnChanceMin; // 0x948(0x28)
	struct TMap<struct FGameplayTag, struct FName> TagToLoot_FishingSpotTier; // 0x970(0x50)
	bool AlreadySpawnChecked; // 0x9c0(0x01)
	char pad_9C1[0x7]; // 0x9c1(0x07)
	struct TMap<struct FGameplayTag, struct FName> TagToLoot_DefaultTier; // 0x9c8(0x50)
	struct TMap<struct FGameplayTag, struct FName> TagToLoot_ToUse; // 0xa18(0x50)
	struct TMap<struct FGameplayTag, struct FName> TagToLoot_HighTier_FishingRod; // 0xa68(0x50)
	bool HasTypeTag; // 0xab8(0x01)
	char pad_AB9[0x7]; // 0xab9(0x07)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0xac0(0x10)
	struct FGameplayTagContainer LootTags; // 0xad0(0x20)
	bool MaxUses; // 0xaf0(0x01)
	bool debug; // 0xaf1(0x01)
	char pad_AF2[0x6]; // 0xaf2(0x06)
	struct FScalableFloat Row_AddedBobChanceOnOverlapMin; // 0xaf8(0x28)
	struct FScalableFloat Row_AddedBobChanceOnOverlapMax; // 0xb20(0x28)
	struct AFortPickup* SpawnedItem; // 0xb48(0x08)
	struct USoundBase* Sound_HighTierPoolSpawn; // 0xb50(0x08)
	struct FGameplayTagContainer QuestTag_DefaultSpawn; // 0xb58(0x20)
	struct FGameplayTagContainer QuestTag_WorldSpawn; // 0xb78(0x20)
	struct APrj_Athena_FloppingRabbit_C* Projectile; // 0xb98(0x08)
	struct UCurveFloat* FishSizeCurve; // 0xba0(0x08)
	struct TMap<struct UFortItemDefinition*, struct FScalableFloat> FishSizeMap; // 0xba8(0x50)
	float MiniGameFishSizeThreshold; // 0xbf8(0x04)
	char pad_BFC[0x4]; // 0xbfc(0x04)
	struct FScalableFloat MiniGameFishSizePercentileThreshold; // 0xc00(0x28)
	bool AlwaysStartMiniGame; // 0xc28(0x01)
	char pad_C29[0x3]; // 0xc29(0x03)
	struct FGameplayTag HighTierFishingRod; // 0xc2c(0x08)
	struct FName HighTierLootData; // 0xc34(0x08)
	struct FGameplayTag DefaultLootTag; // 0xc3c(0x08)
	char pad_C44[0x4]; // 0xc44(0x04)
	struct FString Fish Variant String; // 0xc48(0x10)
	bool New Best Fish; // 0xc58(0x01)
	char pad_C59[0x3]; // 0xc59(0x03)
	float Fish Length; // 0xc5c(0x04)
	float RespawnDelay; // 0xc60(0x04)
	char pad_C64[0x4]; // 0xc64(0x04)
	struct FScalableFloat Row_RespawnDelayMin; // 0xc68(0x28)
	struct FScalableFloat Row_RespawnDelayMax; // 0xc90(0x28)
	float ForcedRespawnDelay; // 0xcb8(0x04)
	char pad_CBC[0x4]; // 0xcbc(0x04)
	struct TMap<struct FGameplayTag, struct FScalableFloat> FishSizeMap_ItemTags; // 0xcc0(0x50)
	struct UFortItemDefinition* NewVar_1; // 0xd10(0x08)

	void FindFishSize(struct TMap<struct FGameplayTag, struct FScalableFloat> FishSizeMap, struct UFortItemDefinition* ItemDef, struct FScalableFloat FishSize, bool Found); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.FindFishSize // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool Can Respawn(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Can Respawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetRespawnDelay(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetRespawnDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetLootTier(bool IsExplosion, bool IsProFishingRod, struct FName Output_Get); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.GetLootTier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShouldKill(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ShouldKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleUseTracking(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HandleUseTracking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBalanceValues(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SetBalanceValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void UserConstructionScript(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReady_5804F209455A50B3EE64E3AED087DE64(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.OnReady_5804F209455A50B3EE64E3AED087DE64 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideAndKill(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndKill // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PlaySpawnItemHightier(struct FVector Location); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.PlaySpawnItemHightier // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FishingComplete(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.FishingComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SpawnItem(struct AActor* Target, bool Hooked, struct USceneComponent* HookComponent, struct FVector SpawnLoc, struct AActor* Player, float ItemSpawnDelay, bool CaughtWithFishingRod, bool CaughtWithHappyGhost, struct AActor* ItemUsedToFish, struct APrj_Athena_FloppingRabbit_C* Projectile, struct FGameplayTagContainer Required Tags); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.SpawnItem // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCollectionsComponent(bool bCaughtFish, struct AActor* Player, struct UFortItemDefinition* ItemDefinition, struct AFortPickup* Pickup, float Length); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.UpdateCollectionsComponent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Clear Saved Collection Data(); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.Clear Saved Collection Data // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideAndDelayForRespawn(float TimeToDelay); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.HideAndDelayForRespawn // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent(int32_t EntryPoint); // Function BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

