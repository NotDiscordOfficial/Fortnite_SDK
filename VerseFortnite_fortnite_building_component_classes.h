// SolarisGeneratedClass VerseFortnite_fortnite_building_component.fortnite_building_component
// Size: 0xb8 (Inherited: 0x60)
struct Ufortnite_building_component : UEntityComponent {
	char pad_60[0x10]; // 0x60(0x10)
	struct FDelegate __verse_0xE6DDBCDF_canBeDamaged; // 0x70(0x10)
	struct FDelegate __verse_0x50D68A6C_canBeReplaced; // 0x80(0x10)
	struct FDelegate __verse_0x3DEE16FB_setCanBeDamaged; // 0x90(0x10)
	struct FDelegate __verse_0xB30319D3_setCanBeReplaced; // 0xa0(0x10)
	struct FDelegate __verse_0xD1D8F06C_wasPlayerBuilt; // 0x60(0x10)

	char wasPlayerBuilt(); // Function VerseFortnite_fortnite_building_component.fortnite_building_component.wasPlayerBuilt // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c780
	void setCanBeReplaced(char __verse_0x194FD13B_canReplace); // Function VerseFortnite_fortnite_building_component.fortnite_building_component.setCanBeReplaced // (Native|Public|BlueprintCallable) // @ game+0x430c560
	void SetCanBeDamaged(char __verse_0x21010F99_canDamage); // Function VerseFortnite_fortnite_building_component.fortnite_building_component.SetCanBeDamaged // (Native|Public|BlueprintCallable) // @ game+0x430c558
	char canBeReplaced(); // Function VerseFortnite_fortnite_building_component.fortnite_building_component.canBeReplaced // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430bd04
	char canBeDamaged(); // Function VerseFortnite_fortnite_building_component.fortnite_building_component.canBeDamaged // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430bcc8
	void $InitCDO(); // Function VerseFortnite_fortnite_building_component.fortnite_building_component.$InitCDO // (None) // @ game+0xda7c34
};

