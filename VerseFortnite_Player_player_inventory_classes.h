// SolarisGeneratedClass VerseFortnite_Player_player_inventory.player_inventory
// Size: 0x28 (Inherited: 0x28)
struct Uplayer_inventory : UObject {

	void tryAddToInventory(struct Uplayer_component* __verse_0x9F1D658F_player, struct FString __verse_0x2FF42210_assetPath, int32_t __verse_0x2867F112_quantity, char __verse_0x9D7D8947_notifyPlayerClient); // Function VerseFortnite_Player_player_inventory.player_inventory.tryAddToInventory // (Native|Static|Public|BlueprintCallable) // @ game+0x430c778
	OptionalProperty tryAddItemToInventory(struct Uplayer_component* __verse_0x9F1D658F_player, struct UFortItemDefinition* __verse_0x555FC35C_itemDefinition, int32_t __verse_0x2867F112_quantity, char __verse_0x9D7D8947_notifyPlayerClient); // Function VerseFortnite_Player_player_inventory.player_inventory.tryAddItemToInventory // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c770
	char removeFromInventory(struct Uplayer_component* __verse_0x9F1D658F_player, struct FString __verse_0x2FF42210_assetPath, int32_t __verse_0x2867F112_quantity); // Function VerseFortnite_Player_player_inventory.player_inventory.removeFromInventory // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c530
	void ClearDroppableItems(struct Uplayer_component* __verse_0x9F1D658F_player); // Function VerseFortnite_Player_player_inventory.player_inventory.ClearDroppableItems // (Native|Static|Public|BlueprintCallable) // @ game+0x3ce1cd8
	void $InitCDO(); // Function VerseFortnite_Player_player_inventory.player_inventory.$InitCDO // (None) // @ game+0xda7c34
};

