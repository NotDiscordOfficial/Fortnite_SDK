// Class VerseFortnite.AudioComponentBase
// Size: 0xa0 (Inherited: 0x90)
struct UAudioComponentBase : UEntityActorComponent {
	struct UVerseAssetPtr* SoundAsset; // 0x90(0x08)
	struct FActiveSoundInfo ActiveSoundInfo; // 0x98(0x08)

	void OnRep_SoundAsset(); // Function VerseFortnite.AudioComponentBase.OnRep_SoundAsset // (Final|Native|Protected) // @ game+0x43182dc
	void OnRep_ActiveSoundInfo(); // Function VerseFortnite.AudioComponentBase.OnRep_ActiveSoundInfo // (Final|Native|Protected) // @ game+0x43180a4
};

// Class VerseFortnite.BuildingActorEntityInteropComponent
// Size: 0x68 (Inherited: 0x60)
struct UBuildingActorEntityInteropComponent : UEntityComponent {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class VerseFortnite.DatastoreComponentBase
// Size: 0x220 (Inherited: 0xe0)
struct UDatastoreComponentBase : UEntityActorPlayerComponent {
	struct FDatastoreState ReplicatedDatastoreState; // 0xe0(0x128)
	char pad_208[0x18]; // 0x208(0x18)
};

// Class VerseFortnite.FortAthenaMutator_BuildingSettings
// Size: 0x2d8 (Inherited: 0x2c0)
struct AFortAthenaMutator_BuildingSettings : AFortAthenaMutator {
	char pad_2C0[0x18]; // 0x2c0(0x18)
};

// Class VerseFortnite.FortBuildingSettingsComponentBase
// Size: 0x90 (Inherited: 0x80)
struct UFortBuildingSettingsComponentBase : UEntityEnableableComponent {
	struct AFortAthenaMutator_BuildingSettings* Mutator; // 0x80(0x08)
	enum class EPlayerSettingStateInternal Building; // 0x88(0x01)
	enum class EPlayerSettingStateInternal BuildingOnWater; // 0x89(0x01)
	enum class EPlayerSettingStateInternal Editing; // 0x8a(0x01)
	enum class EPlayerSettingStateInternal EditingHostile; // 0x8b(0x01)
	enum class EPlayerSettingStateInternal TrapPlacement; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)

	void OnRep_Settings(); // Function VerseFortnite.FortBuildingSettingsComponentBase.OnRep_Settings // (Final|Native|Private) // @ game+0x431825c
};

// Class VerseFortnite.FortControllerStateHandlerComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UFortControllerStateHandlerComponent : UControllerComponent {

	void NotifyOfStateChange(struct FString State, bool Active); // Function VerseFortnite.FortControllerStateHandlerComponent.NotifyOfStateChange // (Final|Native|Public|HasOutParms) // @ game+0x4317f70
};

// Class VerseFortnite.FortPlayspaceComponentHelper
// Size: 0x30 (Inherited: 0x28)
struct UFortPlayspaceComponentHelper : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void HandlePlayerPawnPossessed(struct APawn* Pawn); // Function VerseFortnite.FortPlayspaceComponentHelper.HandlePlayerPawnPossessed // (Final|Native|Public) // @ game+0x4317ed4
	void HandlePlayerDied(struct AFortPlayerPawnAthena* FortPlayerPawnAthena); // Function VerseFortnite.FortPlayspaceComponentHelper.HandlePlayerDied // (Final|Native|Public) // @ game+0x4317e38
};

// Class VerseFortnite.HUDComponentBase
// Size: 0x108 (Inherited: 0x80)
struct UHUDComponentBase : UEntityEnableableComponent {
	SoftClassProperty WidgetClass; // 0x80(0x28)
	struct TMap<struct FUniqueNetIdRepl, struct UUserWidget*> SpawnedWidgets; // 0xa8(0x50)
	struct TArray<struct FUniqueNetIdRepl> RestrictedToPlayerList; // 0xf8(0x10)

