// SolarisGeneratedClass Math_vector3.vector3
// Size: 0x118 (Inherited: 0x28)
struct Uvector3 : UObject {
	char pad_28[0xe0]; // 0x28(0xe0)
	float __verse_0x6F57CF8F_x; // 0x108(0x04)
	float __verse_0x0A307337_y; // 0x10c(0x04)
	float __verse_0xE49FC625_z; // 0x110(0x04)
	struct FDelegate __verse_0x4FC99089_ToRotation3; // 0x58(0x10)
	struct FDelegate __verse_0x1D28C728_add; // 0x68(0x10)
	struct FDelegate __verse_0x59299A50_addScalar; // 0xa8(0x10)
	struct FDelegate __verse_0x4D6820A4_divide; // 0x98(0x10)
	struct FDelegate __verse_0x07A14BD1_equals; // 0x28(0x10)
	struct FDelegate __verse_0x566A49C1_multiply; // 0x88(0x10)
	struct FDelegate __verse_0xE5473959_multiplyByScalar; // 0xb8(0x10)
	struct FDelegate __verse_0x3F33EAC9_normal; // 0x38(0x10)
	struct FDelegate __verse_0x4E90869E_size; // 0xc8(0x10)
	struct FDelegate __verse_0x548CBCC3_size2D; // 0xe8(0x10)
	struct FDelegate __verse_0xF8184D3F_sizeSquared; // 0xd8(0x10)
	struct FDelegate __verse_0xB0AFB45E_sizeSquared2D; // 0xf8(0x10)
	struct FDelegate __verse_0xFB377014_subtract; // 0x78(0x10)
	struct FDelegate __verse_0x52994366_toString; // 0x48(0x10)

	struct FString ToString(); // Function Math_vector3.vector3.ToString // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c680
	struct Uvector3* Subtract(struct Uvector3* __verse_0x5C20106F_v); // Function Math_vector3.vector3.Subtract // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	float sizeSquared2D(); // Function Math_vector3.vector3.sizeSquared2D // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	float sizeSquared(); // Function Math_vector3.vector3.sizeSquared // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	float size2D(); // Function Math_vector3.vector3.size2D // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	float Size(); // Function Math_vector3.vector3.Size // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uvector3* Normal(); // Function Math_vector3.vector3.Normal // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c33c
	struct Uvector3* multiplyByScalar(float __verse_0x805015BB_scalar); // Function Math_vector3.vector3.multiplyByScalar // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uvector3* Multiply(struct Uvector3* __verse_0x5C20106F_v); // Function Math_vector3.vector3.Multiply // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	char Equals(struct Uvector3* __verse_0x5C20106F_v, float __verse_0xB4A6AEEC_tolerance); // Function Math_vector3.vector3.Equals // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430bfa8
	struct Uvector3* Divide(struct Uvector3* __verse_0x5C20106F_v); // Function Math_vector3.vector3.Divide // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uvector3* addScalar(float __verse_0x805015BB_scalar); // Function Math_vector3.vector3.addScalar // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uvector3* Add(struct Uvector3* __verse_0x5C20106F_v); // Function Math_vector3.vector3.Add // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Urotation3* ToRotation3(); // Function Math_vector3.vector3.ToRotation3 // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430baa4
	struct Uvector3* reflectVector(struct Uvector3* __verse_0x8BEC05BA_direction, struct Uvector3* __verse_0xADA21017_surfaceNormal); // Function Math_vector3.vector3.reflectVector // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430c4a0
	float dotProduct(struct Uvector3* __verse_0xBAD88A47_v1, struct Uvector3* __verse_0x54773F55_v2); // Function Math_vector3.vector3.dotProduct // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bfa0
	float DistanceSquared2D(struct Uvector3* __verse_0xBAD88A47_v1, struct Uvector3* __verse_0x54773F55_v2); // Function Math_vector3.vector3.DistanceSquared2D // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bf88
	float DistanceSquared(struct Uvector3* __verse_0xBAD88A47_v1, struct Uvector3* __verse_0x54773F55_v2); // Function Math_vector3.vector3.DistanceSquared // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bf90
	float Distance2D(struct Uvector3* __verse_0xBAD88A47_v1, struct Uvector3* __verse_0x54773F55_v2); // Function Math_vector3.vector3.Distance2D // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bf80
	float Distance(struct Uvector3* __verse_0xBAD88A47_v1, struct Uvector3* __verse_0x54773F55_v2); // Function Math_vector3.vector3.Distance // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bf98
	struct Uvector3* crossProduct(struct Uvector3* __verse_0xBAD88A47_v1, struct Uvector3* __verse_0x54773F55_v2); // Function Math_vector3.vector3.crossProduct // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bf60
	struct Uvector3* createZero(); // Function Math_vector3.vector3.createZero // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430be40
	struct Uvector3* createOneVector(); // Function Math_vector3.vector3.createOneVector // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bd80
	struct Uvector3* Create(float __verse_0x3205F605_inX, float __verse_0x57624ABD_inY, float __verse_0xB9CDFFAF_inZ); // Function Math_vector3.vector3.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bf50
	void $InitCDO(); // Function Math_vector3.vector3.$InitCDO // (None) // @ game+0xda7c34
};

