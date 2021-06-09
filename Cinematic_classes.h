// WidgetBlueprintGeneratedClass Cinematic.Cinematic_C
// Size: 0x511 (Inherited: 0x4b8)
struct UCinematic_C : UFortUIStateWidget_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UNamedSlot* LocalizedAudioOnlyMovieSlot; // 0x4c0(0x08)
	struct UCommonWidgetStackLegacy* MainContentStack; // 0x4c8(0x08)
	struct UNamedSlot* MovieSlot; // 0x4d0(0x08)
	struct UOverlay* OverlayMovieOverlay; // 0x4d8(0x08)
	struct USubtitles_C* Subtitles; // 0x4e0(0x08)
	struct UTeamMicStack_C* TeamMicStack; // 0x4e8(0x08)
	struct UBuildWatermark_C* Widget_BuildWatermark; // 0x4f0(0x08)
	struct ULegacy_MovieWidget_C* MovieWidget; // 0x4f8(0x08)
	struct UFortMediaSubtitlesPlayer* SubtitlesPlayer; // 0x500(0x08)
	struct UObject* CinematicMediaSoundWave; // 0x508(0x08)
	bool bFinished; // 0x510(0x01)

	void GetAudioTrackIndex(int32_t AudioTrack); // Function Cinematic.Cinematic_C.GetAudioTrackIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopAndClearSubtitles(); // Function Cinematic.Cinematic_C.StopAndClearSubtitles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, struct UFortMediaSubtitlesPlayer* NewSubtitles); // Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMoviePlaying(bool MoviePlaying); // Function Cinematic.Cinematic_C.SetMoviePlaying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearMovieWidget(struct UFortMovieWidget* MovieWidgetToClear); // Function Cinematic.Cinematic_C.ClearMovieWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearMovieSlot(struct UPanelWidget* MovieSlotToClear); // Function Cinematic.Cinematic_C.ClearMovieSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UWidget* PopContentWidgetInternal(struct FContentPushState State); // Function Cinematic.Cinematic_C.PopContentWidgetInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SkipMovie(); // Function Cinematic.Cinematic_C.SkipMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearMovie(); // Function Cinematic.Cinematic_C.ClearMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowMovie(struct UMediaPlayer* MediaPlayer, struct UMediaSource* MediaSource, struct UNamedSlot* MovieSlot, struct ULegacy_MovieWidget_C* MovieWidget); // Function Cinematic.Cinematic_C.ShowMovie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function Cinematic.Cinematic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleClientEvent_QueueCinematic(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent ClientEvent); // Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function Cinematic.Cinematic_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleEndReached(); // Function Cinematic.Cinematic_C.HandleEndReached // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleClientEvent_SkipCinematic(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent ClientEvent); // Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PushContentWidgetInternal(struct UWidget* Widget, struct FContentPushState State); // Function Cinematic.Cinematic_C.PushContentWidgetInternal // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEnterState(enum class EFortUIState PreviousUIState); // Function Cinematic.Cinematic_C.OnEnterState // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExitState(enum class EFortUIState NextUIState); // Function Cinematic.Cinematic_C.OnExitState // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Cinematic(int32_t EntryPoint); // Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

