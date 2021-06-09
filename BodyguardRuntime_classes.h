// Class BodyguardRuntime.BodyguardPlayerComponent
// Size: 0x140 (Inherited: 0xb0)
struct UBodyguardPlayerComponent : UFortControllerComponent {
	char pad_B0[0x70]; // 0xb0(0x70)
	bool bIsReviving; // 0x120(0x01)
	enum class EBodyguardPlayerRole BodyguardRole; // 0x121(0x01)
	char pad_122[0xe]; // 0x122(0x0e)
	struct AFortAthenaMutator_Bodyguard* ManagingMutator; // 0x130(0x08)
	bool bEnableSkinSwapping; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)

	void SetIsBodyguardTooFarFromVIP(bool bValue); // Function BodyguardRuntime.BodyguardPlayerComponent.SetIsBodyguardTooFarFromVIP // (Final|Native|Public|BlueprintCallable) // @ game+0x3db7ea0
	void OnRep_BodyguardRole(); // Function BodyguardRuntime.BodyguardPlayerComponent.OnRep_BodyguardRole // (Final|Native|Private) // @ game+0x3db7e14
	void OnPlayerRevived(struct AController* EventInstigator); // Function BodyguardRuntime.BodyguardPlayerComponent.OnPlayerRevived // (Final|Native|Public) // @ game+0x3ce1cd8
	void OnPlacementSet(struct AFortPlayerStateAthena* Sender, int32_t NewPlace); // Function BodyguardRuntime.BodyguardPlayerComponent.OnPlacementSet // (Final|Native|Public) // @ game+0x3db7d40
	void OnPawnStartedEmote(struct UFortItemDefinition* MontageItemDef, struct AFortPawn* PawnEmoting); // Function BodyguardRuntime.BodyguardPlayerComponent.OnPawnStartedEmote // (Final|Native|Private) // @ game+0x3b08bc8
	void OnFortPCPawnChangedEvent(struct AFortPawn* NewPawn); // Function BodyguardRuntime.BodyguardPlayerComponent.OnFortPCPawnChangedEvent // (Native|Protected) // @ game+0x3db7ca0
	void OnEmoteMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function BodyguardRuntime.BodyguardPlayerComponent.OnEmoteMontageEnded // (Native|Protected) // @ game+0x3db7bb0
	bool IsSkinSwappingEnabled(); // Function BodyguardRuntime.BodyguardPlayerComponent.IsSkinSwappingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db7b1c
	void ClientPlayerEliminatedVIP(); // Function BodyguardRuntime.BodyguardPlayerComponent.ClientPlayerEliminatedVIP // (Net|Native|Event|Public|NetClient) // @ game+0x3db7910
	void ClientOnVIPHasBeenReassigned(struct AFortPlayerStateAthena* NewVIPlayerState); // Function BodyguardRuntime.BodyguardPlayerComponent.ClientOnVIPHasBeenReassigned // (Net|Native|Event|Public|NetClient) // @ game+0x3db7870
	void ClientOnTeamEliminated(); // Function BodyguardRuntime.BodyguardPlayerComponent.ClientOnTeamEliminated // (Net|Native|Event|Public|NetClient) // @ game+0x3db7858
	void ClientOnNotifyVIPTeammateIsDowned(); // Function BodyguardRuntime.BodyguardPlayerComponent.ClientOnNotifyVIPTeammateIsDowned // (Net|Native|Event|Public|NetClient) // @ game+0x3db7840
	void ClientOnLocalSquadVIPTookDamage(); // Function BodyguardRuntime.BodyguardPlayerComponent.ClientOnLocalSquadVIPTookDamage // (Net|Native|Event|Public|NetClient) // @ game+0x3db7828
	void ClientOnBodyguardIsTooFarFromVIP(); // Function BodyguardRuntime.BodyguardPlayerComponent.ClientOnBodyguardIsTooFarFromVIP // (Net|Native|Event|Public|NetClient) // @ game+0x3db7810
};

