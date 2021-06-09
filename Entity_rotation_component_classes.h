// SolarisGeneratedClass Entity_rotation_component.rotation_component
// Size: 0xf0 (Inherited: 0x80)
struct Urotation_component : UEntityActorRotationComponent {
	struct FDelegate __verse_0x157209B1_addToEulerRotation; // 0x80(0x10)
	char pad_90[0x20]; // 0x90(0x20)
	struct FDelegate __verse_0x1A895550_getEulerRotation; // 0xb0(0x10)
	struct FDelegate __verse_0xD43C6A48_getForwardVector; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)
	struct FDelegate __verse_0x45F73656_getRightVector; // 0xe0(0x10)
	struct FDelegate __verse_0xFD10C2FB_getUpVector; // 0xd0(0x10)
	struct FDelegate __verse_0x90C17D9F_setEulerRotation; // 0x90(0x10)
	struct FDelegate __verse_0xDC487083_setForwardVectorFromXY; // 0xa0(0x10)

	void setForwardVectorFromXY(struct Uvector3* __verse_0x6F57CF8F_x, struct Uvector3* __verse_0x0A307337_y); // Function Entity_rotation_component.rotation_component.setForwardVectorFromXY // (Native|Public|BlueprintCallable) // @ game+0x430c580
	void setEulerRotation(struct Uvector3* __verse_0x5C20106F_v); // Function Entity_rotation_component.rotation_component.setEulerRotation // (Native|Public|BlueprintCallable) // @ game+0x430c578
	struct Uvector3* GetUpVector(); // Function Entity_rotation_component.rotation_component.GetUpVector // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c294
	struct Uvector3* GetRightVector(); // Function Entity_rotation_component.rotation_component.GetRightVector // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c160
	struct Uvector3* GetForwardVector(); // Function Entity_rotation_component.rotation_component.GetForwardVector // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c044
	struct Uvector3* getEulerRotation(); // Function Entity_rotation_component.rotation_component.getEulerRotation // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430bfec
	void addToEulerRotation(struct Uvector3* __verse_0x5C20106F_v); // Function Entity_rotation_component.rotation_component.addToEulerRotation // (Native|Public|BlueprintCallable) // @ game+0x430bca0
	void $InitCDO(); // Function Entity_rotation_component.rotation_component.$InitCDO // (None) // @ game+0xda7c34
};

