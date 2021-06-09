// BlueprintGeneratedClass QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C
// Size: 0x1e0 (Inherited: 0x1c8)
struct UQuartzMusicTrackComponent_SpicySake_C : UQuartzMusicTrackComponent_DataTracker_C {
	float InterpFloat_Circling; // 0x1c8(0x04)
	float InterpFloat_Attacking; // 0x1cc(0x04)
	struct FGameplayTag EventTag_Circling; // 0x1d0(0x08)
	struct FGameplayTag EventTag_Attacking; // 0x1d8(0x08)

	void HandleMixState(); // Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.HandleMixState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	float UpdateInterpValue(float InterpValue, struct FGameplayTag EventTag, float Attack Speed, float Release Speed); // Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.UpdateInterpValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnDataTrackerUpdate(); // Function QuartzMusicTrackComponent_SpicySake.QuartzMusicTrackComponent_SpicySake_C.OnDataTrackerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

