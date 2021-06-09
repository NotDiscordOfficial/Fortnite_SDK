// Class VendettaRuntime.BountyPuckWeaponComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UBountyPuckWeaponComponent : UActorComponent {
	struct FMulticastInlineDelegate OnTargetDataChanged; // 0xb0(0x10)
};

// Class VendettaRuntime.EnvQueryContext_VendettaGameModePickups
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_VendettaGameModePickups : UEnvQueryContext {
};

// Class VendettaRuntime.EnvQueryContext_VendettaLeadingPlayerLocation
// Size: 0x28 (Inherited: 0x28)
struct UEnvQueryContext_VendettaLeadingPlayerLocation : UEnvQueryContext {
};

// Class VendettaRuntime.FortAthenaMutator_Vendetta
// Size: 0x1f70 (Inherited: 0x1118)
struct AFortAthenaMutator_Vendetta : AFortAthenaMutator_Wax {
	struct FAthenaGameMessageData VendettaMessageData; // 0x1118(0x40)
	float MasterHunterHuntingMessageDelay; // 0x1158(0x04)
	char pad_115C[0x4]; // 0x115c(0x04)
	struct FText MyBountyKilledByMisadventureText; // 0x1160(0x18)
	struct FText MyBountyKilledByMeText; // 0x1178(0x18)
	struct FText MyBountyKilledByAllyText; // 0x1190(0x18)
	struct FText MyBountyKilledByEnemyText; // 0x11a8(0x18)
	struct FText FoundMyOwnBountyText; // 0x11c0(0x18)
	struct FText AllyFoundMyBountyText; // 0x11d8(0x18)
	struct FText YouFoundAnAllyBountyText; // 0x11f0(0x18)
	struct FText TargetIsNearText; // 0x1208(0x18)
	struct FText MasterHunterHunterIsNearText; // 0x1220(0x18)
	struct FText MasterHunterIsHuntingYouText; // 0x1238(0x18)
	struct FText HunterIsNearText; // 0x1250(0x18)
	struct FText MasterHunterHasSpawned; // 0x1268(0x18)
	struct FText MasterHunterHasBeenKilled; // 0x1280(0x18)
	struct FText MasterHunterHasBeenKilledByLocalPlayer; // 0x1298(0x18)
	struct FText NoTargetsFoundInRangeMessageText; // 0x12b0(0x18)
	struct FText FoundTargetsInRangeMessageText; // 0x12c8(0x18)
	struct FText FoundTargetsInRangeButPuckNotEquippedText; // 0x12e0(0x18)
	struct USoundBase* MasterHunterSpawnedSound; // 0x12f8(0x08)
	struct USoundCue* TargetNearbySound; // 0x1300(0x08)
	struct USoundCue* TargetKilledSound; // 0x1308(0x08)
	struct USoundBase* LocalPlayerKilledSound; // 0x1310(0x08)
	struct USoundBase* LocalPlayerKilledByMasterHunterSound; // 0x1318(0x08)
	struct USoundBase* LocalPlayerRespawnSound; // 0x1320(0x08)
	struct FGameplayTag LocalActiveBountyPuckUITag; // 0x1328(0x08)
	struct FText LocalActiveBountyPuckTitle; // 0x1330(0x18)
	struct FText LocalActiveBountyPuckDescription; // 0x1348(0x18)
	struct FFortAthenaCompassIcon ActiveBountyCompassIcon; // 0x1360(0xa0)
	struct FRadiusTrackingInitializer ActiveBountyPuckTargetMapTrackingDetails; // 0x1400(0x58)
	struct FMulticastInlineDelegate OnBountyPuckRarityChanged; // 0x1458(0x10)
	struct FMulticastInlineDelegate OnMasterHunterSpawned; // 0x1468(0x10)
	struct UFortUrgentQuestItemDefinition* ActiveBountyQuestToGrantDef; // 0x1478(0x08)
	struct UFortUrgentQuestItemDefinition* MasterHunterTargetQuestToGrantDef; // 0x1480(0x08)
	struct UFortUrgentQuestItemDefinition* BountyTargetQuestToGrantDef; // 0x1488(0x08)
	struct FBountyQuestSettings BountyQuestSettings; // 0x1490(0x100)
	struct FScalableFloat bAllowWaxPickupSplit; // 0x1590(0x28)
	struct FGameplayTag HunterAIGameplayTag; // 0x15b8(0x08)
	struct UFortAthenaAISpawnerData* CloserAISpawnerData; // 0x15c0(0x08)
	struct UFortAthenaAISpawnerData* SniperAISpawnerData; // 0x15c8(0x08)
	struct UFortAthenaAISpawnerData* TankAISpawnerData; // 0x15d0(0x08)
	struct UFortAthenaAISpawnerData* MasterHunterAISpawnerData; // 0x15d8(0x08)
	struct TMap<struct FGameplayTag, struct FScalableFloat> HunterAIGameplayTagToStartingTokenMap; // 0x15e0(0x50)
	struct UFortBotNameSettings* AIHunterNameSettings; // 0x1630(0x08)
	struct FName HunterAIWeaponDroppedOnDeathTag; // 0x1638(0x08)
	struct UBehaviorTree* HunterAIBehaviorTree; // 0x1640(0x08)
	enum class EAthenaGamePhase StartingBountyPuckGiveGamePhase; // 0x1648(0x01)
	char pad_1649[0x7]; // 0x1649(0x07)
	struct UFortWorldItemDefinition* BountyPuckItemDef; // 0x1650(0x08)
	struct UFortControllerComponent_MarkActorsInRadius* VendettaMarkAIComponentClass; // 0x1658(0x08)
	struct FScalableFloat BountyBonusGained_BaseBonusValue; // 0x1660(0x28)
	struct FScalableFloat BountyBonusGained_TimeIntervalKeyedPerMinute; // 0x1688(0x28)
	struct FScalableFloat BountyBonusGained_BonusPerIntervalKeyedPerMinute; // 0x16b0(0x28)
	struct FScalableFloat BountyBonusGained_BonusAccrualStopMinute; // 0x16d8(0x28)
	struct FScalableFloat HunterEnterNearDistance; // 0x1700(0x28)
	struct FScalableFloat HunterExitNearDistance; // 0x1728(0x28)
	struct FScalableFloat UpdateIntervalHuntedStatus; // 0x1750(0x28)
	struct FScalableFloat UpdateIntervalBountyRewardValue; // 0x1778(0x28)
	struct TArray<struct FVendettaBountyPuckRarityData> BountyPuckRarityDataList; // 0x17a0(0x10)
	struct FGameplayTag MasterHunterGameplayTag; // 0x17b0(0x08)
	struct FScalableFloat MasterHunterRespawnDelayDuration; // 0x17b8(0x28)
	struct FScalableFloat MasterHunterRetrySpawnDelayDuration; // 0x17e0(0x28)
	struct FScalableFloat MasterHunterSpawnScoreThreshold; // 0x1808(0x28)
	struct UEnvQuery* MasterHunterSpawnLocationQuery; // 0x1830(0x08)
	struct FVendettaEQSQueryData MasterHunterSpawnLocationQueryGridHalfSizeData; // 0x1838(0x30)
	struct FVendettaEQSQueryData MasterHunterSpawnDistanceFromLeadingPlayerLocationMinData; // 0x1868(0x30)
	struct FVendettaEQSQueryData MasterHunterSpawnDistanceFromLeadingPlayerLocationMaxData; // 0x1898(0x30)
	struct FScalableFloat HunterAITargetDistanceScore; // 0x18c8(0x28)
	struct FScalableFloat HunterAIExistingTargetingBountyPuckScore; // 0x18f0(0x28)
	struct FScalableFloat HunterAIPreferredTargetScore; // 0x1918(0x28)
	struct FScalableFloat HunterAITargetEloScore; // 0x1940(0x28)
	struct FScalableFloat HunterAITargetCreditValueScore; // 0x1968(0x28)
	struct FScalableFloat HunterAIRelativeELO; // 0x1990(0x28)
	struct FScalableFloat MasterHunterRelativeELO; // 0x19b8(0x28)
	struct FScalableFloat MaxWaxPickupValue; // 0x19e0(0x28)
	struct UEnvQuery* WaxPickupSpawnLocationQuery; // 0x1a08(0x08)
	struct UEnvQuery* WaxPickupSpawnLocationQueryPerfAlternate; // 0x1a10(0x08)
	struct FScalableFloat bUsePerfAlternateWaxPickupSpawnLocationQuery; // 0x1a18(0x28)
	struct FScalableFloat WaxPickupRetrySpawnDelayDuration; // 0x1a40(0x28)
	struct FVendettaEQSQueryData WaxPickupSpawnLocationQueryGridSpaceBetweenMultiplierData; // 0x1a68(0x30)
	struct FVendettaEQSQueryData WaxPickupSpawnLocationQueryGridHalfSizeMultiplierData; // 0x1a98(0x30)
	struct FVendettaEQSQueryData WaxPickupMaxDistFromSafeZoneIndicatorCenterMultiplierData; // 0x1ac8(0x30)
	struct FVendettaEQSQueryData WaxPickupMinDistFromAllPlayersMultiplierData; // 0x1af8(0x30)
	struct FVendettaEQSQueryData WaxPickupMinDistFromAllOtherWaxPickupsMultiplierData; // 0x1b28(0x30)
	struct FGameplayTag RiftTeleportEventTag; // 0x1b58(0x08)
	struct FGameplayTag CantinaHunterAIGameplayTag; // 0x1b60(0x08)
	struct FGameplayTag CantinaPOILocationTag; // 0x1b68(0x08)
	struct FVector CantinaPOILocationOverride; // 0x1b70(0x0c)
	char pad_1B7C[0x4]; // 0x1b7c(0x04)
	struct FScalableFloat bGiveCantinaHunterAIBountyPuck; // 0x1b80(0x28)
	struct FScalableFloat HunterAICantinaPOIRadialInnerLeashRadius; // 0x1ba8(0x28)
	struct FScalableFloat HunterAICantinaPOIRadialOuterLeashRadius; // 0x1bd0(0x28)
	struct FScalableFloat HunterAICantinaPOILeashDuration; // 0x1bf8(0x28)
	struct UBehaviorTree* HunterAICantinaBehaviorTree; // 0x1c20(0x08)
	struct FScalableFloat bShowDebugAITargetNames; // 0x1c28(0x28)
	char pad_1C50[0x8]; // 0x1c50(0x08)
	struct TWeakObjectPtr<struct AFortPlayerStateAthena> MasterHunterPlayerState; // 0x1c58(0x08)
	struct FVendettaReplicatedUIMessage ReplicatedUIMessage; // 0x1c60(0x20)
	char pad_1C80[0x8]; // 0x1c80(0x08)
	struct FAthenaGameMessageData LandedFromBusMessageData; // 0x1c88(0x40)
	struct FGameplayTag EliminateMarkedTargetAccoladeTag; // 0x1cc8(0x08)
	struct FGameplayTag EliminateThreeMarkedTargetAccoladeTag; // 0x1cd0(0x08)
	struct FGameplayTag EliminateHunterAIAccoladeTag; // 0x1cd8(0x08)
	struct FGameplayTag EliminateThreeHunterAIsAccoladeTag; // 0x1ce0(0x08)
	char pad_1CE8[0x10]; // 0x1ce8(0x10)
	struct FGameplayTag EliminateMasterHunterAccoladeTag; // 0x1cf8(0x08)
	struct FGameplayTag EliminateYourHunterHunterAIAccoladeTag; // 0x1d00(0x08)
	struct FGameplayTag FirstStormPhaseTargetEliminationAccoladeTag; // 0x1d08(0x08)
	struct FGameplayTag MaxBountyBonusTargetEliminationAccoladeTag; // 0x1d10(0x08)
	struct FGameplayTag EliminateATopThreePlayerAccoladeTag; // 0x1d18(0x08)
	struct FGameplayTag EliminateTopPlayerAccoladeTag; // 0x1d20(0x08)
	struct FGameplayTag HunterAIAsTargetAccoladeTag; // 0x1d28(0x08)
	struct FGameplayTag ClearFriendlyBountyAccoladeTag; // 0x1d30(0x08)
	struct FGameplayTag PickUpHunterAIWeaponAccoladeTag; // 0x1d38(0x08)
	struct FGameplayTag LeadingPlayerAtMasterHunterSpawnAccoladeTag; // 0x1d40(0x08)
	struct AFortAthenaMutator_EQSActorSpawner* EQSActorSpawnerMutator; // 0x1d48(0x08)
	struct FVendettaBountyPuckTargetingDataArray BountyPuckTargetingData; // 0x1d50(0x118)
	char pad_1E68[0xa0]; // 0x1e68(0xa0)
	struct TArray<struct FVendettaPlayerData> VendettaPlayerDataList; // 0x1f08(0x10)
	char pad_1F18[0x58]; // 0x1f18(0x58)

