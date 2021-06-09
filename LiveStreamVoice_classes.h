// Class LiveStreamVoice.LiveStreamVoiceChannel
// Size: 0x78 (Inherited: 0x68)
struct ULiveStreamVoiceChannel : UChannel {
	char pad_68[0x10]; // 0x68(0x10)
};

// Class LiveStreamVoice.LiveStreamVoiceSubsystem
// Size: 0x60 (Inherited: 0x30)
struct ULiveStreamVoiceSubsystem : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FVoiceSettings PlaybackSettings; // 0x38(0x18)
	char pad_50[0x10]; // 0x50(0x10)

	void SetVoiceSettings(struct FVoiceSettings InSettings); // Function LiveStreamVoice.LiveStreamVoiceSubsystem.SetVoiceSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2204714
	void EnableLocalVoiceProcessing(char LocalUserNum, bool bEnable); // Function LiveStreamVoice.LiveStreamVoiceSubsystem.EnableLocalVoiceProcessing // (Final|Native|Public|BlueprintCallable) // @ game+0x3fd7e54
	void ClearVoiceSettings(); // Function LiveStreamVoice.LiveStreamVoiceSubsystem.ClearVoiceSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x22047cc
};