// Class BodyguardRuntime.BodyguardSoundActor
// Size: 0x248 (Inherited: 0x220)
struct ABodyguardSoundActor : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct FGameplayTagContainer GameplayTags; // 0x228(0x20)

	void UpdateTeamVIPIsDBNO_BP(bool bIsTeamVIP_DBNO, bool bIsLocalPlayerTheVIP, bool bIsDead); // Function BodyguardRuntime.BodyguardSoundActor.UpdateTeamVIPIsDBNO_BP // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void UpdateTeamVIPIsBeingRevived_BP(bool bIsBeingRevived, bool bIsTeamVIP_DBNO, bool bIsReviving, bool bIsLocalPlayerTheVIP); // Function BodyguardRuntime.BodyguardSoundActor.UpdateTeamVIPIsBeingRevived_BP // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void UpdateTeamVIPHealth_BP(float CurrentHealth, float MaxHealth, bool bIsLocalPlayerTheVIP); // Function BodyguardRuntime.BodyguardSoundActor.UpdateTeamVIPHealth_BP // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleVIPNotAllowItemPickup_BP(); // Function BodyguardRuntime.BodyguardSoundActor.HandleVIPNotAllowItemPickup_BP // (RequiredAPI|Event|Public|BlueprintEvent|Const) // @ game+0xda7c34
};

// Class BodyguardRuntime.FortAthenaMutator_Bodyguard
// Size: 0x8f0 (Inherited: 0x3d0)
struct AFortAthenaMutator_Bodyguard : AFortAthenaMutator_GameModeBase {
	char pad_3D0[0x20]; // 0x3d0(0x20)
	struct FGameplayTag VIPKillAccoladeTag; // 0x3f0(0x08)
	struct FGameplayTag VIPMultiKillAccoladeTag; // 0x3f8(0x08)
	struct FGameplayTag BodyguardReviveAccoladeTag; // 0x400(0x08)
	struct FGameplayTag VIPReviveAccoladeTag; // 0x408(0x08)
	struct FGameplayTag VIPSurviveAccoladeTag; // 0x410(0x08)
	struct FScalableFloat VIPMultikillAccoladeThreshold; // 0x418(0x28)
	struct ABodyguardSoundActor* BodyguardSoundPlayer; // 0x440(0x08)
	struct FGameplayTagContainer VIPLostDeathReasonTagContainter; // 0x448(0x20)
	struct TArray<struct FItemAndCount> VIPItemList; // 0x468(0x10)
	struct TArray<struct FItemAndCount> BodyguardItemList; // 0x478(0x10)
	struct TMap<struct UFortItemDefinition*, int32_t> ItemToDesiredQuickBarSlotMap; // 0x488(0x50)
	struct FGameplayTagContainer VIPProhibitedItemTags; // 0x4d8(0x20)
	struct FGameplayTagContainer BodyguardProhibitedItemTags; // 0x4f8(0x20)
	struct FScalableFloat RespawnZLocationOffset; // 0x518(0x28)
	struct FText VIPBlockedItemText; // 0x540(0x18)
	struct FSlateBrush VIPMapIconBrush; // 0x558(0x88)
	struct FVector2D MinimapPositionShiftPercent; // 0x5e0(0x08)
	struct FVector2D MiniMapIconScale; // 0x5e8(0x08)
	struct FFortAthenaCompassIcon VIPCompassIconBackDrop; // 0x5f0(0xa0)
	struct FFortAthenaCompassIcon VIPCompassIcon; // 0x690(0xa0)
	struct TArray<struct AActor*> VIPBlockInteractClasses; // 0x730(0x10)
	struct FScalableFloat VIPEliminatedEndGameScreenDelay; // 0x740(0x28)
	enum class EAthenaGamePhase StartingVIPPlayerStateChangeTrackingGamePhase; // 0x768(0x01)
	char pad_769[0xf]; // 0x769(0x0f)
	struct FScalableFloat UpdateIntervalMonitorVIPPlayerStateChanges; // 0x778(0x28)
	struct FScalableFloat HideDBNOVIPPlayerIndicators; // 0x7a0(0x28)
	struct TArray<struct FBodyGuardPartOverrideData> PartOverrideCustomizations; // 0x7c8(0x10)
	struct TArray<struct UCustomCharacterPart*> PartsToSwapInToRemoveExtras; // 0x7d8(0x10)
	struct FScalableFloat ShouldSwapSkins; // 0x7e8(0x28)
	struct FGameplayTagContainer SkinMetaTagsToSkip; // 0x810(0x20)
	struct FGameplayTagContainer SpecialTags; // 0x830(0x20)
	struct FGameplayTagContainer ExtraSpecialTags; // 0x850(0x20)
	struct FScalableFloat EnemyVIPsRemainingUIDelay; // 0x870(0x28)
	char pad_898[0x8]; // 0x898(0x08)
	struct TArray<struct FBodyguardVIPPlayerData> VIPPlayerDataList; // 0x8a0(0x10)
	struct TArray<struct FBodyguardVIPDeathState> VIPDeathStateList; // 0x8b0(0x10)
	struct FBodyguardVIPPlayerData PreviousTeamVIPPlayerData; // 0x8c0(0x18)
	struct AFortGameplayMutator* MutatorClassToWaitFor; // 0x8d8(0x08)
	struct AFortGameplayMutator* CustomCharacterPartsMutator; // 0x8e0(0x08)
	char RevealPlayerRole; // 0x8e8(0x01)
	char pad_8E9[0x7]; // 0x8e9(0x07)

