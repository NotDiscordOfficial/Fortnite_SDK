// SolarisGeneratedClass Math_vector4_v.vector4_v
// Size: 0x58 (Inherited: 0x28)
struct Uvector4_v : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	float __verse_0x6F57CF8F_x; // 0x48(0x04)
	float __verse_0x0A307337_y; // 0x4c(0x04)
	float __verse_0xE49FC625_z; // 0x50(0x04)
	float __verse_0x3947ACD7_w; // 0x54(0x04)
	struct FDelegate __verse_0x07A14BD1_equals; // 0x28(0x10)
	struct FDelegate __verse_0x52994366_toString; // 0x38(0x10)

	struct FString ToString(); // Function Math_vector4_v.vector4_v.ToString // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430c6f4
	char Equals(struct Uvector4_v* __verse_0x5C20106F_v, float __verse_0xB4A6AEEC_tolerance); // Function Math_vector4_v.vector4_v.Equals // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430bfb0
	struct Uvector4_v* createZero(); // Function Math_vector4_v.vector4_v.createZero // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bebc
	struct Uvector4_v* Create(float __verse_0x3205F605_inX, float __verse_0x57624ABD_inY, float __verse_0xB9CDFFAF_inZ, float __verse_0x6415955D_inW); // Function Math_vector4_v.vector4_v.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bf58
	void $InitCDO(); // Function Math_vector4_v.vector4_v.$InitCDO // (None) // @ game+0xda7c34
};

