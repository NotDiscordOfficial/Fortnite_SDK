// BlueprintGeneratedClass BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C
// Size: 0x254 (Inherited: 0x230)
struct UBP_TimeSynthTrackComponent_SpicySake_C : UBP_TimeSynthTrackComponent_DataTracker_C {
	float InterpFloat_Circling; // 0x230(0x04)
	float InterpFloat_Attacking; // 0x234(0x04)
	struct FGameplayTag EventTag_Circling; // 0x238(0x08)
	struct FGameplayTag EventTag_Attacking; // 0x240(0x08)
	int32_t CirclingID; // 0x248(0x04)
	int32_t AttackID; // 0x24c(0x04)
	int32_t Attack_FacingID; // 0x250(0x04)

	void OnDataTrackerStart(); // Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.OnDataTrackerStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleMixState(); // Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.HandleMixState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetRemainingEventCooldown(float Cooldown); // Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.GetRemainingEventCooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnDataTrackerUpdate(); // Function BP_TimeSynthTrackComponent_SpicySake.BP_TimeSynthTrackComponent_SpicySake_C.OnDataTrackerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

