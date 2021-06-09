// SolarisGeneratedClass VerseFortnite_hud_message_component.hud_message_component
// Size: 0x170 (Inherited: 0x130)
struct Uhud_message_component : UHUDMessageComponentBase {
	char pad_130[0x10]; // 0x130(0x10)
	struct FDelegate __verse_0x09DD745C_Hide; // 0x140(0x10)
	struct FDelegate __verse_0xFD1F89D8_RestrictMessageToPlayers; // 0x150(0x10)
	struct FDelegate __verse_0xB2E4C427_SetWidget; // 0x160(0x10)
	struct FDelegate __verse_0xB2173EDD_ShowMessage; // 0x130(0x10)

	void ShowMessage(struct FString __verse_0x72B10F24_Message); // Function VerseFortnite_hud_message_component.hud_message_component.ShowMessage // (Native|Public|BlueprintCallable) // @ game+0x430ba40
	void SetWidget(struct FString __verse_0xDA518CA3_PathToAsset); // Function VerseFortnite_hud_message_component.hud_message_component.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x430b970
	void RestrictMessageToPlayers(struct TArray<struct Uplayer_component*> __verse_0x8ED01927_PlayerList); // Function VerseFortnite_hud_message_component.hud_message_component.RestrictMessageToPlayers // (Native|Public|BlueprintCallable) // @ game+0x430b8f8
	void Hide(); // Function VerseFortnite_hud_message_component.hud_message_component.Hide // (Native|Public|BlueprintCallable) // @ game+0x430b84c
	void $InitCDO(); // Function VerseFortnite_hud_message_component.hud_message_component.$InitCDO // (None) // @ game+0xda7c34
};

