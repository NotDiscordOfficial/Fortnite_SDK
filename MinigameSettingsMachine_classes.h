// BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C
// Size: 0x4e5 (Inherited: 0x340)
struct AMinigameSettingsMachine_C : AFortMinigameSettingsBuilding {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UToyOptionsComponent_C* ToyOptionsComponent; // 0x348(0x08)
	int32_t GameModeIndex; // 0x350(0x04)
	float TimeLimit; // 0x354(0x04)
	enum class EFortMinigamePlayerSpawnLocationSetting SpawnLocationSetting; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	int32_t NumTeams; // 0x35c(0x04)
	enum class EFortMinigamePostGameSpawnLocationSetting PostGameSpawnLocationSetting; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	int32_t PlayerLives; // 0x364(0x04)
	int32_t AutoEndTeamThreshold; // 0x368(0x04)
	int32_t TeamToMoveToWhenOutOfSpawns; // 0x36c(0x04)
	int32_t NumKillsForEndCondition; // 0x370(0x04)
	int32_t AutoStartDelay; // 0x374(0x04)
	int32_t NumCollectItemsForEndCondition; // 0x378(0x04)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct TArray<struct FMinigameScoringPreset> ScoringPresets; // 0x380(0x10)
	struct TArray<struct UFortMinigameStatFilter*> TrackedStats; // 0x390(0x10)
	int32_t NumAIKillsForEndCondition; // 0x3a0(0x04)
	int32_t ScoreForEndCondition; // 0x3a4(0x04)
	int32_t TotalRounds; // 0x3a8(0x04)
	int32_t NumObjectDestroysForWin; // 0x3ac(0x04)
	float WinnerDisplayTime; // 0x3b0(0x04)
	float ScoreDisplayTime; // 0x3b4(0x04)
	int32_t TrackedScoreStat0; // 0x3b8(0x04)
	int32_t TrackedScoreStat1; // 0x3bc(0x04)
	int32_t TrackedScoreStat2; // 0x3c0(0x04)
	int32_t TrackedScoreStat3; // 0x3c4(0x04)
	int32_t TrackedScoreStat4; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct TArray<int32_t> TrackedScoreStats; // 0x3d0(0x10)
	struct TArray<struct FGameplayTagContainer> AvailableUIExtensions; // 0x3e0(0x10)
	struct FGameplayTagContainer CommonUIExtensions; // 0x3f0(0x20)
	int32_t UIExtensionSetting; // 0x410(0x04)
	char pad_414[0x4]; // 0x414(0x04)
	struct UPlaylistUserOptionIntEnum* TrackedScoreStat0_Definition; // 0x418(0x08)
	struct UPlaylistUserOptionIntEnum* TrackedScoreStat1_Definition; // 0x420(0x08)
	struct UPlaylistUserOptionIntEnum* TrackedScoreStat2_Definition; // 0x428(0x08)
	struct UPlaylistUserOptionIntEnum* TrackedScoreStat3_Definition; // 0x430(0x08)
	struct UPlaylistUserOptionIntEnum* TrackedScoreStat4_Definition; // 0x438(0x08)
	struct UPlaylistUserOptionIntEnum* UIExtensionSetting_Definition; // 0x440(0x08)
	int32_t TeamSetting; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct UPlaylistUserOptionIntEnum* TeamSetting_Definition; // 0x450(0x08)
	enum class EMinigameFullscreenMapWidgetType MinigameFullscreenMapWidgetType; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	int32_t TimerDirection; // 0x45c(0x04)
	int32_t TeamRotationSetting; // 0x460(0x04)
	float RoundScoreDisplayTime; // 0x464(0x04)
	float RoundWinnerDisplayTime; // 0x468(0x04)
	bool bStopwatchMode; // 0x46c(0x01)
	bool bStableTeamCosmetics; // 0x46d(0x01)
	bool bShowCumulativeScoreOnHUD; // 0x46e(0x01)
	enum class EMinigameWinCondition WinCondition; // 0x46f(0x01)
	int32_t AllTeamsMustMatchEndConditions; // 0x470(0x04)
	int32_t EndGameOnMatchPointWin; // 0x474(0x04)
	int32_t DefaultClassSlot; // 0x478(0x04)
	enum class EFortMinigameClassResetType ClassResetType; // 0x47c(0x01)
	enum class EMinigamePlayerPersistence PlayerPersistence; // 0x47d(0x01)
	char pad_47E[0x2]; // 0x47e(0x02)
	int32_t OnlyAllowRespawningIfPlayerStartPadsFound; // 0x480(0x04)
	int32_t ShowCumulativeScoreboard; // 0x484(0x04)
	bool bAllowFriendlyFire; // 0x488(0x01)
	enum class EMinigameGameEndCallout GameEndCallout; // 0x489(0x01)
	char pad_48A[0x2]; // 0x48a(0x02)
	int32_t VictoryAudioIndex; // 0x48c(0x04)
	int32_t DrawAudioIndex; // 0x490(0x04)
	int32_t DefeatAudioIndex; // 0x494(0x04)
	struct FString CustomVictoryCallout; // 0x498(0x10)
	struct FString CustomDefeatCallout; // 0x4a8(0x10)
	float StartCountdownDuration; // 0x4b8(0x04)
	char pad_4BC[0x4]; // 0x4bc(0x04)
	struct FString DeviceVictoryCallout; // 0x4c0(0x10)
	struct FString DeviceDefeatCallout; // 0x4d0(0x10)
	int32_t BetaTeamSetting; // 0x4e0(0x04)
	bool bVehiclesDamageObjects; // 0x4e4(0x01)

