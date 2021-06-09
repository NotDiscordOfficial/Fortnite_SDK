// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// Size: 0x268 (Inherited: 0x220)
struct AFort_Entry_Music_Controller_BP_C : AFortEntryMusicController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* Enter Menu Loop; // 0x228(0x08)
	struct UAudioComponent* MenuMusic_B; // 0x230(0x08)
	struct UAudioComponent* MenuMusic_A; // 0x238(0x08)
	struct UAudioComponent* LoginMusic; // 0x240(0x08)
	float FadeOutTime; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct USoundBase* CurrentMusic; // 0x250(0x08)
	bool Is Music Activate Override; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UAthenaMusicPackItemDefinition* MusicPackToPlayLater; // 0x260(0x08)

	void Change Music(struct USoundBase* New Music, float StartTime); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ListenToMusicPacks(); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMusicPackChanged(struct UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Lobby Music Override(bool Lobby Music Activate, struct USoundBase* New Music); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MakeNextMusicPackStartFromBeginning(); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.MakeNextMusicPackStartFromBeginning // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DelayedPlayMusicPack(struct UAthenaMusicPackItemDefinition* MusicPackToPlayLater); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.DelayedPlayMusicPack // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearDelayedPlayMusicPack(); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ClearDelayedPlayMusicPack // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayEquippedMusicPack(); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.PlayEquippedMusicPack // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartMusic(); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.StartMusic // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32_t EntryPoint); // Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP // (Final|UbergraphFunction) // @ game+0xda7c34
};

