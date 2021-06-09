// SolarisGeneratedClass VerseFortnite_hud_game_over_message_component.hud_game_over_message_component
// Size: 0x178 (Inherited: 0x128)
struct Uhud_game_over_message_component : UHUDGameOverComponentBase {
	char pad_128[0x30]; // 0x128(0x30)
	struct FDelegate __verse_0x09DD745C_Hide; // 0x158(0x10)
	struct FDelegate __verse_0xB2E4C427_SetWidget; // 0x168(0x10)
	struct FDelegate __verse_0x070757DC_Show; // 0x148(0x10)
	struct FDelegate __verse_0xECEB4823_ShowDraw; // 0x138(0x10)
	struct FDelegate __verse_0xBE039F83_ShowWinningTeam; // 0x128(0x10)

	void ShowWinningTeam(int32_t __verse_0x555B2F95_Team); // Function VerseFortnite_hud_game_over_message_component.hud_game_over_message_component.ShowWinningTeam // (Native|Public|BlueprintCallable) // @ game+0x430ba50
	void ShowDraw(); // Function VerseFortnite_hud_game_over_message_component.hud_game_over_message_component.ShowDraw // (Native|Public|BlueprintCallable) // @ game+0x430ba08
	void Show(); // Function VerseFortnite_hud_game_over_message_component.hud_game_over_message_component.Show // (Native|Public|BlueprintCallable) // @ game+0x430ba58
	void SetWidget(struct FString __verse_0xDA518CA3_PathToAsset); // Function VerseFortnite_hud_game_over_message_component.hud_game_over_message_component.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x430b970
	void Hide(); // Function VerseFortnite_hud_game_over_message_component.hud_game_over_message_component.Hide // (Native|Public|BlueprintCallable) // @ game+0x430b868
	void $InitCDO(); // Function VerseFortnite_hud_game_over_message_component.hud_game_over_message_component.$InitCDO // (None) // @ game+0xda7c34
};

