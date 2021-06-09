// Class SrirachaRanch.RadioContentSourceItemDefinition
// Size: 0x3d8 (Inherited: 0x3c0)
struct URadioContentSourceItemDefinition : UFortAccountItemDefinition {
	struct FString ResourceID; // 0x3c0(0x10)
	struct UFortStreamMediaSource* MediaSource; // 0x3d0(0x08)
};

// Class SrirachaRanch.StreamingRadioAudioShapeComponent
// Size: 0x168 (Inherited: 0x130)
struct UStreamingRadioAudioShapeComponent : UFortAudioShapeComponent {
	float Radius; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct UStreamingRadioPlayerComponent* RadioPlayer; // 0x138(0x08)
	char pad_140[0x28]; // 0x140(0x28)
};

// Class SrirachaRanch.SrirachaRanchComponentTemplateWrapper
// Size: 0x38 (Inherited: 0x30)
struct USrirachaRanchComponentTemplateWrapper : UDataAsset {
	struct UMediaSoundComponent* MediaSoundPlayerTemplate; // 0x30(0x08)
};

// Class SrirachaRanch.StreamingRadioPlayerComponent
// Size: 0x448 (Inherited: 0xb0)
struct UStreamingRadioPlayerComponent : UFortPawnComponent {
	char pad_B0[0x10]; // 0xb0(0x10)
	struct TMap<struct FName, struct FSrirachaInputMappingData> InputMappingData; // 0xc0(0x50)
	struct FMulticastInlineDelegate OnSourceLoading; // 0x110(0x10)
	struct FMulticastInlineDelegate OnSourcePlayed; // 0x120(0x10)
	struct FMulticastInlineDelegate OnSourceStopped; // 0x130(0x10)
	struct FMulticastInlineDelegate OnSourceFailed; // 0x140(0x10)
	struct FMulticastInlineDelegate OnRadioExplicitStop; // 0x150(0x10)
	float PercentAutostartRadio; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct TArray<struct FName> DisabledVehicleList; // 0x168(0x10)
	struct TMap<struct FName, float> ExteriorVolumeMultiplierMap; // 0x178(0x50)
	struct TMap<struct FName, float> InteriorVolumeMultiplierMap; // 0x1c8(0x50)
	bool bMinimalStateOnPlatform; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct TArray<struct FString> DisabledStationList; // 0x220(0x10)
	bool bAutostartOnEntry; // 0x230(0x01)
	bool bDisabledForCurrentPlayerState; // 0x231(0x01)
	char pad_232[0x6]; // 0x232(0x06)
	struct FStreamingRadioSourceData ReplicatedRadioSourceData; // 0x238(0x48)
	struct UMediaSoundComponent* SoundComponent; // 0x280(0x08)
	struct UStreamingRadioAudioShapeComponent* AudioShape; // 0x288(0x08)
	struct USrirachaRanchComponentTemplateWrapper* SoundCompTemplateSource; // 0x290(0x08)
	struct FAthenaRadioStation LastSource; // 0x298(0x38)
	struct TArray<struct URadioContentSourceItemDefinition*> Sources; // 0x2d0(0x10)
	struct FAthenaRadioStation FallbackSource; // 0x2e0(0x38)
	struct TMap<struct FName, struct FSrirachaPerClassSpecialSeats> SpecialSeatList; // 0x318(0x50)
	struct UMediaPlayer* MediaPlayer; // 0x368(0x08)
	struct UFortMediaPlayerCtrl* MediaController; // 0x370(0x08)
	struct USoundSubmixBase* DefaultSoundSubmix; // 0x378(0x08)
	struct USoundSubmixBase* LicensedSoundSubmix; // 0x380(0x08)
	struct UFortStreamMediaSource* LastMediaSource; // 0x388(0x08)
	struct UFortStreamMediaSource* IncomingMediaSource; // 0x390(0x08)
	enum class ERadioSource CurrentMode; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	int32_t MaximumRetries; // 0x39c(0x04)
	int32_t FadeoutWhenUnpoweredInMS; // 0x3a0(0x04)
	int32_t FadeoutWhenOwnerBeingDestroyedInMS; // 0x3a4(0x04)
	int32_t MaxFadeoutTimeMS; // 0x3a8(0x04)
	int32_t DefaultPlayingIndex; // 0x3ac(0x04)
	struct USoundMix* SoundMixInside; // 0x3b0(0x08)
	struct USoundMix* SoundMixOutside; // 0x3b8(0x08)
	char pad_3C0[0x4]; // 0x3c0(0x04)
	float ActivationRadius; // 0x3c4(0x04)
	struct FName ComponentToAttachTo; // 0x3c8(0x08)
	struct FName ComponentSocketAttachTo; // 0x3d0(0x08)
	struct UFortStreamMediaSource* MediaSource; // 0x3d8(0x08)
	struct TArray<struct FAthenaRadioStation> RadioStationList; // 0x3e0(0x10)
	struct UObject* DelegateContextObject; // 0x3f0(0x08)
	float MediaStartTimeFromInit; // 0x3f8(0x04)
	char pad_3FC[0x4c]; // 0x3fc(0x4c)

