// SolarisGeneratedClass VerseFortnite_Player_player_start_component.player_start_component
// Size: 0x90 (Inherited: 0x60)
struct Uplayer_start_component : UEntityComponent {
	char pad_60[0x20]; // 0x60(0x20)
	struct TArray<struct FString> __verse_0x7C32BFF7_tags; // 0x80(0x10)
	struct FDelegate __verse_0x94EDDB06_addTags; // 0x60(0x10)
	struct FDelegate __verse_0x213F0E3F_getPosition; // 0x70(0x10)

	struct Uvector3* GetPosition(); // Function VerseFortnite_Player_player_start_component.player_start_component.GetPosition // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c0b0
	void addTags(struct TArray<struct FString> __verse_0xE77537C1_newTags); // Function VerseFortnite_Player_player_start_component.player_start_component.addTags // (Native|Public|BlueprintCallable) // @ game+0x430bc98
	struct TArray<struct Uplayer_start_component*> findAllInPlayspaceWithTags(struct UObject* __verse_0x9866B8E7_contextObject, struct TArray<struct FString> __verse_0xC3624B24_searchTags); // Function VerseFortnite_Player_player_start_component.player_start_component.findAllInPlayspaceWithTags // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bfdc
	void $InitCDO(); // Function VerseFortnite_Player_player_start_component.player_start_component.$InitCDO // (None) // @ game+0xda7c34
};

