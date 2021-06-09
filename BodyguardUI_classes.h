// Class BodyguardUI.BodyguardWidgetBase
// Size: 0x330 (Inherited: 0x320)
struct UBodyguardWidgetBase : ULTMWidgetBase {
	struct AFortAthenaMutator_Bodyguard* CachedBodyguardMutator; // 0x320(0x08)
	struct UAthenaPlayerViewModel* CachedPlayerVM; // 0x328(0x08)

	void UpdateEnemyVIPCount_BP(char EnemyVIPCount); // Function BodyguardUI.BodyguardWidgetBase.UpdateEnemyVIPCount_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnMutatorAvailable(struct AFortGameplayMutator* MutatorActor); // Function BodyguardUI.BodyguardWidgetBase.OnMutatorAvailable // (Native|Protected|BlueprintCallable) // @ game+0x3db7870
	void MutatorReady(); // Function BodyguardUI.BodyguardWidgetBase.MutatorReady // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleVIPTookDamage_BP(); // Function BodyguardUI.BodyguardWidgetBase.HandleVIPTookDamage_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandlePlayerRoleChange_BP(enum class EBodyguardPlayerRole NewPlayerRole); // Function BodyguardUI.BodyguardWidgetBase.HandlePlayerRoleChange_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOnVIPDataChange(); // Function BodyguardUI.BodyguardWidgetBase.HandleOnVIPDataChange // (Native|Protected) // @ game+0x18333f8
	void HandleOnTeamVIPReassignment_BP(struct AFortPlayerStateAthena* NewVIPPlayerState); // Function BodyguardUI.BodyguardWidgetBase.HandleOnTeamVIPReassignment_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOnRevealPlayerRole_BP(); // Function BodyguardUI.BodyguardWidgetBase.HandleOnRevealPlayerRole_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOnNotifyVIPTeammateDBNO_BP(); // Function BodyguardUI.BodyguardWidgetBase.HandleOnNotifyVIPTeammateDBNO_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOnGamePhaseChanged_BP(enum class EAthenaGamePhase NewPhase); // Function BodyguardUI.BodyguardWidgetBase.HandleOnGamePhaseChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOnBodyguardIsTooFarFromBodyguard_BP(); // Function BodyguardUI.BodyguardWidgetBase.HandleOnBodyguardIsTooFarFromBodyguard_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleLocalPlayerEliminatedVIP_BP(); // Function BodyguardUI.BodyguardWidgetBase.HandleLocalPlayerEliminatedVIP_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	struct AFortPlayerState* GetVIPPlayerStateForTeam(char TeamNum); // Function BodyguardUI.BodyguardWidgetBase.GetVIPPlayerStateForTeam // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db8df4
	enum class EBodyguardPlayerRole GetOwningPlayerRole(); // Function BodyguardUI.BodyguardWidgetBase.GetOwningPlayerRole // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db8d80
	struct AFortAthenaMutator_Bodyguard* GetBodyguardMutator(); // Function BodyguardUI.BodyguardWidgetBase.GetBodyguardMutator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db8d68
};

// Class BodyguardUI.BodyguardPlayerInfoBase
// Size: 0x340 (Inherited: 0x330)
struct UBodyguardPlayerInfoBase : UBodyguardWidgetBase {
	char pad_330[0x10]; // 0x330(0x10)

	bool IsViewingPlayerVIP(); // Function BodyguardUI.BodyguardPlayerInfoBase.IsViewingPlayerVIP // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db8ecc
	void HandleViewingPlayerStateChanged(); // Function BodyguardUI.BodyguardPlayerInfoBase.HandleViewingPlayerStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class BodyguardUI.BodyguardPlayerRoleRevealWidget
// Size: 0x330 (Inherited: 0x330)
struct UBodyguardPlayerRoleRevealWidget : UBodyguardWidgetBase {

	void SetTeamVIPAvatarImage(char TeamNum, struct UFortLazyImage* AvatarImageWidget); // Function BodyguardUI.BodyguardPlayerRoleRevealWidget.SetTeamVIPAvatarImage // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x3db8ef0
};

// Class BodyguardUI.BodyguardRumbleHUD
// Size: 0x330 (Inherited: 0x330)
struct UBodyguardRumbleHUD : UBodyguardWidgetBase {

	void UpdatedVIPCount_BP(char EnemyVIPs, char FriendlyVIPs); // Function BodyguardUI.BodyguardRumbleHUD.UpdatedVIPCount_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class BodyguardUI.BodyguardVIPEliminatedWidget
// Size: 0x330 (Inherited: 0x330)
struct UBodyguardVIPEliminatedWidget : UBodyguardWidgetBase {

	void HandleLocalTeamEliminated_BP(); // Function BodyguardUI.BodyguardVIPEliminatedWidget.HandleLocalTeamEliminated_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