	void UnregisterBountyPuckWeaponComponent(struct FGuid TrackerGuid, struct UBountyPuckWeaponComponent* BountyPuckWeaponComponent); // Function VendettaRuntime.FortAthenaMutator_Vendetta.UnregisterBountyPuckWeaponComponent // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3de7e1c
	void ShowUIMessageToAllClients(struct FText MessageText); // Function VendettaRuntime.FortAthenaMutator_Vendetta.ShowUIMessageToAllClients // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3de7fcc
	void RegisterBountyPuckWeaponComponent(struct FGuid TrackerGuid, struct UBountyPuckWeaponComponent* BountyPuckWeaponComponent); // Function VendettaRuntime.FortAthenaMutator_Vendetta.RegisterBountyPuckWeaponComponent // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3de7e1c
	void OnRep_ReplicatedUIMessage(); // Function VendettaRuntime.FortAthenaMutator_Vendetta.OnRep_ReplicatedUIMessage // (Final|Native|Private) // @ game+0x3de7dac
	void OnRep_MasterHunterPlayerState(); // Function VendettaRuntime.FortAthenaMutator_Vendetta.OnRep_MasterHunterPlayerState // (Final|Native|Private) // @ game+0x3de7d98
	void OnRep_BountyPuckTargetingData(); // Function VendettaRuntime.FortAthenaMutator_Vendetta.OnRep_BountyPuckTargetingData // (Final|Native|Private) // @ game+0x3de7c70
	void MulticastOnMasterHunterDied(struct AFortPlayerStateAthena* MasterHuntersKiller); // Function VendettaRuntime.FortAthenaMutator_Vendetta.MulticastOnMasterHunterDied // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x3de7bbc
	void MulticastOnHuntersSpawned(struct FName SpawnGroup); // Function VendettaRuntime.FortAthenaMutator_Vendetta.MulticastOnHuntersSpawned // (Final|Net|NetReliableNative|Event|NetMulticast|Private|BlueprintCallable) // @ game+0x3de7b20
	bool HasMasterHunterSpawned(); // Function VendettaRuntime.FortAthenaMutator_Vendetta.HasMasterHunterSpawned // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x3de7b08
	void HandleHunterAISpawned(struct APawn* SpawnedAI, struct UFortAthenaAISpawnerData* SpawnerData, struct UEQSActorSpawner* EQSActorSpawner); // Function VendettaRuntime.FortAthenaMutator_Vendetta.HandleHunterAISpawned // (Final|Native|Private) // @ game+0x3de79e4
	struct FVendettaBountyPuckTargetData GetBountyPuckTargetDataCopyForGuid(struct FGuid BountyPuckTrackerGuid); // Function VendettaRuntime.FortAthenaMutator_Vendetta.GetBountyPuckTargetDataCopyForGuid // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3de7574
	enum class EFortRarity GetBountyPuckRarityForGuid(struct FGuid BountyPuckTrackerGuid); // Function VendettaRuntime.FortAthenaMutator_Vendetta.GetBountyPuckRarityForGuid // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3de74c4
};

