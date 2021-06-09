// SolarisGeneratedClass VerseFortnite_hud_scoreboard_component.hud_scoreboard_component
// Size: 0x240 (Inherited: 0x1a0)
struct Uhud_scoreboard_component : UHUDScoreboardComponentBase {
	char pad_1A0[0x10]; // 0x1a0(0x10)
	struct FDelegate __verse_0x80735DEF_ClearScores; // 0x1b0(0x10)
	char pad_1C0[0x50]; // 0x1c0(0x50)
	struct FDelegate __verse_0x09DD745C_Hide; // 0x210(0x10)
	struct FDelegate __verse_0xFD1F89D8_RestrictMessageToPlayers; // 0x220(0x10)
	struct FDelegate __verse_0xFD651BB8_SetCurrentRound; // 0x200(0x10)
	struct FDelegate __verse_0xC0F6CCCA_SetNumberOfRounds; // 0x1f0(0x10)
	struct FDelegate __verse_0x87E2841A_SetPlayerEliminations; // 0x1c0(0x10)
	struct FDelegate __verse_0x94AB14F3_SetPlayerPoints; // 0x1e0(0x10)
	struct FDelegate __verse_0xBADDC229_SetPlayerWins; // 0x1d0(0x10)
	struct FDelegate __verse_0xB2E4C427_SetWidget; // 0x230(0x10)
	struct FDelegate __verse_0xB2173EDD_ShowMessage; // 0x1a0(0x10)

	void ShowMessage(struct FString __verse_0x72B10F24_Message); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.ShowMessage // (Native|Public|BlueprintCallable) // @ game+0x430ba48
	void SetWidget(struct FString __verse_0xDA518CA3_PathToAsset); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x430b970
	void SetPlayerWins(struct Uplayer_component* __verse_0xE5E3B371_Player, int32_t __verse_0x600F03C7_NewWins); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.SetPlayerWins // (Native|Public|BlueprintCallable) // @ game+0x430b968
	void SetPlayerPoints(struct Uplayer_component* __verse_0xE5E3B371_Player, int32_t __verse_0x8367C515_NewPoints); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.SetPlayerPoints // (Native|Public|BlueprintCallable) // @ game+0x430b960
	void SetPlayerEliminations(struct Uplayer_component* __verse_0xE5E3B371_Player, int32_t __verse_0xA9AE610B_NewElims); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.SetPlayerEliminations // (Native|Public|BlueprintCallable) // @ game+0x430b958
	void SetNumberOfRounds(int32_t __verse_0xF17740F1_NewRounds); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.SetNumberOfRounds // (Native|Public|BlueprintCallable) // @ game+0x430b948
	void SetCurrentRound(int32_t __verse_0x5EEA5322_NewCurrent); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.SetCurrentRound // (Native|Public|BlueprintCallable) // @ game+0x430b908
	void RestrictMessageToPlayers(struct TArray<struct Uplayer_component*> __verse_0x8ED01927_PlayerList); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.RestrictMessageToPlayers // (Native|Public|BlueprintCallable) // @ game+0x430b8f8
	void Hide(); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.Hide // (Native|Public|BlueprintCallable) // @ game+0x430b84c
	void ClearScores(); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.ClearScores // (Native|Public|BlueprintCallable) // @ game+0x430b738
	void $InitCDO(); // Function VerseFortnite_hud_scoreboard_component.hud_scoreboard_component.$InitCDO // (None) // @ game+0xda7c34
};