	void UpdateSquadmatesIsReviving(char VIPTeam); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.UpdateSquadmatesIsReviving // (Final|Native|Public) // @ game+0x3db7b34
	void ShutOffAnyDBNOSounds(bool bIsDead); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.ShutOffAnyDBNOSounds // (Final|Native|Protected) // @ game+0x3db7f5c
	void OnRep_VIPPlayerDataList(); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.OnRep_VIPPlayerDataList // (Final|Native|Protected) // @ game+0x3db7e8c
	void OnRep_VIPDeathStateList(); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.OnRep_VIPDeathStateList // (Final|Native|Protected) // @ game+0x3db7e78
	void OnRep_RevealPlayerRole(); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.OnRep_RevealPlayerRole // (Final|Native|Private) // @ game+0x3db7e48
	void NotifyVIPOnTeammateDBNO(char VIPTeam); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.NotifyVIPOnTeammateDBNO // (Final|Native|Public|BlueprintCallable) // @ game+0x3db7b34
	void NotifySquadmatesOnVIPTookDamage(char VIPTeam); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.NotifySquadmatesOnVIPTookDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x3db7b34
	bool IsReviving(struct AFortPlayerStateAthena* PlayerState); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.IsReviving // (Final|RequiredAPI|Native|Public|Const) // @ game+0x3db7a84
	bool GetTeamVIPPlayerData(char TeamNum, struct FBodyguardVIPPlayerData OutVIPPlayerData); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.GetTeamVIPPlayerData // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db7970
	float GetEnemyVIPsRemainingUIDelay(); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.GetEnemyVIPsRemainingUIDelay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db793c
	void EndGameShutOffAnyDBNOSounds(); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.EndGameShutOffAnyDBNOSounds // (Final|Native|Protected) // @ game+0x3db7928
	void AssignPlayerRolesForSquads(); // Function BodyguardRuntime.FortAthenaMutator_Bodyguard.AssignPlayerRolesForSquads // (Native|Protected) // @ game+0x3db77f8
};

// Class BodyguardRuntime.FortAthenaMutator_BodyguardRumble
// Size: 0x8f0 (Inherited: 0x8f0)
struct AFortAthenaMutator_BodyguardRumble : AFortAthenaMutator_Bodyguard {
};

