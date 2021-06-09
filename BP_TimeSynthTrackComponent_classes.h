// BlueprintGeneratedClass BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C
// Size: 0x1b8 (Inherited: 0xb0)
struct UBP_TimeSynthTrackComponent_C : UFortTimeSynthTrackComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FName TrackID; // 0xb8(0x08)
	struct ABP_TimeSynthController_Base_C* TimeSynthController; // 0xc0(0x08)
	int32_t TrackLengthBeats; // 0xc8(0x04)
	struct FTimeSynthQuantizationSettings QuantizationSettings; // 0xcc(0x14)
	struct TArray<struct FTimeSynth_TrackStemData> Clips; // 0xe0(0x10)
	int32_t CurrentBeatDecrement; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FTimeSynth_TrackStemData StopClip; // 0xf8(0x10)
	struct TMap<struct FName, struct FTimeSynth_TransitionData> Transitions; // 0x108(0x50)
	struct TArray<struct FTimeSynthClipHandle> Handles; // 0x158(0x10)
	bool QuantizationEventBound; // 0x168(0x01)
	bool DebugEnabled; // 0x169(0x01)
	enum class TimeSynth_TrackPlayStates PlayState; // 0x16a(0x01)
	char pad_16B[0x1]; // 0x16b(0x01)
	int32_t CurrentBeat; // 0x16c(0x04)
	struct FMulticastInlineDelegate OnPlayStateChanged; // 0x170(0x10)
	struct TArray<struct FTimeSynth_TrackMixState> TrackMixStates; // 0x180(0x10)
	float PriorityWeight; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct FGameplayTagContainer TrackDisableTags; // 0x198(0x20)

	void SetMixStateVolumeByIndex(int32_t Index, float Volume); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.SetMixStateVolumeByIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetMixStateIndexFromName(struct FName Name, int32_t Array Index); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.GetMixStateIndexFromName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetPriority(float Priority); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.GetPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetMixStateVolume(struct FName MixStateName, float Volume); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.SetMixStateVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FindMixState(struct FName Name, int32_t Array Index); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.FindMixState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetMaxClipDuration(int32_t MaxClipDuration); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.GetMaxClipDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetQuantizationSettings(struct FTimeSynthQuantizationSettings QuantizationSettings); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.GetQuantizationSettings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetTrackID(struct FName TrackID); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.GetTrackID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetTimeSynthController(struct ABP_TimeSynthController_Base_C* TimeSynthController); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.GetTimeSynthController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnQuantizationBar(enum class ETimeSynthEventQuantization QuantizationType, int32_t NumBars, float Beat); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.OnQuantizationBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPlaystate(enum class TimeSynth_TrackPlayStates Is In Play State); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.SetPlaystate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckPlaystate(enum class TimeSynth_TrackPlayStates Is In Play State, bool Result); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.CheckPlaystate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnQuantizationBeat(enum class ETimeSynthEventQuantization QuantizationType, int32_t NumBars, float Beat); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.OnQuantizationBeat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HasTransitionForTrack(struct FName TrackID, bool Transition Found, struct FTimeSynth_TransitionData Transition Data); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.HasTransitionForTrack // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void CalculateMaxClipDuration(struct TArray<struct FTimeSynth_TrackStemData> Clips, int32_t Duration); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.CalculateMaxClipDuration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void LoopCurrentTrack(); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.LoopCurrentTrack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void QueueTrackStop(bool Play Outro); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.QueueTrackStop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void QueueTrackStart(bool Is First Track); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.QueueTrackStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTimeSynthController(struct ABP_TimeSynthController_Base_C* TimeSynthController); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.SetTimeSynthController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_TimeSynthTrackComponent(int32_t EntryPoint); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.ExecuteUbergraph_BP_TimeSynthTrackComponent // (Final|UbergraphFunction) // @ game+0xda7c34
	void OnPlayStateChanged__DelegateSignature(enum class TimeSynth_TrackPlayStates Previous, enum class TimeSynth_TrackPlayStates New); // Function BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C.OnPlayStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

