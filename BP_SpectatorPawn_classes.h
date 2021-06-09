// BlueprintGeneratedClass BP_SpectatorPawn.BP_SpectatorPawn_C
// Size: 0x360 (Inherited: 0x338)
struct ABP_SpectatorPawn_C : AFortReplaySpectatorPawnBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	bool bIsTargetSkydiving; // 0x340(0x01)
	bool bIsTargetParachuting; // 0x341(0x01)
	bool bIsSkydivingAudioEnabled; // 0x342(0x01)
	char pad_343[0x5]; // 0x343(0x05)
	struct USoundBase* CurrentSkydivingSound; // 0x348(0x08)
	struct UAudioComponent* SkydivingAudioLoop; // 0x350(0x08)
	struct AFortPlayerPawnAthena* Current Player Pawn; // 0x358(0x08)

	void SetSkydivingAudioEnabled(bool Enabled); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.SetSkydivingAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct USoundBase* GetSkydivingSound(); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.GetSkydivingSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Handle Parachute Audio State(); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.Handle Parachute Audio State // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_SpectatorPawn(int32_t EntryPoint); // Function BP_SpectatorPawn.BP_SpectatorPawn_C.ExecuteUbergraph_BP_SpectatorPawn // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

