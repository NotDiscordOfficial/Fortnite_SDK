// Class Synthesis.ModularSynthPresetBank
// Size: 0x38 (Inherited: 0x28)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x28(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size: 0x28 (Inherited: 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3d020f4
};

// Class Synthesis.ModularSynthComponent
// Size: 0xd90 (Inherited: 0x6d0)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x6d0(0x04)
	char pad_6D4[0x6bc]; // 0x6d4(0x6bc)

	void SetSynthPreset(struct FModularSynthPreset SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d04ed0
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x3d04e30
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Final|Native|Public|BlueprintCallable) // @ game+0x3d04d90
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d04cf0
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x3d04c50
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Final|Native|Public|BlueprintCallable) // @ game+0x3d04bb8
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3d04b1c
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x3d04a7c
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x3d049dc
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0493c
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0489c
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x3d047fc
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0475c
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (Final|Native|Public|BlueprintCallable) // @ game+0x3d04674
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Final|Native|Public|BlueprintCallable) // @ game+0x3d045a8
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (Final|Native|Public|BlueprintCallable) // @ game+0x3d044bc
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d043d0
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (Final|Native|Public|BlueprintCallable) // @ game+0x3d042e4
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x3d041f8
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0410c
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x3d04020
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Final|Native|Public|BlueprintCallable) // @ game+0x3d03f34
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x3d03e94
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d03df4
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x3d03d2c
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x3d03c60
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d03bc0
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d03b20
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x3d03a58
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0398c
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d038ec
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Final|Native|Public|BlueprintCallable) // @ game+0x3d037d4
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x3d036bc
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Final|Native|Public|BlueprintCallable) // @ game+0x3d035a4
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Final|Native|Public|BlueprintCallable) // @ game+0x3d034b8
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Final|Native|Public|BlueprintCallable) // @ game+0x3d033cc
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x3d032e0
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x3d031f4
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (Final|Native|Public|BlueprintCallable) // @ game+0x3d03154
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0308c
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02fec
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02f4c
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02eac
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02e0c
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02d74
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02cd8
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02c3c
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02ba0
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02aa4
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02a08
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02968
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x3d028c8
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x3d02828
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0278c
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d026ec
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0264c
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0250c
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x3d023c4
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d0224c
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size: 0xf0 (Inherited: 0x68)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	char pad_68[0x58]; // 0x68(0x58)
	struct FSourceEffectBitCrusherSettings Settings; // 0xc0(0x30)

	void SetSettings(struct FSourceEffectBitCrusherBaseSettings Settings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d06ac8
	void SetSampleRateModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x3d06a2c
	void SetSampleRate(float SampleRate); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0698c
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings ModulationSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d067c4
	void SetBits(float Bits); // Function Synthesis.SourceEffectBitCrusherPreset.SetBits // (Final|Native|Public|BlueprintCallable) // @ game+0x3d06234
	void SetBitModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x3d06198
};

// Class Synthesis.SourceEffectChorusPreset
// Size: 0x180 (Inherited: 0x68)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	char pad_68[0xa0]; // 0x68(0xa0)
	struct FSourceEffectChorusSettings Settings; // 0x108(0x78)

	void SetWetModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetWetModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x3d07620
	void SetWet(float WetAmount); // Function Synthesis.SourceEffectChorusPreset.SetWet // (Final|Native|Public|BlueprintCallable) // @ game+0x3d07580
	void SetSpreadModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x3d074e4
	void SetSpread(float Spread); // Function Synthesis.SourceEffectChorusPreset.SetSpread // (Final|Native|Public|BlueprintCallable) // @ game+0x3d07444
	void SetSettings(struct FSourceEffectChorusBaseSettings Settings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d06b80
	void SetModulationSettings(struct FSourceEffectChorusSettings ModulationSettings); // Function Synthesis.SourceEffectChorusPreset.SetModulationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d068d4
	void SetFrequencyModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x3d06728
	void SetFrequency(float Frequency); // Function Synthesis.SourceEffectChorusPreset.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x3d06688
	void SetFeedbackModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x3d065ec
	void SetFeedback(float Feedback); // Function Synthesis.SourceEffectChorusPreset.SetFeedback // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0654c
	void SetDryModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDryModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x3d064b0
	void SetDry(float DryAmount); // Function Synthesis.SourceEffectChorusPreset.SetDry // (Final|Native|Public|BlueprintCallable) // @ game+0x3d06410
	void SetDepthModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDepthModulator // (Final|Native|Public|BlueprintCallable) // @ game+0x3d06374
	void SetDepth(float Depth); // Function Synthesis.SourceEffectChorusPreset.SetDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d062d4
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size: 0xe0 (Inherited: 0x68)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	char pad_68[0x50]; // 0x68(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0xb8(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d06c38
};

