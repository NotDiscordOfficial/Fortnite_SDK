// BlueprintGeneratedClass QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C
// Size: 0x1c8 (Inherited: 0x160)
struct UQuartzMusicTrackComponent_DataTracker_C : UQuartzMusicTrackComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x160(0x08)
	struct UFortGameplayDataTrackerComponent* DataTrackerClass; // 0x168(0x08)
	struct UFortGameplayDataTrackerComponentManager* DataTrackerManager; // 0x170(0x08)
	bool bDataTrackerAssigned; // 0x178(0x01)
	char pad_179[0x7]; // 0x179(0x07)
	struct UFortGameplayDataTrackerComponent* DataTrackerComponent; // 0x180(0x08)
	bool bAwaitingCooldownBeforeShutoff; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float UpdateFrequency; // 0x18c(0x04)
	struct TArray<struct FDataTrackerParameterData> DataTrackerParameters; // 0x190(0x10)
	bool bHasFiredOffDataTrackerParameterWarning; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct USoundMix* DataTrackerSoundMix; // 0x1a8(0x08)
	bool bSoundMixActive; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct FTimerHandle TimerHandle; // 0x1b8(0x08)
	struct FTimerHandle StopTimer; // 0x1c0(0x08)

	void GetDataTrackerParameterValueTotal(float Value); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.GetDataTrackerParameterValueTotal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetDataTrackerParameterValue(int32_t Index, float Value); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.GetDataTrackerParameterValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetDataTrackerComponent(struct UFortGameplayDataTrackerComponent* DataTracker); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.GetDataTrackerComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnDataTrackerStop(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDataTrackerUpdate(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDataTrackerStart(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DataTrackerStop_Internal(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.DataTrackerStop_Internal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DataTrackerUpdate_Internal(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.DataTrackerUpdate_Internal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DataTrackerStart_Internal(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.DataTrackerStart_Internal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDataTrackerComponentUnRegistered(struct UFortGameplayDataTrackerComponent* UnRegisteredDataTracker); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerComponentUnRegistered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDataTrackerComponentRegistered(struct UFortGameplayDataTrackerComponent* RegisteredDataTracker); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnDataTrackerComponentRegistered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Changed Has Any Event Value(struct UFortGameplayDataTrackerComponent* DataTrackerComponent, bool bHasEventValues); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.On Changed Has Any Event Value // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReady_EAA166EB4AA20B4778C921B5F15F1C62(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.OnReady_EAA166EB4AA20B4778C921B5F15F1C62 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Retry Get Data Tracker Manager(); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.Retry Get Data Tracker Manager // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_QuartzMusicTrackComponent_DataTracker(int32_t EntryPoint); // Function QuartzMusicTrackComponent_DataTracker.QuartzMusicTrackComponent_DataTracker_C.ExecuteUbergraph_QuartzMusicTrackComponent_DataTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

