// UserDefinedStruct WaveSpectrumSettings.WaveSpectrumSettings
// Size: 0x48 (Inherited: 0x00)
struct FWaveSpectrumSettings {
	int32_t MaxWaves_47_AD00BF8D49793419E5C91DBF5FC4E3E5; // 0x00(0x04)
	int32_t Seed_44_5A20C59F49709BC4ABA138A1F35CDE74; // 0x04(0x04)
	struct FLineSeparatorNullStruct -----Wavelengths-----_4_D8291BAF453D111FBB38ED86F14F7672; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MinWavelength_7_C6EF199C44159E1369A806BA912B1646; // 0x0c(0x04)
	float MaxWavelength_9_1D9584A64602B31C61015982BA077EFD; // 0x10(0x04)
	float WavelengthFalloff_20_9A8C28744DA185C47F0D37B9EBA36CAF; // 0x14(0x04)
	struct FLineSeparatorNullStruct -----Amplitudes-----_29_9B421DBF4D0FC60AB8654CB437162427; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float MinAmplitude_17_B33A1CC14597F4063D0218970D63971D; // 0x1c(0x04)
	float MaxAmplitude_18_CAC1A8164D55C6CC0A3ED0A6A4590493; // 0x20(0x04)
	float AmplitudeFalloff_19_72E6C4064F70E7DFE67742BA06E0ADE5; // 0x24(0x04)
	struct FLineSeparatorNullStruct -----Directions-----_38_33B59F7C41013BF07C0BD796C8A07ABF; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FVector2D DominantWaveDirection_40_F5412C4B4F9B44471E1FC7B1B5295B7D; // 0x2c(0x08)
	float DirectionAngularSpread_21_966C6D764D2457F563C07993AE5A7310; // 0x34(0x04)
	struct FLineSeparatorNullStruct -----Steepness-----_39_1746E5384A989CED9021B4B6340C8D36; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float SmallWaveSteepness_23_454E2EB64C779AFEAD5A1C9397C743D3; // 0x3c(0x04)
	float LargeWaveSteepness_24_65207D7A43BB685658EFAF8B34511A2F; // 0x40(0x04)
	float SteepnessFalloff_26_C822870B4711F2EA3930D389A3DD8370; // 0x44(0x04)
};

