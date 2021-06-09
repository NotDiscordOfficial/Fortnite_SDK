// SolarisGeneratedClass Math_quat4.quat4
// Size: 0x228 (Inherited: 0x28)
struct Uquat4 : UObject {
	char pad_28[0x1f0]; // 0x28(0x1f0)
	float __verse_0x6F57CF8F_x; // 0x218(0x04)
	float __verse_0x0A307337_y; // 0x21c(0x04)
	float __verse_0xE49FC625_z; // 0x220(0x04)
	float __verse_0x3947ACD7_w; // 0x224(0x04)
	struct FDelegate __verse_0x1D28C728_add; // 0x1f8(0x10)
	struct FDelegate __verse_0x9D0DF6D5_angularRadianDistance; // 0x28(0x10)
	struct FDelegate __verse_0x682E931A_divideByScalar; // 0x1e8(0x10)
	struct FDelegate __verse_0xC41417BD_dot; // 0x208(0x10)
	struct FDelegate __verse_0x652DC05F_enforceShortestArcWith; // 0x48(0x10)
	struct FDelegate __verse_0x07A14BD1_equals; // 0x58(0x10)
	struct FDelegate __verse_0xCEF7AEDF_exp; // 0x78(0x10)
	struct FDelegate __verse_0x54FEA7E2_getAngle; // 0x88(0x10)
	struct FDelegate __verse_0xCB79FA19_getAxisX; // 0x98(0x10)
	struct FDelegate __verse_0xAE1E46A1_getAxisY; // 0xa8(0x10)
	struct FDelegate __verse_0x40B1F3B3_getAxisZ; // 0xb8(0x10)
	struct FDelegate __verse_0x44114CF7_getNormalized; // 0xc8(0x10)
	struct FDelegate __verse_0x2D11D1C3_getRotationAxis; // 0xd8(0x10)
	struct FDelegate __verse_0x550FEEF2_getSwing; // 0xf8(0x10)
	struct FDelegate __verse_0x4D75B8B6_getTwist; // 0x108(0x10)
	struct FDelegate __verse_0xFB947954_getTwistRadianAngle; // 0xe8(0x10)
	struct FDelegate __verse_0x88F43F83_inverse; // 0x118(0x10)
	struct FDelegate __verse_0x1F754778_isIdentity; // 0x128(0x10)
	struct FDelegate __verse_0x82E407E4_isNormalized; // 0x138(0x10)
	struct FDelegate __verse_0x9B2459B8_isValid; // 0x38(0x10)
	struct FDelegate __verse_0x4B9AB7F9_log; // 0x148(0x10)
	struct FDelegate __verse_0xE5473959_multiplyByScalar; // 0x1d8(0x10)
	struct FDelegate __verse_0x5CB6D71C_normalize; // 0x158(0x10)
	struct FDelegate __verse_0x34E62D61_rotateVector; // 0x168(0x10)
	struct FDelegate __verse_0x4E90869E_size; // 0x178(0x10)
	struct FDelegate __verse_0xF8184D3F_sizeSquared; // 0x188(0x10)
	struct FDelegate __verse_0xFB377014_subtract; // 0x1c8(0x10)
	struct FDelegate __verse_0xB5960B67_toEulerRotation3; // 0x68(0x10)
	struct FDelegate __verse_0xC8D6C0CC_toRotation3; // 0x198(0x10)
	struct FDelegate __verse_0x52994366_toString; // 0x1a8(0x10)
	struct FDelegate __verse_0x0F2E0C8F_unrotateVector; // 0x1b8(0x10)

