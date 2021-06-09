// SolarisGeneratedClass VerseFortnite_Audio_audio_component.audio_component
// Size: 0xd0 (Inherited: 0xa0)
struct Uaudio_component : UAudioComponentBase {
	char pad_A0[0x10]; // 0xa0(0x10)
	struct FDelegate __verse_0x616C66D2_playSound; // 0xb0(0x10)
	struct FDelegate __verse_0xD4D5AE10_setSound; // 0xa0(0x10)
	struct FDelegate __verse_0x1DF2F013_stopSound; // 0xc0(0x10)

	void StopSound(); // Function VerseFortnite_Audio_audio_component.audio_component.StopSound // (Native|Public|BlueprintCallable) // @ game+0x430c63c
	void SetSound(struct Usound* __verse_0xF013250F_Sound); // Function VerseFortnite_Audio_audio_component.audio_component.SetSound // (Native|Public|BlueprintCallable) // @ game+0x430c590
	void PlaySound(); // Function VerseFortnite_Audio_audio_component.audio_component.PlaySound // (Native|Public|BlueprintCallable) // @ game+0x430c3bc
	void $InitCDO(); // Function VerseFortnite_Audio_audio_component.audio_component.$InitCDO // (None) // @ game+0xda7c34
};