// Class VendettaRuntime.FortChargingSet_Vendetta_MarkTarget
// Size: 0xe8 (Inherited: 0x48)
struct UFortChargingSet_Vendetta_MarkTarget : UFortChargingSet_Base {
	struct FFortGameplayAttributeData CurrentCharge; // 0x48(0x28)
	struct FFortGameplayAttributeData MaxCharge; // 0x70(0x28)
	struct FFortGameplayAttributeData ChargeTime; // 0x98(0x28)
	struct FFortGameplayAttributeData ServerTimeChargeIncrements; // 0xc0(0x28)

	void OnRep_CurrentCharge(struct FFortGameplayAttributeData OldValue); // Function VendettaRuntime.FortChargingSet_Vendetta_MarkTarget.OnRep_CurrentCharge // (Final|Native|Protected|HasOutParms) // @ game+0x3de7c94
};

// Class VendettaRuntime.FortCheatManager_Vendetta
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_Vendetta : UFortCheatManager_Wax {

	void VendettaSpawnTankAI(float Distance); // Function VendettaRuntime.FortCheatManager_Vendetta.VendettaSpawnTankAI // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3dc3d3c
	void VendettaSpawnSniperAI(float Distance); // Function VendettaRuntime.FortCheatManager_Vendetta.VendettaSpawnSniperAI // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3dc3d3c
	void VendettaSpawnMasterAI(float Distance); // Function VendettaRuntime.FortCheatManager_Vendetta.VendettaSpawnMasterAI // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3dc3d3c
	void VendettaSpawnCloserAI(float Distance); // Function VendettaRuntime.FortCheatManager_Vendetta.VendettaSpawnCloserAI // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3dc3d3c
};

