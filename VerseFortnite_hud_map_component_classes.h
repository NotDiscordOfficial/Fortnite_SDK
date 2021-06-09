// SolarisGeneratedClass VerseFortnite_hud_map_component.hud_map_component
// Size: 0x190 (Inherited: 0x140)
struct Uhud_map_component : UHUDMapComponentBase {
	char pad_140[0x10]; // 0x140(0x10)
	struct FDelegate __verse_0xF76BDBCE_ClearMapBounds; // 0x150(0x10)
	char pad_160[0x10]; // 0x160(0x10)
	struct FDelegate __verse_0x09DD745C_Hide; // 0x170(0x10)
	struct FDelegate __verse_0xFD1F89D8_RestrictMessageToPlayers; // 0x180(0x10)
	struct FDelegate __verse_0xE1D7057E_SetMapBounds; // 0x140(0x10)
	struct FDelegate __verse_0x070757DC_Show; // 0x160(0x10)

	void Show(); // Function VerseFortnite_hud_map_component.hud_map_component.Show // (Native|Public|BlueprintCallable) // @ game+0x430ba58
	void SetMapBounds(struct Uvector3* __verse_0xD0BE3FBE_Center, struct Uvector3* __verse_0xA327BDA5_Extent); // Function VerseFortnite_hud_map_component.hud_map_component.SetMapBounds // (Native|Public|BlueprintCallable) // @ game+0x430b940
	void RestrictMessageToPlayers(struct TArray<struct Uplayer_component*> __verse_0x8ED01927_PlayerList); // Function VerseFortnite_hud_map_component.hud_map_component.RestrictMessageToPlayers // (Native|Public|BlueprintCallable) // @ game+0x430b8f8
	void Hide(); // Function VerseFortnite_hud_map_component.hud_map_component.Hide // (Native|Public|BlueprintCallable) // @ game+0x430b84c
	void ClearMapBounds(); // Function VerseFortnite_hud_map_component.hud_map_component.ClearMapBounds // (Native|Public|BlueprintCallable) // @ game+0x430b724
	void $InitCDO(); // Function VerseFortnite_hud_map_component.hud_map_component.$InitCDO // (None) // @ game+0xda7c34
};

