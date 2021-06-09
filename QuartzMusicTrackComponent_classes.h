// BlueprintGeneratedClass QuartzMusicTrackComponent.QuartzMusicTrackComponent_C
// Size: 0x160 (Inherited: 0xb0)
struct UQuartzMusicTrackComponent_C : UGameFrameworkComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct USoundCue* TrackSoundCue; // 0xb8(0x08)
	float TrackPriority; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UQuartzClockHandle* ClockInst; // 0xc8(0x08)
	struct FName ClockName; // 0xd0(0x08)
	float ClockBPM; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FQuartzClockSettings ClockSettings; // 0xe0(0x20)
	struct ABP_QuartzMusicController_C* ControllerActor; // 0x100(0x08)
	struct FQuartzQuantizationBoundary ClockQuantizationBoundary; // 0x108(0x0c)
	bool bDebugEnabled; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct UAudioComponent* AudioComponent; // 0x118(0x08)
	bool bQueueStop; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float TrackFadeInTime; // 0x124(0x04)
	float TrackFadeOutTime; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<struct FName> TrackParameters; // 0x130(0x10)
	struct FGameplayTagContainer TrackDisableTags; // 0x140(0x20)

	void SetTrackParameter(int32_t ParameterIndex, float InFloat); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.SetTrackParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetAudioComponent(struct UAudioComponent* AudioComponent); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetAudioComponent // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	enum class EAudioComponentPlayState GetPlayState(); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetPlayState // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetIsPlaying(bool Is Playing); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetIsPlaying // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnQuartzQuantizationEvent(struct FName ClockName, enum class EQuartzCommandQuantization QuantizationType, int32_t NumBars, int32_t Beat, float BeatFraction); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.OnQuartzQuantizationEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnQuartzClockDelegate(enum class EQuartzCommandDelegateSubType EventType, struct FName Name); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.OnQuartzClockDelegate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void QueueTrackStop(); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.QueueTrackStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void QueueTrackStart(); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.QueueTrackStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetTrackPriority(float Priority); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetTrackPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetDebugEnabled(bool debug); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.SetDebugEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetStemVolume(int32_t Index, float Value); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.SetStemVolume // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_QuartzMusicTrackComponent(int32_t EntryPoint); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.ExecuteUbergraph_QuartzMusicTrackComponent // (Final|UbergraphFunction) // @ game+0xda7c34
};

