// Class FreshCheeseRuntime.FortCheatManager_FreshCheese
// Size: 0x28 (Inherited: 0x28)
struct UFortCheatManager_FreshCheese : UChildCheatManager {

	void FreshCheeseInstancedLoot(struct FName TierGroup, int32_t NumFriends); // Function FreshCheeseRuntime.FortCheatManager_FreshCheese.FreshCheeseInstancedLoot // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3d5bcc4
};

// Class FreshCheeseRuntime.FriendChestNative
// Size: 0xf48 (Inherited: 0xe00)
struct AFriendChestNative : ABuildingContainer {
	char AssociatedSquadID; // 0xe00(0x01)
	char pad_E01[0x7]; // 0xe01(0x07)
	struct FScalableFloat TrigerActivationDelayCurve; // 0xe08(0x28)
	struct FSlateBrush MiniMapIconBrush; // 0xe30(0x88)
	struct UFortSimpleMiniMapIndicator* MinimapIndicator; // 0xeb8(0x08)
	struct FName InstancedLootTierGroup; // 0xec0(0x08)
	struct TArray<struct FName> LootTierGroups; // 0xec8(0x10)
	struct TArray<struct FFriendChestRoundPacing> RoundPacingForSquadSize; // 0xed8(0x10)
	struct TMap<int32_t, struct FFriendChestPlayerActivationPair> ActivationTimers; // 0xee8(0x50)
	char pad_F38[0x8]; // 0xf38(0x08)
	struct UFriendChestAnalytics* Analytics; // 0xf40(0x08)

	void RollInstancedLootForSquadMembers(struct AGameModeBase* GameMode, char SquadId); // Function FreshCheeseRuntime.FriendChestNative.RollInstancedLootForSquadMembers // (Final|Native|Public|BlueprintCallable) // @ game+0x3d5c188
	void ResetLootTierForAssociatedSquad(bool bOnlyAlive); // Function FreshCheeseRuntime.FriendChestNative.ResetLootTierForAssociatedSquad // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3d5c088
	void PlayerRemoved(struct AFortPlayerPawnAthena* Player); // Function FreshCheeseRuntime.FriendChestNative.PlayerRemoved // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PlayerAdded(struct AFortPlayerPawnAthena* Player); // Function FreshCheeseRuntime.FriendChestNative.PlayerAdded // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnXpEvent(struct FXPEventInfo XPEvent); // Function FreshCheeseRuntime.FriendChestNative.OnXpEvent // (Final|Native|Private|HasOutParms) // @ game+0x3d5bfc0
	void OnTriggerComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function FreshCheeseRuntime.FriendChestNative.OnTriggerComponentEndOverlap // (Final|Native|Public|BlueprintCallable) // @ game+0x267e3f4
	void OnTriggerComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function FreshCheeseRuntime.FriendChestNative.OnTriggerComponentBeginOverlap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x246d9a4
	void OnPlayerTimeout(struct AFortPlayerStateAthena* Player); // Function FreshCheeseRuntime.FriendChestNative.OnPlayerTimeout // (Final|Native|Public|BlueprintCallable) // @ game+0x3ce1cd8
	void OnPlayerLeave(struct AFortPlayerStateAthena* Player); // Function FreshCheeseRuntime.FriendChestNative.OnPlayerLeave // (Final|Native|Public|BlueprintCallable) // @ game+0x3ce1cd8
	void OnPlayerHit(struct AFortPlayerStateAthena* Player, bool bWasSuccessful); // Function FreshCheeseRuntime.FriendChestNative.OnPlayerHit // (Final|Native|Public|BlueprintCallable) // @ game+0x3d5beec
	void OnPlayerEnter(struct AFortPlayerStateAthena* Player); // Function FreshCheeseRuntime.FriendChestNative.OnPlayerEnter // (Final|Native|Public|BlueprintCallable) // @ game+0x3ce1cd8
	int32_t GetNumTargetsForNextRound(int32_t SquadSize, int32_t RemainingTargets); // Function FreshCheeseRuntime.FriendChestNative.GetNumTargetsForNextRound // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d5bdb0
	void GetAssociatedSquadMembers(bool bIncludeDead, bool bIncludeResurectable, bool bIncludeDisconnected, struct TArray<struct AFortPlayerStateAthena*> OutSquadMembers); // Function FreshCheeseRuntime.FriendChestNative.GetAssociatedSquadMembers // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x1738d9c
	char GetAssociatedSquadID(); // Function FreshCheeseRuntime.FriendChestNative.GetAssociatedSquadID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d5bd98
	void CreateIndicators(); // Function FreshCheeseRuntime.FriendChestNative.CreateIndicators // (Final|Native|Public|BlueprintCallable) // @ game+0x3d5bcb0
};

// Class FreshCheeseRuntime.FriendChestAnalytics
// Size: 0x50 (Inherited: 0x28)
struct UFriendChestAnalytics : UObject {
	char pad_28[0x4]; // 0x28(0x04)
	struct FVector SpawnCoordinates; // 0x2c(0x0c)
	char pad_38[0x8]; // 0x38(0x08)
	struct TArray<struct FFriendChestAnalyticsParticipant> Participants; // 0x40(0x10)
};

