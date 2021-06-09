// SolarisGeneratedClass Math_vector2.vector2
// Size: 0xa0 (Inherited: 0x28)
struct Uvector2 : UObject {
	char pad_28[0x70]; // 0x28(0x70)
	float __verse_0x6F57CF8F_x; // 0x98(0x04)
	float __verse_0x0A307337_y; // 0x9c(0x04)
	struct FDelegate __verse_0x1D28C728_add; // 0x38(0x10)
	struct FDelegate __verse_0x4D6820A4_divide; // 0x68(0x10)
	struct FDelegate __verse_0x566A49C1_multiply; // 0x58(0x10)
	struct FDelegate __verse_0x3F33EAC9_normal; // 0x28(0x10)
	struct FDelegate __verse_0x4E90869E_size; // 0x78(0x10)
	struct FDelegate __verse_0xF8184D3F_sizeSquared; // 0x88(0x10)
	struct FDelegate __verse_0xFB377014_subtract; // 0x48(0x10)

	struct Uvector2* Subtract(struct Uvector2* __verse_0x5C20106F_v); // Function Math_vector2.vector2.Subtract // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	float sizeSquared(); // Function Math_vector2.vector2.sizeSquared // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	float Size(); // Function Math_vector2.vector2.Size // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uvector2* Normal(); // Function Math_vector2.vector2.Normal // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347f98
	struct Uvector2* Multiply(struct Uvector2* __verse_0x5C20106F_v); // Function Math_vector2.vector2.Multiply // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uvector2* Divide(struct Uvector2* __verse_0x5C20106F_v); // Function Math_vector2.vector2.Divide // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uvector2* Add(struct Uvector2* __verse_0x5C20106F_v); // Function Math_vector2.vector2.Add // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uvector2* reflectVector(struct Uvector2* __verse_0x8BEC05BA_direction, struct Uvector2* __verse_0xADA21017_surfaceNormal); // Function Math_vector2.vector2.reflectVector // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347fdc
	float dotProduct(struct Uvector2* __verse_0xBAD88A47_v1, struct Uvector2* __verse_0x54773F55_v2); // Function Math_vector2.vector2.dotProduct // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x434794c
	float DistanceSquared(struct Uvector2* __verse_0xBAD88A47_v1, struct Uvector2* __verse_0x54773F55_v2); // Function Math_vector2.vector2.DistanceSquared // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x434793c
	float Distance(struct Uvector2* __verse_0xBAD88A47_v1, struct Uvector2* __verse_0x54773F55_v2); // Function Math_vector2.vector2.Distance // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347944
	float crossProduct(struct Uvector2* __verse_0xBAD88A47_v1, struct Uvector2* __verse_0x54773F55_v2); // Function Math_vector2.vector2.crossProduct // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347934
	struct Uvector2* createZero(); // Function Math_vector2.vector2.createZero // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347898
	struct Uvector2* Create(float __verse_0x3205F605_inX, float __verse_0x57624ABD_inY); // Function Math_vector2.vector2.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x434792c
	void $InitCDO(); // Function Math_vector2.vector2.$InitCDO // (None) // @ game+0xda7c34
};

