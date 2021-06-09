// Enum ResonanceAudio.EResonanceRenderMode
enum class EResonanceRenderMode : uint8 {
	StereoPanning,
	BinauralLowQuality,
	BinauralMediumQuality,
	BinauralHighQuality,
	RoomEffectsOnly,
	EResonanceRenderMode_MAX,
};

// Enum ResonanceAudio.ERaMaterialName
enum class ERaMaterialName : uint8 {
	TRANSPARENT,
	ACOUSTIC_CEILING_TILES,
	BRICK_BARE,
	BRICK_PAINTED,
	CONCRETE_BLOCK_COARSE,
	CONCRETE_BLOCK_PAINTED,
	CURTAIN_HEAVY,
	FIBER_GLASS_INSULATION,
	GLASS_THIN,
	GLASS_THICK,
	GRASS,
	LINOLEUM_ON_CONCRETE,
	MARBLE,
	METAL,
	PARQUET_ONCONCRETE,
	PLASTER_ROUGH,
	PLASTER_SMOOTH,
	PLYWOOD_PANEL,
	POLISHED_CONCRETE_OR_TILE,
	SHEETROCK,
	WATER_OR_ICE_SURFACE,
	WOOD_CEILING,
	WOOD_PANEL,
	UNIFORM,
	ERaMaterialName_MAX,
};

// Enum ResonanceAudio.ERaDistanceRolloffModel
enum class ERaDistanceRolloffModel : uint8 {
	LOGARITHMIC,
	LINEAR,
	NONE,
	ERaDistanceRolloffModel_MAX,
};

// Enum ResonanceAudio.ERaSpatializationMethod
enum class ERaSpatializationMethod : uint8 {
	STEREO_PANNING,
	HRTF,
	ERaSpatializationMethod_MAX,
};

// Enum ResonanceAudio.ERaQualityMode
enum class ERaQualityMode : uint8 {
	STEREO_PANNING,
	BINAURAL_LOW,
	BINAURAL_MEDIUM,
	BINAURAL_HIGH,
	ERaQualityMode_MAX,
};

// ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
// Size: 0x50 (Inherited: 0x00)
struct FResonanceAudioReverbPluginSettings {
	bool bEnableRoomEffects; // 0x00(0x01)
	bool bGetTransformFromAudioVolume; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector RoomPosition; // 0x04(0x0c)
	struct FQuat RoomRotation; // 0x10(0x10)
	struct FVector RoomDimensions; // 0x20(0x0c)
	enum class ERaMaterialName LeftWallMaterial; // 0x2c(0x01)
	enum class ERaMaterialName RightWallMaterial; // 0x2d(0x01)
	enum class ERaMaterialName FloorMaterial; // 0x2e(0x01)
	enum class ERaMaterialName CeilingMaterial; // 0x2f(0x01)
	enum class ERaMaterialName FrontWallMaterial; // 0x30(0x01)
	enum class ERaMaterialName BackWallMaterial; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float ReflectionScalar; // 0x34(0x04)
	float ReverbGain; // 0x38(0x04)
	float ReverbTimeModifier; // 0x3c(0x04)
	float ReverbBrightness; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

