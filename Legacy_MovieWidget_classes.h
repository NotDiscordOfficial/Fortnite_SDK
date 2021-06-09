// WidgetBlueprintGeneratedClass Legacy_MovieWidget.Legacy_MovieWidget_C
// Size: 0x2e0 (Inherited: 0x2a0)
struct ULegacy_MovieWidget_C : UFortMovieWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UImage* Video_Image; // 0x2a8(0x08)
	struct UScaleBox* Video_ScaleBox; // 0x2b0(0x08)
	bool shouldloop; // 0x2b8(0x01)
	bool AutoPlay; // 0x2b9(0x01)
	bool MaintainAspectRatio; // 0x2ba(0x01)
	char pad_2BB[0x5]; // 0x2bb(0x05)
	struct FMulticastInlineDelegate OnMediaReadyToPlay; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnMediaFailedToOpen; // 0x2d0(0x10)

	void SetDelayedContentValues(); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.SetDelayedContentValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Play(bool ShouldRewind); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.Play // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopPlaying(); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.StopPlaying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Init(struct UMediaPlayer* InMediaPlayer, struct UMediaSource* InMediaSource, struct UObject* InMediaSoundWave, int32_t AudioTrack); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void MediaDimensionsUpdated(float NewWidth, float NewHeight); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.MediaDimensionsUpdated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnMediaLoaded(); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Legacy_MovieWidget(int32_t EntryPoint); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.ExecuteUbergraph_Legacy_MovieWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnMediaFailedToOpen__DelegateSignature(); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaFailedToOpen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMediaReadyToPlay__DelegateSignature(); // Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaReadyToPlay__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

