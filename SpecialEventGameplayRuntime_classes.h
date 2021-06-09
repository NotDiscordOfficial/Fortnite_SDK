// Class SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_SpecialEvent : UFortCheatManager_Coupled {

	void ToggleDisableParachutes(bool bIsDisabled); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ToggleDisableParachutes // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x3ce2684
	void TeleportAllPlayers(int32_t SafeZoneIndex); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.TeleportAllPlayers // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x3b54d20
	void StartEventScript(int32_t InStartingIndex); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.StartEventScript // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x3b54d20
	void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventSetAdditionalViewpoint // (Final|Exec|Native|Protected) // @ game+0x3e25250
	void SpecialEventClearAdditionalViewpoint(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventClearAdditionalViewpoint // (Final|Exec|Native|Protected) // @ game+0x203d3e0
	void ShrinkSafeZone(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ShrinkSafeZone // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetReturnToMainMenuDelay // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x3e25068
	void SetMatchTime(int32_t NewMatchTime); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetMatchTime // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x3b54d20
	void SetIsSimulatingDamage(bool bIsSimulating); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetIsSimulatingDamage // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x3ce2684
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetDestroyVehiclesInStorm // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x3ce2684
	void SendToNightNight(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SendToNightNight // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void ResumeWinCondition(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResumeWinCondition // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void ResetWinConditionProgressToZero(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinConditionProgressToZero // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void ResetWinCondition(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinCondition // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void ResetSpecialEventAircraft(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetSpecialEventAircraft // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void ResetMatchTimeToPrevious(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetMatchTimeToPrevious // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void PlacePlayersInAircraft(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PlacePlayersInAircraft // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void PauseWinCondition(bool bLockScores); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PauseWinCondition // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x3ce2684
	void CloseParachutes(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.CloseParachutes // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void ChangeWinCondition(float NewGoalScore); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ChangeWinCondition // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x3dc3d3c
	void AutobalanceTargetScore(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AutobalanceTargetScore // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x203d3e0
	void AddCSVEvent(struct FString CSVEventName); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AddCSVEvent // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x37d45d4
};

// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
// Size: 0x5a8 (Inherited: 0x2c0)
struct AFortAthenaMutator_SpecialEvent : AFortAthenaMutator {
	struct FMulticastInlineDelegate TeleportAllPlayersFinished; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnPawnLoaded; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnInitController; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnResumeGame; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnSpecialClientEvent; // 0x300(0x10)
	char pad_310[0x58]; // 0x310(0x58)
	bool bPlayersAreInvincible; // 0x368(0x01)
	char pad_369[0x27]; // 0x369(0x27)
	int32_t MinimumScoreBumpForAutomadeGoal; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct TArray<float> ScoreBrackets; // 0x398(0x10)
	bool bEnforceInfiniteWarmup; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	struct FName WarmupIslandPlayerStartTag; // 0x3ac(0x08)
	bool bAllowInventoryOpen; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct FScalableFloat bAllowFullScreenMap; // 0x3b8(0x28)
	bool bBlockTeamIndicators; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FGameplayTagContainer UIToHideWhenInInfiniteWarmup; // 0x3e8(0x20)
	struct FGameplayTagContainer ClientEventsThatUnhideHiddenWhileLoadingHUDElements; // 0x408(0x20)
	struct AFortAthenaAircraft* EventAircraft; // 0x428(0x08)
	struct FAircraftFlightInfo EventAircraftInfo; // 0x430(0x28)
	struct AFortAthenaAircraft* EventAircraftClass; // 0x458(0x08)
	struct ASpecialEventScript* ScriptActor; // 0x460(0x08)
	bool bDisableHUD; // 0x468(0x01)
	char GameResumed; // 0x469(0x01)
	char pad_46A[0x2]; // 0x46a(0x02)
	struct FVector AdditionalViewpoint; // 0x46c(0x0c)
	bool bParachutesDisabled; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct FString LastCSVEventName; // 0x480(0x10)
	bool bCanStreamBuildingFoundationsIn; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	int32_t AllPlayerTeleportedCount; // 0x494(0x04)
	struct FFortDelayRTMMData DelayPlayersFromReturningToLobbyData; // 0x498(0x10)
	struct FName NamedWeightForContainerLootRoll; // 0x4a8(0x08)
	float WeightForContainerLootRoll; // 0x4b0(0x04)
	char pad_4B4[0x24]; // 0x4b4(0x24)
	struct TArray<struct FFortSpecialEventEmoteData> SpecialEventEmoteData; // 0x4d8(0x10)
	struct FGameplayTagContainer BlockedNativeActions; // 0x4e8(0x20)
	struct UInputComponent* SpecialEventsInputComponent; // 0x508(0x08)
	struct TArray<struct FFortSpecialEventOverrideParts> SpecialEventOverrideParts; // 0x510(0x10)
	struct FFortSpecialEventGEData GameplayEffectToApplyOnSwapToDefault; // 0x520(0x10)
	struct TMap<struct FUniqueNetIdRepl, int32_t> OverridePartsArrayIndexMap; // 0x530(0x50)
	struct TArray<struct FFortSpecialEventGEData> GameplayEffectsToApplyOnLogin; // 0x580(0x10)
	char pad_590[0x8]; // 0x590(0x08)
	struct TArray<struct AFortPlayerControllerAthena*> UnhandledPlayerControllers; // 0x598(0x10)

	void WarmUpIslandUpdated(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e25c98
	void ToggleHUDs(bool bHide); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs // (Final|Native|Public|BlueprintCallable) // @ game+0x3e25bfc
	void ToggleDisableWeapons(bool bDisableWeapons); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons // (Final|Native|Public|BlueprintCallable) // @ game+0x3e25ae8
	void ToggleDisableParachutes(bool bDisable); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes // (Final|Native|Public|BlueprintCallable) // @ game+0x3e25a4c
	void ToggleAllPlayersInvincibility(bool bInvincible); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility // (Final|Native|Public|BlueprintCallable) // @ game+0x3e259b0
	void TeleportAllPlayers(struct FGameplayTagContainer EventTags, int32_t TeleportsPerFrame, int32_t SafeZoneIndex); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers // (Final|Native|Public|BlueprintCallable) // @ game+0x3e2583c
	void SwapBodyParts(int32_t ArrayIndex, struct AFortPlayerController* FortPC); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts // (Final|Native|Public|BlueprintCallable) // @ game+0x3e254a4
	void StartSafeZoneOverrideForEvent(int32_t SafeZoneIndexForEvent); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x3e2540c
	void ShrinkSafeZone(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e251dc
	void SetWeightForContainerLootRoll(float Weight); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll // (Final|Native|Public|BlueprintCallable) // @ game+0x3e2513c
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x3e24f7c
	void SetNamedWeightForContainerLootRoll(struct FName WeightName); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll // (Final|Native|Public|BlueprintCallable) // @ game+0x3e24ee4
	void SetMatchTime(int32_t NewMatchTime); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3e24dec
	void SetIsSimulatingDamage(bool bIsSimulating); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e24d50
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e24ca4
	void SetCanStreamBuildingFoundationsIn(bool bEnable); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e24bb0
	void SetAdditionalViewpoint(struct FVector WorldLocation); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3e24b08
	void SendToNightNight(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight // (Final|Native|Public|BlueprintCallable) // @ game+0x203d3e0
	void ResumeWinCondition(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition // (Final|Native|Public|BlueprintCallable) // @ game+0x3e248d8
	void ResetWinConditionProgressToZero(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero // (Final|Native|Public|BlueprintCallable) // @ game+0x3e248c4
	void ResetWinCondition(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition // (Final|Native|Public|BlueprintCallable) // @ game+0x3e248b0
	void ResetSpecialEventAircraft(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e24874
	void ResetSafeZoneOverrideAfterEvent(int32_t MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x3e24734
	void ResetMatchTimeToPrevious(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious // (Final|Native|Public|BlueprintCallable) // @ game+0x3e246e0
	void RemoveFromBlockedNativeActions(struct FGameplayTagContainer Actions); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3e23198
	void PushSpecialEventEmoteInputComponent(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x3e246cc
	void PopSpecialEventEmoteInputComponent(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x3e246b8
	void PlacePlayersInAircraft(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e246a4
	void PauseWinCondition(bool bLockScores); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition // (Final|Native|Public|BlueprintCallable) // @ game+0x3e24608
	void PauseSupplyDrops(bool bPause); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops // (Final|Native|Public|BlueprintCallable) // @ game+0x3e2456c
	void PauseStormProgression(bool bPause); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression // (Final|Native|Public|BlueprintCallable) // @ game+0x3e244d0
	void PauseStormDamage(bool bPause); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x3e24434
	void OnWarmUpTeleportComplete(struct AFortPlayerPawn* PlayerPawn); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete // (Final|Native|Protected) // @ game+0x3e24360
	void OnRep_LastCSVEventName(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName // (Final|Native|Protected) // @ game+0x3e24258
	void OnRep_GameResumed(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed // (Final|Native|Protected) // @ game+0x3e2423c
	void OnRep_DelayPlayersFromReturningToLobbyData(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData // (Final|Native|Protected) // @ game+0x3e241e4
	void OnRep_bPlayersAreInvincible(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible // (Final|Native|Protected) // @ game+0x3e2434c
	void OnRep_bDisableHUD(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD // (Final|Native|Protected) // @ game+0x3e242dc
	void OnRep_bCanStreamBuildingFoundationsIn(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn // (Final|Native|Protected) // @ game+0x3e242c8
	void OnRep_AllPlayerTeleportedCount(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount // (Final|Native|Protected) // @ game+0x3e241c8
	void OnRep_Aircraft(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft // (Final|Native|Protected) // @ game+0x3e24164
	void OnRep_AdditionalViewpoint(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint // (Final|Native|Protected) // @ game+0x3e24150
	void OnGameViewportActivationChanged(bool bHasFocus); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged // (Final|Native|Public) // @ game+0x3e24008
	void OnGamePhaseStepChanged(struct TScriptInterface<None> SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGamePhaseStepChanged // (Final|Native|Protected|HasOutParms) // @ game+0x3e23f04
	void OnAircraftFlightEnded(struct AFortAthenaAircraft* FortAthenaAircraft); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded // (Final|Native|Protected) // @ game+0x3e23e68
	void OnAircraftExitedDropZone(struct AFortAthenaAircraft* FortAthenaAircraft); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone // (Final|Native|Protected) // @ game+0x3e23dcc
	void OnAircraftEnteredDropZone(struct AFortAthenaAircraft* FortAthenaAircraft); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone // (Final|Native|Protected) // @ game+0x3e23d30
	void NotifyClientsGameResumed(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e23cd4
	void JumpToSafeZonePhase(struct FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3e23b88
	struct ASpecialEventScript* GetScript(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3e239a4
	void ForceSafeZoneFinalLocation(struct FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3e236f0
	void FlushUnhandledPlayerControllers(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e236dc
	void CloseParachutes(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes // (Final|Native|Public|BlueprintCallable) // @ game+0x3e233f0
	void ClearBlockedNativeActions(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x203d3e0
	void ClearAdditionalViewpoint(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint // (Final|Native|Public|BlueprintCallable) // @ game+0x3e233b8
	void ChangeWinCondition(float NewGoalScore); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition // (Final|Native|Public|BlueprintCallable) // @ game+0x3e23318
	void AutobalanceTargetScore(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore // (Final|Native|Public|BlueprintCallable) // @ game+0x3e23304
	void AddToBlockedNativeActions(struct FGameplayTagContainer Actions); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3e23198
	void AddCSVEvent(struct FString CSVEventName, bool bShouldRepToClient); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e22fa0
	void AddClientCSVEvent(struct FString CSVEventName); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x3e230f4
};

// Class SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
// Size: 0x120 (Inherited: 0xb0)
struct UFortControllerComponent_GameplayCinematic : UFortControllerComponent {
	char pad_B0[0x48]; // 0xb0(0x48)
	struct FMulticastInlineDelegate BP_OnStartGameplayOutro; // 0xf8(0x10)
	struct FMulticastInlineDelegate BP_OnGameplayIntroFinished; // 0x108(0x10)
	bool bIsReadyForGameplay; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)

	void StartGameplayOutro(); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.StartGameplayOutro // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x3db7858
	void StartGameplayCinematicOutro(); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.StartGameplayCinematicOutro // (Final|Exec|Native|Protected) // @ game+0x203d3e0
	void SetReadyForGameplay(bool bIsReady); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3ce2684
	void ServerOnGameplayIntroFinished(); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x3db7810
	void OnRep_bIsReadyForGameplay(); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay // (Final|Native|Protected) // @ game+0x3e242f0
	void HideHUDElementsForLoadingScreen(bool bHideElements); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3e23aec
};

// Class SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
// Size: 0xb8 (Inherited: 0xb0)
struct UFortControllerComponent_SpecialEvent : UFortControllerComponent {
	struct TWeakObjectPtr<struct AFortAthenaMutator_SpecialEvent> SpecialEventMutator; // 0xb0(0x08)

	void ServerHandleSpecialClientEvent(struct FGameplayTag EventTag, int32_t Count); // Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x3e24a1c
	void SendSpecialClientEvent(struct FGameplayTag EventTag, int32_t Count); // Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3e248ec
};

// Class SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
// Size: 0x28 (Inherited: 0x28)
struct USpecialEventGameplayGlobals : UObject {
};

// Class SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
// Size: 0x28 (Inherited: 0x28)
struct USpecialEventGameplayLibrary : UBlueprintFunctionLibrary {

	struct ASpecialEventScript* GetSpecialEventScript(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventScript // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3e23a54
	struct AFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventMutator // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3e239bc
	void ForceUpdateGrass(struct UObject* WorldContextObject, struct FVector Location); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceUpdateGrass // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3e23898
	struct UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(struct AController* Controller); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindSpecialEventComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3e23628
	struct UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(struct AController* Controller); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindGameplayCinematicComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3e23404
};

// Class SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
// Size: 0x48 (Inherited: 0x30)
struct UFortAsyncAction_GameplayCinematicComponentReady : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnReady; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	struct UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(struct AController* Conroller); // Function SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady.FindGameplayCinematicComponentAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3e234a8
};

// Class SpecialEventGameplayRuntime.SpecialEventPhase
// Size: 0x260 (Inherited: 0x220)
struct ASpecialEventPhase : AInfo {
	char pad_220[0x18]; // 0x220(0x18)
	struct FGameplayTag PhaseTag; // 0x238(0x08)
	bool bApplyGameplayEffects; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct TArray<struct UGameplayEffect*> GameplayEffectsToApply; // 0x248(0x10)
	enum class ESpecialEventPhaseState PhaseState; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)

	void PrePhaseActivation_Server(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRep_PhaseState(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState // (Final|Native|Protected) // @ game+0x3e242a4
	void OnPhaseFinished(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x3e240a4
	void OnPhaseDeactivation_Server(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPhaseActivation_Server(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPhaseActivation_Client(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	struct FGameplayTag GetPhaseTag(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3e2398c
};

// Class SpecialEventGameplayRuntime.SpecialEventScript
// Size: 0x268 (Inherited: 0x220)
struct ASpecialEventScript : AInfo {
	struct TArray<struct FPhaseInfo> PhaseInfoArray; // 0x220(0x10)
	struct TSoftObjectPtr<struct ALevelSequenceActor> MasterSequence; // 0x230(0x28)
	int32_t ActivePhaseIndex; // 0x258(0x04)
	int32_t StartingIndex; // 0x25c(0x04)
	char pad_260[0x8]; // 0x260(0x08)

	void StartEventAtIndex(int32_t InStartingIndex); // Function SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x3e25374
	void OnRep_ActivePhaseIndex(int32_t OldIndex); // Function SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ActivePhaseIndex // (Final|Native|Protected) // @ game+0x3e240b8
	void BP_OnScriptReady(); // Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void AttemptFinishPhase(struct FGameplayTag PhaseTag); // Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase // (Final|Native|Public|BlueprintCallable) // @ game+0x3e23240
};

