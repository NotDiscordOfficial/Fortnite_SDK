// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
// Size: 0x30 (Inherited: 0x28)
struct UResonanceAudioSoundfieldSettings : USoundfieldEncodingSettingsBase {
	enum class EResonanceRenderMode RenderMode; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UResonanceAudioBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void SetGlobalReverbPreset(struct UResonanceAudioReverbPluginPreset* InPreset); // Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x42a2bd4
	struct UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset(); // Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x42a2b0c
};

// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
// Size: 0x2a0 (Inherited: 0x220)
struct AResonanceAudioDirectivityVisualizer : AActor {
	char pad_220[0x70]; // 0x220(0x70)
	struct UMaterial* Material; // 0x290(0x08)
	struct UResonanceAudioSpatializationSourceSettings* Settings; // 0x298(0x08)
};

// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
// Size: 0x130 (Inherited: 0x68)
struct UResonanceAudioReverbPluginPreset : USoundEffectSubmixPreset {
	char pad_68[0x78]; // 0x68(0x78)
	struct FResonanceAudioReverbPluginSettings Settings; // 0xe0(0x50)

	void SetRoomRotation(struct FQuat InRotation); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x42a3124
	void SetRoomPosition(struct FVector InPosition); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x42a3088
	void SetRoomMaterials(struct TArray<enum class ERaMaterialName> InMaterials); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x42a2fb8
	void SetRoomDimensions(struct FVector InDimensions); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x42a2f1c
	void SetReverbTimeModifier(float InReverbTimeModifier); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier // (Final|Native|Public|BlueprintCallable) // @ game+0x42a2e6c
	void SetReverbGain(float InReverbGain); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain // (Final|Native|Public|BlueprintCallable) // @ game+0x42a2dbc
	void SetReverbBrightness(float InReverbBrightness); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness // (Final|Native|Public|BlueprintCallable) // @ game+0x42a2d0c
	void SetReflectionScalar(float InReflectionScalar); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar // (Final|Native|Public|BlueprintCallable) // @ game+0x42a2c5c
	void SetEnableRoomEffects(bool bInEnableRoomEffects); // Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects // (Final|Native|Public|BlueprintCallable) // @ game+0x42a2b30
};

// Class ResonanceAudio.ResonanceAudioSettings
// Size: 0x78 (Inherited: 0x28)
struct UResonanceAudioSettings : UObject {
	struct FSoftObjectPath OutputSubmix; // 0x28(0x18)
	enum class ERaQualityMode QualityMode; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FSoftObjectPath GlobalReverbPreset; // 0x48(0x18)
	struct FSoftObjectPath GlobalSourcePreset; // 0x60(0x18)
};

// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// Size: 0x50 (Inherited: 0x28)
struct UResonanceAudioSpatializationSourceSettings : USpatializationPluginSourceSettingsBase {
	enum class ERaSpatializationMethod SpatializationMethod; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Pattern; // 0x2c(0x04)
	float Sharpness; // 0x30(0x04)
	bool bToggleVisualization; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float Scale; // 0x38(0x04)
	float Spread; // 0x3c(0x04)
	enum class ERaDistanceRolloffModel Rolloff; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float MinDistance; // 0x44(0x04)
	float MaxDistance; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)

	void SetSoundSourceSpread(float InSpread); // Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x42a32ac
	void SetSoundSourceDirectivity(float InPattern, float InSharpness); // Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity // (Final|Native|Public|BlueprintCallable) // @ game+0x42a31c0
};

