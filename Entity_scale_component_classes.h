// SolarisGeneratedClass Entity_scale_component.scale_component
// Size: 0xe0 (Inherited: 0x80)
struct Uscale_component : UEntityActorScaleComponent {
	struct FDelegate __verse_0x3D4ECD24_addToScale; // 0x80(0x10)
	char pad_90[0x10]; // 0x90(0x10)
	struct FDelegate __verse_0x44C4D82E_getScale; // 0xa0(0x10)
	struct FDelegate __verse_0x7F4B1A38_getScaleX; // 0xb0(0x10)
	struct FDelegate __verse_0x1A2CA680_getScaleY; // 0xc0(0x10)
	struct FDelegate __verse_0xF4831392_getScaleZ; // 0xd0(0x10)
	struct FDelegate __verse_0x87B00B42_setScale; // 0x90(0x10)

	void SetScale(struct Uvector3* __verse_0x5C20106F_v); // Function Entity_scale_component.scale_component.SetScale // (Native|Public|BlueprintCallable) // @ game+0x430c5a8
	float GetScaleZ(); // Function Entity_scale_component.scale_component.GetScaleZ // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c1f4
	float GetScaleY(); // Function Entity_scale_component.scale_component.GetScaleY // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c1c0
	float GetScaleX(); // Function Entity_scale_component.scale_component.GetScaleX // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c18c
	struct Uvector3* getScale(); // Function Entity_scale_component.scale_component.getScale // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c0dc
	void addToScale(struct Uvector3* __verse_0x5C20106F_v); // Function Entity_scale_component.scale_component.addToScale // (Native|Public|BlueprintCallable) // @ game+0x430bcb8
	void $InitCDO(); // Function Entity_scale_component.scale_component.$InitCDO // (None) // @ game+0xda7c34
};