// Class Synthesis.EnvelopeFollowerListener
// Size: 0xd0 (Inherited: 0xb0)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0(0x10)
	char pad_C0[0x10]; // 0xc0(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size: 0xa8 (Inherited: 0x68)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	char pad_68[0x34]; // 0x68(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c(0x0c)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x3d076bc
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d06e20
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // @ game+0x3d060f0
};

// Class Synthesis.SourceEffectEQPreset
// Size: 0xb0 (Inherited: 0x68)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	char pad_68[0x38]; // 0x68(0x38)
	struct FSourceEffectEQSettings Settings; // 0xa0(0x10)

	void SetSettings(struct FSourceEffectEQSettings InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d06d34
};

// Class Synthesis.SourceEffectFilterPreset
// Size: 0xd0 (Inherited: 0x68)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	char pad_68[0x48]; // 0x68(0x48)
	struct FSourceEffectFilterSettings Settings; // 0xb0(0x20)

	void SetSettings(struct FSourceEffectFilterSettings InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d06f10
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size: 0xa8 (Inherited: 0x68)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	char pad_68[0x34]; // 0x68(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x9c(0x0c)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d06fdc
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size: 0xa0 (Inherited: 0x68)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	char pad_68[0x30]; // 0x68(0x30)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x98(0x08)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d070d0
};

// Class Synthesis.SourceEffectPannerPreset
// Size: 0xa0 (Inherited: 0x68)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	char pad_68[0x30]; // 0x68(0x30)
	struct FSourceEffectPannerSettings Settings; // 0x98(0x08)

	void SetSettings(struct FSourceEffectPannerSettings InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d071a0
};

// Class Synthesis.SourceEffectPhaserPreset
// Size: 0xb0 (Inherited: 0x68)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	char pad_68[0x38]; // 0x68(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0xa0(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d07270
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size: 0xd0 (Inherited: 0x68)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	char pad_68[0x48]; // 0x68(0x48)
	struct FSourceEffectRingModulationSettings Settings; // 0xb0(0x20)

	void SetSettings(struct FSourceEffectRingModulationSettings InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d07360
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size: 0xc0 (Inherited: 0x68)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	char pad_68[0x40]; // 0x68(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0xa8(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d08fd4
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size: 0xd8 (Inherited: 0x68)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	char pad_68[0x4c]; // 0x68(0x4c)
	struct FSourceEffectStereoDelaySettings Settings; // 0xb4(0x24)

	void SetSettings(struct FSourceEffectStereoDelaySettings InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d090bc
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size: 0xa0 (Inherited: 0x68)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	char pad_68[0x30]; // 0x68(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0x98(0x08)

	void SetSettings(struct FSourceEffectWaveShaperSettings InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d071a0
};

// Class Synthesis.AudioImpulseResponse
// Size: 0x58 (Inherited: 0x28)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x28(0x10)
	int32_t NumChannels; // 0x38(0x04)
	int32_t SampleRate; // 0x3c(0x04)
	float NormalizationVolumeDb; // 0x40(0x04)
	bool bTrueStereo; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<float> IRData; // 0x48(0x10)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size: 0xf0 (Inherited: 0x68)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct UAudioImpulseResponse* ImpulseResponse; // 0x68(0x08)
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x70(0x28)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98(0x01)
	bool bEnableHardwareAcceleration; // 0x99(0x01)
	char pad_9A[0x56]; // 0x9a(0x56)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d091d0
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08c54
};

// Class Synthesis.SubmixEffectDelayPreset
// Size: 0xb8 (Inherited: 0x68)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	char pad_68[0x34]; // 0x68(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0x9c(0x0c)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)

	void SetSettings(struct FSubmixEffectDelaySettings InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d092d0
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08dc4
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x3d087cc
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x27ce8c0
};

// Class Synthesis.SubmixEffectFilterPreset
// Size: 0xa8 (Inherited: 0x68)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	char pad_68[0x34]; // 0x68(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0x9c(0x0c)

	void SetSettings(struct FSubmixEffectFilterSettings InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d093dc
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08ba0
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08b00
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08a60
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Final|Native|Public|BlueprintCallable) // @ game+0x3d089c0
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08920
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0886c
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size: 0xb0 (Inherited: 0x68)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	char pad_68[0x38]; // 0x68(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0xa0(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d094cc
};

// Class Synthesis.SubmixEffectMultibandCompressorPreset
// Size: 0xd0 (Inherited: 0x68)
struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	char pad_68[0x48]; // 0x68(0x48)
	struct FSubmixEffectMultibandCompressorSettings Settings; // 0xb0(0x20)

	void SetSettings(struct FSubmixEffectMultibandCompressorSettings InSettings); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d095c0
};