	void ToggleRadioActive(); // Function SrirachaRanch.StreamingRadioPlayerComponent.ToggleRadioActive // (Final|Native|Public|BlueprintCallable) // @ game+0x3e31074
	void StopRadioWithFadeout(int32_t Milliseconds); // Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3e30fdc
	void StopRadio(); // Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3e30fc8
	void StopIfNoDriver(struct TScriptInterface<None> Vehicle); // Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver // (Final|Native|Protected|HasOutParms) // @ game+0x3e30f24
	void StartRadio(int32_t IdxToPlay, bool bFallbackOverride); // Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3e30e3c
	void SoundMixUpdateWeaponState(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState // (Final|Native|Private) // @ game+0x3e30bd8
	void SoundMixUpdateTargetingState(bool bNewIsTargeting); // Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState // (Final|Native|Private) // @ game+0x3e30b38
	void SetInteriorVolume(struct TScriptInterface<None> Vehicle); // Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume // (Final|Native|Protected|HasOutParms) // @ game+0x3e30a94
	void SetExteriorVolume(struct TScriptInterface<None> Vehicle); // Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume // (Final|Native|Protected|HasOutParms) // @ game+0x3e309f0
	void PlayPrevIndex(); // Function SrirachaRanch.StreamingRadioPlayerComponent.PlayPrevIndex // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3e309dc
	void PlayNextIndex(); // Function SrirachaRanch.StreamingRadioPlayerComponent.PlayNextIndex // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3e309c8
	void PlayDefaultIndex(); // Function SrirachaRanch.StreamingRadioPlayerComponent.PlayDefaultIndex // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3e309ac
	void OnSuccessfulURL(struct FString URL); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL // (Final|Native|Protected) // @ game+0x3e308f8
	void OnRep_RadioSourceData(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnRep_RadioSourceData // (Final|Native|Protected) // @ game+0x12daf28
	void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged // (Final|Native|Protected) // @ game+0x3e3085c
	void OnPawnExitVehicle(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnPawnExitSeat(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnPawnEnterVehicle(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnPawnEnterSeat(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnOwningVehicleDied(struct AFortAthenaVehicle* DeadVehicle, struct FGameplayTagContainer InTags, struct AController* EventInstigator, struct AActor* DamageCauser); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied // (Final|Native|Protected|HasOutParms) // @ game+0x3e30690
	void OnOwnerUnpowered(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerUnpowered // (Final|Native|Protected) // @ game+0x3e30678
	void OnOwnerReFueled(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerReFueled // (Final|Native|Protected) // @ game+0x1ecda20
	void OnOwnerOutOfFuel(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerOutOfFuel // (Final|Native|Protected) // @ game+0x3e30658
	void OnOwnerExploded(); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwnerExploded // (Final|Native|Protected) // @ game+0x3e30640
	void OnLicensedAudioSettingChanged(struct UFortClientSettingsRecord* Settings); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnLicensedAudioSettingChanged // (Final|Native|Protected) // @ game+0x3e305a4
	void OnFailedURL(struct FString URL); // Function SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL // (Final|Native|Protected) // @ game+0x3e304f0
	void NativeOnPawnExitVehicle(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle // (Final|Native|Protected|HasOutParms) // @ game+0x1f65fe4
	void NativeOnPawnExitSeat(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat // (Final|Native|Protected|HasOutParms) // @ game+0x1f661cc
	void NativeOnPawnEnterVehicle(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle // (Final|Native|Protected|HasOutParms) // @ game+0x1f665d0
	void NativeOnPawnEnterSeat(struct TScriptInterface<None> Vehicle, struct AFortPawn* PlayerPawn, int32_t SeatIndex); // Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat // (Final|Native|Protected|HasOutParms) // @ game+0x1f663bc
	void MediaReady(struct FString String); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaReady // (Final|Native|Protected) // @ game+0x3e3043c
	void MediaPlayed(); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaPlayed // (Final|Native|Protected) // @ game+0x3e30428
	void MediaLoad(); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaLoad // (Final|Native|Protected) // @ game+0x3e30414
	void MediaFinishedOrClosed(); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFinishedOrClosed // (Final|Native|Protected) // @ game+0x3e30400
	void MediaFailedToOpen(struct FString String); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen // (Final|Native|Protected) // @ game+0x3e3034c
	void MediaExplicitClose(bool bReallyExplicit); // Function SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose // (Final|Native|Protected) // @ game+0x3e302b0
	bool IsPlayingLiveFeed(); // Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27cf768
	bool IsExternalSeat(int32_t SeatIdx); // Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x236dfa4
	struct FAthenaRadioStation GetOptionAt(int32_t idx); // Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3e301f0
	void AuthStopRadio(); // Function SrirachaRanch.StreamingRadioPlayerComponent.AuthStopRadio // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3e301a4
	void AuthSetDisabledForCurrentPlayerState(bool bShouldDisableForCurrentPlayerState); // Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSetDisabledForCurrentPlayerState // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3e300dc
	void AuthSaveFadeOutTime(float FadeoutSeconds); // Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveFadeOutTime // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3e2ff30
	void AuthSavedSource(struct FAthenaRadioStation Source); // Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSavedSource // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3e2fff0
	void AuthSaveAutoStart(bool bAutoStart); // Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveAutoStart // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3e2fe68
	void AuthPlayIndex(int32_t Index); // Function SrirachaRanch.StreamingRadioPlayerComponent.AuthPlayIndex // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3e2fdb0
};

