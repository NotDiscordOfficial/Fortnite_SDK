// SolarisGeneratedClass Math_rotation3.rotation3
// Size: 0x88 (Inherited: 0x28)
struct Urotation3 : UObject {
	char pad_28[0x50]; // 0x28(0x50)
	float __verse_0xD8D16BB9_Pitch; // 0x78(0x04)
	float __verse_0xF29EAE30_Yaw; // 0x7c(0x04)
	float __verse_0x64A8300F_Roll; // 0x80(0x04)
	struct FDelegate __verse_0xA05A740A_ToVector3; // 0x58(0x10)
	struct FDelegate __verse_0x41B1CBC2_getEulerRotationVector; // 0x28(0x10)
	struct FDelegate __verse_0xD43C6A48_getForwardVector; // 0x38(0x10)
	struct FDelegate __verse_0x45F73656_getRightVector; // 0x48(0x10)
	struct FDelegate __verse_0xFD10C2FB_getUpVector; // 0x68(0x10)

	struct Uvector3* GetUpVector(); // Function Math_rotation3.rotation3.GetUpVector // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c268
	struct Uvector3* GetRightVector(); // Function Math_rotation3.rotation3.GetRightVector // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c134
	struct Uvector3* GetForwardVector(); // Function Math_rotation3.rotation3.GetForwardVector // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c018
	struct Uvector3* getEulerRotationVector(); // Function Math_rotation3.rotation3.getEulerRotationVector // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uvector3* ToVector3(); // Function Math_rotation3.rotation3.ToVector3 // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430bad0
	struct Urotation3* createZero(); // Function Math_rotation3.rotation3.createZero // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bdc4
	struct Urotation3* createFromEuler(struct Uvector3* __verse_0x7E9A2B4F_vector); // Function Math_rotation3.rotation3.createFromEuler // (Static|Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Urotation3* Create(float __verse_0xD38197A3_pitch, float __verse_0x0A459F28_yaw, float __verse_0x19D30F18_roll); // Function Math_rotation3.rotation3.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bf1c
	struct Urotation3* compose(struct Urotation3* __verse_0xFE3567E9_rotation1, struct Urotation3* __verse_0x109AD2FB_rotation2); // Function Math_rotation3.rotation3.compose // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bd58
	void $InitCDO(); // Function Math_rotation3.rotation3.$InitCDO // (None) // @ game+0xda7c34
};

