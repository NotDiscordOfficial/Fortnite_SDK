// SolarisGeneratedClass Entity_Physics_hit_result.hit_result
// Size: 0x48 (Inherited: 0x28)
struct Uhit_result : UObject {
	int32_t __verse_0x592C3A0F_OtherEntityID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UEntityActorCollisionComponent* __verse_0x15DAA648_OtherComponent; // 0x30(0x08)
	struct Uvector3* __verse_0xA0175DA6_HitNormal; // 0x38(0x08)
	struct Uvector3* __verse_0xE16733E1_HitLocation; // 0x40(0x08)

	void $InitCDO(); // Function Entity_Physics_hit_result.hit_result.$InitCDO // (None) // @ game+0xda7c34
};

