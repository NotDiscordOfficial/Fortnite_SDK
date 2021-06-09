// Class ArgonUI.ArgonWidgetBase
// Size: 0x328 (Inherited: 0x320)
struct UArgonWidgetBase : ULTMWidgetBase {
	struct AFortAthenaMutator_Argon* ArgonMutator; // 0x320(0x08)

	void UnbindFromMutator_BP(); // Function ArgonUI.ArgonWidgetBase.UnbindFromMutator_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	struct TArray<struct AFortPlayerStateAthena*> GetTeamPlayerStates(char Team); // Function ArgonUI.ArgonWidgetBase.GetTeamPlayerStates // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db29b4
	void BindToMutator_BP(); // Function ArgonUI.ArgonWidgetBase.BindToMutator_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class ArgonUI.ArgonHUDAlertWidget
// Size: 0x348 (Inherited: 0x328)
struct UArgonHUDAlertWidget : UArgonWidgetBase {
	float DisplayPlayerFinishedMessageTime; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct TArray<struct FArgonFinishedPlayerInfo> PlayerFinishedMessageQueue; // 0x330(0x10)
	char pad_340[0x8]; // 0x340(0x08)

	void OnPlayerFinished(struct FArgonFinishedPlayerInfo FinishedPlayerInfo); // Function ArgonUI.ArgonHUDAlertWidget.OnPlayerFinished // (Final|Native|Private|HasOutParms) // @ game+0x3db2ac0
	void ForceHidePlayerFinishedMessage(); // Function ArgonUI.ArgonHUDAlertWidget.ForceHidePlayerFinishedMessage // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DisplayPlayerFinishedMessage(struct FArgonFinishedPlayerInfo FinishedInfo); // Function ArgonUI.ArgonHUDAlertWidget.DisplayPlayerFinishedMessage // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class ArgonUI.ArgonLeaderboardWidget
// Size: 0x338 (Inherited: 0x328)
struct UArgonLeaderboardWidget : UArgonWidgetBase {
	struct TArray<struct FArgonLeaderboardData> LeaderboardEntries; // 0x328(0x10)

	void UpdateLeaderboardUI(); // Function ArgonUI.ArgonLeaderboardWidget.UpdateLeaderboardUI // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRacingPlayersByPlaceChanged(); // Function ArgonUI.ArgonLeaderboardWidget.OnRacingPlayersByPlaceChanged // (Final|Native|Private) // @ game+0x3db2b80
	void OnAnyTeamTicketCountChanged(); // Function ArgonUI.ArgonLeaderboardWidget.OnAnyTeamTicketCountChanged // (Final|Native|Private) // @ game+0x3db2a98
};

