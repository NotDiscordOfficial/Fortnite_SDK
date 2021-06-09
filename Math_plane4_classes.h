// SolarisGeneratedClass Math_plane4.plane4
// Size: 0x58 (Inherited: 0x28)
struct Uplane4 : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct Uvector3* __verse_0x94528ACF_base; // 0x48(0x08)
	struct Uvector3* __verse_0x3F33EAC9_normal; // 0x50(0x08)
	struct FDelegate __verse_0xA28DCD7E_segmentIntersection; // 0x38(0x10)
	struct FDelegate __verse_0x52994366_toString; // 0x28(0x10)

	struct FString ToString(); // Function Math_plane4.plane4.ToString // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4348224
	struct Uvector3* segmentIntersection(struct Uvector3* __verse_0x93ADD079_pointA, struct Uvector3* __verse_0x7D02656B_pointB); // Function Math_plane4.plane4.segmentIntersection // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347ffc
	struct Uplane4* createZero(); // Function Math_plane4.plane4.createZero // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347724
	struct Uplane4* Create(struct Uvector3* __verse_0xB04E112A_inBase, struct Uvector3* __verse_0x06073D83_inNormal); // Function Math_plane4.plane4.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347914
	void $InitCDO(); // Function Math_plane4.plane4.$InitCDO // (None) // @ game+0xda7c34
};