// Class VendettaRuntime.FortGameModePickup_Vendetta
// Size: 0x8a0 (Inherited: 0x8a0)
struct AFortGameModePickup_Vendetta : AFortGameModePickup_Wax {
};

// Class VendettaRuntime.VendettaHunterAIBotController
// Size: 0xf78 (Inherited: 0xf30)
struct AVendettaHunterAIBotController : AFortAthenaAIBotController {
	float UpdateBountyTargetInterval; // 0xf30(0x04)
	float BountyTargetForgetTimePadding; // 0xf34(0x04)
	struct FScalableFloat bHostileTowardTargetSquad; // 0xf38(0x28)
	char pad_F60[0x18]; // 0xf60(0x18)
};

// Class VendettaRuntime.VendettaPlayerComponent
// Size: 0x4d0 (Inherited: 0xb0)
struct UVendettaPlayerComponent : UFortControllerComponent {
	struct FVendettaTargetMarkedStatusData TargetMarkedStatusData; // 0xb0(0x02)
	enum class EVendettaHuntedStatus HuntedStatus; // 0xb2(0x01)
	enum class EVendettaHuntedStatus MasterHunterHuntedStatus; // 0xb3(0x01)
	enum class EVendettaHuntedStatus HunterStatus; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct FMulticastInlineDelegate OnVendettaActiveBountyPuckGuidChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnTargetEliminated; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnNonTargetEliminated; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnOwnBountyCollectedByTeammate; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnCollectedTeammateBounty; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnTargetNearby; // 0x108(0x10)
	struct FMulticastInlineDelegate OnHunterNearby; // 0x118(0x10)
	struct FMulticastInlineDelegate OnHuntersSpawned; // 0x128(0x10)
	struct FMulticastInlineDelegate OnMasterHunterSpawned; // 0x138(0x10)
	struct FMulticastInlineDelegate OnMasterHunterHuntingYou; // 0x148(0x10)
	struct FMulticastInlineDelegate OnMasterHunterEliminated; // 0x158(0x10)
	struct FMulticastInlineDelegate OnMasterHunterNearby; // 0x168(0x10)
	struct FMulticastInlineDelegate OnRespawn; // 0x178(0x10)
	struct FMulticastInlineDelegate OnTookLead; // 0x188(0x10)
	struct FMulticastInlineDelegate OnLostLead; // 0x198(0x10)
	struct FMulticastInlineDelegate OnHunterStatusChanged; // 0x1a8(0x10)
	struct FMulticastInlineDelegate OnEnemyTeamCloseToWinning; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnAllyTeamCloseToWinning; // 0x1c8(0x10)
	struct FMulticastInlineDelegate OnPickedUpCredits; // 0x1d8(0x10)
	struct UGenericMessageQueue* TopUIMessageQueue; // 0x1e8(0x08)
	struct FVendettaPlayerHuntedStatusArray SquadmateHuntedStatuses; // 0x1f0(0x118)
	char pad_308[0x50]; // 0x308(0x50)
	struct AFortAthenaMutator_Vendetta* ManagingMutator; // 0x358(0x08)
	char pad_360[0x8]; // 0x360(0x08)
	struct FGuid ActiveBountyPuckGuid; // 0x368(0x10)
	char pad_378[0x8]; // 0x378(0x08)
	struct FVendettaActiveBountyTargetDataArray ActiveBountyTargetDataArray; // 0x380(0x118)
	char pad_498[0x38]; // 0x498(0x38)

