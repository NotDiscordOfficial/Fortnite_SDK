// Class AmbientAudio.AmbientAudioDataAsset
// Size: 0x58 (Inherited: 0x30)
struct UAmbientAudioDataAsset : UDataAsset {
	struct TArray<struct FAmbientAudioLoop> LoopingSounds; // 0x30(0x10)
	struct TArray<struct FAmbientAudioOneShot> OneShotSounds; // 0x40(0x10)
	float TagCrossfadeTime; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class AmbientAudio.AmbientAudioSubsystem
// Size: 0x220 (Inherited: 0x30)
struct UAmbientAudioSubsystem : UWorldSubsystem {
	struct FMulticastInlineDelegate OnTagChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnEntryChanged; // 0x40(0x10)
	struct TArray<struct AAmbientVolume*> GlobalVolumes; // 0x50(0x10)
	char pad_60[0x1c0]; // 0x60(0x1c0)

	void RemoveGameplayTag(struct FGameplayTag GameplayTag); // Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag // (Final|Native|Public|BlueprintCallable) // @ game+0x2126628
	void RemoveAmbientEntry(struct FName AmbientName); // Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x40fb6d8
	void AddGameplayTag(struct FGameplayTag GameplayTag); // Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag // (Final|Native|Public|BlueprintCallable) // @ game+0x40fb628
	void AddAmbientEntry(struct FName AmbientName, struct UAmbientAudioDataAsset* Asset, int32_t Priority, float CrossfadeTime); // Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x12a5b24
};

// Class AmbientAudio.AmbientVolume
// Size: 0x270 (Inherited: 0x258)
struct AAmbientVolume : AVolume {
	struct UAmbientAudioDataAsset* AmbientAsset; // 0x258(0x08)
	int32_t Priority; // 0x260(0x04)
	float CrossfadeTime; // 0x264(0x04)
	char bEnabled : 1; // 0x268(0x01)
	char bGlobal : 1; // 0x268(0x01)
	char pad_268_2 : 6; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)

	void SetPriority(int32_t NewPriority); // Function AmbientAudio.AmbientVolume.SetPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x40fb948
	void SetEnabled(bool bNewEnabled); // Function AmbientAudio.AmbientVolume.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x40fb8ac
	void SetCrossfadeTime(float NewCrossfadeTime); // Function AmbientAudio.AmbientVolume.SetCrossfadeTime // (Final|Native|Public|BlueprintCallable) // @ game+0x40fb80c
	void SetAmbientAsset(struct UAmbientAudioDataAsset* NewAmbientAsset); // Function AmbientAudio.AmbientVolume.SetAmbientAsset // (Final|Native|Public|BlueprintCallable) // @ game+0x40fb770
	void OnRep_bEnabled(); // Function AmbientAudio.AmbientVolume.OnRep_bEnabled // (Native|Protected) // @ game+0x40fb6c0
};

