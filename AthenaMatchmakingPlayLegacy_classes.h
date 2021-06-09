// WidgetBlueprintGeneratedClass AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C
// Size: 0x4b8 (Inherited: 0x400)
struct UAthenaMatchmakingPlayLegacy_C : UFortAthenaMatchmakingWidgetLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* NewModeViolation; // 0x408(0x08)
	struct UAthenaGenericLobbyViolator_C* AthenaGenericLobbyViolator; // 0x410(0x08)
	struct UIconTextButton_C* DebugCreativeServerSelect; // 0x418(0x08)
	struct UImage* MatchmakingSpinner; // 0x420(0x08)
	struct UCommonBorder* NewModeBorder; // 0x428(0x08)
	struct UShowdownLobbyViolator_C* ShowdownLobbyViolator; // 0x430(0x08)
	struct UCommonTextBlock* TextBlock_ContentDownloadingHeader; // 0x438(0x08)
	struct UCommonTextBlock* TextBlock_NewMode; // 0x440(0x08)
	struct UOverlay* ViolatorContent; // 0x448(0x08)
	struct UWidgetSwitcher* ViolatorSwitcher; // 0x450(0x08)
	struct FMulticastInlineDelegate PlaylistsUpdated; // 0x458(0x10)
	struct FTimerHandle ShowNewPlaylistTimer; // 0x468(0x08)
	struct FMulticastInlineDelegate OnPlaylistChanged; // 0x470(0x10)
	struct USoundBase* MatchmakingSucceededSound; // 0x480(0x08)
	SoftClassProperty CreativeOptionsSoftClass; // 0x488(0x28)
	struct UUserWidget* CreativeOptionsClass; // 0x4b0(0x08)

	void OnLoaded_624287AB42851447B4164286AAD2D464(struct UObject* Loaded); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnLoaded_624287AB42851447B4164286AAD2D464 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnAvailablePlaylistsUpdated(); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnAvailablePlaylistsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetPlayButtonText(struct FText PlayButtonText); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnSetPlayButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnSetCancelButtonText(struct FText CancelButtonText); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnSetCancelButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PlaylistChanged(struct FPlaylistFrontEndData NewPlaylist, struct FText PlaylistCMSOverrideName, enum class EFortLobbyType LobbyType); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.PlaylistChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SetSquadFillText(bool InCurrentSquadFill); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.SetSquadFillText // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnNewModeViolatorUpdated(bool bShouldShow); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnNewModeViolatorUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateCustomViolatorText(struct FText ModeName, struct FText SubText); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.UpdateCustomViolatorText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Animate(); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.Animate // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMatchmakingFinishedBlueprint(bool bSuccess, struct UFortPlaylistAthena* Playlist); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnMatchmakingFinishedBlueprint // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaMatchmakingPlayLegacy(int32_t EntryPoint); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.ExecuteUbergraph_AthenaMatchmakingPlayLegacy // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnPlaylistChanged__DelegateSignature(struct FPlaylistFrontEndData Playlist Data, struct FText Playlist CMS Override, enum class EFortLobbyType Lobby Type); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnPlaylistChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlaylistsUpdated__DelegateSignature(); // Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.PlaylistsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