	void OnRep_WidgetClass(); // Function VerseFortnite.HUDComponentBase.OnRep_WidgetClass // (Final|Native|Private) // @ game+0x43182f0
};

// Class VerseFortnite.HUDCountDownComponentBase
// Size: 0x128 (Inherited: 0x108)
struct UHUDCountDownComponentBase : UHUDComponentBase {
	char pad_108[0x18]; // 0x108(0x18)
	int8_t CurrentRound; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float ServerCountDownEndTime; // 0x124(0x04)

	void OnRep_CountDownEndTime(); // Function VerseFortnite.HUDCountDownComponentBase.OnRep_CountDownEndTime // (Final|Native|Private) // @ game+0x43180f8
};

// Class VerseFortnite.HUDDynamicDirectorBase
// Size: 0x1c0 (Inherited: 0xe0)
struct UHUDDynamicDirectorBase : UEntityActorPlayerComponent {
	bool bBindDataStore; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<struct FString> ServerActiveSceneNames; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)
	struct FString LoadSceneCatalog; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)
	struct TMap<struct FName, struct FDynamicHUDPulseEvent> ClientMessageEventCache; // 0x120(0x50)
	struct TMap<struct FName, struct FString> ClientMessageDataCache; // 0x170(0x50)

	void ServerWidgetMessage(struct FString MessageID, struct FString MessageData); // Function VerseFortnite.HUDDynamicDirectorBase.ServerWidgetMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x43183e8
	void OnRep_LoadSceneCatalog(); // Function VerseFortnite.HUDDynamicDirectorBase.OnRep_LoadSceneCatalog // (Final|Native|Private) // @ game+0x431815c
	void OnRep_BindDataStore(); // Function VerseFortnite.HUDDynamicDirectorBase.OnRep_BindDataStore // (Final|Native|Private) // @ game+0x43180c4
	void OnRep_ActiveSceneNames(); // Function VerseFortnite.HUDDynamicDirectorBase.OnRep_ActiveSceneNames // (Final|Native|Private) // @ game+0x4318090
	void ClientSetHUDCameraMode(bool bCameraMode); // Function VerseFortnite.HUDDynamicDirectorBase.ClientSetHUDCameraMode // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4317c38
};

// Class VerseFortnite.HUDGameOverComponentBase
// Size: 0x128 (Inherited: 0x108)
struct UHUDGameOverComponentBase : UHUDComponentBase {
	int32_t WinningTeam; // 0x108(0x04)
	bool IsDraw; // 0x10c(0x01)
	char pad_10D[0x1b]; // 0x10d(0x1b)

	void OnRep_WinningTeam(); // Function VerseFortnite.HUDGameOverComponentBase.OnRep_WinningTeam // (Final|Native|Private) // @ game+0x431813c
	void OnRep_IsDraw(); // Function VerseFortnite.HUDGameOverComponentBase.OnRep_IsDraw // (Final|Native|Private) // @ game+0x431813c
	int32_t GetWinningTeam(); // Function VerseFortnite.HUDGameOverComponentBase.GetWinningTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x381ccd4
	bool GetIsDraw(); // Function VerseFortnite.HUDGameOverComponentBase.GetIsDraw // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4317d84
};

// Class VerseFortnite.HUDMapComponentBase
// Size: 0x140 (Inherited: 0x108)
struct UHUDMapComponentBase : UHUDComponentBase {
	char pad_108[0x18]; // 0x108(0x18)
	struct FBox MapBounds; // 0x120(0x1c)
	char pad_13C[0x4]; // 0x13c(0x04)

	void OnRep_MapBounds(); // Function VerseFortnite.HUDMapComponentBase.OnRep_MapBounds // (Final|Native|Private) // @ game+0x43181c8
	void HandleMapBoundsChanged(struct FBox newBounds); // Function VerseFortnite.HUDMapComponentBase.HandleMapBoundsChanged // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x4317d9c
};