	void SetActiveBountyPuckGuid(struct FGuid InBountyPuckGuid, bool bPreviousBountyWasCompleted); // Function VendettaRuntime.VendettaPlayerComponent.SetActiveBountyPuckGuid // (Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3de7ef4
	void OnRep_TargetMarkedStatusData(); // Function VendettaRuntime.VendettaPlayerComponent.OnRep_TargetMarkedStatusData // (Final|Native|Protected) // @ game+0x3de7dd4
	void OnRep_SquadmateHuntedStatuses(); // Function VendettaRuntime.VendettaPlayerComponent.OnRep_SquadmateHuntedStatuses // (Final|Native|Protected) // @ game+0x3de7dc0
	void OnRep_ManagingMutator(); // Function VendettaRuntime.VendettaPlayerComponent.OnRep_ManagingMutator // (Final|Native|Protected) // @ game+0x3de7d84
	void OnRep_HunterStatus(); // Function VendettaRuntime.VendettaPlayerComponent.OnRep_HunterStatus // (Final|Native|Protected) // @ game+0x3de7d70
	void OnRep_ActiveBountyPuckGuid(); // Function VendettaRuntime.VendettaPlayerComponent.OnRep_ActiveBountyPuckGuid // (Final|Native|Protected) // @ game+0x3de7c5c
	void HandleCreditsPickedUp(struct AFortPlayerStateAthena* Player, int32_t Amount); // Function VendettaRuntime.VendettaPlayerComponent.HandleCreditsPickedUp // (Final|Native|Protected) // @ game+0x3de78fc
	void HandleClientStartedRespawn(struct AFortPlayerControllerZone* PlayerController); // Function VendettaRuntime.VendettaPlayerComponent.HandleClientStartedRespawn // (Final|Native|Protected) // @ game+0x3de7860
	void HandleClientLandedFromBus(struct AFortPlayerControllerZone* PlayerController); // Function VendettaRuntime.VendettaPlayerComponent.HandleClientLandedFromBus // (Final|Native|Protected) // @ game+0x3de77c4
	void HandleBountyPuckRarityChanged(struct FGuid TrackerGuid, enum class EFortRarity NewRarity); // Function VendettaRuntime.VendettaPlayerComponent.HandleBountyPuckRarityChanged // (Final|Native|Protected|HasDefaults) // @ game+0x3de76c8
	int32_t GetMasterHunterCurrentTokens(); // Function VendettaRuntime.VendettaPlayerComponent.GetMasterHunterCurrentTokens // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3de76a4
	struct AFortAthenaMutator_Vendetta* GetManagingMutator(); // Function VendettaRuntime.VendettaPlayerComponent.GetManagingMutator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3de768c
	struct AFortPlayerStateAthena* GetActiveBountyPuckTarget(); // Function VendettaRuntime.VendettaPlayerComponent.GetActiveBountyPuckTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3de74ac
	struct FGuid GetActiveBountyPuckGuid(); // Function VendettaRuntime.VendettaPlayerComponent.GetActiveBountyPuckGuid // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3de7490
	void ClientPlayDeathMusic(struct USoundBase* DeathMusic); // Function VendettaRuntime.VendettaPlayerComponent.ClientPlayDeathMusic // (Net|Native|Event|Public|NetClient) // @ game+0x3dd3f70
	void ClientOnKilledNonTarget(struct AFortPlayerStateAthena* VictimPlayerState, int32_t VictimRewardValue); // Function VendettaRuntime.VendettaPlayerComponent.ClientOnKilledNonTarget // (Net|Native|Event|Public|NetClient) // @ game+0x3de73a4
	void ClientOnBountyPuckTargetDied(struct AFortPlayerStateAthena* VictimPlayerState, struct AFortPlayerStateAthena* KillerPlayerState, struct AFortPlayerStateAthena* NewTargetPlayerState, int32_t VictimRewardValue, int32_t VictimBonusValue); // Function VendettaRuntime.VendettaPlayerComponent.ClientOnBountyPuckTargetDied // (Net|Native|Event|Public|NetClient) // @ game+0x3de71c8
	void ClientOnBountyPuckReceivedByAlly(struct AFortPlayerStateAthena* BountyPuckTargetPlayerState, struct AFortPlayerStateAthena* ReceiverPlayerState, int32_t BonusRewardValue); // Function VendettaRuntime.VendettaPlayerComponent.ClientOnBountyPuckReceivedByAlly // (Net|Native|Event|Public|NetClient) // @ game+0x3de7094
	void ClearActiveBountyPuckGuid(); // Function VendettaRuntime.VendettaPlayerComponent.ClearActiveBountyPuckGuid // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x203d3e0
};

