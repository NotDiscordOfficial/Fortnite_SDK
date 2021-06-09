// Class LevelSequence.LevelSequence
// Size: 0x1c8 (Inherited: 0x60)
struct ULevelSequence : UMovieSceneSequence {
	char pad_60[0x8]; // 0x60(0x08)
	struct UMovieScene* MovieScene; // 0x68(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0xc0(0xa0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x160(0x50)
	struct UObject* DirectorClass; // 0x1b0(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x1b8(0x10)

	void RemoveMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x3ce1cd8
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x511d73c
	struct UObject* FindMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x511d73c
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData // (Final|Native|Public|BlueprintCallable) // @ game+0x511d73c
};

// Class LevelSequence.AnimSequenceLevelSequenceLink
// Size: 0x50 (Inherited: 0x28)
struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	struct FGuid SkelTrackGuid; // 0x28(0x10)
	struct FSoftObjectPath PathToLevelSequence; // 0x38(0x18)
};

// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0x70 (Inherited: 0x28)
struct UDefaultLevelSequenceInstanceData : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct AActor* TransformOriginActor; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x30)
};

// Class LevelSequence.LevelSequenceMetaData
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceMetaData : UInterface {
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x28 (Inherited: 0x28)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x50 (Inherited: 0x28)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSoftClassPath BurnInClass; // 0x30(0x18)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x48(0x08)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x5f3123c
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x2a0 (Inherited: 0x220)
struct ALevelSequenceActor : AActor {
	char pad_220[0x10]; // 0x220(0x10)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230(0x14)
	char pad_244[0x4]; // 0x244(0x04)
	struct ULevelSequencePlayer* SequencePlayer; // 0x248(0x08)
	struct FSoftObjectPath LevelSequence; // 0x250(0x18)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x268(0x02)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x270(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x278(0x08)
	char bAutoPlay : 1; // 0x280(0x01)
	char bOverrideInstanceData : 1; // 0x280(0x01)
	char bReplicatePlayback : 1; // 0x280(0x01)
	char pad_280_3 : 5; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UObject* DefaultInstanceData; // 0x288(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x290(0x08)
	bool bShowBurnin; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x5f314f0
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x5f313b0
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback // (Final|Native|Public|BlueprintCallable) // @ game+0x5f312f8
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*> Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f310d0
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*> Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f30f3c
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // (Final|Native|Public|BlueprintCallable) // @ game+0x5f30eb4
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x5f30df0
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x5f30d08
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x5f30bf4
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) // @ game+0xda7c34
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f30b60
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin // (Final|Native|Public|BlueprintCallable) // @ game+0x5f30b00
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f30ab0
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f30a5c
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f308bc
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f307d0
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag // (Final|Native|Public|BlueprintCallable) // @ game+0x5f302ec
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x5f30184
};

// Class LevelSequence.LevelSequenceAnimSequenceLink
// Size: 0x38 (Inherited: 0x28)
struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28(0x10)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x320 (Inherited: 0x260)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x260(0xb8)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x318(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x5f30ad0
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x30 (Inherited: 0x28)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x28(0x08)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xa0 (Inherited: 0xa0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x7b8 (Inherited: 0x6a0)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x6a0(0x10)
	char pad_6B0[0x108]; // 0x6b0(0x108)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f309e0
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor* OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5f30430
};

// Class LevelSequence.LevelSequenceProjectSettings
// Size: 0x68 (Inherited: 0x38)
struct ULevelSequenceProjectSettings : UDeveloperSettings {
	bool bDefaultLockEngineToDisplayRate; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString DefaultDisplayRate; // 0x40(0x10)
	struct FString DefaultTickResolution; // 0x50(0x10)
	enum class EUpdateClockSource DefaultClockSource; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x248 (Inherited: 0x220)
struct ALevelSequenceMediaController : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct ALevelSequenceActor* Sequence; // 0x228(0x08)
	struct UMediaComponent* MediaComponent; // 0x230(0x08)
	float ServerStartTimeSeconds; // 0x238(0x04)
	char pad_23C[0xc]; // 0x23c(0x0c)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (Final|Native|Public|BlueprintCallable) // @ game+0x5f31558
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x5f30be0
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds // (Final|Native|Private) // @ game+0x5f30bb4
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b671e0
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5e88e10
};

