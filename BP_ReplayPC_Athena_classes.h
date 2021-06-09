// BlueprintGeneratedClass BP_ReplayPC_Athena.BP_ReplayPC_Athena_C
// Size: 0x3d00 (Inherited: 0x3c40)
struct ABP_ReplayPC_Athena_C : AFortReplaySpectatorAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c40(0x08)
	struct UPostProcessComponent* PostProcess; // 0x3c48(0x08)
	struct UUnderwaterAudioComponent_C* UnderwaterAudioComponent; // 0x3c50(0x08)
	struct TMap<float, struct USoundMix*> PlaybackRateMap; // 0x3c58(0x50)
	float CurrentPlayRate; // 0x3ca8(0x04)
	bool bIsFast; // 0x3cac(0x01)
	char pad_3CAD[0x3]; // 0x3cad(0x03)
	struct UAudioComponent* SpeedupLoop; // 0x3cb0(0x08)
	struct UAudioComponent* SlowdownLoop; // 0x3cb8(0x08)
	bool bIsHudVisible; // 0x3cc0(0x01)
	char pad_3CC1[0x7]; // 0x3cc1(0x07)
	struct UAudioComponent* ZoomOutLoop; // 0x3cc8(0x08)
	struct UAudioComponent* ZoomInLoop; // 0x3cd0(0x08)
	bool bIsSkydivingAudioEnabled; // 0x3cd8(0x01)
	bool bIsTargetParachuting; // 0x3cd9(0x01)
	bool bIsTargetSkydiving; // 0x3cda(0x01)
	char pad_3CDB[0x5]; // 0x3cdb(0x05)
	struct UAudioComponent* SkydivingAudioLoop; // 0x3ce0(0x08)
	bool bIsPaused; // 0x3ce8(0x01)
	char pad_3CE9[0x7]; // 0x3ce9(0x07)
	struct USoundBase* CurrentSkydivingSound; // 0x3cf0(0x08)
	struct USoundMix* PauseMIx; // 0x3cf8(0x08)

	void IsGameplayCamera(bool IsGameplayCamera); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.IsGameplayCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSkydivingAudioEnabled(bool Enabled); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.SetSkydivingAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct USoundBase* GetSkydivingSound(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.GetSkydivingSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyNewPlaybackMultiplier(float NewMultiplier); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnNotifyNewPlaybackMultiplier // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void  Speedup Loops(float Playback Multiplier); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C. Speedup Loops // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReplayHudVisibilityChanged(enum class EHudVisibilityState IsVisible); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnReplayHudVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnZoomOutEnd(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutEnd // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnZoomOutBegin(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomOutBegin // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnZoomInEnd(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInEnd // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnZoomInBegin(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.OnZoomInBegin // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void On Pause State Changed(bool bPaused); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.On Pause State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Handle Parachute Audio State(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Handle Parachute Audio State // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Looping Audio Update(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Looping Audio Update // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Sound Mix(); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.Update Sound Mix // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_ReplayPC_Athena(int32_t EntryPoint); // Function BP_ReplayPC_Athena.BP_ReplayPC_Athena_C.ExecuteUbergraph_BP_ReplayPC_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

