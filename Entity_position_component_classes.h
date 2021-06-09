// SolarisGeneratedClass Entity_position_component.position_component
// Size: 0xe0 (Inherited: 0x80)
struct Uposition_component : UEntityActorPositionComponent {
	struct FDelegate __verse_0x6D290A47_addToPosition; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	struct FDelegate __verse_0x213F0E3F_getPosition; // 0xa0(0x10)
	struct FDelegate __verse_0x4A52BE58_setPosition; // 0x90(0x10)
	struct FDelegate __verse_0x6F57CF8F_x; // 0xb0(0x10)
	struct FDelegate __verse_0x0A307337_y; // 0xc0(0x10)
	struct FDelegate __verse_0xE49FC625_z; // 0xd0(0x10)

	float Z(); // Function Entity_position_component.position_component.Z // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c1f4
	float Y(); // Function Entity_position_component.position_component.Y // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c1c0
	float X(); // Function Entity_position_component.position_component.X // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c18c
	void SetPosition(struct Uvector3* __verse_0x5C20106F_v); // Function Entity_position_component.position_component.SetPosition // (Native|Public|BlueprintCallable) // @ game+0x430c5a8
	struct Uvector3* GetPosition(); // Function Entity_position_component.position_component.GetPosition // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c0dc
	void addToPosition(struct Uvector3* __verse_0x5C20106F_v); // Function Entity_position_component.position_component.addToPosition // (Native|Public|BlueprintCallable) // @ game+0x430bcb0
	void $InitCDO(); // Function Entity_position_component.position_component.$InitCDO // (None) // @ game+0xda7c34
};

