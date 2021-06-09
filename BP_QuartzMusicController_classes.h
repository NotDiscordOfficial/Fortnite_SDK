// BlueprintGeneratedClass BP_QuartzMusicController.BP_QuartzMusicController_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_QuartzMusicController_C : AFortTimeSynthController {
	struct USceneComponent* DefaultSceneRoot; // 0x220(0x08)
	struct UQuartzMusicTrackComponent_C* CurrentTrack; // 0x228(0x08)
	struct FMulticastInlineDelegate OnClockCreated; // 0x230(0x10)

	void StopCurrentTrack(); // Function BP_QuartzMusicController.BP_QuartzMusicController_C.StopCurrentTrack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayTrack(struct UQuartzMusicTrackComponent_C* Track Component); // Function BP_QuartzMusicController.BP_QuartzMusicController_C.PlayTrack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RequestTrackPlayback(struct UQuartzMusicTrackComponent_C* Requesting Track, bool Result); // Function BP_QuartzMusicController.BP_QuartzMusicController_C.RequestTrackPlayback // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnClockCreated__DelegateSignature(struct FName Clock Name, struct UQuartzClockHandle* Clock Handle); // Function BP_QuartzMusicController.BP_QuartzMusicController_C.OnClockCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