	void GetEndCallouts(struct FString CustomVictoryCallout, struct FString CustomDefeatCallout); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetEndCallouts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Override Custom End Callouts(struct FString DeviceVictoryCallout, struct FString DeviceDefeatCallout); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.Override Custom End Callouts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateGameStartCountdown(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameStartCountdown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AdditionalUIExtensionValidityChecks(struct FGameplayTagContainer TagContainer, bool bUIExtensionIsValid); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.AdditionalUIExtensionValidityChecks // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	int32_t GetTeamSetting(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetTeamSetting // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void UpdateGameSettings(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePlayerPersistence(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerPersistence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateClassSettings(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateClassSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetUIExtensions(struct FGameplayTagContainer Return Value); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetUIExtensions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Game Mode Preset Upgrade Path(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.Game Mode Preset Upgrade Path // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetScoreboardStatsArray(struct TArray<struct UFortMinigameStatFilter*> ScoreboardStats); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetScoreboardStatsArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void FillTrackedStats(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.FillTrackedStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TryAddEndCondition_DestroyObjects(struct TArray<struct FFortMinigameStatQuery> EndConditions, bool bResult); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_DestroyObjects // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTotalRounds(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTotalRounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateMinigameMutators(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateMinigameMutators // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateJoinInProgress(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateJoinInProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TryAddEndCondition_CollectItems(struct TArray<struct FFortMinigameStatQuery> EndConditions, bool bResult); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_CollectItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateAutoStart(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateEndConditions(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateEndConditions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTeamToMoveToWhenOutOfSpawns(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamToMoveToWhenOutOfSpawns // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateAutoEndTeamThreshold(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoEndTeamThreshold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePlayerLives(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerLives // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePostGameSpawnLocationSetting(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePostGameSpawnLocationSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BlueprintGetFailedInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetFailedInteractionString // (HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void UpdateTeamSetting(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSpawnLocationSetting(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateSpawnLocationSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetCurrentMinigame(struct AFortMinigame* Minigame); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetCurrentMinigame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UpdateTimeLimit(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTimeLimit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateGameMode(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HasMinigameStarted(bool bHasStarted); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.HasMinigameStarted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetPickupSpawnLocation(struct FVector SpawnLocation); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetPickupSpawnLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetInteractionString // (HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintCanInteract // (HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnGameSettingsUpdated(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnGameSettingsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartMinigameHelper(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.StartMinigameHelper // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AbandonMinigameHelper(); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.AbandonMinigameHelper // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMinigameStateChanged(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnMinigameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MinigameSettingsMachine(int32_t EntryPoint); // Function MinigameSettingsMachine.MinigameSettingsMachine_C.ExecuteUbergraph_MinigameSettingsMachine // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

