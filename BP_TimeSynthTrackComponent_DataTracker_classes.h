// BlueprintGeneratedClass BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C
// Size: 0x230 (Inherited: 0x1b8)
struct UBP_TimeSynthTrackComponent_DataTracker_C : UBP_TimeSynthTrackComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b8(0x08)
	struct UFortGameplayDataTrackerComponent* DataTrackerComponent; // 0x1c0(0x08)
	bool DataTrackerAssigned; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UFortGameplayDataTrackerComponent* DataTrackerComponentClass; // 0x1d0(0x08)
	struct UFortGameplayDataTrackerComponentManager* DataTrackerComponentManager; // 0x1d8(0x08)
	bool AwaitingCooldownBeforeShutoff; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
	struct USoundMix* SoundMix; // 0x1e8(0x08)
	struct FScalableFloat EnabledDataRow; // 0x1f0(0x28)
	struct TArray<struct FScalableFloat> TrackMixStateVolumeDataRows; // 0x218(0x10)
	bool MixPushed; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float DataTrackerUpdateTime; // 0x22c(0x04)

	void QueueTrackStop(bool Play Outro); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.QueueTrackStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetIsEnabled(bool Enabled); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetIsEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetRemainingEventCooldown(float Cooldown); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetRemainingEventCooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnAnyEventValueChanged(struct UFortGameplayDataTrackerComponent* Data Tracker Component, bool Has Event Values); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnAnyEventValueChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDataTrackerComponentUnRegistered(struct UFortGameplayDataTrackerComponent* Data Tracker Component); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerComponentUnRegistered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDataTrackerComponentRegistered(struct UFortGameplayDataTrackerComponent* Data Tracker Component); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerComponentRegistered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetDataTrackerComponentManager(); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetDataTrackerComponentManager // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AssignDataTrackerComponent(struct UFortGameplayDataTrackerComponent* DataTrackerComponent); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.AssignDataTrackerComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetDataTrackerComponent(struct UFortGameplayDataTrackerComponent* DataTrackerComponent); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GetDataTrackerComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void StopDataTracker(); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.StopDataTracker // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDataTrackerEnd(); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDataTrackerUpdate(); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDataTrackerStart(); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnDataTrackerStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReady_FFC0E068479278E143D010AF8EB81D0D(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.OnReady_FFC0E068479278E143D010AF8EB81D0D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GamePhaseChanged(enum class EAthenaGamePhase GamePhase); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.GamePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker(int32_t EntryPoint); // Function BP_TimeSynthTrackComponent_DataTracker.BP_TimeSynthTrackComponent_DataTracker_C.ExecuteUbergraph_BP_TimeSynthTrackComponent_DataTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

