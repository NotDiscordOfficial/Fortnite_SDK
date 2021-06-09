// Enum AudioMixer.EAudioDeviceChangedRole
enum class EAudioDeviceChangedRole : uint8 {
	Invalid,
	Console,
	Multimedia,
	Communications,
	Count,
	EAudioDeviceChangedRole_MAX,
};

// Enum AudioMixer.EAudioDeviceChangedState
enum class EAudioDeviceChangedState : uint8 {
	Invalid,
	Active,
	Disabled,
	NotPresent,
	Unplugged,
	Count,
	EAudioDeviceChangedState_MAX,
};

// Enum AudioMixer.EAudioMixerChannelType
enum class EAudioMixerChannelType : uint8 {
	FrontLeft,
	FrontRight,
	FrontCenter,
	LowFrequency,
	BackLeft,
	BackRight,
	FrontLeftOfCenter,
	FrontRightOfCenter,
	BackCenter,
	SideLeft,
	SideRight,
	TopCenter,
	TopFrontLeft,
	TopFrontCenter,
	TopFrontRight,
	TopBackLeft,
	TopBackCenter,
	TopBackRight,
	Unknown,
	ChannelTypeCount,
	DefaultChannel,
	EAudioMixerChannelType_MAX,
};

// Enum AudioMixer.EAudioMixerStreamDataFormatType
enum class EAudioMixerStreamDataFormatType : uint8 {
	Unknown,
	Float,
	Int16,
	Unsupported,
	EAudioMixerStreamDataFormatType_MAX,
};

// Enum AudioMixer.ESwapAudioOutputDeviceResultState
enum class ESwapAudioOutputDeviceResultState : uint8 {
	Failure,
	Success,
	None,
	ESwapAudioOutputDeviceResultState_MAX,
};

// Enum AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8 {
	C,
	Db,
	D,
	Eb,
	E,
	F,
	Gb,
	G,
	Ab,
	A,
	Bb,
	B,
	EMusicalNoteName_MAX,
};

// Enum AudioMixer.ESubmixEffectDynamicsKeySource
enum class ESubmixEffectDynamicsKeySource : uint8 {
	Default,
	AudioBus,
	Submix,
	Count,
	ESubmixEffectDynamicsKeySource_MAX,
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8 {
	Disabled,
	Average,
	Peak,
	Count,
	ESubmixEffectDynamicsChannelLinkMode_MAX,
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8 {
	MeanSquared,
	RootMeanSquared,
	Peak,
	Count,
	ESubmixEffectDynamicsPeakMode_MAX,
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8 {
	Compressor,
	Limiter,
	Expander,
	Gate,
	Count,
	ESubmixEffectDynamicsProcessorType_MAX,
};

// Enum AudioMixer.EQuarztClockManagerType
enum class EQuarztClockManagerType : uint8 {
	AudioEngine,
	QuartzSubsystem,
	Count,
	EQuarztClockManagerType_MAX,
};

// ScriptStruct AudioMixer.AudioOutputDeviceInfo
// Size: 0x48 (Inherited: 0x00)
struct FAudioOutputDeviceInfo {
	struct FString Name; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
	int32_t NumChannels; // 0x20(0x04)
	int32_t SampleRate; // 0x24(0x04)
	enum class EAudioMixerStreamDataFormatType Format; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<enum class EAudioMixerChannelType> OutputChannelArray; // 0x30(0x10)
	char bIsSystemDefault : 1; // 0x40(0x01)
	char bIsCurrentDevice : 1; // 0x40(0x01)
	char pad_40_2 : 6; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct AudioMixer.SwapAudioOutputResult
// Size: 0x28 (Inherited: 0x00)
struct FSwapAudioOutputResult {
	struct FString CurrentDeviceId; // 0x00(0x10)
	struct FString RequestedDeviceId; // 0x10(0x10)
	enum class ESwapAudioOutputDeviceResultState Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size: 0x60 (Inherited: 0x00)
struct FSubmixEffectDynamicsProcessorSettings {
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x00(0x01)
	enum class ESubmixEffectDynamicsPeakMode PeakMode; // 0x01(0x01)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float InputGainDb; // 0x04(0x04)
	float ThresholdDb; // 0x08(0x04)
	float Ratio; // 0x0c(0x04)
	float KneeBandwidthDb; // 0x10(0x04)
	float LookAheadMsec; // 0x14(0x04)
	float AttackTimeMsec; // 0x18(0x04)
	float ReleaseTimeMsec; // 0x1c(0x04)
	enum class ESubmixEffectDynamicsKeySource KeySource; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UAudioBus* ExternalAudioBus; // 0x28(0x08)
	struct USoundSubmix* ExternalSubmix; // 0x30(0x08)
	char bChannelLinked : 1; // 0x38(0x01)
	char bAnalogMode : 1; // 0x38(0x01)
	char bBypass : 1; // 0x38(0x01)
	char bKeyAudition : 1; // 0x38(0x01)
	char pad_38_4 : 4; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float KeyGainDb; // 0x3c(0x04)
	float OutputGainDb; // 0x40(0x04)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x44(0x0c)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// Size: 0x0c (Inherited: 0x00)
struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Cutoff; // 0x04(0x04)
	float GainDb; // 0x08(0x04)
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// Size: 0x10 (Inherited: 0x00)
struct FSubmixEffectSubmixEQSettings {
	struct TArray<struct FSubmixEffectEQBand> EQBands; // 0x00(0x10)
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// Size: 0x10 (Inherited: 0x00)
struct FSubmixEffectEQBand {
	float Frequency; // 0x00(0x04)
	float Bandwidth; // 0x04(0x04)
	float GainDb; // 0x08(0x04)
	char bEnabled : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size: 0x40 (Inherited: 0x00)
struct FSubmixEffectReverbSettings {
	bool bBypassEarlyReflections; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ReflectionsDelay; // 0x04(0x04)
	float GainHF; // 0x08(0x04)
	float ReflectionsGain; // 0x0c(0x04)
	bool bBypassLateReflections; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float LateDelay; // 0x14(0x04)
	float DecayTime; // 0x18(0x04)
	float Density; // 0x1c(0x04)
	float Diffusion; // 0x20(0x04)
	float AirAbsorptionGainHF; // 0x24(0x04)
	float DecayHFRatio; // 0x28(0x04)
	float LateGain; // 0x2c(0x04)
	float Gain; // 0x30(0x04)
	float WetLevel; // 0x34(0x04)
	float DryLevel; // 0x38(0x04)
	bool bBypass; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

