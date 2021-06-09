// SolarisGeneratedClass VerseFortnite_Player_fort_player_component.fort_player_component
// Size: 0x120 (Inherited: 0xe0)
struct Ufort_player_component : Uplayer_component {
	char pad_E0[0x30]; // 0xe0(0x30)
	struct FDelegate __verse_0xBBC80FA9_GetUniqueID; // 0x110(0x10)
	struct FDelegate __verse_0x84F9DFC3_IsActive; // 0x100(0x10)
	struct FDelegate __verse_0x3CB75520_PopActiveState; // 0xf0(0x10)
	struct FDelegate __verse_0xAA451D1A_PushActiveState; // 0xe0(0x10)

	char PushActiveState(struct FString __verse_0xB293443C_stateToAdd); // Function VerseFortnite_Player_fort_player_component.fort_player_component.PushActiveState // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430b88c
	char PopActiveState(struct FString __verse_0x8F8DC95F_stateToRemove); // Function VerseFortnite_Player_fort_player_component.fort_player_component.PopActiveState // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430b88c
	char IsActive(struct FString __verse_0xDDCAFCF3_state); // Function VerseFortnite_Player_fort_player_component.fort_player_component.IsActive // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430b87c
	struct FString GetUniqueID(); // Function VerseFortnite_Player_fort_player_component.fort_player_component.GetUniqueID // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430b7d8
	void $InitCDO(); // Function VerseFortnite_Player_fort_player_component.fort_player_component.$InitCDO // (None) // @ game+0xda7c34
};

