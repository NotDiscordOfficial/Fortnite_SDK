// SolarisGeneratedClass VerseFortnite_Item_player_pickup_component.player_pickup_component
// Size: 0xb8 (Inherited: 0x60)
struct Uplayer_pickup_component : UEntityComponent {
	char pad_60[0x30]; // 0x60(0x30)
	struct FDelegate __verse_0xF3C24F10_attemptPartialCollect; // 0x90(0x10)
	struct FDelegate __verse_0x28B8314B_getNumOfItemType; // 0x80(0x10)
	struct FDelegate __verse_0x136FCCFE_getPrimaryItemType; // 0xa0(0x10)
	struct FDelegate __verse_0x9ED5BD7A_givePickupTo; // 0x60(0x10)
	struct FDelegate __verse_0x56CE560D_tossPickup; // 0x70(0x10)

	void TossPickup(struct Uvector3* __verse_0xAA10FF12_finalLocation, struct Uplayer_component* __verse_0x03298FE6_owner); // Function VerseFortnite_Item_player_pickup_component.player_pickup_component.TossPickup // (Native|Public|BlueprintCallable) // @ game+0x430c768
	void givePickupTo(struct Uplayer_component* __verse_0x9F1D658F_player); // Function VerseFortnite_Item_player_pickup_component.player_pickup_component.givePickupTo // (Native|Public|BlueprintCallable) // @ game+0x430c2d4
	struct Uitem_type* getPrimaryItemType(); // Function VerseFortnite_Item_player_pickup_component.player_pickup_component.getPrimaryItemType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c108
	int32_t getNumOfItemType(struct Uitem_type* __verse_0x72E298E9_Type); // Function VerseFortnite_Item_player_pickup_component.player_pickup_component.getNumOfItemType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c078
	void attemptPartialCollect(struct Uitem_type* __verse_0x72E298E9_Type, int32_t __verse_0x41BF06A5_count, struct Uplayer_component* __verse_0x9F1D658F_player); // Function VerseFortnite_Item_player_pickup_component.player_pickup_component.attemptPartialCollect // (Native|Public|BlueprintCallable) // @ game+0x430bcc0
	struct Uplayer_pickup_component* createPickup(struct UObject* __verse_0x9866B8E7_contextObject, struct UFortItemDefinition* __verse_0x555FC35C_itemDefinition, int32_t __verse_0x41BF06A5_count, struct Uvector3* __verse_0x621FCC30_location); // Function VerseFortnite_Item_player_pickup_component.player_pickup_component.createPickup // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bdbc
	void $InitCDO(); // Function VerseFortnite_Item_player_pickup_component.player_pickup_component.$InitCDO // (None) // @ game+0xda7c34
};