// Class Synthesis.SubmixEffectStereoDelayPreset
// Size: 0xd8 (Inherited: 0x68)
struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	char pad_68[0x4c]; // 0x68(0x4c)
	struct FSubmixEffectStereoDelaySettings Settings; // 0xb4(0x24)

	void SetSettings(struct FSubmixEffectStereoDelaySettings InSettings); // Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d090bc
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size: 0xd8 (Inherited: 0x68)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	char pad_68[0x40]; // 0x68(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0xa8(0x18)
	char pad_C0[0x18]; // 0xc0(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d098dc
	void SetSettings(struct FSubmixEffectTapDelaySettings InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d096c0
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08e64
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08734
	void GetTapIds(struct TArray<int32_t> TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d085b8
	void GetTap(int32_t TapId, struct FTapDelayInfo TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d0848c
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08474
	void AddTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3d083d4
};

// Class Synthesis.Synth2DSlider
// Size: 0x478 (Inherited: 0x108)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x108(0x04)
	float ValueY; // 0x10c(0x04)
	struct FDelegate ValueXDelegate; // 0x110(0x10)
	struct FDelegate ValueYDelegate; // 0x120(0x10)
	struct FSynth2DSliderStyle WidgetStyle; // 0x130(0x2b8)
	struct FLinearColor SliderHandleColor; // 0x3e8(0x10)
	bool IndentHandle; // 0x3f8(0x01)
	bool Locked; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	float StepSize; // 0x3fc(0x04)
	bool IsFocusable; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x448(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x458(0x10)
	char pad_468[0x10]; // 0x468(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3d09a08
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0983c
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3d09788
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08f04
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x3d08cf4
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d086b4
};

// Class Synthesis.GranularSynth
// Size: 0xa90 (Inherited: 0x6d0)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x6d0(0x08)
	char pad_6D8[0x3b8]; // 0x6d8(0x3b8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0cc64
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0cb1c
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c8e4
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c844
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0bfa0
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0bf00
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3d0bbec
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0bcd4
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0bb4c
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3d0ba64
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3d0b97c
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b8b4
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3d0b7cc
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0ac20
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0ac20
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a2a8
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a118
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d0a0e8
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d0a0b8
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d09b2c
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size: 0x170 (Inherited: 0x28)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x28(0x10)
	char bLockKeyframesToGridBool : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t LockKeyframesToGrid; // 0x3c(0x04)
	int32_t WaveTableResolution; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
	char bNormalizeWaveTables : 1; // 0x58(0x01)
	char pad_58_1 : 7; // 0x58(0x01)
	char pad_59[0x117]; // 0x59(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size: 0xe10 (Inherited: 0x6d0)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x6d0(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x6e0(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x6f0(0x08)
	char pad_6F8[0x718]; // 0x6f8(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0ce74
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0cd04
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c224
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c184
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c0e4
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c7a4
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c704
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c638
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c598
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c4f8
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c42c
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c38c
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c2ec
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0bd74
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b72c
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b68c
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b548
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b408
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b368
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b4a8
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b29c
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b1fc
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b130
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b090
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0aff0
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0aeb0
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0adb4
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0acc0
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0ab80
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0aae0
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0aa14
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a974
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a8d4
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a808
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a768
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a6c8
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a4e8
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a4d4
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a3e8
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a208
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a090
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d0a068
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d09bec
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x3d09b44
};

// Class Synthesis.SynthComponentToneGenerator
// Size: 0x6f0 (Inherited: 0x6d0)
struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; // 0x6d0(0x04)
	float Volume; // 0x6d4(0x04)
	char pad_6D8[0x18]; // 0x6d8(0x18)

	void SetVolume(float InVolume); // Function Synthesis.SynthComponentToneGenerator.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0cdd0
	void SetFrequency(float InFrequency); // Function Synthesis.SynthComponentToneGenerator.SetFrequency // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0b5e8
};

// Class Synthesis.SynthSamplePlayer
// Size: 0x800 (Inherited: 0x6d0)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x6d0(0x08)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x6d8(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6e8(0x10)
	char pad_6F8[0x108]; // 0x6f8(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0cbb8
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0ca7c
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0c9b0
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0be14
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0a580
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d0a100
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d0a0d0
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d09b14
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d09af4
};

// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USynthesisUtilitiesBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3d09e8c
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x3d09cb0
};

// Class Synthesis.SynthKnob
// Size: 0x400 (Inherited: 0x108)
struct USynthKnob : UWidget {
	float Value; // 0x108(0x04)
	float StepSize; // 0x10c(0x04)
	float MouseSpeed; // 0x110(0x04)
	float MouseFineTuneSpeed; // 0x114(0x04)
	char ShowTooltipInfo : 1; // 0x118(0x01)
	char pad_118_1 : 7; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FText ParameterName; // 0x120(0x18)
	struct FText ParameterUnits; // 0x138(0x18)
	struct FDelegate ValueDelegate; // 0x150(0x10)
	struct FSynthKnobStyle WidgetStyle; // 0x160(0x238)
	bool Locked; // 0x398(0x01)
	bool IsFocusable; // 0x399(0x01)
	char pad_39A[0x6]; // 0x39a(0x06)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x3e0(0x10)
	char pad_3F0[0x10]; // 0x3f0(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0d13c
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0d098
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x3d0cfc8
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d0cfa0
};
