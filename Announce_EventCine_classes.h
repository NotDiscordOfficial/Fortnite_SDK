// BlueprintGeneratedClass Announce_EventCine.Announce_EventCine_C
// Size: 0x2c8 (Inherited: 0x2a0)
struct AAnnounce_EventCine_C : AFortClientAnnouncement_Cinematic {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a8(0x08)
	struct UMediaSource* EventMediaSource; // 0x2b0(0x08)
	bool AllowSkipping; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UFortMediaSubtitlesPlayer* EventSubtitlesPlayer; // 0x2c0(0x08)

	void OnClientAnnouncementStop(); // Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayerSkippedCutscene(); // Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleClientEvent_CinematicFinishedPlaying(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent ClientEvent); // Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleAllowSkip(); // Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredCinematicState(); // Function Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Announce_EventCine(int32_t EntryPoint); // Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

