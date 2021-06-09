// ScriptStruct FortSoundCueTemplates.GliderThrustData
// Size: 0x20 (Inherited: 0x00)
struct FGliderThrustData {
	struct FName ParameterName; // 0x00(0x08)
	struct FVector2D PitchOutput; // 0x08(0x08)
	struct FVector2D VolumeOutput; // 0x10(0x08)
	struct USoundWave* sound; // 0x18(0x08)
};

// ScriptStruct FortSoundCueTemplates.PhysicsImpactData
// Size: 0x20 (Inherited: 0x00)
struct FPhysicsImpactData {
	struct FVector2D VolumeOutput; // 0x00(0x08)
	struct FVector2D PitchOutput; // 0x08(0x08)
	struct TArray<struct USoundWave*> Variations; // 0x10(0x10)
};

// ScriptStruct FortSoundCueTemplates.PhysicsStateData
// Size: 0x58 (Inherited: 0x00)
struct FPhysicsStateData {
	struct FName ParameterName; // 0x00(0x08)
	struct FVector2D VolumeOutput; // 0x08(0x08)
	struct FVector2D PitchOutput; // 0x10(0x08)
	struct FDistanceDatum CrossfadeInputSlow; // 0x18(0x14)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct USoundWave* SlowLoop; // 0x30(0x08)
	struct FDistanceDatum CrossfadeInputFast; // 0x38(0x14)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct USoundWave* FastLoop; // 0x50(0x08)
};