// Class VerseFortnite.HUDMessageComponentBase
// Size: 0x130 (Inherited: 0x108)
struct UHUDMessageComponentBase : UHUDComponentBase {
	char pad_108[0x18]; // 0x108(0x18)
	struct FString Message; // 0x120(0x10)

	void OnRep_Message(); // Function VerseFortnite.HUDMessageComponentBase.OnRep_Message // (Final|Native|Private) // @ game+0x43181e8
	void Client_DirectorTestScene(struct FString SceneName); // Function VerseFortnite.HUDMessageComponentBase.Client_DirectorTestScene // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x4317cd8
};

// Class VerseFortnite.HUDScoreboardComponentBase
// Size: 0x1a0 (Inherited: 0x108)
struct UHUDScoreboardComponentBase : UHUDComponentBase {
	struct TArray<struct FPlayerScore> PlayerScores; // 0x108(0x10)
	uint32_t CurrentRound; // 0x118(0x04)
	uint32_t NumberOfRounds; // 0x11c(0x04)
	struct TMap<struct FUniqueNetIdRepl, struct UHUDScoreboardEntryData*> ClientScoreData; // 0x120(0x50)
	char pad_170[0x30]; // 0x170(0x30)

	void OnRep_ScoresUpdated(); // Function VerseFortnite.HUDScoreboardComponentBase.OnRep_ScoresUpdated // (Final|Native|Public) // @ game+0x4318248
	void OnRep_RoundInfo(); // Function VerseFortnite.HUDScoreboardComponentBase.OnRep_RoundInfo // (Final|Native|Public) // @ game+0x431821c
};

// Class VerseFortnite.HUDScoreboardEntryData
// Size: 0x48 (Inherited: 0x28)
struct UHUDScoreboardEntryData : UObject {
	struct FMulticastInlineDelegate OnScoreboardDataChanged; // 0x28(0x10)
	struct TArray<struct FString> RowData; // 0x38(0x10)
};

// Class VerseFortnite.ParticleSystemComponentBase
// Size: 0xa0 (Inherited: 0x90)
struct UParticleSystemComponentBase : UEntityActorComponent {
	struct UVerseAssetPtr* ParticleSystemAsset; // 0x90(0x08)
	bool bActive; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)

	void OnRep_ParticleSystemAsset(); // Function VerseFortnite.ParticleSystemComponentBase.OnRep_ParticleSystemAsset // (Final|Native|Protected) // @ game+0x4318208
	void OnRep_bActive(); // Function VerseFortnite.ParticleSystemComponentBase.OnRep_bActive // (Final|Native|Protected) // @ game+0x4318318
};

// Class VerseFortnite.ObjectHack_VerseFortnite
// Size: 0x28 (Inherited: 0x28)
struct UObjectHack_VerseFortnite : UObject {
};

// Class VerseFortnite.VerseFortniteEntitySubsystem
// Size: 0x40 (Inherited: 0x30)
struct UVerseFortniteEntitySubsystem : UWorldSubsystem {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class VerseFortnite.VerseFortniteInputComponentBase
// Size: 0x250 (Inherited: 0xe0)
struct UVerseFortniteInputComponentBase : UEntityActorPlayerComponent {
	struct UUserWidget* ActiveFeedbackWidget; // 0xe0(0x08)
	char pad_E8[0x28]; // 0xe8(0x28)
	struct FVerseActionMappingArray ReplicatedActionMappingArray; // 0x110(0x120)
	struct UInputComponent* InputComponent; // 0x230(0x08)
	char pad_238[0x18]; // 0x238(0x18)

	void ServerTriggerAction(struct FName ActionName); // Function VerseFortnite.VerseFortniteInputComponentBase.ServerTriggerAction // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x431832c
};