	struct Uvector3* unrotateVector(struct Uvector3* __verse_0x5C20106F_v); // Function Math_quat4.quat4.unrotateVector // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4348314
	struct FString ToString(); // Function Math_quat4.quat4.ToString // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4348298
	struct Urotation3* ToRotation3(); // Function Math_quat4.quat4.ToRotation3 // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43481f8
	struct Urotation3* toEulerRotation3(); // Function Math_quat4.quat4.toEulerRotation3 // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43481cc
	struct Uquat4* Subtract(struct Uquat4* __verse_0xE518C7F2_q); // Function Math_quat4.quat4.Subtract // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	float sizeSquared(); // Function Math_quat4.quat4.sizeSquared // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4348104
	float Size(); // Function Math_quat4.quat4.Size // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4348154
	struct Uvector3* RotateVector(struct Uvector3* __verse_0x5C20106F_v); // Function Math_quat4.quat4.RotateVector // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347fe4
	void normalize(float __verse_0xB4A6AEEC_tolerance); // Function Math_quat4.quat4.normalize // (Native|Public|BlueprintCallable) // @ game+0x4347fc4
	struct Uquat4* multiplyByScalar(float __verse_0x6ED0CE58_s); // Function Math_quat4.quat4.multiplyByScalar // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uquat4* Log(); // Function Math_quat4.quat4.Log // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347f6c
	char IsValid(); // Function Math_quat4.quat4.IsValid // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347ec8
	char isNormalized(); // Function Math_quat4.quat4.isNormalized // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347ea4
	char isIdentity(float __verse_0xB4A6AEEC_tolerance); // Function Math_quat4.quat4.isIdentity // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347e9c
	struct Uquat4* Inverse(); // Function Math_quat4.quat4.Inverse // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347e70
	float getTwistRadianAngle(struct Uvector3* __verse_0x32625C4E_twistAxis); // Function Math_quat4.quat4.getTwistRadianAngle // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347d68
	struct Uquat4* getTwist(struct Uvector3* __verse_0x32625C4E_twistAxis); // Function Math_quat4.quat4.getTwist // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347d70
	struct Uquat4* getSwing(struct Uvector3* __verse_0x32625C4E_twistAxis); // Function Math_quat4.quat4.getSwing // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347d34
	struct Uvector3* GetRotationAxis(); // Function Math_quat4.quat4.GetRotationAxis // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347c4c
	struct Uquat4* getNormalized(float __verse_0xB4A6AEEC_tolerance); // Function Math_quat4.quat4.getNormalized // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347c18
	struct Uvector3* getAxisZ(); // Function Math_quat4.quat4.getAxisZ // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347a74
	struct Uvector3* getAxisY(); // Function Math_quat4.quat4.getAxisY // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347a48
	struct Uvector3* getAxisX(); // Function Math_quat4.quat4.getAxisX // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347a1c
	float getAngle(); // Function Math_quat4.quat4.getAngle // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43479d0
	struct Uquat4* Exp(); // Function Math_quat4.quat4.Exp // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x434796c
	char Equals(struct Uquat4* __verse_0xE518C7F2_q, float __verse_0xB4A6AEEC_tolerance); // Function Math_quat4.quat4.Equals // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x434795c
	void enforceShortestArcWith(struct Uquat4* __verse_0xE518C7F2_q); // Function Math_quat4.quat4.enforceShortestArcWith // (Native|Public|BlueprintCallable) // @ game+0x4347954
	float DoT(struct Uquat4* __verse_0xE518C7F2_q); // Function Math_quat4.quat4.DoT // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uquat4* divideByScalar(float __verse_0x6ED0CE58_s); // Function Math_quat4.quat4.divideByScalar // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	float angularRadianDistance(struct Uquat4* __verse_0xE518C7F2_q); // Function Math_quat4.quat4.angularRadianDistance // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347610
	struct Uquat4* Add(struct Uquat4* __verse_0xE518C7F2_q); // Function Math_quat4.quat4.Add // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Uquat4* squadFullPath(struct Uquat4* __verse_0xA3D14F4D_q1, struct Uquat4* __verse_0xC7DFAF05_t1, struct Uquat4* __verse_0x4D7EFA5F_q2, struct Uquat4* __verse_0x29701A17_t2, float __verse_0x05A40B7F_alpha); // Function Math_quat4.quat4.squadFullPath // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43481b4
	struct Uquat4* Squad(struct Uquat4* __verse_0xA3D14F4D_q1, struct Uquat4* __verse_0xC7DFAF05_t1, struct Uquat4* __verse_0x4D7EFA5F_q2, struct Uquat4* __verse_0x29701A17_t2, float __verse_0x05A40B7F_alpha); // Function Math_quat4.quat4.Squad // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43481bc
	struct Uquat4* slerpNotNormalized(struct Uquat4* __verse_0xA3D14F4D_q1, struct Uquat4* __verse_0x4D7EFA5F_q2, float __verse_0x05A40B7F_alpha); // Function Math_quat4.quat4.slerpNotNormalized // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x434818c
	struct Uquat4* slerpFullPathNotNormalized(struct Uquat4* __verse_0xA3D14F4D_q1, struct Uquat4* __verse_0x4D7EFA5F_q2, float __verse_0x05A40B7F_alpha); // Function Math_quat4.quat4.slerpFullPathNotNormalized // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x434817c
	struct Uquat4* slerpFullPath(struct Uquat4* __verse_0xA3D14F4D_q1, struct Uquat4* __verse_0x4D7EFA5F_q2, float __verse_0x05A40B7F_alpha); // Function Math_quat4.quat4.slerpFullPath // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4348184
	struct Uquat4* slerp(struct Uquat4* __verse_0xA3D14F4D_q1, struct Uquat4* __verse_0x4D7EFA5F_q2, float __verse_0x05A40B7F_alpha); // Function Math_quat4.quat4.slerp // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4348194
	float safeError(struct Uquat4* __verse_0xA3D14F4D_q1, struct Uquat4* __verse_0x4D7EFA5F_q2); // Function Math_quat4.quat4.safeError // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347ff4
	struct Uquat4* findBetweenVectors(struct Uvector3* __verse_0xBAD88A47_v1, struct Uvector3* __verse_0x54773F55_v2); // Function Math_quat4.quat4.findBetweenVectors // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43479b0
	struct Uquat4* findBetweenNormals(struct Uvector3* __verse_0x24F2D4E8_n1, struct Uvector3* __verse_0xCA5D61FA_n2); // Function Math_quat4.quat4.findBetweenNormals // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43479a8
	struct Uquat4* findBetween(struct Uvector3* __verse_0xBAD88A47_v1, struct Uvector3* __verse_0x54773F55_v2); // Function Math_quat4.quat4.findBetween // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43479b8
	struct Uquat4* fastLerp(struct Uquat4* __verse_0xA3D14F4D_q1, struct Uquat4* __verse_0x4D7EFA5F_q2, float __verse_0x05A40B7F_alpha); // Function Math_quat4.quat4.fastLerp // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43479a0
	struct Uquat4* fastBilerp(struct Uquat4* __verse_0x47EC792A_p00, struct Uquat4* __verse_0xD9ECD3E6_p10, struct Uquat4* __verse_0x228BC592_p01, struct Uquat4* __verse_0xBC8B6F5E_p11, float __verse_0x4DC01E1F_fracX, float __verse_0x28A7A2A7_fracY); // Function Math_quat4.quat4.fastBilerp // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347998
	float Error(struct Uquat4* __verse_0xA3D14F4D_q1, struct Uquat4* __verse_0x4D7EFA5F_q2); // Function Math_quat4.quat4.Error // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347964
	struct Uquat4* createZero(); // Function Math_quat4.quat4.createZero // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43477a0
	struct Uquat4* createIdentity(); // Function Math_quat4.quat4.createIdentity // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43476ec
	struct Uquat4* createFromRotation(struct Urotation3* __verse_0xAA1ABDC9_rotation); // Function Math_quat4.quat4.createFromRotation // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43476e4
	struct Uquat4* Create(struct Uvector3* __verse_0xAB14FAEF_axis, float __verse_0x8ADC6410_radians); // Function Math_quat4.quat4.Create // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x434791c
	struct Uquat4* calcTangents(struct Uquat4* __verse_0x07BDAE31_prevQ, struct Uquat4* __verse_0xE518C7F2_q, struct Uquat4* __verse_0xC170DC03_nextQ, float __verse_0x35918A51_tension); // Function Math_quat4.quat4.calcTangents // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347620
	void $InitCDO(); // Function Math_quat4.quat4.$InitCDO // (None) // @ game+0xda7c34
};

