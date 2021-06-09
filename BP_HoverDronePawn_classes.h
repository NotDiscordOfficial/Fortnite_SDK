// BlueprintGeneratedClass BP_HoverDronePawn.BP_HoverDronePawn_C
// Size: 0x3b4 (Inherited: 0x368)
struct ABP_HoverDronePawn_C : AHoverDronePawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	bool WindAudioEnabled; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct UAudioComponent* AltitudeWindAudioComp; // 0x378(0x08)
	float WindAudioAltMin; // 0x380(0x04)
	float WindAudioAltMax; // 0x384(0x04)
	float WindAudioVolMin; // 0x388(0x04)
	float WindAudioVolMax; // 0x38c(0x04)
	struct USoundBase* SoundWindMovementLoop; // 0x390(0x08)
	struct USoundBase* SoundWindAltitudeLoop; // 0x398(0x08)
	float CurrentAltitudeWindVolume; // 0x3a0(0x04)
	float Speed; // 0x3a4(0x04)
	struct UAudioComponent* MovementWindAudioComp; // 0x3a8(0x08)
	float CurrentMovementWindVolume; // 0x3b0(0x04)

	void GetWindVolumeFromAltitude(float Altitude, float Volume); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.GetWindVolumeFromAltitude // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetWindAudioEnabled(bool Enabled); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.SetWindAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Update Wind Audio(); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.Update Wind Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceivePossessed(struct AController* NewController); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveUnpossessed(struct AController* OldController); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ReceiveUnpossessed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_HoverDronePawn(int32_t EntryPoint); // Function BP_HoverDronePawn.BP_HoverDronePawn_C.ExecuteUbergraph_BP_HoverDronePawn // (Final|UbergraphFunction) // @ game+0xda7c34
};

