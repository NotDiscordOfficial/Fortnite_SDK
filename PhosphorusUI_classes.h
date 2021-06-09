// Class PhosphorusUI.PhosphorusWidgetBase
// Size: 0x328 (Inherited: 0x320)
struct UPhosphorusWidgetBase : ULTMWidgetBase {
	struct AFortAthenaMutator_Phosphorus* CachedPhosphorusMutator; // 0x320(0x08)

	void SetAvatarImageFromPlayerState(struct AFortPlayerStateAthena* PlayerState, struct UFortLazyImage* AvatarImage); // Function PhosphorusUI.PhosphorusWidgetBase.SetAvatarImageFromPlayerState // (Final|Native|Protected|BlueprintCallable) // @ game+0x3dd1950
	void OnMutatorAvailable(struct AFortGameplayMutator* MutatorActor); // Function PhosphorusUI.PhosphorusWidgetBase.OnMutatorAvailable // (Native|Protected|BlueprintCallable) // @ game+0x3db7870
	void MutatorReady(); // Function PhosphorusUI.PhosphorusWidgetBase.MutatorReady // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct AFortAthenaMutator_Phosphorus* GetPhosphorusMutator(); // Function PhosphorusUI.PhosphorusWidgetBase.GetPhosphorusMutator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db8d68
};

// Class PhosphorusUI.PhosphorusEndOfRoundWidget
// Size: 0x358 (Inherited: 0x328)
struct UPhosphorusEndOfRoundWidget : UPhosphorusWidgetBase {
	struct FScalableFloat PostRoundFadeOutDuration; // 0x328(0x28)
	int32_t CurrentRound; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)

	void SetWidgetVisibility(bool bNewVisibility); // Function PhosphorusUI.PhosphorusEndOfRoundWidget.SetWidgetVisibility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPhosphorusPhaseChanged(struct AFortAthenaMutator_Phosphorus* PhosphorusMutator, enum class EPhosphorusPhase NewPhase); // Function PhosphorusUI.PhosphorusEndOfRoundWidget.OnPhosphorusPhaseChanged // (Final|Native|Protected) // @ game+0x3dd1868
	void OnNewRoundStarted(); // Function PhosphorusUI.PhosphorusEndOfRoundWidget.OnNewRoundStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void FadeOutScreen(); // Function PhosphorusUI.PhosphorusEndOfRoundWidget.FadeOutScreen // (Final|Native|Protected|BlueprintCallable) // @ game+0x3dd1808
};

// Class PhosphorusUI.PhosphorusHUDWidget
// Size: 0x328 (Inherited: 0x328)
struct UPhosphorusHUDWidget : UPhosphorusWidgetBase {

	void OnPhosphorusPlayerEliminated_BP(struct AFortPlayerStateAthena* PlayerEliminated); // Function PhosphorusUI.PhosphorusHUDWidget.OnPhosphorusPlayerEliminated_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPhosphorusLocalSquadWiped_BP(); // Function PhosphorusUI.PhosphorusHUDWidget.OnPhosphorusLocalSquadWiped_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPhosphorusEnemySquadWiped_BP(); // Function PhosphorusUI.PhosphorusHUDWidget.OnPhosphorusEnemySquadWiped_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class PhosphorusUI.PhosphorusSquadWipedWidget
// Size: 0x328 (Inherited: 0x328)
struct UPhosphorusSquadWipedWidget : UPhosphorusWidgetBase {

	void OnLocalPlayerSquadWiped(); // Function PhosphorusUI.PhosphorusSquadWipedWidget.OnLocalPlayerSquadWiped // (Final|Native|Protected) // @ game+0x3dd181c
	void HandleSquadWipedVisibilityChanged(bool bNewVisibility); // Function PhosphorusUI.PhosphorusSquadWipedWidget.HandleSquadWipedVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

