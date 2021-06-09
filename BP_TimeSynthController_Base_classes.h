// BlueprintGeneratedClass BP_TimeSynthController_Base.BP_TimeSynthController_Base_C
// Size: 0x289 (Inherited: 0x220)
struct ABP_TimeSynthController_Base_C : AFortTimeSynthController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTimeSynthComponent* TimeSynth; // 0x228(0x08)
	struct UBP_TimeSynthTrackComponent_C* CurrentTrack; // 0x230(0x08)
	int32_t TransitionBeats; // 0x238(0x04)
	bool TransitionActive; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UBP_TimeSynthTrackComponent_C* QueuedTransitionTrack; // 0x240(0x08)
	struct TArray<struct UTimeSynthVolumeGroup*> VolumeGroups; // 0x248(0x10)
	struct TArray<struct FTimeSynthClipHandle> QueuedTransitions; // 0x258(0x10)
	struct TArray<struct UBP_TimeSynthTrackComponent_C*> QueuedTracks; // 0x268(0x10)
	bool IsPlaying; // 0x278(0x01)
	bool debug; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
	struct UFortGameplayDataTrackerComponentManager* DataTrackerManager; // 0x280(0x08)
	bool IsStoppedPermenant; // 0x288(0x01)

	void OnTimeSynthTrackComponentRegistered(struct UBP_TimeSynthTrackComponent_C* Track); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.OnTimeSynthTrackComponentRegistered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetTimeSynthComponent(struct UTimeSynthComponent* TimeSynth); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.GetTimeSynthComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RegisterTrackComponents(); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.RegisterTrackComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetIsPlaying(bool IsPlaying); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.GetIsPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void CalculateMaxClipDuration(struct UBP_TimeSynthTrackComponent_C* Track, int32_t Duration); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.CalculateMaxClipDuration // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void QueueTrackStartInternal(struct UBP_TimeSynthTrackComponent_C* NewTrack); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.QueueTrackStartInternal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnQuantizationBar(enum class ETimeSynthEventQuantization QuantizationType, int32_t NumBars, float Beat); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.OnQuantizationBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FlushExtraClips(bool Exclude Current); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.FlushExtraClips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnQuantizationBeat(enum class ETimeSynthEventQuantization QuantizationType, int32_t NumBars, float Beat); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.OnQuantizationBeat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayTransition(struct FTimeSynth_TransitionData Transition Data, struct UBP_TimeSynthTrackComponent_C* Queued Track); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.PlayTransition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopAllMusic(bool Play Outro); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.StopAllMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ChangeTrack(struct UBP_TimeSynthTrackComponent_C* New Track); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ChangeTrack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RequestTrackChange(struct UBP_TimeSynthTrackComponent_C* TrackRequesting, bool CanChangeTrack); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.RequestTrackChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetVolumeGroup(int32_t Index, float Volume Multiplier); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.SetVolumeGroup // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_TimeSynthController_Base(int32_t EntryPoint); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ExecuteUbergraph_BP_TimeSynthController_Base // (Final|UbergraphFunction) // @ game+0xda7c34
};

