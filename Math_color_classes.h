// SolarisGeneratedClass Math_color.Color
// Size: 0x38 (Inherited: 0x28)
struct UColor : UObject {
	float __verse_0x44E0EC02_A; // 0x28(0x04)
	float __verse_0x35184040_R; // 0x2c(0x04)
	float __verse_0x98BF8727_G; // 0x30(0x04)
	float __verse_0xAA4F5910_B; // 0x34(0x04)

	struct UColor* createFromValues(int32_t __verse_0x0EF4F765_Alpha, int32_t __verse_0x77CCDA87_Red, int32_t __verse_0x853EAC70_Green, int32_t __verse_0x80217580_Blue); // Function Math_color.Color.createFromValues // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bd78
	struct UColor* createFromLinear(float __verse_0x0EF4F765_Alpha, float __verse_0x77CCDA87_Red, float __verse_0x853EAC70_Green, float __verse_0x80217580_Blue); // Function Math_color.Color.createFromLinear // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bd70
	struct UColor* createFromHex(struct FString __verse_0xCFC19EBC_hexString); // Function Math_color.Color.createFromHex // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bd68
	struct UColor* Create(enum class NamedColor __verse_0x2057B132_aColor); // Function Math_color.Color.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430bee8
	void $InitCDO(); // Function Math_color.Color.$InitCDO // (None) // @ game+0xda7c34
};

