// SolarisGeneratedClass Math_transform.Transform
// Size: 0xd0 (Inherited: 0x28)
struct UTransform : UObject {
	char pad_28[0x90]; // 0x28(0x90)
	struct Uvector3* __verse_0xA82B0967_Position; // 0xb8(0x08)
	struct Uvector3* __verse_0x78C70FF3_Rotation; // 0xc0(0x08)
	struct Uvector3* __verse_0xA376805D_Scale; // 0xc8(0x08)
	struct FDelegate __verse_0x901058EB_GetPositionX; // 0x28(0x10)
	struct FDelegate __verse_0xF577E453_GetPositionY; // 0x38(0x10)
	struct FDelegate __verse_0x1BD85141_GetPositionZ; // 0x48(0x10)
	struct FDelegate __verse_0x2ED568CE_GetRotationPitch; // 0x58(0x10)
	struct FDelegate __verse_0xE9766302_GetRotationRoll; // 0x68(0x10)
	struct FDelegate __verse_0x94985D08_GetRotationYaw; // 0x78(0x10)
	struct FDelegate __verse_0x8689E921_GetScaleX; // 0x88(0x10)
	struct FDelegate __verse_0xE3EE5599_GetScaleY; // 0x98(0x10)
	struct FDelegate __verse_0x0D41E08B_GetScaleZ; // 0xa8(0x10)

	float GetScaleZ(); // Function Math_transform.Transform.GetScaleZ // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347374
	float GetScaleY(); // Function Math_transform.Transform.GetScaleY // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347354
	float GetScaleX(); // Function Math_transform.Transform.GetScaleX // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347334
	float GetRotationYaw(); // Function Math_transform.Transform.GetRotationYaw // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43472e8
	float GetRotationRoll(); // Function Math_transform.Transform.GetRotationRoll // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43472c8
	float GetRotationPitch(); // Function Math_transform.Transform.GetRotationPitch // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43472a8
	float GetPositionZ(); // Function Math_transform.Transform.GetPositionZ // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x434725c
	float GetPositionY(); // Function Math_transform.Transform.GetPositionY // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x434723c
	float GetPositionX(); // Function Math_transform.Transform.GetPositionX // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x434721c
	struct UTransform* createZero(); // Function Math_transform.Transform.createZero // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x434781c
	struct UTransform* Create(struct Uvector3* __verse_0x7AF6BB5D_position, struct Uvector3* __verse_0x7314EE20_eulerRotation, struct Uvector3* __verse_0xA8267C47_scale); // Function Math_transform.Transform.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347924
	void $InitCDO(); // Function Math_transform.Transform.$InitCDO // (None) // @ game+0xda7c34
};

