// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// Size: 0x4018 (Inherited: 0x3f50)
struct AAthena_PlayerController_C : AFortPlayerControllerAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f50(0x08)
	struct UUnderwaterAudioComponent_C* UnderwaterAudioComponent; // 0x3f58(0x08)
	struct USceneComponent* ListenerOverride; // 0x3f60(0x08)
	struct UAudioComponent* VictoryRoyaleAudio; // 0x3f68(0x08)
	struct UAudioComponent* VictoryRoyaleMusic1; // 0x3f70(0x08)
	struct USoundBase* CurrentMusic; // 0x3f78(0x08)
	struct FGameplayTagContainer BladeWielderTag; // 0x3f80(0x20)
	enum class EFortItemType InteractingItemType; // 0x3fa0(0x01)
	char pad_3FA1[0x7]; // 0x3fa1(0x07)
	struct FGameplayTagContainer InteractionTags; // 0x3fa8(0x20)
	struct FMulticastInlineDelegate PawnPossessedDispatcher; // 0x3fc8(0x10)
	struct FTimerHandle PermissionsRecheckTimerHandle; // 0x3fd8(0x08)
	float LobbyMusicOnVictoryDelayTime; // 0x3fe0(0x04)
	char pad_3FE4[0x4]; // 0x3fe4(0x04)
	struct USoundMix* CamUnderwaterSoundMix; // 0x3fe8(0x08)
	struct USoundBase* CamUnderwaterLoopSound; // 0x3ff0(0x08)
	struct UAudioComponent* CamUnderwaterAudio; // 0x3ff8(0x08)
	struct USoundBase* CamUnderwaterStartSound; // 0x4000(0x08)
	struct USoundBase* CamUnderwaterStopSound; // 0x4008(0x08)
	struct UAudioComponent* VictoryRoyaleMusic2; // 0x4010(0x08)

	void ResetVOIPFX(); // Function Athena_PlayerController.Athena_PlayerController_C.ResetVOIPFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FadeAudioComponents(struct UAudioComponent* NewMusicComponent, struct UAudioComponent* PreviousMusicComponent, struct USoundBase* Music, float StartTime); // Function Athena_PlayerController.Athena_PlayerController_C.FadeAudioComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool Is Creative Mode(); // Function Athena_PlayerController.Athena_PlayerController_C.Is Creative Mode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetupPermissionRecheckTimer(); // Function Athena_PlayerController.Athena_PlayerController_C.SetupPermissionRecheckTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LeftAllVolumes(bool bLeftVolumes); // Function Athena_PlayerController.Athena_PlayerController_C.LeftAllVolumes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D(struct UObject* Loaded); // Function Athena_PlayerController.Athena_PlayerController_C.OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReady_B4409EAB4038578B1EBA9DB1586489B9(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function Athena_PlayerController.Athena_PlayerController_C.OnReady_B4409EAB4038578B1EBA9DB1586489B9 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayWinEffects(struct APawn* FinisherPawn, struct UFortWeaponItemDefinition* FinishingWeapon, enum class EDeathCause DeathCause, bool bAudioOnly); // Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Athena_PlayerController.Athena_PlayerController_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Start Victory Royale Music(); // Function Athena_PlayerController.Athena_PlayerController_C.Start Victory Royale Music // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMusicPackLoaded(struct UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset); // Function Athena_PlayerController.Athena_PlayerController_C.OnMusicPackLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GrantItem(struct TSoftObjectPtr<struct UFortWorldItemDefinition> Item); // Function Athena_PlayerController.Athena_PlayerController_C.GrantItem // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RevokeItem(struct TSoftObjectPtr<struct UFortWorldItemDefinition> Item); // Function Athena_PlayerController.Athena_PlayerController_C.RevokeItem // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLocalInteraction(struct AActor* ReceivingActor); // Function Athena_PlayerController.Athena_PlayerController_C.OnLocalInteraction // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void RemoveItem(); // Function Athena_PlayerController.Athena_PlayerController_C.RemoveItem // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReactToPawnPossession(struct APawn* PossessedPawn); // Function Athena_PlayerController.Athena_PlayerController_C.ReactToPawnPossession // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReplicateRotationScaleReset(); // Function Athena_PlayerController.Athena_PlayerController_C.ReplicateRotationScaleReset // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnLeaveVolume(struct AFortVolume* Volume); // Function Athena_PlayerController.Athena_PlayerController_C.K2_OnLeaveVolume // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEnterVolume(struct AFortVolume* Volume); // Function Athena_PlayerController.Athena_PlayerController_C.K2_OnEnterVolume // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Handle Victory Royale Audio(bool Audio Only); // Function Athena_PlayerController.Athena_PlayerController_C.Handle Victory Royale Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Change Music(struct USoundBase* New Music, float StartTime); // Function Athena_PlayerController.Athena_PlayerController_C.Change Music // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Athena_PlayerController(int32_t EntryPoint); // Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void PawnPossessedDispatcher__DelegateSignature(struct APawn* PossessedPawn); // Function Athena_PlayerController.Athena_PlayerController_C.PawnPossessedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

